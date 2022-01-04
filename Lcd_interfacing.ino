#include <LiquidCrystal.h>

// Initialize LCD with following connections
LiquidCrystal lcd(10, 9, 8, 7, 6, 5);

void setup() {
  // Setup LCD Size : Columns, Rows
  lcd.begin(16, 2);
  // Display a message on the LCD.
lcd.print("hello, world!");
}

void loop() {
  // Set position of the cursor to column 0, line 1
  // Note : Counting starts from 0
  lcd.setCursor(0, 1);
  // Displays the number of seconds since reset
  lcd.print(millis()/1000);
}
