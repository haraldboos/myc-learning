#include<stdio.h>
// pointer array
// int main(){
//     int a[]={10,23,23,43};
//     int *pt,i;
//     pt=a;
//     printf("%p   ===...> %p\n",pt+3,a);
//     for ( i = 0; i < 2; i++)
//     {
//         printf("%d data in addressn %p\n",*pt,pt);
//         pt=pt+2;
//     }
//     return 10;
    
// }



// character pointer



// int main (){
//     char c[]={'k','a','f','g','o','l'};
//     char *ptr;
//     int i;
//     ptr = c;
//     for ( i = 0; i < 6; i++)
//     {
// printf("%c char in %p \n",*ptr,ptr);
// ptr=ptr+1;
//     }
    
// }



// Full name
int main(){
    char str[100];
    printf("Enter yur fuckin nmae");
    scanf("%[^rrr]",str);
    printf("your fucking name is ::: %s",str);

}