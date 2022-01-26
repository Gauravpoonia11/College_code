//WAP to find a character from given string...
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main(){
    int x;
    char st[100],a;
    printf("Enter a string:\n");
    gets(st);
    printf("Enter the character:");
    scanf("%c",&a);
    int len=strlen(st);
    for (int i = 0; i < len; i++)
    {
        if(st[i]==a){
            printf("character position:%d\n",i);
            x++;
        }
    }
    if (x==0)
    {
        printf("character not found");
    }
    
    
}