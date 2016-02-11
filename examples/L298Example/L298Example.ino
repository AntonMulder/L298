#include <L298.h>

L298 motor(5,4,2,6,7,8);

void setup()
{

}

void loop()
{
	motor.forward(255);
}
