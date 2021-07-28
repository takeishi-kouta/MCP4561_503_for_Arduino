# MCP4561_503_for_Arduino

書きたいArduinoのスケッチファイルの中に"MCP4561_503.cpp"と"MCP4561_503.h"を追加 <br>


# サンプルコード
```C++:title
#include "MCP4561_503.h" //defineがいっぱいあるヘッダー
#define SDA_PIN 0
#define SCL_PIN 26
MCP4561_503 MCP4561; //MCP4561クラスを宣言する

void setup(){
  Wire.begin(SDA_PIN, SCL_PIN);
  //ディジタルポテンショの初期値を設定
  MCP4561.Registor_Set(128);
}

main(){
  好きなプログラムを書く
    MCP4561.Registor_Set(x); //0<x<255
}
```
