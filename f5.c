//write a promgrm to reverse string.
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main(){
    char str[100],str1[100];
    printf("Enter a string: ");
    gets(str);
    int len=strlen(str);
    int j=0;
    // while(j<=len){
    for(int i=len-1;i>=0;i--){
        str1[j]=str[i];
        //str1[i]=str[len-i];
        j++;
    }
    str1[len]='\0';
    // }
    // for(int i=len;i>1;i--){
    //     str[i]=str[len-i];
    // }
    printf("reverse string is ");
    puts(str1);
}