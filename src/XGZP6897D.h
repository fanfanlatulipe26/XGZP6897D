/*
  XGZP6897D.h - Library for using a familly of pressure sensors from CFSensor.com
  I2C sensors
  Created by Francis Sourbier
  GNU GENERAL PUBLIC LICENSE Version 3, 29 June 2007
  This library is free software; 
  Released into the public domain
*/
#ifndef XGZP6897D_H
#define XGZP6897D_H
#include <Arduino.h>
//#define debugFS
#define I2C_device_address 0x6D
class XGZP6897D
{
  public:
    XGZP6897D(uint16_t K); // K depends on sensor. See datasheet.
    bool begin();  // true: device responding.  false:device not responding
    void readSensor(float &temperature, float &pressure); 
  private:
    float _K;
    uint8_t _I2C_address;
};

#endif
