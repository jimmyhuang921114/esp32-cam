  int brightness = 0;    //定義整數型變數brightness與其初始值，此變數用來表示LED的亮度。
  int fadeAmount = 5;    //定義整數型變數fadeAmount，此變數用來做亮度變化的增減量。
  
  void setup()  { 
    pinMode(9, OUTPUT);
  }
void loop()  {   
  analogWrite(9, brightness);
 
  brightness = brightness + fadeAmount;
 
   if (brightness == 0 || brightness == 255) {
     fadeAmount = -fadeAmount ; //在亮度最高與最低時進行翻轉
 }     
  delay(30);}
