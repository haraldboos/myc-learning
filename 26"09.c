// union
#include<stdio.h>
struct ool1
{
    int f;
    char m[50];
};
union fk1

{
int y;
char s3[50];
};

int main(){
    struct ool1 ool2;
    union fk1 fk2;
    printf("size of ool2 (st): %ld bytes\n",sizeof(ool2));
    printf("size of fk1 (st): %ld bytes\n",sizeof(fk2));

    
}
