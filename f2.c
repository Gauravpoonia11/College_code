//WAP to delete an index element from an array
#include<stdio.h>
#include<conio.h>
void main(){
    int n,ar[100],index;
    printf("Enter number:");
    scanf("%d",&n);
    for (int i = 0; i<n; i++){
        printf("Element:");
        scanf("%d",&ar[i]);
    }
    printf("Elements before deletion are:");
    for(int i=0;i<n;i++){
        printf("\n%d",ar[i]);
    }
    printf("\nEnter the index:");
    scanf("\n%d",&index);
    for(int i=index;i<n;i++){
        ar[i]=ar[i+1];
    }
    printf("Elements after deletion are:");
    for(int i=0;i<n-1;i++){
        printf("\n%d",ar[i]);
    }
}