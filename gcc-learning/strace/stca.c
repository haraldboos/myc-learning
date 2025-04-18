#include<stdio.h>
#include <stdlib.h>

int runnn(){
   return system("./a.out  ");
}
int main(){
    system("./a.out 1 ");
  int sya=runnn();
    system("./a.out 1 ");
    if (sya)
    {
        /* code */
        printf("code tamped %d", sya);

    }else{
        printf("code not tamped");
    }
    
}