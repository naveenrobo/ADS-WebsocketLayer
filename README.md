# ADS-WebsocketLayer
Websocket Service layer for sending data to Beckhoff TwinCAT PLC using ADS C# library.

Build for using with Unreal Engine 4

## Highlights
- Build using C# TwinCAT ADS library
- Websocket server
- log4net as logger
  
## Install

Build the server project and get the exe ready. Run the below command to install the server as a Windows service.

```
> cd C:\Windows\Microsoft.NET\Framework\v4.0.30319\
> InstallUtil.exe "<Full path to the service executable>"
```

## Uninstall

```
> cd C:\Windows\Microsoft.NET\Framework\v4.0.30319\
> InstallUtil.exe /u "<Full path to the service executable>"
```

## Maintainer

- [Naveen Sakthivel](https://github.com/naveenrobo)

## License

MIT