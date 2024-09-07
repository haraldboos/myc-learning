#include<stdio.h>
int main()
{
    int x[5],i;
    printf("Enter the value for array loop:\n");
    for(i=0;i<5;i++){
        printf("Enter {%d} value as input to array ",i+1);
        scanf("%c",&x[i]);}
    for (i=0;i<5;i++)
        printf("%d\t",x[i]);
}