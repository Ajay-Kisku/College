#include <stdio.h>
#include <string.h>

int main(){

    printf("\n[Warning] : UserName must not contain space(s). \n");
    printf("----------------------------------------------\n");
    
    char name[50];
    printf("\nEnter UserName   : ");
    scanf("%s", &name);
    
    char toconfirm[50];
    printf("Confirm UserName : ");
    scanf("%s", &toconfirm);

    int response = strcmp(name,toconfirm); 

    if (!response){

        char gender;
        printf("\nEnter gender (M/F) : ");
        scanf("%s", &gender);

        switch (gender){
            case 'M' : printf("Hello, %s Sir", name); break;
            case 'm' : printf("Hello, %s Sir", name); break;

            case 'F' : printf("Hello, %s Ma\'am", name); break;
            case 'f' : printf("Hello, %s Ma\'am", name); break;


        }
        printf("\n\nStatus :: {Ok, we are processing the information. Please stand by.}");


    }
    else{
        printf("\n\nStatus :: {***User names are not same***}");
    }
    printf("\n");

    return 0;
}