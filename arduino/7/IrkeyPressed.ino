/***********************************************************************
         __                                                          _
        / /        _____  __    __  _          _   (_)   ________   | |
       / /____   / _____) \ \  / / | |   __   | |  | |  (  ______)  | |_____
      / / ___/  | |_____   \ \/ /  | |  /  \  | |  | |  | |______   |  ___  |
     / /\ \     | |_____|   \  /   | | / /\ \ | |  | |  (_______ )  | |   | |
    / /  \ \__  | |_____    / /    | |/ /  \ \| |  | |   ______| |  | |   | |
   /_/    \___\  \______)  /_/      \__/    \__/   |_|  (________)  |_|   |_|


   KeyWay Tech firmware

   Copyright (C) 2015-2020

   This program is free software: you can redistribute it and/or modify it
   under the terms of the GNU General Public License as published by the
   Free Software Foundation, in version 3.
   learn more you can see <http://www.gnu.org/licenses/>.

   This program is distributed in the hope that it will be useful, but
   WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
   or FITNESS FOR A PARTICULAR PURPOSE.


   [Title]      Infrared transmitter module
   [Diagram]
           Arduino PIN 11   ===================  Infrared transmitter module pin Y
           Arduino PIN GND  ===================  Infrared transmitter module pin G
           Arduino PIN +5V  ===================  Infrared transmitter module pin R
*/
//本例来自于红外接收模块的IRremote自带范例
//已经作出了修改
//改为当有遥控器的按键按下时,接在数字引脚4上的发光LED就会点亮，再按一下按键，led熄灭
/*电路连接
  红外接收器的VOUT接在数字引脚11上,GND接控制板的GND,VCC接控制板上+5V
  发光二极管引脚接在数字引脚4上,通过220欧姆电阻回到控制板的GND
  效果,当遥控器按下按键时,发光二极管就会闪烁,同时电脑的串口会出现按键的命令编码.
*/
#include "IRremote.h"
#include "MAX7219_MaxMatrix.h"

//define Max7219 pins
#define PIN_DIN    7   //max 7219
#define PIN_CS     6
#define PIN_CLK    5

MaxMatrix ledmatrix(PIN_DIN, PIN_CS, PIN_CLK, 1); // init Max7219 LED Matrix, 1 module

int RECV_PIN = 12; //定义红外接收器的引脚为12

IRrecv irrecv(RECV_PIN);

decode_results results;

void setup()
{
  Serial.begin(9600);
  irrecv.enableIRIn();     // 初始化红外接收器

  ledmatrix.init();
  ledmatrix.setIntensity(1);
  ledmatrix.clearMatrix();

  randomSeed(analogRead(0));
}

void loop() {

  if (irrecv.decode(&results)) {
    Serial.println(results.value, HEX);
    if (results.value == 0xC101E57B) {
      ledmatrix.writeFull(ledmatrix.getMouthShape(13));
    } else {
      ledmatrix.writeFull(ledmatrix.getMouthShape(random(30)));
    }

    irrecv.resume(); // 接收下一个值
  }
  delay(120);
}
