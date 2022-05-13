//Write a program that defines a function to add first n numbers.
#include<stdio.h>
#include<conio.h>
void add(int n){
    int sum=0;
    for(int i=1;i<=n;i++){
        sum=sum+i;
    }
    printf("%d",sum);
}
void main(){
    int a;
    printf("Enter a number:");
    scanf("%d",&a);
    add(a);
}