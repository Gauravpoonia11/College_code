#include<stdio.h>
#include<conio.h>
void main(){
int i=1;
char ch='a';
    for(int j=1;j<=5;j++){
        for(int k=1;k<=j;k++){
            if(j%2==0){
                printf("%c",ch);
                ch++;
            }else{
                printf("%d",i);
                i++;
            }
        }
        printf("\n");
    }
}