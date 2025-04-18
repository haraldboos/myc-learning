#include<stdio.h>
#include<stdlib.h>
 int syss(){
    return system("test -f a.out");
}
int main (){
   
    int x=4;
    char fuk[13] ="hihifuckkck";
    int hook =60;
    if (!syss())
    {
printf("fuckyou");
    }else{
        printf("no");
    }
    return 0;
}
