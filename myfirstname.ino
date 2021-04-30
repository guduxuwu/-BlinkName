// This #include statement was automatically added by the Particle IDE.
#include "lib1.h"

// We define MY_LED to be the LED that we want to blink.
//
// In this tutorial, we're using the blue D7 LED (next to D7 on the Photon
// and Electron, and next to the USB connector on the Argon and Boron).
const pin_t MY_LED = D7;

// The following line is optional, but recommended in most firmware. It
// allows your code to run before the cloud is connected. In this case,
// it will begin blinking almost immediately instead of waiting until
// breathing cyan,
SYSTEM_THREAD(ENABLED);

// The setup() method is called once when the device boots.
void setup()
{
	// In order to set a pin, you must tell Device OS that the pin is
	// an OUTPUT pin. This is often done from setup() since you only need
	// to do it once.
	pinMode(MY_LED, OUTPUT);
}

// The loop() method is called frequently.
void loop()
{
	// Turn on the LED
	digitalWrite(MY_LED, HIGH);

	// Leave it on for half second
	delay(500ms);

	// Turn it off
	digitalWrite(MY_LED, LOW);

	// Wait one half second
	delay(500ms);

	// Turn on the LED
	digitalWrite(MY_LED, HIGH);

	// Leave it on for 1/4 second
	delay(250ms);

	// Turn it off
	digitalWrite(MY_LED, LOW);

	// Wait one half second
	delay(500ms);

	// Turn on the LED
	digitalWrite(MY_LED, HIGH);

	// Leave it on for 1/4 second
	delay(250ms);

	// Turn it off
	digitalWrite(MY_LED, LOW);

	// Wait one half second
	delay(500ms);
	
		// Turn on the LED
	digitalWrite(MY_LED, HIGH);

	// Leave it on for 1/4 second
	delay(250ms);

	// Turn it off
	digitalWrite(MY_LED, LOW);

	// Wait one half second
	delay(500ms);
	
	// And repeat!
}

void loop()
{
	// Turn on the LED
	digitalWrite(MY_LED, HIGH);

	// Leave it on for half second
	delay(500ms);

	// Turn it off
	digitalWrite(MY_LED, LOW);

	// Wait one half second
	delay(500ms);
	
	// Turn on the LED
	digitalWrite(MY_LED, HIGH);

	// Leave it on for half second
	delay(500ms);

	// Turn it off
	digitalWrite(MY_LED, LOW);

	// Wait one half second
	delay(500ms);
	
	// Turn on the LED
	digitalWrite(MY_LED, HIGH);

	// Leave it on for half second
	delay(500ms);

	// Turn it off
	digitalWrite(MY_LED, LOW);

	// Wait one half second
	delay(500ms);
	
	// And repeat!
}
// The loop() method is called frequently.
void loop()
{
	// Turn on the LED
	digitalWrite(MY_LED, HIGH);

	// Leave it on for half second
	delay(500ms);

	// Turn it off
	digitalWrite(MY_LED, LOW);

	// Wait one half second
	delay(500ms);

	// Turn on the LED
	digitalWrite(MY_LED, HIGH);

	// Leave it on for 1/4 second
	delay(250ms);

	// Turn it off
	digitalWrite(MY_LED, LOW);

	// Wait one half second
	delay(500ms);

	// Turn on the LED
	digitalWrite(MY_LED, HIGH);

	// Leave it on for 1/4 second
	delay(250ms);

	// Turn it off
	digitalWrite(MY_LED, LOW);

	// Wait one half second
	delay(500ms);
	
		// Turn on the LED
	digitalWrite(MY_LED, HIGH);

	// Leave it on for 1/4 second
	delay(250ms);

	// Turn it off
	digitalWrite(MY_LED, LOW);

	// Wait one half second
	delay(500ms);
	
	// And repeat!
}