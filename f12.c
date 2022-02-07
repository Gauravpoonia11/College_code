//write a program to generate fibonacci series using recursive function.
#include<stdio.h>
#include<conio.h>
int fib(int x){
  if(x==0){
    return x;
  }else{
    return x+fib(x-1);
  }
}
void main(){
int n;
printf("Enter number for febonacci series: ");
scanf("%d",&n);
for(int i=0;i<n;i++){
  printf("%d",fib(i));
  printf(" ");  
}
}