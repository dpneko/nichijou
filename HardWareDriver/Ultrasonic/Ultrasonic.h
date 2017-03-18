#ifndef __Ultrasonic_H
#define __Ultrasonic_H

#include "stm32f4xx.h"

//引出的距离  单位 米。
extern float  Ultra_Distance;
#define Max_Range	3.5f
//超声波模块引出的API 程序
void Ultrasonic_initial(void); //初始化，上电的时候需要调用一次
void Ultrasonic_Routine(void); //超声波线程，需要放到循环中，不断调用。
#endif

//------------------End of File----------------------------







