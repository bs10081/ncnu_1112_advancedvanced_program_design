#include <stdio.h>

void printTriangle(int n) {
    int i, j, k;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n - i - 1; j++) {
            printf(" ");
        }
        for (k = 0; k <= 2 * i; k++) {
            printf("*");
        }
        printf("\n");
    }
}

void printDiamond(int n) {
    int i, j, k, length = n * 2 - 1;

    // 上半部分
    for (i = 0; i < n; i++) {
        for (j = 0; j < n - i - 1; j++) {
            printf(" ");
        }
        for (k = 0; k < 2 * i + 1; k++) {
            printf("*");
        }
        printf("\n");
    }

    // 下半部分
    for (i = n - 2; i >= 0; i--) {
        for (j = 0; j < n - i - 1; j++) {
            printf(" ");
        }
        for (k = 0; k < 2 * i + 1; k++) {
            printf("*");
        }
        printf("\n");
    }
}

int main() {
    int choice, n;
    printf("請選擇要打印的圖案: (1) 等腰三角形 (2) 菱形\n");
    scanf("%d", &choice);

    printf("請輸入一個數值: ");
    scanf("%d", &n);

    if (choice == 1) {
        printTriangle(n);
    } else if (choice == 2) {
        if (n % 2 == 0) {
            printf("錯誤: 菱形的高度必須為奇數!\n");
        } else {
            printDiamond(n);
        }
    } else {
        printf("無效的選擇!\n");
    }

    return 0;
}