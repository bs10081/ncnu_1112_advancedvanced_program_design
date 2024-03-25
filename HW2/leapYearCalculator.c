// 請輸入任一年份判斷是否為閏年。
// 計算輸入的年份是否為閏年，其條件為：
// １. 不可被4整除者為平年。
// ２. 可被4整除且不為100整除者為閏年。
// ３. 可被100整除且不為400整除者為平年。
// ４. 可被400整除為閏年
#include <stdio.h>

int main() {
    int year;

    printf("請輸入年份：");
    scanf("%d", &year);

    if (year % 400 == 0)
    {
        printf("%d 年是閏年。\n", year);
    }
    else if (year % 100 == 0)
    {
        printf("%d 年不是閏年。\n", year);
    }
    else if (year % 4 == 0)
    {
        printf("%d 年是閏年。\n", year);
    }
    else
    {
        printf("%d 年不是閏年。\n", year);
    }

    return 0;
}
