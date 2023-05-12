#include <LiquidCrystal.h>

#define RS 11
#define enable 10
#define D4 2
#define D5 3
#define D6 4
#define D7 5

LiquidCrystal LCD_Carnet(RS,enable,D4,D5,D6,D7);

void setup() {
  LCD_Carnet.begin(16,2);
  LCD_Carnet.setCursor(0,0);
  LCD_Carnet.print("Diego Culajay");
  LCD_Carnet.setCursor(0,1);
  LCD_Carnet.print("2019485");
}

void loop() {

}
