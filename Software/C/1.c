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
            double term = 1.0 / (j*j + 3);
            printf("Term for i = %d, j = %d: %.4f\n", i, j, term);
            inner_sum += term;
        }
        printf("Inner sum for i = %d: %.4f\n", i, inner_sum);
        result += inner_sum;
    }

    printf("Result: %.4f\n", result);
    system("pause");
    return 0;
}
