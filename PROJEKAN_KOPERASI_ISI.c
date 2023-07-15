#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <stdbool.h>
#include "PROJEKAN_MASUK_KOPERASI.c"
#include "PROJEKAN_REGISTER.c"
#include "PROJEKAN_LOGIN.c"
#include "PROJEKAN_LOADING.c"

void backcolor(int c)
{
    switch (c)
    {
    case 1:
        system("color e4");
        break;
    case 2:
        system("color b1");
        break;
    case 3:
        system("color 70");
        break;
    }
}
void setelan()
{
    miderase();
    bgcolor(15);
    for (int x = 1; x <= 5; x++)
    {
        for (int y = 1; y <= 25; y += 2)
        {

            if (x == 1 || x == 5 || y == 1 || y == 25)
            {
                gotoxy(y + 26, x + 25);
                printf("%c%c", 219, 219);
                gotoxy(y + 56, x + 25);
                printf("%c%c", 219, 219);
                gotoxy(y + 86, x + 25);
                printf("%c%c", 219, 219);
                gotoxy(y + 116, x + 25);
                printf("%c%c", 219, 219);
                if (x == 5)
                {
                    gotoxy(33, 28);
                    printf("%s", setting[0]);
                    gotoxy(63, 28);
                    printf("%s", setting[1]);
                    gotoxy(93, 28);
                    printf("%s", setting[2]);
                    gotoxy(123, 28);
                    printf("%s", setting[3]);
                }
                Sleep(5);
            }
            else
            {
                gotoxy(y + 26, x + 25);
                printf("  ");
                gotoxy(y + 56, x + 25);
                printf("  ");
                gotoxy(y + 86, x + 25);
                printf("  ");
                gotoxy(y + 116, x + 25);
                printf("  ");
            }
        }
    }
    bgcolor(bg);
    n = pilih(2);
    switch (n)
    {
    case 1:
        back = 1;
        tc = 4;
        bg = 14;
        pc = 6;
        break;
    case 2:
        back = 2;
        tc = 1;
        bg = 11;
        pc = 3;
        break;
    case 3:
        back = 3;
        tc = 0;
        bg = 7;
        pc = 8;
        break;
    case 4:
        break;
    }
    FILE *file = fopen("PROJEKAN_WARNA_KOPERASI.txt", "w");
    fprintf(file, "%d\n", back);
    fprintf(file, "%d\n", tc);
    fprintf(file, "%d\n", bg);
    fprintf(file, "%d\n", pc);
    fclose(file);
}
void closed()
{
    textcolor(tc);
    bgcolor(bg);
    int k = strlen(close);
    for (int i = 0; i < strlen(close); i++)
    {
        for (int j = 0; j <= i; j++)
        {
            gotoxy(75 + k + j, 17);
            printf("%c", close[j]);
        }
        Sleep(50);
        k--;
    }
    for (int i = 1; i <= 52; i++)
    {
        gotoxy(58 + i, 18);
        printf("%c", 219);
        gotoxy(58 + i, 20);
        printf("%c", 219);
        if (i < 4)
        {
            gotoxy(59, 17 + i);
            printf("%c", 219);
            gotoxy(110, 17 + i);
            printf("%c", 219);
        }
    }
    textcolor(8);
    for (int i = 1; i <= 50; i++)
    {
        gotoxy(59 + i, 19);
        printf("%c", 219);
        Sleep(10);
        gotoxy(82, 21);
        printf("%3d %%", i * 2);
    }
    Sleep(1000);
    exit(0);
}

void gerak(int a, int c1, int j)
{
    textcolor(c1);
    bgcolor(15);
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 25; j++)
        {
            if (i == 1 || j == 1 || i == 5 || j == 25)
            {
                gotoxy(j + a, i + 25);
                printf("%c%c", 219, 219);
            }
        }
    }
    gotoxy(a + 7, 28);
    if (j == 1)
    {
        printf("%s", awal[(a - 25) / 30]);
    }
    else if (j == 2)
    {
        printf("%s", setting[(a - 25) / 30]);
    }
    gotoxy(0, 0);
}
int pilih(int j)
{
    n = 1;
    a = 26;
    do
    {
        gerak(a, pc, j);
        p = getch();
        if (p == 77 && n < 4)
        {
            gerak(a, tc, j);
            a += 30;
            n++;
            if (n > 4)
            {
                n = 1;
                a = 26;
            }
        }
        else if (p == 75 && n > 1)
        {
            gerak(a, tc, j);
            n--;
            a -= 30;
            if (n < 1)
            {
                n = 4;
                a = 116;
            }
        }
        else if (p == 13)
        {
            return n;
        }
    } while (true);

    getch();
}

int first()
{
    loading();
    do
    {
        erase();
        textcolor(tc);
        bgcolor(bg);
        int j = 168;
        int k = 0;
        for (int i = 0; i <= 84; i += 2)
        {
            gotoxy(i, 0);
            printf("%c%c", 219, 219);
            gotoxy(i, 39);
            printf("%c%c", 219, 219);
            gotoxy(j, 0);
            printf("%c%c", 219, 219);
            gotoxy(j, 39);
            printf("%c%c", 219, 219);
            if (i <= 77)
            {
                gotoxy(0, k);
                printf("%c%c", 219, 219);
                gotoxy(168, k);
                printf("%c%c", 219, 219);
            }
            Sleep(1);
            j -= 2;
            k++;
        }
        backcolor(back);
        for (int i = 1; i <= 3; i++)
        {
            gotoxy(60, 7);
            Sleep(1);
            printf("                ******************                ");
            gotoxy(60, 8);
            Sleep(1);
            printf("         ********************************         ");
            gotoxy(60, 9);
            Sleep(1);
            printf("     ****************************************     ");
            gotoxy(60, 10);
            Sleep(1);
            printf("  **********************************************  ");
            gotoxy(60, 11);
            Sleep(1);
            printf(" ************************************************ ");
            gotoxy(60, 12);
            Sleep(1);
            printf("**************************************************");
            gotoxy(60, 13);
            Sleep(1);
            printf("**************************************************");
            gotoxy(60, 14);
            Sleep(1);
            printf("*  **  **  **  **  **  ****  **  **  **  **  **  *");
            gotoxy(60, 15);
            Sleep(1);
            printf("*  **  **  **  **  **  ****  **  **  **  **  **  *");
            gotoxy(60, 16);
            Sleep(1);
            printf("                       ****                       ");
            gotoxy(60, 17);
            Sleep(1);
            printf("                     ********                     ");
            gotoxy(60, 18);
            Sleep(1);
            printf("                   ************                   ");
            gotoxy(60, 7);
            Sleep(100);
            printf("                %s%s%c%c                ", c1, c1, 219, 219);
            gotoxy(60, 8);
            Sleep(1);
            printf("         %s%s%s%s         ", c1, c1, c1, c1);
            gotoxy(60, 9);
            Sleep(1);
            printf("     %s%s%s%s%s     ", c1, c1, c1, c1, c1);
            gotoxy(60, 10);
            Sleep(1);
            printf("  %s%s%s%s%s%c%c%c%c%c%c  ", c1, c1, c1, c1, c1, 219, 219, 219, 219, 219, 219);
            gotoxy(60, 11);
            Sleep(1);
            printf(" %s%s%s%s%s%s ", c1, c1, c1, c1, c1, c1);
            gotoxy(60, 12);
            Sleep(1);
            printf("%s%s%s%s%s%s%c%c", c1, c1, c1, c1, c1, c1, 219, 219);
            gotoxy(60, 13);
            Sleep(1);
            printf("%s%s%s%s%s%s%c%c", c1, c1, c1, c1, c1, c1, 219, 219);
            gotoxy(60, 14);
            Sleep(1);
            printf("%c  %c%c  %c%c  %c%c  %c%c  %c%c  %c%c%c%c  %c%c  %c%c  %c%c  %c%c  %c%c  %c", 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219);
            gotoxy(60, 15);
            Sleep(1);
            printf("%c  %c%c  %c%c  %c%c  %c%c  %c%c  %c%c%c%c  %c%c  %c%c  %c%c  %c%c  %c%c  %c", 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219);
            gotoxy(60, 16);
            Sleep(1);
            printf("                       %c%c%c%c                       ", 219, 219, 219, 219);
            gotoxy(60, 17);
            Sleep(1);
            printf("                     %s                     ", c1);
            gotoxy(60, 18);
            Sleep(1);
            printf("                   %s%c%c%c%c                   ", c1, 219, 219, 219, 219);
        }
        bgcolor(15);
        for (int x = 1; x <= 5; x++)
        {
            for (int y = 1; y <= 25; y += 2)
            {

                if (x == 1 || x == 5 || y == 1 || y == 25)
                {
                    gotoxy(y + 26, x + 25);
                    printf("%c%c", 219, 219);
                    gotoxy(y + 56, x + 25);
                    printf("%c%c", 219, 219);
                    gotoxy(y + 86, x + 25);
                    printf("%c%c", 219, 219);
                    gotoxy(y + 116, x + 25);
                    printf("%c%c", 219, 219);
                    if (x == 5)
                    {
                        gotoxy(33, 28);
                        printf("%s", awal[0]);
                        gotoxy(63, 28);
                        printf("%s", awal[1]);
                        gotoxy(93, 28);
                        printf("%s", awal[2]);
                        gotoxy(123, 28);
                        printf("%s", awal[3]);
                    }
                    Sleep(5);
                }
                else
                {
                    gotoxy(y + 26, x + 25);
                    printf("  ");
                    gotoxy(y + 56, x + 25);
                    printf("  ");
                    gotoxy(y + 86, x + 25);
                    printf("  ");
                    gotoxy(y + 116, x + 25);
                    printf("  ");
                }
            }
        }
        bgcolor(bg);
        // getch();
        n = pilih(1);
        if (n == 1)
        {
            erase();
            n = sebelumlogin();
            switch (n)
            {
            case 1:
                erase();
                if (koderegistrasi() == true)
                {
                    erase();
                    registrasi();
                }
                break;
            case 2:
                erase();
                n = login();
                if (n == 1)
                {
                    masuk();
                }
                break;
            }
        }
        else if (n == 2)
        {
            tentang();
        }
        else if (n == 3)
        {
            setelan();
        }
        else
        {
            erase();
            textcolor(tc);
            bgcolor(15);
            if (sebelum("APAKAH ANDA INGIN KELUAR??") == 2)
            {
                erase();
                closed();
                return 0;
            }
        }
    } while (true);
}

void tentang()
{
    erase();
    textcolor(tc);
    char kata[1000] = "Koperasi simpan pinjam adalah lembaga yang bergerak dalam bidang keuangan dengan kegiatanusaha yang berupa menerima simpanan maupun pinjaman. Dalam menjalankan usahanya, semua   tipe kopersi memegang asas yang sama yaitu asas kekeluargaan. Hal ini ditujukan untuk                  membantu meningkatkan kesejahteraan masyarakat Indonesia.";
    strupr(kata);
    int a = 13;
    int z = 0;

    for (int i = 1; i <= 100; i++)
    {
        for (int j = 1; j <= 10; j++)
        {
            if (i == 1 || j == 1 || i == 100 || j == 100)
            {
                gotoxy(i + 35, 11);
                printf("%c", 219);
                gotoxy(i + 35, 21);
                printf("%c", 219);
                gotoxy(36, j + 10);
                printf("%c", 219);
                if (i == 100)
                {
                    gotoxy(135, j + 10);
                    printf("%c", 219);
                }
                Sleep(1);
            }
            else
            {
                bgcolor(15);
                gotoxy(i + 35, j + 10);
                printf(" ");
            }
        }
    }
    for (int i = 1; i <= 50; i++)
    {
        for (int j = 1; j <= 4; j++)
        {
            if (i == 1 || j == 1 || i == 50 || j == 100)
            {
                gotoxy(i + 60, 25);
                printf("%c", 219);
                gotoxy(61, j + 20);
                printf("%c", 219);
                gotoxy(110, j + 20);
                printf("%c", 219);
            }
            else
            {
                bgcolor(15);
                gotoxy(i + 60, j + 20);
                printf(" ");
            }
        }
    }
    for (int x = 0; x < strlen(kata); x++)
    {
        gotoxy(z + 41, a);
        printf("%c", kata[x]);
        if (kata[x] != ' ')
            Sleep(20);
        if (x % 88 == 0 && x != 0)
        {
            z = 0;
            a += 2;
        }
        z++;
    }
    gotoxy(70, 23);
    Sleep(500);
    system("pause");
    bgcolor(bg);
}
void erase()
{
    bgcolor(bg);
    for (int i = 1; i <= 166; i += 2)
    {
        for (int j = 1; j <= 38; j++)
        {
            gotoxy(i + 1, j);
            printf("  ");
        }
        Sleep(1);
    }
}

void geserlogin(int x, int c1)
{
    textcolor(c1);
    bgcolor(15);
    for (int i = 0; i < 20; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (i == 0 || i == 1 || i == 18 || i == 19 || j == 0 || j == 4)
            {
                gotoxy(i + x, j + 22);
                printf("%c", 219);
            }
        }
    }
    gotoxy(x + 6, 24);
    printf("%s", log1[(x - 59) / 30]);
    gotoxy(0, 0);
}
int pilihlogin()
{
    a = 60;
    n = 1;
    do
    {
        geserlogin(a, pc);
        p = getch();
        if (p == 77 && n < 2)
        {
            geserlogin(a, tc);
            a += 30;
            n++;
            if (n > 2)
            {
                a = 60;
                n = 1;
            }
        }
        else if (p == 75 && n > 1)
        {
            geserlogin(a, tc);
            a -= 30;
            n--;
            if (n < 1)
            {
                a = 90;
                n = 2;
            }
        }
        else if (p == 13)
        {
            return n;
        }
    } while (true);
}
int sebelumlogin()
{
    textcolor(tc);
    for (int i = 0; i < 100; i++)
    {
        for (int j = 0; j < 21; j++)
        {
            if (i == 0 || i == 1 || i == 98 || i == 99 || j == 0 || j == 20)
            {
                gotoxy(i + 35, j + 10);
                printf("%c", 219);
            }
            else
            {
                bgcolor(15);
                gotoxy(i + 35, j + 10);
                printf(" ");
            }
        }
        Sleep(1);
    }
    gotoxy(76, 14);
    printf("LOGIN / REGISTER??");
    for (int i = 0; i < 20; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (i == 0 || i == 1 || i == 18 || i == 19 || j == 0 || j == 4)
            {
                gotoxy(i + 60, j + 22);
                printf("%c", 219);
                gotoxy(i + 90, j + 22);
                printf("%c", 219);
            }
            else
            {
                gotoxy(i + 60, j + 22);
                printf(" ");
                gotoxy(i + 90, j + 22);
                printf(" ");
            }
        }
    }
    gotoxy(66, 24);
    printf("%s", log1[0]);
    gotoxy(96, 24);
    printf("%s", log1[1]);
    n = pilihlogin();
    return n;
}
int koderegistrasi()
{
    textcolor(tc);
    for (int i = 0; i < 50; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (i == 0 || i == 1 || i == 48 || i == 49 || j == 0 || j == 4)
            {
                gotoxy(i + 60, j + 17);
                printf("%c", 219);
            }
            else
            {
                bgcolor(15);
                gotoxy(i + 60, j + 17);
                printf(" ");
            }
        }
        Sleep(1);
    }
    FILE *kode = fopen("KODE_UNIK.txt", "r");
    fscanf(kode, "%s", &kodeunikpad);
    fclose(kode);
    gotoxy(67, 19);
    printf("INPUT KODE : ");
    kode1 = 0;
    c = 0;
    do
    {
        kodeunik[kode1] = getch();
        if (kodeunik[kode1] == '*')
        {
            c++;
            if (c > 1)
            {
                c = 0;
            }
            for (int i = 0; i < kode1; i++)
            {
                printf("\b \b");
            }
            if (c == 1)
            {
                for (int i = 0; i < kode1; i++)
                {
                    printf("%c", kodeunik[i]);
                }
            }
            else
            {
                for (int i = 0; i < kode1; i++)
                {
                    printf("*");
                }
            }
        }
        else if (kodeunik[kode1] == 13)
        {
            kodeunik[kode1] = '\0';
            kode1--;
            break;
        }
        else if (kodeunik[kode1] == 8 && kode1 > 0)
        {
            kodeunik[kode1] = '\0';
            kode1--;
            printf("\b \b");
        }
        else if (kodeunik[kode1] >= '0' && kodeunik[kode1] <= '9' && kode1 < 10)
        {
            if (c == 0)
            {
                printf("*");
            }
            else
            {
                printf("%c", kodeunik[kode1]);
            }
            kode1++;
        }

    } while (kodeunik[kode1] != 13);
    for (int i = 0; i < strlen(kodeunik); i++)
    {
        kodeunik[i] += 20;
    }
    if (strcmp(kodeunik, kodeunikpad) == 0)
    {
        gotoxy(67, 19);
        printf("           KODE BENAR!!!          ");
        Sleep(1000);
        gotoxy(67, 19);
        printf("                                  ");
        bgcolor(bg);
        return true;
    }
    else
    {
        gotoxy(67, 19);
        printf("           KODE SALAH!!!          ");
        Sleep(1000);
        gotoxy(67, 19);
        printf("                                  ");
        bgcolor(bg);
        return false;
    }
}