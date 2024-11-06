#include <stdio.h>
#include <math.h> 
#include <locale.h>  
#define N 10
#define M 100
double func(double a)
{
    return a * a * a + 3 * a * a - 3;
}
double main()
{
    setlocale(LC_ALL, "RUS");
    //задание 1
    float A[N], B[N], temp;
    for (int i = 0; i < N; i++)
    {
        printf("a[%d] = ", i + 1);
        scanf_s("%f", &temp);
        A[i] = temp;
    }
    for (int i = 0; i < N; i++)
    {
        B[i] = ceil(A[i]);
    }
    for (int i = 0; i < N; i++)
    {
        printf("| %6d | %6.2f | %6.2f |\n", i + 1, A[i], B[i]);
    }
    float sum = 0;
    for (int i = 0; i < N; i++)
    {
        sum += A[i];
    }
    float sr = sum / N;
    printf("\nСреднее арифметическое: %.2f\n", sr);

    //задание 2
    double C[M];
    double pol = 0;
    double otr = 0;
    int chp = 0;
    int cho = 0;
    for (int i = 0; i < M; i++) 
    {
        double a = 2 + ((2 * i) / (M - 1)); 
        C[i] = func(a);
    }
    for (int i = 0; i < M; i++) 
    {
        if (C[i] > 0) 
        {
            pol += C[i];
            chp += 1;
        }
        else if (C[i] < 0) 
        {
            otr += C[i];
            cho += 1;
        }
    }
    double sr1 = chp > 0 ? pol / chp : 0;
    printf("|Имя массива | Число полож эл|Число отриц эл|Сумма полож эл|Сумма отриц эл|Среднее значение|\n");
    printf("|     C      |%5.2d          |%5.2d         | %5.2lf      |%5.2lf         |%5.2lf           |\n", chp, cho, pol, otr, sr1);
    
    //задание3
    float D[N], x;
    float sum1 = 0;
    int n = 0;
    for (int i = 0; i < N; i++)
    {
        printf("d[%d] = ", i + 1);
        scanf_s("%f", &x);
        D[i] = x;
    }
    for (int i = 0; i < N; i++)
    {
        sum1 += D[i];
        if (D[i] != 0)
        {
            n += 1;
        }
    }
    float sr2 = sum1 / n;
    printf("\nСреднее арифметическое: %.2f\n", sr2);
    return 0;
}