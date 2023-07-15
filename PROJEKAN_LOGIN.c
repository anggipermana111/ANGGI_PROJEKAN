#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <windows.h>
void geraklog1(int a, int c1)
{
    textcolor(c1);
    bgcolor(15);
    for (int i = 0; i <= 21; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (i == 0 || i == 1 || j == 0 || i == 20 || i == 21 || j == 4)
            {
                gotoxy(i + a, j + 30);
                printf("%c", 219);
            }
        }
    }
    gotoxy(a + 7, 32);
    printf("%s", k[(a - 60) / 26]);
    gotoxy(0, 0);
}
int pilihlog1()
{
    do
    {
        geraklog1(a, pc);
        p = getch();
        if (p == 77 && n < 2)
        {
            geraklog1(a, tc);
            n++;
            a += 26;
            if (n > 2)
            {
                n = 1;
                a = 61;
            }
        }
        else if (p == 75 && n > 1)
        {
            geraklog1(a, tc);
            n--;
            a -= 26;
            if (n < 1)
            {
                n = 2;
                a = 87;
            }
        }
        else if (p == 13)
        {
            return n;
        }
    } while (true);
}
int login()
{
    textcolor(tc);
    bgcolor(bg);
    gagal = 0;
    char s[10] = {219, 219, 219, 219};
    for (int i = 1; i <= 3; i++)
    {

        gotoxy(20, 3);
        Sleep(5);
        printf("  ****                                                      ");
        gotoxy(20, 4);
        Sleep(5);
        printf("  ****                                    ****              ");
        gotoxy(20, 5);
        Sleep(5);
        printf("  ****                                    ****              ");
        gotoxy(20, 6);
        Sleep(5);
        printf("  ****                                                      ");
        gotoxy(20, 7);
        Sleep(5);
        printf("  ****             ********    *********  ****  *********   ");
        gotoxy(20, 8);
        Sleep(5);
        printf("  ****            ****  ****  **********  ****  **********  ");
        gotoxy(20, 9);
        Sleep(5);
        printf("  ****            ***    ***  ****  ****  ****  ****  ****  ");
        gotoxy(20, 10);
        Sleep(5);
        printf("  ****            ***    ***  ****  ****  ****  ****  ****  ");
        gotoxy(20, 11);
        Sleep(5);
        printf("  **************  ****  ****  **********  ****  ****  ****  ");
        gotoxy(20, 12);
        Sleep(5);
        printf("  **************   ********    *********  ****  ****  ****  ");
        gotoxy(20, 13);
        Sleep(5);
        printf("                                    ****                    ");
        gotoxy(20, 14);
        Sleep(5);
        printf("                              **********                    ");
        gotoxy(20, 15);
        Sleep(5);
        printf("                              **********                    ");
        Sleep(200);
        gotoxy(20, 3);
        printf("  %s                                                      ", s);
        gotoxy(20, 4);
        Sleep(5);
        printf("  %s                                    %s              ", s, s);
        gotoxy(20, 5);
        Sleep(5);
        printf("  %s                                    %s              ", s, s);
        gotoxy(20, 6);
        Sleep(5);
        printf("  %s                                                      ", s);
        gotoxy(20, 7);
        Sleep(5);
        printf("  %s             %s%s    %s%s%c  %s  %s%s%c   ", s, s, s, s, s, 219, s, s, s, 219);
        gotoxy(20, 8);
        Sleep(5);
        printf("  %s            %s  %s  %s%s%c%c  %s  %s%s%c%c  ", s, s, s, s, s, 219, 219, s, s, s, 219, 219);
        gotoxy(20, 9);
        Sleep(5);
        printf("  %s            %c%c%c    %c%c%c  %s  %s  %s  %s  %s  ", s, 219, 219, 219, 219, 219, 219, s, s, s, s, s);
        gotoxy(20, 10);
        Sleep(5);
        printf("  %s            %c%c%c    %c%c%c  %s  %s  %s  %s  %s  ", s, 219, 219, 219, 219, 219, 219, s, s, s, s, s);
        gotoxy(20, 11);
        Sleep(5);
        printf("  %s%s%s%c%c  %s  %s  %s%s%c%c  %s  %s  %s  ", s, s, s, 219, 219, s, s, s, s, 219, 219, s, s, s);
        gotoxy(20, 12);
        Sleep(5);
        printf("  %s%s%s%c%c   %s%s    %s%s%c  %s  %s  %s  ", s, s, s, 219, 219, s, s, s, s, 219, s, s, s);
        gotoxy(20, 13);
        Sleep(5);
        printf("                                    %s                    ", s);
        gotoxy(20, 14);
        Sleep(5);
        printf("                              %c%c%s%s                    ", 219, 219, s, s);
        gotoxy(20, 15);
        Sleep(5);
        printf("                              %c%c%s%s                    ", 219, 219, s, s);
    }
    gotoxy(68, 28);
    printf("PRESS SHIFT + 8 TO SHOW PASSWORD!!");
    do
    {
        textcolor(tc);
        bgcolor(15);
        n = 1;
        akunsama = 0;
        a = 61;
        for (int i = 0; i < 70; i++)
        {
            for (int j = 0; j < 9; j++)
            {
                if (i == 1 || i == 0 || i == 21 || i == 20 || j == 0 || i == 68 || i == 69 || j == 8 || j == 4)
                {
                    gotoxy(i + 50, j + 18);
                    printf("%c", 219);
                }
                else
                {
                    gotoxy(i + 50, j + 18);
                    printf(" ");
                }
            }
        }
        gotoxy(56, 20);
        printf("%s", l[0]);
        gotoxy(56, 24);
        printf("%s", l[1]);
        for (int i = 0; i <= 21; i++)
        {
            for (int j = 0; j < 5; j++)
            {
                if (i == 0 || i == 1 || j == 0 || i == 20 || i == 21 || j == 4)
                {
                    gotoxy(i + 61, j + 30);
                    printf("%c", 219);
                    gotoxy(i + 87, j + 30);
                    printf("%c", 219);
                }
                else
                {
                    gotoxy(i + 61, j + 30);
                    printf(" ");
                    gotoxy(i + 87, j + 30);
                    printf(" ");
                }
            }
        }
        gotoxy(68, 32);
        printf("%s", k[0]);
        gotoxy(94, 32);
        printf("%s", k[1]);
        c = 0;
        gotoxy(72, 20);
        printf("                                              ");
        gotoxy(72, 24);
        printf("                                              ");
        do
        {
            cekchar = 0;
            cekuser = 0;
            cektitik = 0;
            us = 0;
            strcpy(user, "0");
            gotoxy(72, 20);
            printf("                                              ");
            gotoxy(74, 20);

            do
            {
                user[us] = getch();
                if (user[us] == 8 && us > 0)
                {
                    user[us] = '\0';
                    us--;
                    printf("\b \b");
                }
                else if (user[us] == 13)
                {
                    user[us] = '\0';
                    us--;
                    break;
                }
                else if (us < 30 && (user[us] >= '0' && user[us] <= '9' || user[us] >= 'a' && user[us] <= 'z' || user[us] >= 'A' && user[us] <= 'Z' || user[us] == '.' && user[us - 1] != '.' && user[0] != '.'))
                {
                    printf("%c", user[us]);
                    us++;
                }
            } while (user[us] != 13);
            for (int i = 0; i < strlen(user); i++)
            {
                if (user[i] >= 'a' && user[i] <= 'z' || user[i] >= 'A' && user[i] <= 'Z')
                {
                    cekuser++;
                }
                if (user[i] >= '0' && user[i] <= '9')
                {
                    cekchar++;
                }
                if (user[i] == '.')
                {
                    cektitik++;
                }
            }
            if (user[strlen(user) - 1] == '.')
            {
                gotoxy(72, 20);
                printf("  username tidak boleh diakhiri titik     ");
                Sleep(1000);
                gotoxy(72, 20);
                printf("                                              ");
                strcpy(user, " ");
            }
            else if (cekuser < 3)
            {
                gotoxy(72, 20);
                printf("  username harus terdapat min. 3 huruf     ");
                Sleep(1000);
                gotoxy(72, 20);
                printf("                                              ");
                strcpy(user, " ");
            }
            else if (cekchar > 5)
            {
                gotoxy(72, 20);
                printf("  username terlalu banyak angka (max 5 digit)");
                Sleep(1000);
                gotoxy(72, 20);
                printf("                                              ");
                strcpy(user, " ");
            }
            else if (cektitik > 5)
            {
                gotoxy(72, 20);
                printf("  username terlalu banyak titik (max 5 titik)");
                Sleep(1000);
                gotoxy(72, 20);
                printf("                                              ");
                strcpy(user, " ");
            }
            else if (strlen(user) < 6)
            {
                gotoxy(72, 20);
                printf("  username harus berisi minimal 6 digit    ");
                Sleep(1000);
                gotoxy(72, 20);
                printf("                                              ");
            }
        } while (strlen(user) < 6);
        do
        {
            ps = 0;
            strcpy(pass, "0");
            gotoxy(72, 24);
            printf("                                              ");
            gotoxy(74, 24);
            do
            {
                pass[ps] = getch();
                if (pass[ps] == '*')
                {
                    c++;
                    if (c > 1)
                    {
                        c = 0;
                    }
                    for (int i = 0; i < ps; i++)
                    {
                        printf("\b \b");
                    }
                    if (c == 1)
                    {
                        for (int i = 0; i < ps; i++)
                        {
                            printf("%c", pass[i]);
                        }
                    }
                    else
                    {
                        for (int i = 0; i < ps; i++)
                        {
                            printf("*");
                        }
                    }
                }
                else if (pass[ps] == 8 && ps > 0)
                {
                    pass[ps] = '\0';
                    ps--;
                    printf("\b \b");
                }
                else if (pass[ps] == 13)
                {
                    pass[ps] = '\0';
                    ps--;
                    break;
                }
                else if (ps < 30 && pass[ps] != 8 && pass[ps] != '\t' && pass[ps] != ' ')
                {
                    if (c == 0)
                    {
                        printf("*");
                    }
                    else
                    {
                        printf("%c", pass[ps]);
                    }
                    ps++;
                }
            } while (pass[ps] != 13);
            if (strlen(pass) < 8)
            {
                gotoxy(72, 24);
                printf("  password harus berisi minimal 8 digit    ");
                Sleep(1000);
                gotoxy(72, 24);
                printf("                                              ");
            }
        } while (strlen(pass) < 8);
        bgcolor(bg);
        n = pilihlog1();
        textcolor(tc);
        bgcolor(bg);
        switch (n)
        {
        case 1:
            return 0;
        case 2:
            c = 0;
            FILE *file = fopen("PROJEKAN_AKUN.txt", "r");
            while (!feof(file))
            {
                fscanf(file, "%s", &userpad[c]);
                fscanf(file, "%s", &passpad[c]);
                c++;
            }
            fclose(file);
            for (int i = 0; i < c; i++)
            {
                if (strcmp(user, userpad[i]) == 0 && strcmp(pass, passpad[i]) == 0)
                {
                    akunsama = 1;
                }
            }
            if (akunsama == 1)
            {
                gotoxy(74, 36);
                printf("  LOGIN BERHASIL!!!   ");
                Sleep(1000);
                gotoxy(74, 36);
                printf("                      ");
                return 1;
            }
            else
            {
                gotoxy(76, 36);
                printf("  LOGIN GAGAL!!!  ");
                Sleep(1000);
                gotoxy(76, 36);
                printf("                  ");
                gagal++;
            }
            if (gagal == 3)
            {
                gotoxy(66, 36);
                printf("  LOGIN BERMASALAH,SILAKAN COBA LAGI NANTI!!!   ");
                Sleep(1000);
                gotoxy(66, 36);
                printf("                                                 ");
                return 0;
            }
            break;
        }
    } while (akunsama == 0);
}