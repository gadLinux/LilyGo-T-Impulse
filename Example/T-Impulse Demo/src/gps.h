/*
 * @Author: your name
 * @Date: 2021-11-02 10:50:14
 * @LastEditTime: 2021-11-11 11:36:10
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \wristband-S76G\src\gps.h
 */

#ifndef __GPS_H__
#define __GPS_H__

#include <TinyGPS++.h>

void GPS_Init(void);
void GPS_loop(void);
TinyGPSPlus *getGPS(void);
bool isGPSenable(void);
void GPSMenuLoop(uint8_t &BTN_state);
void GPS_Sleep(void);
#endif /* __GPS_H__ */