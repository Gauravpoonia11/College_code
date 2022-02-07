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