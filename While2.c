// Print numbers from 1 to 10:
// #include <stdio.h>
// int main() {
//     int i = 1;
//     while (i <= 10) {
//         printf("%d\n", i);
//         i++;
//     }
//     return 0;
// }

// Print even numbers from 2 to 20:
// #include <stdio.h>
// int main() {
//     int i = 2;
//     while (i <= 20) {
//         printf("%d\n", i);
//         i += 2;
//     }
//     return 0;
// }

// Print odd numbers from 1 to 20:
// #include <stdio.h>
// int main() {
//     int i = 1;
//     while (i <= 20) {
//         printf("%d\n", i);
//         i += 2;
//     }
//     return 0;
// }

// Print integers from 10 to 1 in reverse order:

// #include <stdio.h>
// int main() {
//     int i = 10;
//     while (i >= 1) {
//         printf("%d\n", i);
//         i--;
//     }
//     return 0;
// }

//  Print numbers from 1 to 100 divisible by 5:
// #include <stdio.h>
// int main() {
//     int i = 1;
//     while (i <= 100) {
//         if (i % 5 == 0) {
//             printf("%d\n", i);
//         }
//         i++;
//     }
//     return 0;
// }

// Factorial
// #include<stdio.h>
// int main(){
//     int i=1,n,fact=1;
//     printf("Enter a Number: ");
//     scanf("%d",&n);
//    while(i<=n){
//     fact=fact*i;
//     i++;
// }
// printf("Factorial of %d! = %d",n,fact);
//     }

// //Product of all odd number
// #include<stdio.h>
// int main(){
//     int prod=1,n,i=1;
//     printf("Enter n: ");
//     scanf("%d",&n);
//     while(i<=n){
//         if(i%2!=0){
//             prod=prod*i;
//         }
//         i++;
//     }
//     printf("%d",prod);
// }

// Prime Number Check
// #include<stdio.h>
// int main(){
//     int i=1,count=0,n;
//     printf("Enter n: ");
//     scanf("%d",&n);
// while(i<=n){
//     if(n%i==0){
//         count++;
//     }
//     i++;
// }
// if(count==2){
//         printf("Number is prime %d",n);
//     }
//     else{
//         printf("Number is not prime");
//     }
// }

// Fibonacii
// #include<stdio.h>
// int main(){
//     int Num,fibp=0,fibn=1,i=1,temp;
//     printf("Enter a Number: ");
//     scanf("%d",&Num);
//     while(i<=Num-2){
//         temp=fibp;//temp=0,1,1,2
//         fibp=fibn;//fibp=1,1,2
//         fibn=temp+fibn;//fibn=0+1=1,2,3
//         printf("%d ",temp);
//         i++;
//     }
// }

// Power of a number (x^y)

// #include <stdio.h>
// int main()
// {
//     int x, y, i = 1, temp;
//     printf("Enter a Number x:");
//     scanf("%d", &x);
//     printf("Enter Power  y: ");
//     scanf("%d", &y);
//     temp = x;
//     while (i < y)
//     {
//         x = x * temp;
//         i++;
//     }
//     printf("(x^y): %d", x);
// }

// Sum of Digits of a given Number
// #include<stdio.h>
// int main(){
// int n,r,temp=0;
// printf("Enter A NUmber");
// scanf("%d",&n);
// while(n!=0){
//     r=n%10;
//     n=n/10;
//     temp=temp+r;

// }
// printf("%d",temp);
// }

// Sum of Integers [](n*(n+1))/2
// #include<stdio.h>
// int main(){
//     int i=1,n,SumInt=0;
//     printf("Enter a Number: ");
//     scanf("%d",&n);
//    while(i<=n){
//     SumInt=SumInt+i;
//     i++;
//               }
// printf("Sum of integers from 1 to %d is %d",n,SumInt);
//     }

// Sum of all Even Numbers btw 1 and 100
// #include<stdio.h>
// int main(){
//     int i=1,n=100,SumInt=0;
//    while(i<=n){
//     if(i%2==0){

//         SumInt=SumInt+i;
//     }
//     i++;
// }
// printf("Sum of all Even Numbers btw 1 to 100 is %d ",SumInt);
//     }

// Calculate the avg of N numbers entered by The user

// #include<stdio.h>
// int main(){
// int n,r,temp=0,count=0,avg=0;
// printf("Enter A NUmber");
// scanf("%d",&n);
// while(n!=0){
//     r=n%10;
//     n=n/10;
//     count++;
//     temp=temp+r;
// }
// printf("%d\n",count);
// avg=temp/count;
// printf("%d",avg);
// }

// Sum of all Even Numbers btw 1 and 100
// #include<stdio.h>
// int main(){
//     int i=1,n=500,SumInt=0;
//    while(i<=n){
//     if(i%7==0){

//         SumInt=SumInt+i;
//     }
//     i++;
// }
// printf("Sum of the all multiples of 7  btw 1 to 500 is %d ",SumInt);
//     }