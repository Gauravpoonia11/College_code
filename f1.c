#include<stdio.h>
#include<conio.h>
void main(){
    int c[25],a[25],b[25],r,l,sum=0;
    printf("enter the row and col of matrix:");
    scanf("%d%d",&r,&l);
    printf("first array");
    for(int i=0;i<=r;i++){
        for(int j=0;j<=l;j++){
            printf("Element");
            scanf("%d",a[i][j]);
        }
    }
    printf("second array");
    for(int i=0;i<=r;i++){
        for(int j=0;j<=l;j++){
            printf("Element");
            scanf("%d",b[i][j]);
        }
    }
    for(int i=0;i<=r;i++){
        for(int j=0;j<=l;j++){
            sum=sum+a[i][j]*b[i][[j]];
        }
        c[i][j]=sum;
    }
    for(int i=0;i<=r;i++){
        for(int j=0;j<=l;j++){
            printf("%d",c[i][j]);
        }
        printf("\n");
    }
}