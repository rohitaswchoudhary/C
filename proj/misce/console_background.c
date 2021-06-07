// 2021-06-03 9:32:27

// program to change console background colors.

#include<windows.h>
#include<stdio.h>

int main()
{
    printf("\n\n\t\tHi! , I am Rohitasw Choudhary\n\n\n");

    //BACKGROUND_RED| BACKGROUND_GREEN| BACKGROUND_BLUE| BACKGROUND_INTENSITY
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),BACKGROUND_BLUE|BACKGROUND_RED|BACKGROUND_INTENSITY);
    printf("\n\nDoing fun stuff from programming language is very interesting.\n\n");

    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),BACKGROUND_GREEN);
    printf("\n\nIsn't this Awesome?");

    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),BACKGROUND_INTENSITY|BACKGROUND_RED);
    printf("\n\nYou just did something that only 1 out of 10 coders are familiar of :)\n");

    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),BACKGROUND_GREEN|BACKGROUND_INTENSITY);
    printf("\n\nYou are doing great!!");

    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),BACKGROUND_BLUE|BACKGROUND_INTENSITY);
    printf("\n\nDo you want to learn more ");

    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),BACKGROUND_GREEN|BACKGROUND_INTENSITY);
    printf("\n\nFollow me on my website");

    printf("\n\n\t\t\tCoding is Fun ! So learn it that way\n\n\n");
    return 0;
}