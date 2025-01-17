#include<stdio.h>
int main()
{
    /* code */
    char a[6]="miakl";
    char l[5]="oolandi";
    // scanf("%s",&l);

    char b[6]="wor\0de";
    // char *c=&b[4];
    // char a[5]="fuck";
    // a[3]='\0';
    printf("%s @a %p\n",a,a);
    printf("%s @b %p\n",b,b);
    printf("%s @l %p\n",l,l);
        // printf("%s @ %p\n",c,c);

printf("memory of a ******************\n");
for (int i = 0; i < 6; i++)
    printf("%c @ %p \n",a[i],&a[i]);
    /* code */
printf("memory of b ******************\n");
for (int i = 0; i < 6; i++)
    printf("%c @ %p \n",b[i],&b[i]);

printf("memory of l ******************\n");
for (int i = 0; i < 5; i++)
    printf("%c @ %p \n",l[i],&l[i]);

    return 0;
}
