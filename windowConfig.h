#ifndef WINDOWCONFIG_H
#define WINDOWCONFIG_H
namespace winConfig {
//窗体UI设置
const static int win_higth = 600;
const static int win_width = 800;
//textBoxUI设置
const static int textBlockHigth = 200;
const static int textBlockwidth = 350;
const static int textBlockstartPosX = 400;
const static int textBlockstartPosY = 50;
//串口配置UI设置
const static int serialConfigStartPosX = 25;
const static int serialConfigStartPosY = 45;
const static int serialConfigHigth = 150;
const static int serialConfigwidth = 300;
const static int serialCheckBtnWidth = 120;
const static int serialCheckBtnHigth = 75;
//串口接受UI配置设置
const static int serialReciveConfigStartX = 25;
const static int serialReciveConfigStartY = 220;
const static int serialReciveConfigHigth = 150;
const static int serialReciveConfigWidth = 300;
//串口发送UI配置设置
const static int serialSendConfigStartX = 25;
const static int serialSendConfigStartY = 395;
const static int serialSendConfigHigth = 150;
const static int serialSendConfigWidth = 300;
//串口状态
#define CONNECT "CONNECT"
#define DISCONNECT "DISCONNECT"
} // namespace winConfig
#endif // WINDOWCONFIG_H
