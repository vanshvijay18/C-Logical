#include <stdio.h>
int main()
{
    int n;
    printf("Enter a 5 Digit Number (1-5 )only: ");
    scanf("%d", &n);
    int SumInt = 0;
    int temp = 1,ld;

    while (n != 0)
    {  
        temp=1;
        int i = 1;
        ld = n % 10; //3 1 4 6 7 2
        while (i < ld) // 2<3 1<1 4<4 6<6 7<7 2<2
        {
            temp = temp * 10; //100 1000 100000 1000000 10
            i++;
        }
        SumInt = ld * temp + SumInt; //3*100+0=300 7654321
            printf("\nsum%d", SumInt);

        n = n / 10; //5
    }
    printf("\n  %d ", SumInt);
}

//Input 34512
//Output 54321
