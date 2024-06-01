//
// Created by bs10081 on 5/31/24.
//
#include <stdio.h>

int main() {
    int arr[5]; // 宣告一個大小為5的陣列
    int sum = 0; // 初始化總和為0
    int *ptr; // 宣告指標

    printf("請輸入 5 個整數：");

    // 使用scan輸入5個數字到陣列中
    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    // 使用指標計算陣列的總和
    ptr = arr; // 指標指向陣列的第一個元素
    for (int i = 0; i < 5; i++) {
        sum += *(ptr + i); // 使用指標來訪問陣列元素並計算總和
    }

    printf("陣列整數和是 %d\n", sum);
    printf("請按任意鍵繼續。。。");
    getchar(); // 等待用戶按鍵以繼續
    getchar(); // 再次等待用戶按鍵，以防止程式立即退出

    return 0;
}


