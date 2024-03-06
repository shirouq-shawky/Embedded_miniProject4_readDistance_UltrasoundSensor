/*
 * ultraSound_driver.h
 *
 *  Created on: Oct 19, 2023
 *      Author: Shorouk Shawky
 */

#ifndef ULTRASOUND_DRIVER_H_
#define ULTRASOUND_DRIVER_H_

/*function protptype*/
/*Discription:
 * Initialize the ICU driver as required.
 * Setup the ICU call back function.
 *  setup the direction for the trigger pin as output pin through the GPIO driver.
 *
 */
void Ultrasonic_init(void);

/*Discription:
 * Send the Trigger pulse to the ultrasonic
 */
void Ultrasonic_Trigger(void);

/*Discription:
 *  Send the trigger pulse by using Ultrasonic_Trigger function.
 *  Start the measurements by the ICU from this moment.
 *   Return: The measured distance in Centimeter.
 */
uint16 Ultrasonic_readDistance(void);

/*Discription:
 * This is the call back function called by the ICU driver.
 * This is used to calculate the high time (pulse time) generated by the ultrasonic sensor.
 *
 */
void Ultrasonic_edgeProcessing(void);



#endif /* ULTRASOUND_DRIVER_H_ */