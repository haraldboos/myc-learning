#include<stdio.h>
//function al array
/*int size;
void functix(int arr[])
{
int i;
for(i=0;i<size;i++)
	printf("%d\t",arr[i]);
}
int main(){
int  a[]={10,30,40,53,46,75,87,0,99};
printf("Enter the No of element");
size = 8;
functix(a);

}
*/

//call by refrence
/*


void updatearr(int *p){
int i;
for(i=0;i<3;i++,p++){
*p =*p * 20;
}
}
int main(){
int a[]={1,2,3,4,5};
updatearr(a);
int i;
for(i= 0;i<5;i++)
	printf("fkfkfk %d\t",a[i]);
}*/

#include<stdlib.h>
//mallock
/*
int main()
{
int *p;
int noe,i;
printf("Enter the no of element");
scanf("%d",&noe);
p=(int *) malloc(noe*sizeof(int));
printf("size of p= %d\n",sizeof(*p));
printf("Enter the value :");
printf("*size of %d",noe*sizeof(int));
for(i=0;i<noe;i++){
	scanf("%d",&p[i]);
}
printf("values in array \n");
for(i=0;i<noe;i++)
	printf("%d\t",*(p+1));
}*/


//calloc

int main()
 {
 int *p;
 int noe,i;
 printf("Enter the no of element");
 scanf("%d",&noe);
 p=(int *) malloc(noe*sizeof(int));
 printf("size of p= %d\n",sizeof(*p));
 printf("Enter the value :");
 printf("*size of %d",noe*sizeof(int));
 for(i=0;i<noe;i++){
         scanf("%d",&p[i]);
 }
 printf("values in array \n");
 for(i=0;i<noe;i++)
         printf("%d\t",*(p+1));
}
