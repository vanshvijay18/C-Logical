#include <stdio.h>

int main()
{
    int i=1,n,m;
    printf("Enter n: ");
    scanf("%d",&n);
    while(i<=10){
        m=n*i;
        printf("%d X %d = %d\n",n,i,m);
        i++;
    }
    
}
