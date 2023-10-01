#include <time.h>
#include <stdio.h>
clock_t start, stop;
double duration;
int n, x_start, x_end, y_start, y_end, isInput, isOutput, repeat = 1;
isPrint1 = 1, isPrint2 = 1, isPrint3 = 1;
long long max;
int **array;

void input()
{
    if (!isInput)
    {
        array = (int **)malloc(n * sizeof(int *));

        for (int i = 0; i < n; i++)
        {
            array[i] = (int *)malloc(n * sizeof(int));

            for (int j = 0; j < n; j++)
            {
                array[i][j] = rand() % 200 - 100;
            }
        }
    }
    else
    {
        array = (int **)malloc(n * sizeof(int *));
        for (int i = 0; i < n; i++)
        {
            array[i] = (int *)malloc(n * sizeof(int));
            for (int j = 0; j < n; j++)
            {
                scanf("%d", &array[i][j]);
            }
        }
    }
}

void output(int x_start, int x_end, int y_start, int y_end)
{
    for (int i = x_start; i < x_end; i++)
    {
        printf("  |");

        for (int j = y_start; j < y_end; j++)
        {
            printf("% 3d ", array[i][j]);
        }
        printf("|\n");
    }
}
void algorithm1()
{
    if (isPrint1)
    {
        printf("For the algorithm (%s): \n", __func__);
        isPrint1 = 0;
    }
    long long su[n + 1][n + 1];
    for (int i = 0; i <= n; i++)
    {
        su[i][0] = 0;
        su[0][i] = 0;
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            su[j][i] = su[j - 1][i] + array[j - 1][i - 1];
        }
    }
    long long temp, y_temp;
    for (int i = 1; i <= n; i++)
    {
        for (int k = 0; i + k <= n; k++)
        {

            temp = 0;
            y_temp = 0;
            for (int j = 1; j <= n; j++)
            {
                temp += su[i + k][j] - su[i - 1][j];
                if (temp < 0)
                {
                    temp = 0;
                    y_temp = j;
                }
                if (temp > max)
                {
                    max = temp;
                    x_start = i - 1;
                    x_end = i + k;
                    y_start = y_temp;
                    y_end = j;
                }
            }
        }
    }
}
void algorithm2()
{
    if (isPrint2)
    {
        printf("For the algorithm (%s): \n", __func__);
        isPrint2 = 0;
    }
    long long sum[n + 1][n + 1];
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            sum[i][j] = 0;
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            for (int k = 0; k <= i; k++)
            {
                for (int l = 0; l <= j; l++)
                {
                    sum[i + 1][j + 1] += array[k][l];
                }
            }
        }
    }
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            for (int k = i; k <= n; k++)
            {
                for (int l = j; l <= n; l++)
                {
                    if (max < sum[k][l] + sum[i][j] - sum[k][j] - sum[i][l])
                    {
                        max = sum[k][l] + sum[i][j] - sum[k][j] - sum[i][l];
                        x_start = i;
                        x_end = k;
                        y_start = j;
                        y_end = l;
                    }
                }
            }
        }
    }
}

void algorithm3()
{
    if (isPrint3)
    {
        printf("For the algorithm (%s): \n", __func__);
        isPrint3 = 0;
    }

    long long sum[n + 1][n + 1];
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            sum[i][j] = 0;
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            for (int k = 0; k <= i; k++)
            {
                for (int l = 0; l <= j; l++)
                {
                    long long temp = 0;
                    for (int p = k; p <= i; p++)
                    {
                        for (int q = l; q <= j; q++)
                        {
                            temp += array[p][q];
                        }
                    }
                    if (temp > max)
                    {
                        max = temp;
                        x_start = k;
                        x_end = i + 1;
                        y_start = l;
                        y_end = j + 1;
                    }
                }
            }
        }
    }
}

void reset()
{
    max = 0;
    x_start = 0;
    x_end = 0;
    y_start = 0;
    y_end = 0;
}

void test(void (*fun)())
{
    start = clock();
    fun();
    stop = clock();
    if (stop - start <= 20)
    {
        start = clock();
        for (int i = 0; i < 100; i++)
        {
            reset();
            fun();
        }
        stop = clock();
        duration = ((double)(stop - start)) / 100;
    }
    else
    {
        duration = ((double)(stop - start));
    }
    printf("  One of the maximal submatrix is:\n");
    if (isOutput)
    {
        output(x_start, x_end, y_start, y_end);
    }
    printf("  Position:\n    x_start:%d  x_end:%d  y_start:%lld  y_end:%d\n  The maximal value is:\n    %d\n    time used is:\n    %.2f ticks\n", x_start + 1, x_end, y_start + 1, y_end, max, duration);
    reset();
    printf("\n");
}
int main()
{
    while (repeat)
    {
        printf("Enter 1 if you want to enter the data manually, or enter 0 to automatically generate the array\n");
        scanf("%d", &isInput);
        printf("Enter 1 if you want to print the max submatrix, or enter 0\n");
        scanf("%d", &isOutput);
        printf("Enter the size of the matrix\n");
        scanf("%d", &n);
        input();
        reset();
        test(algorithm1);
        test(algorithm2);
        test(algorithm3);
        printf("Enter 1 to continue, or enter 0 to exit\n");
        getchar();
        scanf("%d", &repeat);
    }
}