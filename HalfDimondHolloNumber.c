#include<stdio.h>
int main(){
    int n=6;
    for(int i=1;i<=n;i++){ 
        int count=n; 
        for(int j=n;j>=1;j--){
            if(i==n||j==i){
                printf("%d ",count);
                count--;
            }
            else{
                printf("  ");
                count--;
            }
        }
        for(int j=2;j<=n;j++){ 
            if(i==n||i==j){
                printf("%d ",count+2); 
                count++;
            }
            else{
                printf("  ");
                count++;
            }
        }
        printf("\n");
    }
   
}
