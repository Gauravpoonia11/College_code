//Write a function in the program to return 1 if number
//is prime otherwise return 0.
#include<stdio.h>
#include<conio.h>
int prime(int a){
    if(a%2==0){
        return 1;
    }else{
        return 0;
    }
}
void main(){
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);
    printf("%d",prime(a));
}