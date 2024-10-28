// ascii
#include<stdio.h>
//  int main(){
//     for(int i=1;i<128;i++){
//         printf("ASCII %d => %c ==> %s\n",i,i,i);
//     }
//  }

// pointers
int main(){
    int a=10;
    int *ptr;
    ptr = &a;
        printf("pointer address %p value%d\n",a,a);

    printf("pointer address %p value%d\n",*ptr,*ptr);
    *ptr = *ptr*1389;
        printf("pointer address %p value%d\n",*ptr,*ptr);

    printf("pointer address %p value%d\n",a,a);
    return 0;

}