#include <stdio.h>
int main()
{
    int n, m, i = 2;
    printf("Enter n");
    scanf("%d", &n);
    printf("Enter m");
    scanf("%d", &m);
    int lcm = 1;
    while (n != 1 || m != 1)
    {
        if (n % i == 0 || m % i == 0)
        {

            if (n % i == 0)
                n = n / i;
            if (m % i == 0)
                m = m / i;
            // lcm = lcm * i;
            printf("%d \t", i);
        }
        else
        {
            i++;
        }
    }
    printf("\nLCM of %d and %d is %d", m, n, lcm);
}
