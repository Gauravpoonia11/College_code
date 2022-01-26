//WAP to delete a char in a given string
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main(){
    char str[100],ch;
    printf("Enter a string: ");
    gets(str);
    printf("Enter a char to delete from string: ");
    scanf("%c",&ch);
    int len=strlen(str);
    for(int i=0;i<len;i++){
        if(str[i]==ch){
             for(int j=i;j<len;j++){
                 str[j]=str[j+1];
             }
             len--;
             i--;
        }
    }
    printf("string after deletion: ");
    puts(str);
}
