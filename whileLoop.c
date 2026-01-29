 Print 1->100
#include<stdio.h>
int main(){
    int i=1;
    while(i<=100){
        printf("%d ",i);
        i++;
    }
}


// Print 100-> 1
#include<stdio.h>
int main(){
    int i=100;
    while(i>=1){
        printf("%d ",i);
        i--;
    }
}


// print 1-n
#include<stdio.h>
int main(){
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    int i;
    while(i<=n){
        printf("%d",i);
        i++;
    }
}


// // print n-1
// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter n: ");
//     scanf("%d",&n);
//     int i=1;
//     while(i<=n){
//         printf("%d",n);
//         n--;
//     }
// }


// // print m-n(m,n user input)
// #include<stdio.h>
// int main(){
//     int m,n;
//     printf("Enter Starting Value m: ");
//     scanf("%d",&m);
//     printf("Enter Starting Value n: ");
//     scanf("%d",&n);
//     while(m<=n){
//         printf("%d ",m);
//         m++;
//     }

// }


// // print n-m
// #include<stdio.h>
// int main(){
//     int m,n;
//     printf("Enter Starting Value m: ");
//     scanf("%d",&m);
//     printf("Enter Starting Value n: ");
//     scanf("%d",&n);
//     while(n>=m){
//         printf("%d ",n);
//         n--;
//     }
// }



// // Even Number 
// #include<stdio.h>
// int main(){
//     int i=1;
//        printf("Even Number \n");
//     while(i<=100){
//         if(i%2==0){   
//             printf(" %d ",i);
//         }
//         i++;
//     }
// }

// // Odd Number
// #include<stdio.h>
// int main(){
//     int i=1;
//        printf("Odd Number \n");
//     while(i<=100){
//         if(!(i%2==0)){
//             printf(" %d ",i);
//         }
//         i++;
//     }
// }

// // odd number 100-1
// #include<stdio.h>
// int main(){
//     int i=100;  
//        printf("even Number \n");
//     while(i>=1){
//         if(i%2==0){         
//             printf(" %d ",i);
//         }
//         i--;
//     }
// }


// // print  even odd m-n(m,n user input)
// #include<stdio.h>
// int main(){
//     int m,n,i;
//     printf("Enter Starting Value m: ");
//     scanf("%d",&m);
//     printf("Enter Starting Value n: ");
//     scanf("%d",&n);
//     printf("Even Number: ");
//     i=m;
//     while(m<=n){
//        if(m%2==0)
//        {
//            printf("%d ",m);
//        }
//         m++;
//     }
//     m=i;
//     printf("\nOdd Number: ");
//  while(m<=n){
//        if(!(m%2==0))
//        {
//            printf("%d ",m);
//        }
       
       
       
//         m++;
//     }
// }


// //print multiples of a user given no. within a range

// #include<stdio.h>
// int main()
// {
//     int n,i=1,a;
//     printf("enter the value of n");
//     scanf("%d",&n);
//     printf("enter the last value of range");
//     scanf("%d",&a);
//     while(i<=a){
//         if(i%n==0)
//         {
//             printf("%d \n",i);
//         }
//         i++;
//     }
// }