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

    printf("\nStatus :: {");

    if (!response)  printf("Ok, we are processing the information. Please stand by.");
    else            printf("***User names are not same***");

    printf("}\n");
    return 0;
}