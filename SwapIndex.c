#include <stdio.h>
int main()
{
    int n;
    printf("Enter a  Number : ");
    scanf("%d", &n);
    //5276413 
    int SumInt = 0,ld,count=1; 
    while (n != 0) //
    {
        
        int i = 1, pow = 1;
        ld = n % 10;  //3  1 4 6 7 2 5 
        while (i < ld)    //1<3  1<1  1<4
        {                     
            pow = pow * 10; //100 1  1000  100000 10000000 10 10000
            i++;
        }

        n = n / 10; //527641 52764 5276 527 52 5 0
        SumInt =  count * pow + SumInt;//(1*100)+(2*1)+(3*1000)+(4*100000)+(5*1000000)+(6*10)+(7*10000)
        count++;    //2 3 4 5 6 7 
    }
    printf("After Index Swapp: %d ", SumInt);
    //5473162
}
