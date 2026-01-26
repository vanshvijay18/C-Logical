#include <stdio.h>

int main()
{
    int i = 2, count = 0, n; //15
    printf("Enter n: ");
    scanf("%d", &n);
    while (i*i <= n)  //1*1  2*2 3*3  
    {
        if (n % i == 0) 
        {
            count++;//1 1 1 
        }
        i++;
    }
    if (count == 0)
    {
        printf("Numbr is prime");
    }
    else
    {
        printf("Number is not prime");
    }
}
