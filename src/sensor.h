#ifndef _SENSOR_H
#define _SENSOR_H
/****/
#include <Arduino.h>
#include <Wire.h>
#include <Adafruit_MPU6050.h>
#include <Adafruit_Sensor.h>
#include <HCSR04.h>


// Ultrasom
#define triggerPin 27 
#define echoPin 28

extern float distance_sonar;
extern float distance_tof, prev_distance_tof;
extern sensors_event_t a, g, temp;

void sonar_setup();
void sonar_loop();

void imu_setup();
void imu_loop();

void filter_setup();
void filter_loop();


#endif