//จอTFT
#include <TFT_eSPI.h>
TFT_eSPI tft = TFT_eSPI();
#include "TFT_A.h"

//วัดระยะ
#include <Wire.h>
#include <VL53L0X.h>
VL53L0X sensor;

//นับการทำงาน
long elapsedTime = 0; //นับเวลาการทำงาน
long nowTime = 0;     //นับเวลาการทำงาน

//แกน
const int MPU_addr = 0x68; // I2C address of the MPU-6050
int16_t AcX, AcY, AcZ, Tmp, GyX, GyY, GyZ;
