#include<stdio.h>
#include<conio.h>
void interchange(int a,int b){
    int c;
    c = a;
    a = b;
    b = c;
    printf("%d\n%d",a,b);
}
void main(){
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);
    interchange(a,b);
}