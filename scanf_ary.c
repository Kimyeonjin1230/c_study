#include <stdio.h>

void input_ary(double *pa, int size);
double find_max(double *pa, int size);

int main(void)
{
    double ary[5];
    double max;

    input_ary(ary, 5);
    max = find_max(ary, 5);
    printf("배열의 최댓값: %.1lf\n", max);

    return 0;
}

void input_ary(double *pa, int size)
{
    printf("%d개의 실수를 입력하시오: ", size);

    for (int i = 0; i < size; i++)
    {
        scanf("%lf", &pa[i]);
    }
}

double find_max(double *pa, int size)
{
    double max = pa[0];
    for (int i = 0; i < size; i++)
    {
        if (pa[i] > max)
            max = pa[i];
    }
    return max;
}
