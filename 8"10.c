//starting file handling

#include<stdio.h>
#include<stdlib.h>
//file create
/*int main()
{
	FILE *fp;
	fp = fopen("6\"10.c","r");
	char ch;
	if(fp==NULL){
		printf("ERROR While OPEN FIle");
		exit(-1);

	}
	else{
	while(1)
	{
	ch=fgetc(fp);
	if(ch!=EOF)
	    printf("%c",ch);
	else
	    break;

	}
	fclose(fp);

	}
}*/

//create file
/*
int main(){
	FILE *ef;
	ef = fopen("mytest.txt","w");
	//char ch='ooooooopsi pundai';
	const char *ch = "ooooooopsi pundai";
	fputs(ch,ef);
	fclose(ef);

}
*/


//update file
int main(){
FILE *fp;
fp=fopen("mytest.txt","a");
const char *ch="ggogogog gogogo";
fputs(ch,fp);
fclose(fp);
}

