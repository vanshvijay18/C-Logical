#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d", &n);
    int i = 1;
    while (i * i <= n)
        i++;
    printf("The Integer root of %d is %d", n, i - 1);
}