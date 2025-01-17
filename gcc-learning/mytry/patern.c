#include<stdio.h>

int main(){
    int count;
    char pattern;

    printf("starting \n");
    printf("plerasue enter the count you want to print \n");
    scanf("%d",&count);
//     printf("pleaue enter the pattern you wan to print \n");
//     scanf("%c",&pattern);
// printf("%c",pattern);
    // printf("%d",count);
    for (int i=0;i<count;i++){
            // printf("**** ");

        for (int j=j;j>=1;j--){
            // printf("# ");
            if (i>j){
                printf("$$ ");
            }

        }
        printf("\n");
    }
}