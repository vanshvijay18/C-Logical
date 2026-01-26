#include<stdio.h>
int main(){
    int Num,fibp=0,fibn=1,i=1,temp;
    printf("Enter a Number: ");
    scanf("%d",&Num);
    while(i<=Num){
        temp=fibp;//temp=0,1,1,2
        fibp=fibn;//fibp=1,1,2
        fibn=temp+fibn;//fibn=0+1=1,2,3
        printf("%d ",temp);
        i++;
    }

    
}
