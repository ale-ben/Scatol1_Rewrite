/**
 * @file main.cpp
 * @author Benetton Alessandro (aleben98@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-03-15
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <Arduino.h>

#include "utilities/loggerLib.hpp"

/**
 * @brief sdf
 * 
 */
void setup() {
	// put your setup code here, to run once:
	Serial.begin(115200);
	Serial.println("");

	logVerbose("Test Verbose");
	logDebug("Test Debug");
	logInfo("Test Info");
	logWarning("Test Warning");
	logError("Test Error");	
}

void loop() {
	// put your main code here, to run repeatedly:
	delay(100000);
}