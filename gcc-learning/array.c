#include<stdio.h>
int main()
{
    int ar[5] ={1,2,3,4,4};
    printf("Add res of ar[0]is  %d \n",ar[0]);
    printf("address of ar[] %d \n",ar);
    printf("%d",sizeof(ar));
    for (int i = 0; i < 5; i++)
    {
        printf("addresss of %d is %d \n",ar,*(ar-i));
        // printf("")

    }
    
    /* code */
    return 0;
}
