#include <Arduino.h> // 引入 Arduino 核心函式庫

// LED pin and blink interval (ms) // 說明 LED 腳位與閃爍間隔（毫秒）
const uint8_t LED_PIN = 22; // LED 接到 GPIO22
const unsigned long BLINK_DELAY = 500; // 每次點亮/熄滅的延遲（毫秒）

void setup() { // 初始化函式：開機或重置時執行一次
	pinMode(LED_PIN, OUTPUT); // 將 LED_PIN 設為輸出模式
} // setup 結束

void loop() { // 主迴圈：重複執行
	digitalWrite(LED_PIN, HIGH); // 將 LED 設為高電位（點亮）
	delay(500); 
	digitalWrite(LED_PIN, LOW); // 將 LED 設為低電位（熄滅）
	delay(500); 
} // loop 結束

