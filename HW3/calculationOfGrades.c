#include <stdio.h>

int main() {
    int num_students, i, count_fail = 0;
    float score, total_score = 0, avg_score;

    // 輸入班級人數
    printf("請輸入班級人數: ");
    scanf("%d", &num_students);

    // 輸入每位學生的成績並計算總分
    for (i = 0; i < num_students; i++) {
        printf("請輸入第 %d 位學生的成績: ", i + 1);
        scanf("%f", &score);
        total_score += score;

        // 計算不及格人數
        if (score < 60) {
            count_fail++;
        }
    }

    // 計算平均成績
    avg_score = total_score / num_students;

    // 輸出結果
    printf("全班平均成績: %.2f\n", avg_score);
    printf("不及格人數: %d\n", count_fail);

    return 0;
}