#include<stdio.h>
#include <stdlib.h>

int main(int kvar,char *kvararg[]){
    if (kvar < 2) {
        printf("Not enough arguments!\n");
        return 0;
    }
int val = atoi(kvararg[1]);
switch (val)
{
case 3:
    /* code */
    printf("your number is %d",val);
    return 0;
case 4:
printf("coded tamped because its %d",val);
    return 1;

default:
printf("nice try %d",val);
    break;
}
    return 0;

}