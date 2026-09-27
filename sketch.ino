#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64

Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, -1);

#define BUTTON_PIN 15

int state = 0;

void setup() {
  pinMode(BUTTON_PIN, INPUT_PULLUP);

  Wire.begin(21, 22);

  if(!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) {
    while(true);
  }

  display.clearDisplay();
}

// 😊 HAPPY
void drawHappy() {
  display.clearDisplay();
  display.drawCircle(64, 32, 25, WHITE);
  display.fillCircle(54, 24, 3, WHITE);
  display.fillCircle(74, 24, 3, WHITE);
  display.drawLine(54, 42, 74, 42, WHITE);
  display.drawLine(54, 42, 59, 47, WHITE);
  display.drawLine(74, 42, 69, 47, WHITE);
  display.display();
}

// 😢 SAD
void drawSad() {
  display.clearDisplay();
  display.drawCircle(64, 32, 25, WHITE);
  display.fillCircle(54, 24, 3, WHITE);
  display.fillCircle(74, 24, 3, WHITE);
  display.drawLine(54, 48, 74, 48, WHITE);
  display.drawLine(54, 48, 59, 43, WHITE);
  display.drawLine(74, 48, 69, 43, WHITE);
  display.display();
}

// 😮 SURPRISED
void drawSurprised() {
  display.clearDisplay();
  display.drawCircle(64, 32, 25, WHITE);
  display.fillCircle(54, 24, 3, WHITE);
  display.fillCircle(74, 24, 3, WHITE);
  display.drawCircle(64, 45, 5, WHITE);
  display.display();
}

// 😉 WINK
void drawWink() {
  display.clearDisplay();
  display.drawCircle(64, 32, 25, WHITE);
  display.fillCircle(54, 24, 3, WHITE);
  display.drawLine(70, 24, 80, 24, WHITE);
  display.drawLine(54, 42, 74, 42, WHITE);
  display.display();
}

// 😡 ANGRY
void drawAngry() {
  display.clearDisplay();
  display.drawCircle(64, 32, 25, WHITE);
  display.drawLine(50, 20, 58, 24, WHITE);
  display.drawLine(78, 20, 70, 24, WHITE);
  display.fillCircle(54, 26, 3, WHITE);
  display.fillCircle(74, 26, 3, WHITE);
  display.drawLine(54, 48, 74, 48, WHITE);
  display.display();
}

// 😂 LAUGH
void drawLaugh() {
  display.clearDisplay();
  display.drawCircle(64, 32, 25, WHITE);
  display.drawLine(50, 24, 58, 24, WHITE);
  display.drawLine(70, 24, 78, 24, WHITE);
  display.fillRect(54, 40, 20, 8, WHITE);
  display.display();
}

void loop() {
  if(digitalRead(BUTTON_PIN) == LOW) {
    state++;
    delay(300);
  }

  int mode = state % 6;

  if(mode == 0) drawHappy();
  else if(mode == 1) drawSad();
  else if(mode == 2) drawSurprised();
  else if(mode == 3) drawWink();
  else if(mode == 4) drawAngry();
  else drawLaugh();
}