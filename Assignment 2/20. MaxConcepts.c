//Maximum concept

#include <stdio.h>
#include <conio.h>
#include <time.h>

void askPersonalDetails(){
    system("title We need few info about you");
    
    printf("\n Enter you name please : ");
    char name[51];
    gets(name);

    printf(" Enter your sex (m/f)  : ");
    char sex;
    scanf("%c",&sex);

    if (sex == 'f') printf("\n Hello %s ma'am, you are welcome to my program.", name);
    else printf("\n Hello %s sir, you are welcome to my program.\n ", name);

    system("pause");

}

int main(int argc, char *argv[]){

    system("title Welcome to MaxConcept");
    printf("\n Date : %s",__DATE__);
    printf("      Time : ");
    system(" time /t");
    printf("------------------------------------------");

    puts("\n\n This is a program where we have to use maximum concept");
    puts(" This program is only compatible with Windows OS only.\n");


    for(int i = 10; i >= 0; i--){
        printf(" starting in  %d          ",i);
        printf("\r");
        sleep(1);
    }

    system("cls");

    askPersonalDetails();

    // char statement[][21] = {"I", "just", "want", "to", "let", "you", "know", "that", "colors", "are", "IMPORTANT\n"};
    char statement[][101] = {"I", "I just", "I just want", "I just want to", "I just want to let", "I just want to let you", "I just want to let you know", "I just want to let you know that", "I just want to let you know that colors", "I just want to let you know that colors are", "I just want to let you know that colors are IMPORTANT\n"};


    char colors[][10] = {"color 1", "color 2", "color 3","color 4", "color 5", "color 6","color c", "color d", "color 9","color d", "color b"};

    for (int i = 0; i < 11; i++){
        system("cls");

        system(colors[i]);
        printf("\n\n\n\n\t%s",statement[i]);

        sleep(1);
    }
    printf("\n\t");
    system("pause");
    system("cls");

    char bgStatement[] = "Not Just Forground Color!";
    char bgColors[][10] = {"color 1c", "color 2f", "color 3b","color 45", "color 56", "color 61","color c3", "color d1", "color 96","color d7", "color b"};

    for (int i = 0; i < 11; i++){
        system("cls");

        system(bgColors[i]);
        printf("\n\n\n\n\t%s",bgStatement);

        sleep(1);
    }

    printf("\n\t");
    system("pause");
    system("cls");


// lets create some folders quick
// hey do you like colors? me to? 
// did you like this program? or you want to delete this programme

    // system("start www.google.com");
    system("title FeedBack Time");
    printf("\n Send Feedback to me? (y/n) : ");
    char feedback = getch();
    if(feedback == 'y') system("start mailto:123rajaj@gmail.com");
    else printf(" Are you sure? think again (y/n)");

    // mailto:123rajaj@gmail.com

    return 0;
}