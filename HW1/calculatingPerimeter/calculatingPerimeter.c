#include <stdio.h>

int main()
{
    double pi = 4.0;
    int i;

    for (i = 1; i <= 10000; i++)
    {
        if (i % 2 == 1)
        {
            pi += 4.0 / (2 * i - 1);
        }
        else
        {
            pi -= 4.0 / (2 * i - 1);
        }
    }

    printf("圓周率的近似值為：%.10f\n", pi);

    return 0;
}
