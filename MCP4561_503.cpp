#include <Arduino.h>
#include "MCP4561_503.h"
#include <Wire.h>

//ヘッダーで宣言したクラスの中身を記述する
MCP4561_503::MCP4561_503(){ //コンストラクタ(クラスの宣言時に一度だけ呼び出される関数)
  //初期化することが無いので空にしておく。データ読み込みする場合は初期化したりする
}

void MCP4561_503::I2C_write(short address, short data){ //addressに書き込み番地,dataに書き込みたい1byteデータ
    Wire.beginTransmission(MCP4561_503_I2C_ADR);
    Wire.write(address);
    Wire.write(data);
    Wire.endTransmission();
}

void MCP4561_503::Registor_Set(uint8_t set_data){ //対象クラスをスコープ(::)してクラス内の関数を宣言する
  I2C_write(Registor_WIPER_ADR,set_data);
}
