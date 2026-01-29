// print m-n(m,n user input)
#include<stdio.h>
int main(){
    int m,n;
    printf("Enter Starting Value m: ");
    scanf("%d",&m);
    printf("Enter Starting Value n: ");
    scanf("%d",&n);
    while(m<=n){
        printf("%d ",m);
        m++;
    }

}
