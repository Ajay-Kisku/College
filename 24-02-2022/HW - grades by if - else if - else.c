#include <stdio.h>

void main(){

    puts("\nCheck your Grades by your marks.");
    puts("-------------------------------------------------");

    float marks;

    printf("Enter your marks : ");
    scanf("%f",&marks);

    printf("[Your Grade]    :: ");
    if (marks > 100) printf("Amazing!!!!!\nHmmm so, how did you score this much?\nCall your parents tommorow we will celebrate your marks and grade.\n\n");
    else if (marks >= 80) puts("\"A\" - First Division");
    else if (marks < 80 && marks >= 60 ) puts("\"B\" - Second Division");
    else if (marks < 60 && marks >= 40 ) puts("\"C\" - Third Division");
    else  puts("No grades for you. You Fail. (Shame!)* \n\n\n*Not for you only.");

}