#include<stdio.h>
int main(){
int count=0;
int n;
printf("Enter n");
scanf("%ld",&n);
while(n!=0){
   n=n/10;
   count++;
}
printf("%d",count);
}
