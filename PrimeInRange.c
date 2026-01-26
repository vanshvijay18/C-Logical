#include <stdio.h>
int main()
{
    int n;
    int m;
    printf("Enter m: ");
    scanf("%d",&m);
    printf("Enter n: ");

    scanf("%d", &n);
    // int count;
    while (m <= n)  //this while for check one by one value 
    {
         int count = 0;
        int j=1;
        while (j <= m)//this while for check count 
        {
            if (m % j == 0)
            {
                count++;
            }
            j++;
        }
        if (count == 2)
        {
            printf("%d ", m);
        }
        m++;
    }
}
