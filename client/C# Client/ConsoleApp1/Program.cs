using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using WebSocketSharp;


namespace ConsoleApp1
{
    class Program
    {
        static void Main(string[] args)
        {
            try
            {
                using (var ws = new WebSocket("ws://localhost:6001/test"))
                {
                    ws.OnMessage += (sender, e) =>
                    {
                        Console.WriteLine("Message:  " + e.Data);
                    };
                    ws.OnError += (sender, e) => {
                        Console.WriteLine("error: " + e.Message);
                    };
                    ws.Connect();
                    for (var i = 0; i < 1000; i++)
                    {
                        ws.Send(i.ToString());
                    }


                    Console.ReadKey(true);
                    
                }
            }catch(Exception ex)
            {
                Console.WriteLine(ex.Message);
            }
        }
    }
}
