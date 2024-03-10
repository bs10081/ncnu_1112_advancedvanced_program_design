#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define PI 3.1415926 // 定義圓周率

void draw_box(char *text, int length);

int main() {
  float radius;
  float area;
  int choice;
  char *output;
  int output_length;

  do {
    printf("\n計算圓面積選單:\n");
    printf("1. 使用默認值 (半徑為5)\n");
    printf("2. 輸入自定義半徑\n");
    printf("0. 退出\n");
    printf("請選擇: ");
    scanf("%d", &choice);

    switch (choice) {
    case 1:
      radius = 5.0;
      area = PI * radius * radius;
      output_length =
          snprintf(NULL, 0, "圓半徑為 %.2f 時,圓面積為 %.2f", radius, area) +
          4; // 計算輸出字符串長度
      output = malloc((output_length + 1) * sizeof(char)); // 動態分配足夠的內存
      snprintf(output, output_length + 1, "圓半徑為 %.2f 時,圓面積為 %.2f",
               radius, area);          // 生成輸出字符串
      draw_box(output, output_length); // 繪製邊框
      free(output);                    // 釋放動態分配的內存
      break;
    case 2:
      printf("請輸入圓半徑: ");
      scanf("%f", &radius);
      area = PI * radius * radius;
      output_length =
          snprintf(NULL, 0, "圓半徑為 %.2f 時,圓面積為 %.2f", radius, area) + 4;
      output = malloc((output_length + 1) * sizeof(char));
      snprintf(output, output_length + 1, "圓半徑為 %.2f 時,圓面積為 %.2f",
               radius, area);
      draw_box(output, output_length);
      free(output);
      break;
    case 0:
      printf("退出程式...\n");
      break;
    default:
      printf("無效的選擇,請重試!\n");
    }
  } while (choice != 0);

  return 0;
}

// 邊框生成（還沒修好，但能用）
void draw_box(char *text, int length) {
  int i;
  printf("+");
  for (i = 0; i < length; i++) {
    printf("-");
  }
  printf("+\n| %-*s |\n+", length, text);
  for (i = 0; i < length; i++) {
    printf("-");
  }
  printf("+\n");
}
