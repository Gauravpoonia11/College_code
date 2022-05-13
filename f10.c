//write a program to find the factorial of a number using recursion funtion.
#include<stdio.h>
#include<conio.h>
int fact(int a){
    if(a==0){
        return 1;
    }else{
        return a*fact(a-1);
    }
}
void main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("%d",fact(n));
}