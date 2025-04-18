#include <stdio.h>
#include <string.h>
typedef struct vehicle
{
    char name[80];
    int wheel;
    void (*vehinle_ad)(struct vehicle *);
} Vehicle_t;
void vehile_ad(Vehicle_t *l){
    printf("wehecle name is %s and its wheel is %d",l->name,l->wheel);
}
void _init_function(Vehicle_t *v,char name[],int wheel){
    strcpy(v->name,name);
    v->wheel = wheel;
    v->vehinle_ad = vehile_ad;

}

int main (){
    Vehicle_t sk;
    _init_function(&sk,"car",4);
    sk.vehinle_ad(&sk);
    return 0;
}