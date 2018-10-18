# GEAL Foundation Struct

GEALを構造体でラップして使い易くします。

    +----------------------------------+
    |  アプリケーション                   |
    +----------------------------------+
    *---------+*---------+*---------+
    | ステージ || ステージ || ステージ |
    *---------+*---------+*---------+
    +----------------------------------+
    |  GEAL Foundation Struct  Gfs*()  |
    +----------------------------------+
    +---------------+ +----------------+
    |  GEAL Engine  | |  リソース       |
    |               | |  GealRsx*.c/h  |
    |               | +----------------+
    |               +------------------+
    |  Gx*()        libGealEngine.lib  |
    +----------------------------------+
    +----------------------------------+
    |  ターゲット  Target*.c/h          |
    +----------------------------------+

    /GEAL
        /Engine
            /include        <- C:\GEAL\include
            /lib            <- C:\GEAL\lib
                /Win32/libGealEngine.lib
        /TargetWin32        <- C:\GEAL\projects\Reference\Application\TargetWin32
        /Project            <- C:\GEAL\projects\SampleDev\SampleDev.geproj/gestrl
            /Bitmaps
            /Fonts
        /Resources          <- C:\GEAL\projects\SampleDev\Application\GealRsx*.c/h
            /DynRscBitmap
        /Foundation         GealFoundation.c/h
