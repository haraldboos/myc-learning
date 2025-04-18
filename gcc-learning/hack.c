#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int cheack_authendication(char *pawwsord){

    int auth =  0;
    char password_buffer[16];

    strcpy(password_buffer,pawwsord);
printf("entring \n");
printf("%s \n",pawwsord);
    if(strcmp(password_buffer,"fuckyou")==0){
        // printf("%s",password_buffer);
        auth=1;
    }else if (strcmp(password_buffer,"miakhalifa")==0){
        auth=1;
    }
    return auth;

    

}


int main(int argc,char *argv[]){
    if (argc != 2){
        printf("Too many args or not provide");
        exit(0);
    }
    if (cheack_authendication(argv[1]))
    {
        /* code */
        printf("----fuck granded---");
    }else{
        printf("----podapundaiandi-----");
    }
    
}