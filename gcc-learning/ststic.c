#include<stdio.h>
int fooo(){
    static int i;
    i=i+1;
    return i;

}

int main(){
    for(int i=0;i<10;i++){
        printf("statck i cheak k print %d\n",fooo());
    }
    return 0;

}