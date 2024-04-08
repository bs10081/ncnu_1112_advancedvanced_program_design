#include <stdio.h>

int main() {
    // 定義第一個3x3矩陣 num1
    int num1[3][3] = {{2, 5, 6},
                      {8, 5, 4}, 
                      {3, 8, 6}};
    
    // 定義第二個3x3矩陣 num2
    int num2[3][3] = {{56, 8, 9},
                      {76, 55, 2},
                      {6, 2, 4}};
    
    // 宣告一個3x3矩陣 result 用於儲存結果
    int result[3][3];

    // 使用三重for迴圈計算矩陣乘法
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            // 初始化 result[i][j] 為0
            result[i][j] = 0;
            
            // 計算 num1 的第 i 列和 num2 的第 j 列的點積
            for(int k = 0; k < 3; k++) {
                result[i][j] += num1[i][k] * num2[k][j];
            }
        }
    }

    // 輸出結果矩陣
    printf("The product of the two matrices is:\n");
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            // 輸出 result[i][j],佔4個字符寬度,靠右對齊
            printf("%4d", result[i][j]);
        }
        // 每輸出一列後換行
        printf("\n");
    }

    return 0;
}