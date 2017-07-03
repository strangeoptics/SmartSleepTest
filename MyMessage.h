#include <stdint.h>

class MyMessage {
public:
	uint8_t sensor;
	uint8_t type;
	MyMessage();
	MyMessage(uint8_t sensor, uint8_t type); 	

};
