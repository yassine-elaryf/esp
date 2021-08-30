#include <espbus.h>
WIEGAND wg;
espbus rs;

void setup() {
	Serial.begin(9600);  
	wg.begin();
	rs.beginrs();
}

void loop() {
if(wg.available())
	{
		Serial.print("wigend HEX = ");
		Serial.print(wg.getCode(),HEX);
		Serial.print(", DECIMAL = ");
		Serial.print(wg.getCode());
		Serial.print(", Type W");
		Serial.println(wg.getWiegandType());    
	}
	if(rs.available())
	{
		Serial.print("espbus HEX = ");
		Serial.print(rs.getCode(),HEX);
		Serial.print(", DECIMAL = ");
		Serial.print(rs.getCode());
		Serial.print(", Type W");
		Serial.println(rs.getespbusType());    
	}
}