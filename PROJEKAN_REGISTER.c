#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <windows.h>
void geraklog(int a, int c1)
{
    textcolor(c1);
    bgcolor(15);
    for (int i = 0; i <= 21; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (i == 0 || i == 1 || j == 0 || i == 20 || i == 21 || j == 4)
            {
                gotoxy(i + a, j + 25);
                printf("%c", 219);
            }
        }
    }
    gotoxy(a + 7, 27);
    printf("%s", k[(a - 60) / 26]);
    gotoxy(0, 0);
}
int pilihlog()
{

    do
    {
        geraklog(a, pc);
        p = getch();
        if (p == 77 && n < 2)
        {
            geraklog(a, tc);
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
            geraklog(a, tc);
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
void registrasi()
{
    a = 61;
    n = 1;
    textcolor(tc);
    bgcolor(bg);
    ulang = 0;
    FILE *file = fopen("PROJEKAN_AKUN.txt", "r");
    while (!feof(file))
    {
        fscanf(file, "%s\n", &userpad[ulang]);
        fscanf(file, "%s\n", &passpad[ulang]);
        ulang++;
    }
    fclose(file);
    for (int i = 1; i <= 3; i++)
    {
        gotoxy(31, 4);
        Sleep(10);
        printf("*********   **********   ********   ****   *********  **********  *********    ********    *********  ****\n");
        gotoxy(31, 5);
        Sleep(10);
        printf("****  ****  ****        ****  ****  ****  ****        **********  ****  ****  ****  ****  ****        ****\n");
        gotoxy(31, 6);
        Sleep(10);
        printf("****  ****  **********  ****        ****  **********     ****     ****  ****  ****  ****  **********  ****\n");
        gotoxy(31, 7);
        Sleep(10);
        printf("*********   **********  **** *****  ****  **********     ****     *********   **********  **********  ****\n");
        gotoxy(31, 8);
        Sleep(10);
        printf("**** ****   ****        ****  ****  ****        ****     ****     **** ****   ****  ****        ****  ****\n");
        gotoxy(31, 9);
        Sleep(10);
        printf("****  ****  **********   *********  ****  *********      ****     ****  ****  ****  ****  *********   ****\n");

        gotoxy(31, 4);
        Sleep(200);
        printf("%s%s%c   %s%s%c%c   %s%s   %s   %s%s%c  %s%s%c%c  %s%s%c    %s%s    %s%s%c  %s\n", s, s, 219, s, s, 219, 219, s, s, s, s, s, 219, s, s, 219, 219, s, s, 219, s, s, s, s, 219, s);
        gotoxy(31, 5);
        Sleep(10);
        printf("%s  %s  %s        %s  %s  %s  %s        %s%s%c%c  %s  %s  %s  %s  %s        %s\n", s, s, s, s, s, s, s, s, s, 219, 219, s, s, s, s, s, s);
        gotoxy(31, 6);
        Sleep(10);
        printf("%s  %s  %s%s%c%c  %s        %s  %s%s%c%c     %s     %s  %s  %s  %s  %s%s%c%c  %s\n", s, s, s, s, 219, 219, s, s, s, s, 219, 219, s, s, s, s, s, s, s, 219, 219, s);
        gotoxy(31, 7);
        Sleep(10);
        printf("%s%s%c   %s%s%c%c  %s %s%c  %s  %s%s%c%c     %s     %s%s%c   %s%s%c%c  %s%s%c%c  %s\n", s, s, 219, s, s, 219, 219, s, s, 219, s, s, s, 219, 219, s, s, s, 219, s, s, 219, 219, s, s, 219, 219, s);
        gotoxy(31, 8);
        Sleep(10);
        printf("%s %s   %s        %s  %s  %s        %s     %s     %s %s   %s  %s        %s  %s\n", s, s, s, s, s, s, s, s, s, s, s, s, s, s);
        gotoxy(31, 9);
        Sleep(10);
        printf("%s  %s  %s%s%c%c   %s%s%c  %s  %s%s%c      %s     %s  %s  %s  %s  %s%s%c   %s\n", s, s, s, s, 219, 219, s, s, 219, s, s, s, 219, s, s, s, s, s, s, s, 219, s);
    }
    gotoxy(64, 23);
    printf("PRESS SHIFT + 8 TO SHOW / HIDE PASSWORD!!!");
    for (int i = 0; i < 70; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            if (i == 1 || i == 0 || i == 21 || i == 20 || j == 0 || i == 68 || i == 69 || j == 8 || j == 4)
            {
                gotoxy(i + 50, j + 13);
                printf("%c", 219);
            }
            else
            {
                bgcolor(15);
                gotoxy(i + 50, j + 13);
                printf(" ");
            }
        }
    }
    gotoxy(56, 15);
    printf("%s", l[0]);
    gotoxy(56, 19);
    printf("%s", l[1]);

    do
    {
        for (int i = 0; i <= 21; i++)
        {
            for (int j = 0; j < 5; j++)
            {
                if (i == 0 || i == 1 || j == 0 || i == 20 || i == 21 || j == 4)
                {
                    gotoxy(i + 61, j + 25);
                    printf("%c", 219);
                    gotoxy(i + 87, j + 25);
                    printf("%c", 219);
                }
                else
                {
                    gotoxy(i + 61, j + 25);
                    printf(" ");
                    gotoxy(i + 87, j + 25);
                    printf(" ");
                }
            }
        }
        gotoxy(68, 27);
        printf("%s", k[0]);
        gotoxy(94, 27);
        printf("%s", k[1]);
        do
        {
            c = 0;
            akunsama = 0;
            gotoxy(72, 15);
            printf("                                              ");
            gotoxy(72, 19);
            printf("                                              ");
            do
            {
                cekchar = 0;
                cektitik = 0;
                cekuser = 0;
                us = 0;
                strcpy(user, "0");
                gotoxy(72, 15);
                printf("                                              ");
                gotoxy(74, 15);

                do
                {
                    user[us] = getch();
                    if (user[us] == 13)
                    {
                        user[us] = '\0';
                        us--;
                        break;
                    }
                    else if (user[us] == 8 && us > 0)
                    {
                        user[us] = '\0';
                        us--;
                        printf("\b \b");
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
                    gotoxy(72, 15);
                    printf("  username tidak boleh diakhiri titik     ");
                    Sleep(1000);
                    gotoxy(72, 15);
                    printf("                                              ");
                    strcpy(user, " ");
                }
                else if (cekuser < 3)
                {
                    gotoxy(72, 15);
                    printf("  username harus terdapat min. 3 huruf     ");
                    Sleep(1000);
                    gotoxy(72, 15);
                    printf("                                              ");
                    strcpy(user, " ");
                }
                else if (cekchar > 5)
                {
                    gotoxy(72, 15);
                    printf("  username terlalu banyak angka (max 5 digit)");
                    Sleep(1000);
                    gotoxy(72, 15);
                    printf("                                              ");
                    strcpy(user, " ");
                }
                else if (cektitik > 5)
                {
                    gotoxy(72, 15);
                    printf("  username terlalu banyak titik (max 5 titik)");
                    Sleep(1000);
                    gotoxy(72, 15);
                    printf("                                              ");
                    strcpy(user, " ");
                }
                else if (strlen(user) < 6)
                {
                    gotoxy(72, 15);
                    printf("  username harus berisi minimal 6 digit    ");
                    Sleep(1000);
                    gotoxy(72, 15);
                    printf("                                              ");
                }
            } while (strlen(user) < 6);
            do
            {
                ps = 0;
                strcpy(pass, "0");
                gotoxy(72, 19);
                printf("                                              ");
                gotoxy(74, 19);
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
                    gotoxy(72, 19);
                    printf("  password harus berisi minimal 8 digit    ");
                    Sleep(1000);
                    gotoxy(72, 19);
                    printf("                                              ");
                }
            } while (strlen(pass) < 8);
            gotoxy(72, 19);
            printf("                                              ");
            gotoxy(72, 19);
            printf("  Harap Konfirmasi Ulang Password!!         ");
            Sleep(1000);
            gotoxy(72, 19);
            printf("                                              ");
            gotoxy(74, 19);
            ps = 0;
            do
            {
                pass1[ps] = getch();
                if (pass1[ps] == '*')
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
                            printf("%c", pass1[i]);
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
                else if (pass1[ps] == 8 && ps > 0)
                {
                    pass1[ps] = '\0';
                    ps--;
                    printf("\b \b");
                }
                else if (pass1[ps] == 13)
                {
                    pass1[ps] = '\0';
                    ps--;
                    break;
                }
                else if (ps < 30 && pass1[ps] != 8 && pass1[ps] != '\t' && pass1[ps] != ' ')
                {
                    if (c == 0)
                    {
                        printf("*");
                    }
                    else
                    {
                        printf("%c", pass1[ps]);
                    }
                    ps++;
                }
            } while (pass1[ps] != 13);
            if (strcmp(pass, pass1) != 0)
            {
                gotoxy(72, 19);
                printf("  Input Password Tidak Sesuai!!         ");
                Sleep(1000);
                gotoxy(72, 19);
                printf("                                              ");
            }
        } while (strcmp(pass, pass1) != 0);
        do
        {
            n = pilihlog();
            textcolor(tc);
            bgcolor(bg);
            switch (n)
            {
            case 1:
                cek = 1;
                break;
            case 2:
                for (int i = 0; i < ulang; i++)
                {
                    if (strcmp(user, userpad[i]) == 0)
                    {
                        akunsama = 1;
                    }
                }
                if (akunsama == 1)
                {
                    textcolor(tc);
                    gotoxy(48, 33);
                    printf("                                                                          ");
                    gotoxy(68, 33);
                    printf("  USERNAME INI SUDAH TERDAFTAR!!  ");
                    Sleep(1000);
                    gotoxy(48, 33);
                    printf("                                                                          ");
                    cek = 1;
                }
                else if (ulang < 3)
                {
                    gotoxy(10, 10);
                    FILE *file = fopen("PROJEKAN_AKUN.txt", "a");
                    fprintf(file, "%s\n", user);
                    fprintf(file, "%s\n", pass);
                    fclose(file);
                    cek = 1;
                    textcolor(tc);
                    gotoxy(48, 33);
                    printf("                                                                          ");
                    gotoxy(70, 33);
                    printf("  PENDAFTARAN AKUN BERHASIL!!  ");
                }
                else
                {
                    textcolor(tc);
                    gotoxy(48, 33);
                    printf("                                                                          ");
                    gotoxy(48, 33);
                    printf("  AKUN ADMIN SUDAH BERJUMLAH 3 AKUN, TIDAK DAPAT MENAMBAHKAN AKUN LAGI!!! ");
                    cek = 0;
                }
                break;
            }
            bgcolor(15);
        } while (cek == 0);
    } while (akunsama == 1);
}