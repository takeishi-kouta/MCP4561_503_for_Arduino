/*
20200121武石作成 ディジタルポテンショIC MCP4561_503用のライブラリ
 */

#ifndef _MCP4561_503_H_ //ライブラリであることを明示する
#define _MCP4561_503_H_

#include <Arduino.h>
#include <Wire.h>

#define MCP4561_503_I2C_ADR 0x2E //MCP4561-503のスレーブアドレス
#define Registor_WIPER_ADR 0x00  

class MCP4561_503{ //コンストラクタの宣言などをヘッダーで行うとコンパイルエラーが起きる
public:
  void Registor_Set(uint8_t set_data); //今の所0~255が入力範囲,IC自体は256まで書き込める。アドレスを変えるのが面倒
  void I2C_write(short address, short data);
  MCP4561_503();
};#

#endif
