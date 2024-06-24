//
// Created by bs10081 on 5/13/24.
//
#include <stdio.h>

void sort(int data[], int size);
void display(int data[], int size);

int main() {
    int data[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = 10;
    int choice;

    printf("選擇輸入方式:\n");
    printf("1. 自行輸入數據\n");
    printf("2. 使用默認數據\n");
    printf("請輸入選項(1或2): ");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("請輸入10個整數數據:\n");
        for (int i = 0; i < size; i++) {
            scanf("%d", &data[i]);
        }
    }

    printf("排序前：");
    display(data, size);

    sort(data, size);

    printf("排序後：");
    display(data, size);

    printf("請按任意鍵繼續 . . .");
    getchar(); // clear the newline character left by previous input
    getchar(); // wait for user to press a key
    return 0;
}

void sort(int data[], int size) {
    int temp;
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - 1 - i; j++) {
            if (data[j] < data[j + 1]) {
                temp = data[j];
                data[j] = data[j + 1];
                data[j + 1] = temp;
            }
        }
    }
}

void display(int data[], int size) {
    for (int i = 0; i < size; i++) {
        printf(" %d", data[i]);
    }
    printf("\n");
}
