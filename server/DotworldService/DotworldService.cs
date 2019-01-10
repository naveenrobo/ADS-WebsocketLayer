using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Diagnostics;
using System.Linq;
using System.ServiceProcess;
using System.Text;
using System.Threading.Tasks;
using log4net;
using System.Timers;
using WebSocketSharp;
using WebSocketSharp.Server;
using TwinCAT.Ads;

namespace DotworldService
{
    public class ADSClientLayer : WebSocketBehavior
    {
        private static readonly ILog log = LogManager.GetLogger(System.Reflection.MethodBase.GetCurrentMethod().DeclaringType);
        private static TcAdsClient adsClient = new TcAdsClient();
        private int lrealHandle;
        private bool error = false;

        public ADSClientLayer()
        {
           try
            {
                adsClient = new TcAdsClient();
                adsClient.Connect("5.82.1.8.1.1", 851);
                lrealHandle = adsClient.CreateVariableHandle("MAIN.M1");
            }
            catch(Exception e)
            {
                error = true;
                log.Fatal("Exception while trying to connect to ADS");
                log.Error(e.Message);
            }
        }

        protected override void OnMessage(MessageEventArgs e)
        {
            try
            {
                log.Debug("Received Message from websocket client");
                log.Info(e.Data);
                double data;
                var isDouble = Double.TryParse(e.Data, out data);
                if (isDouble && !error)
                {
                    adsClient.WriteAny(lrealHandle, Double.Parse(e.Data));
                    log.Info("Data for " + e.Data + " sent to ADS");
                    Send("Data for " + e.Data + " sent to ADS");
                }
                else
                {
                    log.Error("Error while sending data");
                    log.Debug("isDouble? " + isDouble + ", error? " + error);
                    Send("Not updating data in ads service");
                }
            }
            catch(Exception ex)
            {
                log.Fatal("Unable to send message to client");
                log.Fatal(ex.Message);
            }
        }
    }

    partial class DotworldService : ServiceBase
    {
        private static readonly ILog log = LogManager.GetLogger(System.Reflection.MethodBase.GetCurrentMethod().DeclaringType);
        public WebSocketServer wssv;

        public DotworldService()
        {
            InitializeComponent();
        }

        protected override void OnStart(string[] args)
        {
            log.Info("Started Service");
            StartWebSocket();
        }
        protected override void OnStop()
        {
            log.Info("Service Stopped");
            wssv.Stop();
        }

        protected void StartWebSocket()
        {
            try
            {
                log.Info("Starting websocket server");
                wssv = new WebSocketServer("ws://127.0.0.1");
                wssv.AddWebSocketService<ADSClientLayer>("/");
                wssv.Start();
                log.Info("Started websocket server on localhost");
            }
            catch (Exception err)
            {
                log.Fatal("Error while starting websocket server");
                log.Error(err.Message);
            }

        }
    }

   
}
