/* Codes */
#include <stdio.h>
#include <conio.h>
#include <direct.h>
#include <windows.h>
#include <stdlib.h>
int clk, cnt = 0;
int row, col;
void clock()
{
    for (int i = 0; i < 3601; i++)
    {
        clk = i;
    }
}
// void disp() //dbg
// {
//     printf("dfiufyhdfruir\n");

// }
void greeting()
{
    printf("\n***               __   __             __     __  _____           __                ***\n");
    printf("***  |  |   /\\   |  | |  |  \\  /     |  i | |  |   |   |  |     |  i   /\\   \\  /   ***\n");
    printf("***   --   /--\\  |--' |--'   \\/      |--| | |--'   |   |--|     |  |  /--\\   \\/    ***\n");
    printf("***  |  | /    \\ |    |      ||      |__! | |  \\   |   |  |     |__! /    \\  ||    ***\n");
    printf("***                                                                                ***\n");
}
void header()
{
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 86; j++)
        {
            if (i == 0 || i == 1 || i == 6 || i == 7 || j == 0 || j == 1 || j == 2 || j == 83 || j == 84 || j == 85)
            {
                printf("*");
            }
            else if (i == 3)
            {
                greeting();
                break;
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}
void chrome()
{
    switch (cnt)
    {
    // case 3 || 4 || 5:
    //     system("color F1");
    //     break;
    // case 6:
    //     system("color 0A");
    //     break;
    case 9:
        system("color 0A");
        break;
    case 12:
        system("color F1");
        break;
    case 14:
        system("color 0A");
        break;
    default:
        break;
    }
}
void loverise()
{
    for (col = 0; col < 87; col++)
    {
        if (col == 2 || col == 3 || col == 5 || col == 6 || col == 80 || col == 81 || col == 83 || col == 84)
        {
            printf("*");
        }
        else
        {
            printf(" ");
        }
    }
    printf("\n");
    for (row = 1; row < 5; row++)
    {
        for (col = 1; col < 89; col++)
        {
            if ((col > row && col < (10 - row)) || (col > (78 + row) && col < (88 - row)))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}
void blank()
{
    int rise;
    rise = cnt % 5;
    for (int a = 5; a >= 0; a--)
    {
        if (a==rise)
        {
            loverise();
        }
        else
        {
            printf("\n");
        }
        
    }
}
void cake()
{
    for (int i = 0; i < 15; i++)
    {
        chrome();
        header();
        blank();
        if ((cnt % 2) == 0)
        {
            printf("\n\n\n");
            printf("                                \\  \\  \\  \\\n");
            printf("                                |  |  |  |\n");
            printf("                      -------------------------------\n");
            printf("                     |             SASI             |\n");
            printf("                     |                              |\n");
            printf("                     ||||||||||||||||||||||||||||||||\n");
            printf("            -----------------------------------------------\n");
            printf("           *_______________________________________________*\n");
            printf("           ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** **\n");
            printf("           ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** **\n");
            printf("           **************************************************\n");
            printf("    HAPPY_BIRTHDAY_TO_YOU__HAPPY_BIRTHDAY_TO_YOU__HAPPY_BIRTHDAY_TO_YOU\n");
            printf("\n\n\n");
        }
        else
        {
            printf("\n\n\n");
            printf("                                /  /  /  /\n");
            printf("                                |  |  |  |\n");
            printf("                      -------------------------------\n");
            printf("                     |             KAHI             |\n");
            printf("                     |                              |\n");
            printf("                     ||||||||||||||||||||||||||||||||\n");
            printf("            -----------------------------------------------\n");
            printf("           *_______________________________________________*\n");
            printf("           ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** **\n");
            printf("           ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** **\n");
            printf("           **************************************************\n");
            printf("    HAPPY_BIRTHDAY_TO_YOU__HAPPY_BIRTHDAY_TO_YOU__HAPPY_BIRTHDAY_TO_YOU\n");
            printf("\n\n\n");
        }
        Sleep(750);
        cnt++;
        system("cls");
        // printf("sdhgdsgdvdf\n"); //dbg
    }
    // printf("sdjbdhdfj\n"); // dbg
}
int main()
{
    // clock();
    // disp(); //dbg
    // header();
    cake();
    // printf("dddshvvhhd\n"); //dbg

    return 0;
}