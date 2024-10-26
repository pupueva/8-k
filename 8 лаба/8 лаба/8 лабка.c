#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#define _USE_MATH_DEFINES 
#define CRT_SECURE_NO_DEPRECATE
//0
double formula(double X, int cos)
{
    double result;
    result = pow(X,2)-pow(cos,2)*(X+1);
    return result;
}
int main()
{
    setlocale(LC_CTYPE, "RUS");
    int n;
    int N = 0;
    int Nb = 0;
    printf("¬ведите значение n:");
    scanf_s("%d", &n);
    for (int st = 1; st <= n; st++)
    {
        if (st == 1)
        {
            printf("+");
        }
        printf("*!");
        N++;
        if (N == n / 2)
        {
            break;
        }
    }
    for (int end = 1; end <= n; end++)
    {
        printf("=!");
        Nb++;
        if (Nb == n / 2)
        {
            break;
        }
    }
    //1
    int ne, me;
    int s = 0;
    int k = 1;
    printf("\n¬ведите значение m:");
    scanf_s("%d", &me);
    printf("\n¬ведите значение n:");
    scanf_s("%d", &ne);

    for (int i = ne; i >= me; i--)
    {
        s = s + i;
        printf("\n¬ыполнено %d раз", k++);
        printf("\n–езультат %d", s);
    }
    //1A 
    int M;

    printf("\n¬ведите значение степени:\n");
    scanf_s("%d", &M);
    for (int i = 1; i <= M; i++)
    {
        if (i >= 10)
        {
            printf("\n2^%d = %20.1lf K", i, (pow(2, i)) / 1024);
        }
        if (i < 10)
        {
            printf("\n2^%d = %20.1lf", i, (pow(2, i)));
        }
    }
    //2 
    double X;
    double Xc;
    double h;
    int w = 1;
    double Y;
    printf("\n‘ункци€ y=x^2-cos^2(x+1)\n");
    printf("\n¬ведите начало интервала:\n");
    scanf_s("%lf", &X);
    printf("\n¬ведите конец интервала:\n");
    scanf_s("%lf", &Xc);
    printf("\n¬ведите шаг табул€ции:\n");
    scanf_s("%lf", &h);

    printf("______________\n");
    for (double i = X; i <= Xc; i += h)
    {
        Y = formula(X, cos);
        printf("|%3.3lf|%3.3lf|\n", X, Y);
    }
    printf("--------------\n");
  
    //3
    int Ni;
    double result = 0.0;
    printf("\n¬ведите значение целого числа N (N > 0 и N < 10): ");
    scanf_s("%d", &Ni);

    if (Ni <= 0 || Ni >= 10)
    {
        printf("¬ведено некорректное значение N.");
    }
    else
    {
        for (int i = 1; i <= Ni; i++)
        {
            if (i % 2 == 0)
            {
                result -= 1.1 + 0.1 * i;
            }
            else
            {
                result += 1.1 + 0.1 * i;
            }
        }
        printf("«начение выражени€ дл€ N = %d равно %.2lf", N, result);
    }

    return 0;
}

