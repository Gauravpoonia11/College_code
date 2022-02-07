//write a program to calculate sum of first 20 natural numbers using recursion function.
#include<stdio.h>
#include<conio.h>
int add(int a){
    if (a != 0)
        return a + add(a - 1);
    else
        return a;
}
void main(){
    int n=20;
    printf("%d",add(n));
}