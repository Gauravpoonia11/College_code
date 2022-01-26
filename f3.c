#include<stdio.h>
#include<conio.h>
#include<string.h>
void main(){
    char str[100],ch,chr;
    printf("Enter a string: ");
    gets(str);
    printf("\nEnter a char to replace from string: ");
    scanf("%c",&ch);
    getchar();
    printf("\nEnter the char by which you want to replace: ");
    scanf("%c",&chr);
    for(int i=0;i<strlen(str);i++){
        if(str[i]==ch){
            str[i]=chr;
        }
    }
    printf("\nstring after replacing by new char:");
    puts(str);
    getch();
}
