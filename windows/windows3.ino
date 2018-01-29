#include "DigiKeyboard.h" /* Digistump drives. */
#include <avr/pgmspace.h> /* Fix memory issues. */

void setup() {
  DigiKeyboard.update();
}

void loop() {
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT); /* Open execute dialog. */
  DigiKeyboard.delay(100); /* Delay until it opens. */
  DigiKeyboard.println(F("iexplore -k http://fakeupdate.net/win10u/index.html")); /* Open fake update. */
  for(;;) { /* run just once. */ }
}
