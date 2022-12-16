#include <stdio.h>
#include <stdlib.h>

int main()
{
    double result = 0;

    int num_i, num_j;
    printf("Enter the number of iterations for n: ");
    scanf("%d", &num_i);
    printf("Enter the number of iterations for m: ");
    scanf("%d", &num_j);

    int i, j;
    for (i = 1; i <= num_i; i++)
    {
        double inner_sum = 0;
        for (j = 1; j <= num_j; j++)
        {
            inner_sum += 1.0 / (j*j + 3);
        }
        result += inner_sum;
    }

    printf("%.2f\n", result);
    system("pause");
    return 0;
}
