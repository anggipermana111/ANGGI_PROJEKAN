#include <stdio.h>
#include <conio.h>
#include <windows.h>
// void gotoxy(int x, int y)
// {
//     COORD a = {x, y};
//     SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), a);
// }
void erase1()
{
    //bgcolor(7);
    gotoxy(65, 10);
    printf("                                        ");
    gotoxy(65, 11);
    printf("                                        ");
    gotoxy(65, 12);
    printf("                                        ");
    gotoxy(65, 13);
    printf("                                        ");
    gotoxy(65, 14);
    printf("                                        ");
    gotoxy(65, 15);
    printf("                                        ");
    gotoxy(65, 16);
    printf("                                        ");
    gotoxy(65, 17);
    printf("                                        ");
    gotoxy(65, 18);
    printf("                                        ");
    gotoxy(65, 19);
    printf("                                        ");
    gotoxy(65, 20);
    printf("                                        ");
    gotoxy(65, 21);
    printf("                                        ");
    gotoxy(65, 22);
    printf("                                        ");
    gotoxy(65, 23);
    printf("                                        ");
    gotoxy(65, 24);
    printf("                                        ");
    gotoxy(65, 25);
    printf("                                        ");
    gotoxy(65, 26);
    printf("                                        ");
    gotoxy(65, 27);
    printf("                                        ");
    gotoxy(65, 28);
    printf("                                        ");
    gotoxy(65, 29);
    printf("                                        ");
}
void loading1()
{
    for (int a = 1; a < 3; a++)
    {
        for (int x = 1; x < 9; x++)
        {
            Sleep(100);
            erase1();
            for (int i = 1; i <= 18; i++)
            {
                gotoxy(71, i + 10);
                for (int j = 1; j <= 14; j++)
                {
                    if (i == j + 2 && i < 9 && j > 1 || i + j == 17 && j > 8 || j == 6 && i > 8 && i < 11 || i + j == 17 && j < 7 || i == j + 2 && j >= 9 || j == 9 && i > 8 && i < 11 || j == 1 && i < 4 && i >= 1 || j == 1 && i > 15 && i < 19 || j == 14 && i < 4 && i > 0 || j == 14 && i > 15 && i < 19 || i == 1 && j > 1 && j < 14 || i == 18 && j > 1 && j < 14)
                    {
                        printf("%c%c", 219, 219);
                        if (x == 1 && a == 1)
                            Sleep(1);
                    }
                    else if (i == 2 && j >= 1 && j <= 14 && x < 2)
                        printf("%c%c", 176, 176);
                    else if (i == 3 && j >= 2 && j <= 13 && x < 3)
                        printf("%c%c", 176, 176);
                    else if (i == 4 && j >= 3 && j <= 12 && x < 4)
                        printf("%c%c", 176, 176);
                    else if (i == 5 && j >= 4 && j <= 11 && x < 5)
                        printf("%c%c", 176, 176);
                    else if (i == 6 && j >= 5 && j <= 10 && x < 6)
                        printf("%c%c", 176, 176);
                    else if (i == 7 && j >= 6 && j <= 9 && x < 7)
                        printf("%c%c", 176, 176);
                    else if (i >= 8 && i <= 18 && j > 6 && j <= 8 && x > 1 && x < 8)
                        printf("%c%c", 176, 176);
                    else if (i == 12 && j > 4 && j < 11 && x > 7)
                        printf("%c%c", 176, 176);
                    else if (i == 13 && j > 3 && j < 12 && x > 6)
                        printf("%c%c", 176, 176);
                    else if (i == 14 && j > 2 && j < 13 && x > 5)
                        printf("%c%c", 176, 176);
                    else if (i == 15 && j > 1 && j < 14 && x > 4)
                        printf("%c%c", 176, 176);
                    else if (i == 16 && x > 3)
                        printf("%c%c", 176, 176);
                    else if (i == 17 && x > 2)
                        printf("%c%c", 176, 176);
                    else
                        printf("  ");
                }
                printf("\n");
            }
        }
        Sleep(100);
        if (a < 2)
        {
            erase1();
            gotoxy(67, 13);
            printf("%c%c%c%c%c%c                        %c%c%c%c%c%c\n", 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219);
            gotoxy(67, 14);
            printf("%c%c    %c%c                    %c%c%c%c%c%c%c%c\n", 219, 219, 219, 219, 219, 219, 176, 176, 176, 176, 219, 219);
            gotoxy(67, 15);
            printf("%c%c      %c%c                %c%c%c%c%c%c%c%c%c%c\n", 219, 219, 219, 219, 219, 219, 176, 176, 176, 176, 176, 176, 219, 219);
            gotoxy(67, 16);
            printf("%c%c        %c%c            %c%c%c%c%c%c%c%c%c%c%c%c\n", 219, 219, 219, 219, 219, 219, 176, 176, 176, 176, 176, 176, 176, 176, 219, 219);
            gotoxy(67, 17);
            printf("%c%c          %c%c        %c%c%c%c%c%c%c%c%c%c%c%c%c%c\n", 219, 219, 219, 219, 219, 219, 176, 176, 176, 176, 176, 176, 176, 176, 176, 176, 219, 219);
            gotoxy(67, 18);
            printf("%c%c            %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n", 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 176, 176, 176, 176, 176, 176, 176, 176, 176, 176, 176, 176, 219, 219);
            gotoxy(67, 19);
            printf("%c%c                    %c%c%c%c%c%c%c%c%c%c%c%c%c%c\n", 219, 219, 176, 176, 176, 176, 176, 176, 176, 176, 176, 176, 176, 176, 219, 219);
            gotoxy(67, 20);
            printf("%c%c                    %c%c%c%c%c%c%c%c%c%c%c%c%c%c\n", 219, 219, 176, 176, 176, 176, 176, 176, 176, 176, 176, 176, 176, 176, 219, 219);
            gotoxy(67, 21);
            printf("%c%c            %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n", 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 176, 176, 176, 176, 176, 176, 176, 176, 176, 176, 176, 176, 219, 219);
            gotoxy(67, 22);
            printf("%c%c          %c%c        %c%c%c%c%c%c%c%c%c%c%c%c%c%c\n", 219, 219, 219, 219, 219, 219, 176, 176, 176, 176, 176, 176, 176, 176, 176, 176, 219, 219);
            gotoxy(67, 23);
            printf("%c%c        %c%c            %c%c%c%c%c%c%c%c%c%c%c%c\n", 219, 219, 219, 219, 219, 219, 176, 176, 176, 176, 176, 176, 176, 176, 219, 219);
            gotoxy(67, 24);
            printf("%c%c      %c%c                %c%c%c%c%c%c%c%c%c%c\n", 219, 219, 219, 219, 219, 219, 176, 176, 176, 176, 176, 176, 219, 219);
            gotoxy(67, 25);
            printf("%c%c    %c%c                    %c%c%c%c%c%c%c%c\n", 219, 219, 219, 219, 219, 219, 176, 176, 176, 176, 219, 219);
            gotoxy(67, 26);
            printf("%c%c%c%c%c%c                        %c%c%c%c%c%c\n", 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219);
            Sleep(300);
        }
    }
}
void loading2()
{
    for (int z = 1; z <= 3; z++)
    {
        int b = 3;
        int a = 73;
        int c = 13;
        system("cls");
        for (int x = 1; x <= 7; x++)
        {
            for (int i = 1; i <= b * 4; i++)
            {
                gotoxy(a, i + c);
                for (int j = 1; j <= b * 4; j++)
                {
                    if (i == 1 && j <= b || i == 1 && j > b * 3 || i == b * 4 && j <= b || i == b * 4 && j > b * 3 || j == 1 && i <= b || j == 1 && i > b * 3 || j == b * 4 && i <= b || j == b * 4 && i > b * 3)
                    {
                        printf("%c%c", 219, 219);
                    }
                    else
                    {
                        printf("  ");
                    }
                }
                //printf("\n");
            }
            b++;
            a -= 4;
            c -= 2;
            Sleep(20);
        }
    }
}
void loading()
{
    //textcolor(tc);
    loading1();
    //erase1();
    // loading2();
    //getch();
}