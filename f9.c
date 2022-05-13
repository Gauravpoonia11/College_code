//write a c program to check whether a number is prime, armstrong or perfect 
//number using function.
#include<stdio.h>
#include<conio.h>
void prime(int a){
    if(a%2==0){
        printf("prime");
    }else{
        printf("\nnot prime");
    }
}
void perfect(int a){
    int c = a;
    int sum=0;
    for(int i=1;i<a;i++){
        if(a%i==0){
            sum=sum+i;
        }
    }
    if(sum==a){
       printf("\n%d is a perfect number",a);
    }else{
        printf("\n%d is not a perfect number",a);
    }
}
// void armstrong(int a){
//     int c=a;
//     while(c!=0){
//         x=c%10;
//         mul=x*
//     }
// } 
void main(){
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);
    prime(a);
    perfect(a);
}