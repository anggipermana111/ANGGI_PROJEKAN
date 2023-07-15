#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <windows.h>
#include <stdbool.h>
#include <time.h>
#include "PROJEKAN_SIMPANAN_KOPERASI.c"
#include "PROJEKAN_PINJAMAN.c"
#include "PROJEKAN_ANGSURAN.c"
void masuk()
{
    do
    {
        erase();
        textcolor(tc);
        bgcolor(bg);
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
        for (int x = 1; x <= 5; x++)
        {
            for (int y = 1; y <= 25; y += 2)
            {

                if (x == 1 || x == 5 || y == 1 || y == 25)
                {
                    gotoxy(y + 27, x + 20);
                    printf("%c%c", 219, 219);
                    gotoxy(y + 49, x + 27);
                    printf("%c%c", 219, 219);
                    gotoxy(y + 71, x + 20);
                    printf("%c%c", 219, 219);
                    gotoxy(y + 93, x + 27);
                    printf("%c%c", 219, 219);
                    gotoxy(y + 115, x + 20);
                    printf("%c%c", 219, 219);
                    if (x == 5)
                    {
                        gotoxy(34, 23);
                        printf("%s", menu[0]);
                        gotoxy(56, 30);
                        printf("%s", menu[1]);
                        gotoxy(78, 23);
                        printf("%s", menu[2]);
                        gotoxy(100, 30);
                        printf("%s", menu[3]);
                        gotoxy(122, 23);
                        printf("%s", menu[4]);
                    }
                    Sleep(5);
                }
                else
                {
                    bgcolor(15);
                    gotoxy(y + 27, x + 20);
                    printf("  ");
                    gotoxy(y + 49, x + 27);
                    printf("  ");
                    gotoxy(y + 71, x + 20);
                    printf("  ");
                    gotoxy(y + 93, x + 27);
                    printf("  ");
                    gotoxy(y + 115, x + 20);
                    printf("  ");
                }
            }
        }
        n = pilihan();
        switch (n)
        {
        case 1:
            daftaranggota();
            break;
        case 2:
            simpanananggota();
            break;
        case 3:
            pinjamananggota();
            break;
        case 4:
            angsurananggota();
            break;
        }
    } while (n != 5);
}
void erasedaftar()
{
    for (int i = 0; i < 160; i++)
    {
        for (int j = 0; j < 25; j++)
        {
            gotoxy(5 + i, 11 + j);
            printf(" ");
        }
    }
}
void geser(int x, int y, int c1)
{
    textcolor(c1);
    bgcolor(15);
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 25; j += 2)
        {

            if (i == 1 || i == 5 || j == 1 || j == 25)
            {
                gotoxy(j + x, i + y);
                printf("%c%c", 219, 219);
            }
        }
    }
    gotoxy(x + 7, y + 3);
    printf("%s", menu[(x - 26) / 22]);
    gotoxy(0, 0);
}
int pilihan()
{
    n = 1;
    x = 27;
    y = 20;
    do
    {
        geser(x, y, pc);
        p = getch();
        if (p == 77 && n < 5)
        {
            geser(x, y, tc);
            x += 22;
            n++;
            if (n == 2 || n == 4)
            {
                y = 27;
            }
            else
            {
                y = 20;
            }
            if (n > 5)
            {
                x = 27;
                n = 1;
            }
        }
        else if (p == 75 && n > 1)
        {
            geser(x, y, tc);
            x -= 22;
            n--;
            if (n == 2 || n == 4)
            {
                y = 27;
            }
            else
            {
                y = 20;
            }
            if (n < 1)
            {
                x = 115;
                n = 5;
            }
        }
        else if (p == 13)
        {
            return n;
        }
    } while (true);
}

void geserdaftar(int x, int y, int c1, int index, int jenis)
{
    textcolor(c1);
    bgcolor(15);
    for (int i = 0; i < 20; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (i == 0 || i == 1 || i == 18 || i == 19 || j == 0 || j == 4)
            {
                gotoxy(i + x, j + y);
                printf("%c", 219);
            }
        }
    }
    if (jenis == 1)
    {

        if (index == 0)
        {
            gotoxy(135, 6);
            printf("TAMBAH ANGGOTA");
        }
        if (index > 0)
        {
            gotoxy(x + 3, y + 2);
            printf("%s", daftar[(x - 21) / 121]);
        }
    }
    if (jenis == 2)
    {

        if (index == 0)
        {
            gotoxy(135, 6);
            printf("   KEMBALI    ");
        }
        if (index > 0)
        {
            gotoxy(x + 3, y + 2);
            printf("%s", simpan1[(x - 21) / 121]);
        }
    }
    if (jenis == 3)
    {
        if (index == 0)
        {
            gotoxy(135, 6);
            printf("   KEMBALI    ");
        }
        if (index > 0)
        {
            gotoxy(x + 3, y + 2);
            printf("%s", pinjam1[(x - 21) / 121]);
        }
    }
    if (jenis == 4)
    {
        if (index == 0)
        {
            gotoxy(135, 6);
            printf("   KEMBALI    ");
        }
        if (index > 0)
        {
            gotoxy(x + 3, y + 2);
            printf("%s", angsur1[(x - 21) / 121]);
        }
    }
    gotoxy(0, 0);
}
int pilihdaftar(int max, int sesi, int jenis)
{
    if (cd4 == -1)
    {
        max = 0;
        sesi = 0;
    }
    xd = 132;
    yd = 4;
    nd = 0;
    id = 0;
    max2 = max;
    max += sesi * 4;
    do
    {
        geserdaftar(xd, yd, pc, id, jenis);
        pd = getch();
        switch (pd)
        {
        case 72:
            geserdaftar(xd, yd, tc, id, jenis);
            id--;
            yd -= 6;
            if (id <= (max - max2))
            {
                id = 0;
                yd = 4;
            }
            if (id < 0)
            {
                id = 0;
            }
            if (id == 0)
            {
                xd = 132;
                yd = 4;
                nd = 0;
                break;
            }
            break;
        case 80:
            geserdaftar(xd, yd, tc, id, jenis);
            if (id < max)
            {
                if (id == 0)
                {
                    id += sesi * 4;
                }
                id++;
                yd += 6;
            }
            if (id == 0)
            {
                xd = 132;
                yd = 4;
                nd = 0;
                break;
            }
            else if ((id - 1) % 4 == 0 && xd == 132)
            {
                xd = 121;
                yd = 12;
                nd = 1;
            }
            break;
        case 77:
            if (id > 0 && nd < 2)
            {
                geserdaftar(xd, yd, tc, id, jenis);
                xd += 22;
                nd++;
            }
            break;
        case 75:
            if (id > 0 && nd > 1)
            {

                geserdaftar(xd, yd, tc, id, jenis);
                xd -= 22;
                nd--;
            }
            break;
        case '\t':
            if (sesi < cd4)
            {

                return -1;
            }
            break;
        case ' ':
            if (sesi > 0)
            {
                return -2;
            }
            break;
        case '\b':
            return -3;
        case 13:
            idx = id;
            return nd;
        }
    } while (true);
}
void daftaranggota()
{
    do
    {
        textcolor(tc);
        char kodeanggota[100][5][100] = {};
        char namaanggota[100][5][100] = {};
        char kotaanggota[100][5][100] = {};
        char tgllanggota[100][5][100] = {};
        char nohpanggota[100][5][100] = {};
        val = 0;
        erase();
        for (int i = 1; i <= 3; i++)
        {
            gotoxy(5, 3);
            Sleep(10);
            printf("*********    ********   **********  **********   ********   ********* ");
            gotoxy(5, 4);
            Sleep(10);
            printf("****  ****  ****  ****  **********  **********  ****  ****  ****  ****");
            gotoxy(5, 5);
            Sleep(10);
            printf("****  ****  ****  ****  ****           ****     ****  ****  ****  ****");
            gotoxy(5, 6);
            Sleep(10);
            printf("****  ****  **********  *******        ****     **********  ********* ");
            gotoxy(5, 7);
            Sleep(10);
            printf("****  ****  ****  ****  ****           ****     ****  ****  **** **** ");
            gotoxy(5, 8);
            Sleep(10);
            printf("*********   ****  ****  ****           ****     ****  ****  ****  ****");
            Sleep(200);
            gotoxy(5, 3);
            Sleep(10);
            printf("%s%s%c    %s%s   %s%s%c%c  %s%s%c%c   %s%s   %s%s%c ", s, s, 219, s, s, s, s, 219, 219, s, s, 219, 219, s, s, s, s, 219);
            gotoxy(5, 4);
            Sleep(10);
            printf("%s  %s  %s  %s  %s%s%c%c  %s%s%c%c  %s  %s  %s  %s", s, s, s, s, s, s, 219, 219, s, s, 219, 219, s, s, s, s);
            gotoxy(5, 5);
            Sleep(10);
            printf("%s  %s  %s  %s  %s           %s     %s  %s  %s  %s", s, s, s, s, s, s, s, s, s, s);
            gotoxy(5, 6);
            Sleep(10);
            printf("%s  %s  %s%s%c%c  %s%c%c%c        %s     %s%s%c%c  %s%s%c ", s, s, s, s, 219, 219, s, 219, 219, 219, s, s, s, 219, 219, s, s, 219);
            gotoxy(5, 7);
            Sleep(10);
            printf("%s  %s  %s  %s  %s           %s     %s  %s  %s %s ", s, s, s, s, s, s, s, s, s, s);
            gotoxy(5, 8);
            Sleep(10);
            printf("%s%s%c   %s  %s  %s           %s     %s  %s  %s  %s", s, s, 219, s, s, s, s, s, s, s, s);
        }
        gotoxy(77, 5);
        printf("    [ENTER] UNTUK MEMILIH>>");
        gotoxy(77, 6);
        printf("                          ");
        gotoxy(77, 7);
        printf("[BACKSPACE] UNTUK <<KEMBALI");
        gotoxy(107, 5);
        printf("  [TAB] UNTUK NEXT>>    ");
        gotoxy(107, 6);
        printf("                        ");
        gotoxy(107, 7);
        printf("[SPASI] UNTUK <<PREVIEW ");
        for (int i = 0; i < 164; i++)
        {
            for (int j = 0; j < 27; j++)
            {
                if (i == 0 || i == 1 || i == 162 || i == 163 || j == 0 || j == 26)
                {
                    gotoxy(i + 3, j + 10);
                    printf("%c", 219);
                }
                else
                {
                    bgcolor(15);
                    gotoxy(i + 3, j + 10);
                    printf(" ");
                }
            }
            if (i % 4 == 0)
            {
                Sleep(1);
            }
        }
        for (int i = 0; i < 20; i++)
        {
            for (int j = 0; j < 5; j++)
            {
                if (i == 0 || i == 1 || i == 18 || i == 19 || j == 0 || j == 4)
                {
                    gotoxy(i + 132, j + 4);
                    printf("%c", 219);
                }
                else
                {
                    gotoxy(i + 132, j + 4);
                    printf(" ");
                }
            }
        }
        FILE *file = fopen("./PROJEKAN_DAFTARANGGOTA_KOPERASI.txt", "r");
        cd = 0;
        cd4 = 0;
        while (!feof(file))
        {
            fscanf(file, "%[^\n]s", &kodeanggota[cd4][cd]);
            fgets(slash[cd], 100, file);
            fscanf(file, "%[^\n]s", &namaanggota[cd4][cd]);
            fgets(slash[cd], 100, file);
            fscanf(file, "%[^\n]s", &kotaanggota[cd4][cd]);
            fgets(slash[cd], 100, file);
            fscanf(file, "%[^\n]s", &tgllanggota[cd4][cd]);
            fgets(slash[cd], 100, file);
            fscanf(file, "%[^\n]s", &nohpanggota[cd4][cd]);
            fgets(slash[cd], 100, file);
            if (kodeanggota[cd4][cd][0] != '0' && val == 0)
            {
                cd--;
                val = 1;
            }
            if (cd + 1 == 4)
            {
                cek1[cd4] = cd + 1;
                cd4++;
                cd = -1;
            }
            cd++;
        }
        if (cd > 0)
        {
            cek1[cd4] = cd;
        }
        else
        {
            cd4--;
        }
        fclose(file);
        int l = 0;
        do
        {
            beda = 0;
            erasedaftar();
            for (int k = 0; k < cek1[l] && cd4 != -1; k++)
            {
                for (int i = 0; i < 112; i++)
                {
                    for (int j = 0; j < 5; j++)
                    {
                        if (i == 0 || i == 1 || i == 9 || i == 10 || i == 44 || i == 45 || i == 79 || i == 80 || i == 93 || i == 94 || i == 110 || i == 111 || j == 0 || j == 4)
                        {
                            gotoxy(i + 7, j + 12 + beda);
                            printf("%c", 219);
                        }
                    }
                }
                gotoxy(10, 14 + beda);
                printf("KA%-3s", kodeanggota[l][k]);
                gotoxy(19, 14 + beda);
                printf("%-30s", namaanggota[l][k]);
                gotoxy(54, 14 + beda);
                printf("%-30s", kotaanggota[l][k]);
                gotoxy(89, 14 + beda);
                printf("%-10s", tgllanggota[l][k]);
                gotoxy(103, 14 + beda);
                printf("%-13s", nohpanggota[l][k]);
                for (int i = 0; i < 20; i++)
                {
                    for (int j = 0; j < 5; j++)
                    {
                        if (i == 0 || i == 1 || i == 18 || i == 19 || j == 0 || j == 4)
                        {
                            gotoxy(i + 121, j + 12 + beda);
                            printf("%c", 219);
                            gotoxy(i + 143, j + 12 + beda);
                            printf("%c", 219);
                        }
                    }
                }
                gotoxy(124, 14 + beda);
                printf(" EDIT ANGGOTA ");
                gotoxy(146, 14 + beda);
                printf("HAPUS ANGGOTA ");
                beda += 6;
            }
            nd = pilihdaftar(cek1[l], l, 1);
            textcolor(tc);
            bgcolor(15);
            if (nd == -1)
            {
                l++;
            }
            else if (nd == -2)
            {
                l--;
            }
            if (l < 0)
            {
                l = 0;
            }
            if (l > cd4)
            {
                l = cd4;
            }
        } while (nd < 0 && nd > -3);
        bgcolor(bg);
        if (nd == 0)
        {
            erase();
            if (sebelum("APAKAH YAKIN UNTUK MENAMBAH??") == 2)
            {
                erase();
                tambahanggota();
            }
        }
        else if (nd == 1)
        {
            erase();
            editanggota(idx);
        }
        else if (nd == 2)
        {
            erase();
            hapusanggota(idx);
        }
    } while (nd != -3);
}
void geserhapus(int x, int c1)
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
    gotoxy(x + 7, 24);
    printf("%s", hapus[(x - 59) / 30]);
    gotoxy(0, 0);
}
int pilihhapus()
{
    xd = 60;
    nd = 1;
    do
    {
        geserhapus(xd, pc);
        pd = getch();
        if (pd == 77 && nd < 2)
        {
            geserhapus(xd, tc);
            xd += 30;
            nd++;
            if (nd > 2)
            {
                xd = 60;
                nd = 1;
            }
        }
        else if (pd == 75 && nd > 1)
        {
            geserhapus(xd, tc);
            xd -= 30;
            nd--;
            if (nd < 1)
            {
                xd = 90;
                nd = 2;
            }
        }
        else if (pd == 13)
        {
            return nd;
        }
    } while (true);
}
void hapusanggota(int idx)
{
    FILE *file = fopen("./PROJEKAN_DAFTARANGGOTA_KOPERASI.txt", "r");
    cd = 0;
    while (!feof(file))
    {
        fscanf(file, "%[^\n]s", &kode[cd]);
        fgets(slash[cd], 100, file);
        fscanf(file, "%[^\n]s", &nama[cd]);
        fgets(slash[cd], 100, file);
        fscanf(file, "%[^\n]s", &kota[cd]);
        fgets(slash[cd], 100, file);
        fscanf(file, "%[^\n]s", &tgll[cd]);
        fgets(slash[cd], 100, file);
        fscanf(file, "%[^\n]s", &nohp[cd]);
        fgets(slash[cd], 100, file);
        cd++;
    }
    cd--;
    fclose(file);
    file = fopen("PROJEKAN_SIMPANAN.txt", "r");
    cs = 0;
    while (!feof(file))
    {
        fscanf(file, "%s", &simwajibpad[cs]);
        fscanf(file, "%s", &simsukarelapad[cs]);
        cs++;
    }
    cs--;
    fclose(file);
    file = fopen("PROJEKAN_TANGGAL.txt", "r");
    cs = 0;
    while (!feof(file))
    {
        fscanf(file, "%d", &bulanpad[cs]);
        fscanf(file, "%d", &tahunpad[cs]);
        cs++;
    }
    cs--;
    fclose(file);
    file = fopen("PROJEKAN_TANGGAL_ANGSUR.txt", "r");
    cs = 0;
    while (!feof(file))
    {
        fscanf(file, "%d", &bulanpad1[cs]);
        fscanf(file, "%d", &tahunpad1[cs]);
        cs++;
    }
    cs--;
    fclose(file);
    file = fopen("PROJEKAN_ANGSURAN.txt", "r");
    cs = 0;
    while (!feof(file))
    {
        fscanf(file, "%d", &periodeangsurpad[cs]);
        fscanf(file, "%ld", &besarangsur1pad[cs]);
        fscanf(file, "%ld", &besarangsur2pad[cs]);
        cs++;
    }
    cs--;
    file = fopen("PROJEKAN_PINJAMAN.txt", "r");
    cs = 0;
    while (!feof(file))
    {
        fscanf(file, "%s", &jenispinjampad[cs]);
        fscanf(file, "%d", &lamapinjampad[cs]);
        fscanf(file, "%ld", &totalpinjampad[cs]);
        cs++;
    }
    cs--;
    fclose(file);
    bgcolor(15);
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
                gotoxy(i + 35, j + 10);
                printf(" ");
            }
        }
    }
    gotoxy(70, 14);
    printf("APAKAH YAKIN UNTUK MENGHAPUS??");
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
        }
    }
    gotoxy(67, 24);
    printf("%s", hapus[0]);
    gotoxy(97, 24);
    printf("%s", hapus[1]);
    bgcolor(bg);
    nd = pilihhapus();
    textcolor(tc);
    if (nd == 2)
    {
        FILE *edit = fopen("PROJEKAN_DAFTARANGGOTA_KOPERASI.txt", "w");
        for (int i = 0; i < cd; i++)
        {
            if (i != idx - 1)
            {
                fprintf(edit, "%s\n", kode[i]);
                fprintf(edit, "%s\n", nama[i]);
                fprintf(edit, "%s\n", kota[i]);
                fprintf(edit, "%s\n", tgll[i]);
                fprintf(edit, "%s\n", nohp[i]);
            }
        }
        fclose(edit);
        edit = fopen("PROJEKAN_SIMPANAN.txt", "w");
        for (int i = 0; i < cs; i++)
        {
            if (i != idx - 1)
            {
                fprintf(edit, "%s\n", simwajibpad[i]);
                fprintf(edit, "%s\n", simsukarelapad[i]);
            }
        }
        fclose(edit);
        edit = fopen("PROJEKAN_TANGGAL.txt", "w");
        for (int i = 0; i < cs; i++)
        {
            if (i != idx - 1)
            {
                fprintf(edit, "%d\n", bulanpad[i]);
                fprintf(edit, "%d\n", tahunpad[i]);
            }
        }
        fclose(edit);
        edit = fopen("PROJEKAN_TANGGAL_ANGSUR.txt", "w");
        for (int i = 0; i < cs; i++)
        {
            if (i != idx - 1)
            {
                fprintf(edit, "%d\n", bulanpad1[i]);
                fprintf(edit, "%d\n", tahunpad1[i]);
            }
        }
        fclose(edit);
        edit = fopen("PROJEKAN_ANGSURAN.txt", "w");
        for (int i = 0; i < cs; i++)
        {
            if (i != idx - 1)
            {
                fprintf(file, "%d\n", periodeangsurpad[i]);
                fprintf(file, "%ld\n", besarangsur1pad[i]);
                fprintf(file, "%ld\n", besarangsur2pad[i]);
            }
        }
        fclose(edit);
        edit = fopen("PROJEKAN_PINJAMAN.txt", "w");
        for (int i = 0; i < cs; i++)
        {
            if (i != idx - 1)
            {
                fprintf(file, "%s\n", jenispinjampad[i]);
                fprintf(file, "%d\n", lamapinjampad[i]);
                fprintf(file, "%ld\n", totalpinjampad[i]);
            }
        }
        fclose(edit);
    }
}
void editanggota(int idx)
{
    time_t sekarang = time(NULL);
    struct tm waktu = *localtime(&sekarang);
    char hari[10][10] = {"MINGGU", "SENIN", "SELASA", "RABU", "KAMIS", "JUM'AT", "SABTU"};
    for (int i = 1; i <= 3; i++)
    {
        gotoxy(20, 3);
        Sleep(10);
        printf("**********  *********   ****  **********  ");
        gotoxy(20, 4);
        Sleep(10);
        printf("****        **********  ****  **********  ");
        gotoxy(20, 5);
        Sleep(10);
        printf("**********  ****  ****  ****     ****     ");
        gotoxy(20, 6);
        Sleep(10);
        printf("**********  ****  ****  ****     ****     ");
        gotoxy(20, 7);
        Sleep(10);
        printf("****        **********  ****     ****     ");
        gotoxy(20, 8);
        Sleep(10);
        printf("**********  *********   ****     ****     ");
        Sleep(200);
        gotoxy(20, 3);
        Sleep(10);
        printf("%s%s%c%c  %s%s%c   %s  %s%s%c%c  ", s, s, 219, 219, s, s, 219, s, s, s, 219, 219);
        gotoxy(20, 4);
        Sleep(10);
        printf("%s        %s%s%c%c  %s  %s%s%c%c  ", s, s, s, 219, 219, s, s, s, 219, 219);
        gotoxy(20, 5);
        Sleep(10);
        printf("%s%s%c%c  %s  %s  %s     %s     ", s, s, 219, 219, s, s, s, s);
        gotoxy(20, 6);
        Sleep(10);
        printf("%s%s%c%c  %s  %s  %s     %s     ", s, s, 219, 219, s, s, s, s);
        gotoxy(20, 7);
        Sleep(10);
        printf("%s        %s%s%c%c  %s     %s     ", s, s, s, 219, 219, s, s);
        gotoxy(20, 8);
        Sleep(10);
        printf("%s%s%c%c  %s%s%c   %s     %s     ", s, s, 219, 219, s, s, 219, s, s);
    }
    bgcolor(15);
    for (int i = 0; i < 164; i++)
    {
        for (int j = 0; j < 27; j++)
        {
            if (i == 0 || i == 1 || i == 162 || i == 163 || j == 0 || j == 26)
            {
                gotoxy(i + 3, j + 10);
                printf("%c", 219);
            }
            else
            {
                gotoxy(i + 3, j + 10);
                printf(" ");
            }
        }
    }
    FILE *file = fopen("./PROJEKAN_DAFTARANGGOTA_KOPERASI.txt", "r");
    cd = 0;
    while (!feof(file))
    {
        fscanf(file, "%[^\n]s", &kode[cd]);
        fgets(slash[cd], 100, file);
        fscanf(file, "%[^\n]s", &nama[cd]);
        fgets(slash[cd], 100, file);
        fscanf(file, "%[^\n]s", &kota[cd]);
        fgets(slash[cd], 100, file);
        fscanf(file, "%[^\n]s", &tgll[cd]);
        fgets(slash[cd], 100, file);
        fscanf(file, "%[^\n]s", &nohp[cd]);
        fgets(slash[cd], 100, file);
        cd++;
    }
    cd--;
    fclose(file);
    gotoxy(10, 12);
    printf("KODE ANGGOTA            : KA%s", kode[idx - 1]);
    gotoxy(10, 13);
    printf("______________________________________________________________________");
    gotoxy(10, 15);
    printf("NAMA ANGGOTA            : %s", nama[idx - 1]);
    gotoxy(10, 16);
    printf("______________________________________________________________________");
    gotoxy(10, 18);
    printf("ALAMAT KAB/KOTA ANGGOTA : %s", kota[idx - 1]);
    gotoxy(10, 19);
    printf("______________________________________________________________________");
    gotoxy(10, 21);
    printf("TANGGAL LAHIR ANGGOTA   : [ %s ]  [dd-mm-yyyy]", tgll[idx - 1]);
    gotoxy(10, 22);
    printf("______________________________________________________________________");
    gotoxy(10, 24);
    printf("NOMOR HP ANGGOTA        : %s", nohp[idx - 1]);
    gotoxy(10, 25);
    printf("______________________________________________________________________");
    gotoxy(10, 27);
    printf("SIMPANAN POKOK ANGGOTA  : Rp.1.000.000,-( SUDAH MENYIMPAN )");
    gotoxy(10, 28);
    printf("______________________________________________________________________");
    gotoxy(10, 30);
    printf("USER EDIT               : ADMIN");
    gotoxy(10, 31);
    printf("______________________________________________________________________");
    gotoxy(10, 33);
    printf("TANGGAL EDIT            : %-6s %.2d/%.2d/%.4d [%.2d:%.2d]", hari[waktu.tm_wday], waktu.tm_mday, waktu.tm_mon + 1, waktu.tm_year + 1900, waktu.tm_hour, waktu.tm_min);
    gotoxy(10, 34);
    printf("______________________________________________________________________");

    gotoxy(90, 12);
    printf("KODE ANGGOTA            : KA%s", kode[idx - 1]);
    gotoxy(90, 13);
    printf("______________________________________________________________________");
    gotoxy(90, 15);
    printf("NAMA ANGGOTA            : ");
    gotoxy(90, 16);
    printf("______________________________________________________________________");
    gotoxy(90, 18);
    printf("ALAMAT KAB/KOTA ANGGOTA : ");
    gotoxy(90, 19);
    printf("______________________________________________________________________");
    gotoxy(90, 21);
    printf("TANGGAL LAHIR ANGGOTA   : [   -  -     ]  [dd-mm-yyyy]");
    gotoxy(90, 22);
    printf("______________________________________________________________________");
    gotoxy(90, 24);
    printf("NOMOR HP ANGGOTA        : ");
    gotoxy(90, 25);
    printf("______________________________________________________________________");
    gotoxy(90, 27);
    printf("SIMPANAN POKOK ANGGOTA  : Rp.1.000.000,-( SUDAH MENYIMPAN )");
    gotoxy(90, 28);
    printf("______________________________________________________________________");
    gotoxy(90, 30);
    printf("USER EDIT               : ADMIN");
    gotoxy(90, 31);
    printf("______________________________________________________________________");
    gotoxy(90, 33);
    printf("TANGGAL EDIT            : %-6s %.2d/%.2d/%.4d [%.2d:%.2d]", hari[waktu.tm_wday], waktu.tm_mday, waktu.tm_mon + 1, waktu.tm_year + 1900, waktu.tm_hour, waktu.tm_min);
    gotoxy(90, 34);
    printf("______________________________________________________________________");
    formulir(80);
    strcpy(nama[idx - 1], nama1);
    strcpy(kota[idx - 1], kota1);
    strcpy(tgll[idx - 1], tgll1);
    strcpy(nohp[idx - 1], nohp1);
    erase();
    if (sebelum("APAKAH YAKIN UNTUK MENGEDIT??") == 2)
    {
        FILE *edit = fopen("PROJEKAN_DAFTARANGGOTA_KOPERASI.txt", "w");
        for (int i = 0; i < cd; i++)
        {
            fprintf(edit, "%s\n", kode[i]);
            fprintf(edit, "%s\n", nama[i]);
            fprintf(edit, "%s\n", kota[i]);
            fprintf(edit, "%s\n", tgll[i]);
            fprintf(edit, "%s\n", nohp[i]);
        }
        fclose(edit);
        bgcolor(15);
        gotoxy(73, 17);
        printf("EDIT ANGGOTA BERHASIL!!!");
        Sleep(1000);
        gotoxy(73, 17);
        printf("                            ");
        bgcolor(bg);
    }
}
void tambahanggota()
{
    time_t sekarang = time(NULL);
    struct tm waktu = *localtime(&sekarang);
    char hari[10][10] = {"SENIN", "SELASA", "RABU", "KAMIS", "JUM'AT", "SABTU", "MINGGU"};
    for (int i = 1; i <= 3; i++)
    {
        gotoxy(20, 3);
        Sleep(10);
        printf("**********   ********   ****  ****  **********    ********   ****  ****  \n");
        gotoxy(20, 4);
        Sleep(10);
        printf("**********  ****  ****  **********  ****   ****  ****  ****  ****  ****  \n");
        gotoxy(20, 5);
        Sleep(10);
        printf("   ****     ****  ****  **********  **********   ****  ****  **********  \n");
        gotoxy(20, 6);
        Sleep(10);
        printf("   ****     **********  *** ** ***  ***********  **********  **********  \n");
        gotoxy(20, 7);
        Sleep(10);
        printf("   ****     ****  ****  ***    ***  ****   ****  ****  ****  ****  ****  \n");
        gotoxy(20, 8);
        Sleep(10);
        printf("   ****     ****  ****  ***    ***  **********   ****  ****  ****  ****  \n");
        Sleep(200);

        gotoxy(20, 3);
        Sleep(10);
        printf("%s%s%c%c   %s%s   %s  %s  %s%s%c%c    %s%s   %s  %s  \n", s, s, 219, 219, s, s, s, s, s, s, 219, 219, s, s, s, s);
        gotoxy(20, 4);
        Sleep(10);
        printf("%s%s%c%c  %s  %s  %s%s%c%c  %s   %s  %s  %s  %s  %s  \n", s, s, 219, 219, s, s, s, s, 219, 219, s, s, s, s, s, s);
        gotoxy(20, 5);
        Sleep(10);
        printf("   %s     %s  %s  %s%s%c%c  %s%s%c%c   %s  %s  %s%s%c%c  \n", s, s, s, s, s, 219, 219, s, s, 219, 219, s, s, s, s, 219, 219);
        gotoxy(20, 6);
        Sleep(10);
        printf("   %s     %s%s%c%c  %c%c%c %c%c %c%c%c  %s%s%c%c%c  %s%s%c%c  %s%s%c%c  \n", s, s, s, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, s, s, 219, 219, 219, s, s, 219, 219, s, s, 219, 219);
        gotoxy(20, 7);
        Sleep(10);
        printf("   %s     %s  %s  %c%c%c    %c%c%c  %s   %s  %s  %s  %s  %s  \n", s, s, s, 219, 219, 219, 219, 219, 219, s, s, s, s, s, s);
        gotoxy(20, 8);
        Sleep(10);
        printf("   %s     %s  %s  %c%c%c    %c%c%c  %s%s%c%c   %s  %s  %s  %s  \n", s, s, s, 219, 219, 219, 219, 219, 219, s, s, 219, 219, s, s, s, s);
    }
    bgcolor(15);
    for (int i = 0; i < 164; i++)
    {
        for (int j = 0; j < 27; j++)
        {
            if (i == 0 || i == 1 || i == 162 || i == 163 || j == 0 || j == 26)
            {
                gotoxy(i + 3, j + 10);
                printf("%c", 219);
            }
            else
            {
                gotoxy(i + 3, j + 10);
                printf(" ");
            }
        }
    }
    for (int i = 1; i <= 3; i++)
    {
        gotoxy(100, 14);
        Sleep(1);
        printf("                ******************                ");
        gotoxy(100, 15);
        Sleep(1);
        printf("         ********************************         ");
        gotoxy(100, 16);
        Sleep(1);
        printf("     ****************************************     ");
        gotoxy(100, 17);
        Sleep(1);
        printf("  **********************************************  ");
        gotoxy(100, 18);
        Sleep(1);
        printf(" ************************************************ ");
        gotoxy(100, 19);
        Sleep(1);
        printf("**************************************************");
        gotoxy(100, 20);
        Sleep(1);
        printf("**************************************************");
        gotoxy(100, 21);
        Sleep(1);
        printf("*  **  **  **  **  **  ****  **  **  **  **  **  *");
        gotoxy(100, 22);
        Sleep(1);
        printf("*  **  **  **  **  **  ****  **  **  **  **  **  *");
        gotoxy(100, 23);
        Sleep(1);
        printf("                       ****                       ");
        gotoxy(100, 24);
        Sleep(1);
        printf("                     ********                     ");
        gotoxy(100, 25);
        Sleep(1);
        printf("                   ************                   ");
        gotoxy(100, 14);
        Sleep(100);
        printf("                %s%s%c%c                ", c1, c1, 219, 219);
        gotoxy(100, 15);
        Sleep(1);
        printf("         %s%s%s%s         ", c1, c1, c1, c1);
        gotoxy(100, 16);
        Sleep(1);
        printf("     %s%s%s%s%s     ", c1, c1, c1, c1, c1);
        gotoxy(100, 17);
        Sleep(1);
        printf("  %s%s%s%s%s%c%c%c%c%c%c  ", c1, c1, c1, c1, c1, 219, 219, 219, 219, 219, 219);
        gotoxy(100, 18);
        Sleep(1);
        printf(" %s%s%s%s%s%s ", c1, c1, c1, c1, c1, c1);
        gotoxy(100, 19);
        Sleep(1);
        printf("%s%s%s%s%s%s%c%c", c1, c1, c1, c1, c1, c1, 219, 219);
        gotoxy(100, 20);
        Sleep(1);
        printf("%s%s%s%s%s%s%c%c", c1, c1, c1, c1, c1, c1, 219, 219);
        gotoxy(100, 21);
        Sleep(1);
        printf("%c  %c%c  %c%c  %c%c  %c%c  %c%c  %c%c%c%c  %c%c  %c%c  %c%c  %c%c  %c%c  %c", 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219);
        gotoxy(100, 22);
        Sleep(1);
        printf("%c  %c%c  %c%c  %c%c  %c%c  %c%c  %c%c%c%c  %c%c  %c%c  %c%c  %c%c  %c%c  %c", 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219);
        gotoxy(100, 23);
        Sleep(1);
        printf("                       %c%c%c%c                       ", 219, 219, 219, 219);
        gotoxy(100, 24);
        Sleep(1);
        printf("                     %s                     ", c1);
        gotoxy(100, 25);
        Sleep(1);
        printf("                   %s%c%c%c%c                   ", c1, 219, 219, 219, 219);
    }
    FILE *file = fopen("./PROJEKAN_DAFTARANGGOTA_KOPERASI.txt", "r");
    cd = 0;
    while (!feof(file))
    {
        fscanf(file, "%[^\n]s", &kode[cd]);
        fgets(slash[cd], 100, file);
        fscanf(file, "%[^\n]s", &nama[cd]);
        fgets(slash[cd], 100, file);
        fscanf(file, "%[^\n]s", &kota[cd]);
        fgets(slash[cd], 100, file);
        fscanf(file, "%[^\n]s", &tgll[cd]);
        fgets(slash[cd], 100, file);
        fscanf(file, "%[^\n]s", &nohp[cd]);
        fgets(slash[cd], 100, file);
        cd++;
    }
    cd--;
    fclose(file);
    file = fopen("KODEANGGOTA.txt", "r");
    fscanf(file, "%d", &ka);
    fclose(file);
    gotoxy(10, 12);
    printf("KODE ANGGOTA            : KA%.3d", ka);
    gotoxy(10, 13);
    printf("______________________________________________________________________");
    gotoxy(10, 15);
    printf("NAMA ANGGOTA            : ");
    gotoxy(10, 16);
    printf("______________________________________________________________________");
    gotoxy(10, 18);
    printf("ALAMAT KAB/KOTA ANGGOTA : ");
    gotoxy(10, 19);
    printf("______________________________________________________________________");
    gotoxy(10, 21);
    printf("TANGGAL LAHIR ANGGOTA   : [   -  -     ]  [dd-mm-yyyy]");
    gotoxy(10, 22);
    printf("______________________________________________________________________");
    gotoxy(10, 24);
    printf("NOMOR HP ANGGOTA        : ");
    gotoxy(10, 25);
    printf("______________________________________________________________________");
    gotoxy(10, 27);
    printf("SIMPANAN POKOK ANGGOTA  : Rp.1.000.000,-");
    gotoxy(10, 28);
    printf("______________________________________________________________________");
    gotoxy(10, 30);
    printf("USER ENTRY              : ADMIN");
    gotoxy(10, 31);
    printf("______________________________________________________________________");
    gotoxy(10, 33);
    printf("TANGGAL ENTRY           : %-6s %.2d/%.2d/%.4d [%.2d:%.2d]", hari[waktu.tm_wday], waktu.tm_mday, waktu.tm_mon + 1, waktu.tm_year + 1900, waktu.tm_hour, waktu.tm_min);
    gotoxy(10, 34);
    printf("______________________________________________________________________");
    formulir(0);
    FILE *tambah = fopen("PROJEKAN_DAFTARANGGOTA_KOPERASI.txt", "a");
    fprintf(tambah, "%.3d\n", ka);
    fprintf(tambah, "%s\n", nama1);
    fprintf(tambah, "%s\n", kota1);
    fprintf(tambah, "%s\n", tgll1);
    fprintf(tambah, "%s\n", nohp1);
    fclose(tambah);
    tambah = fopen("PROJEKAN_SIMPANAN.txt", "a");
    fprintf(tambah, "0\n0\n");
    fclose(tambah);
    tambah = fopen("PROJEKAN_TANGGAL.txt", "a");
    fprintf(tambah, "0\n0\n");
    fclose(tambah);
    tambah = fopen("PROJEKAN_PINJAMAN.txt", "a");
    fprintf(tambah, "-\n0\n0\n");
    fclose(tambah);
    tambah = fopen("PROJEKAN_TANGGAL_ANGSUR.txt", "a");
    fprintf(tambah, "0\n0\n");
    fclose(tambah);
    tambah = fopen("PROJEKAN_ANGSURAN.txt", "a");
    fprintf(tambah, "0\n0\n0\n");
    fclose(tambah);
    tambah = fopen("KODEANGGOTA.txt", "w");
    fprintf(tambah, "%d", ++ka);
    fclose(tambah);
    gotoxy(112, 28);
    printf("TAMBAH ANGGOTA BERHASIL!!!");
    Sleep(1000);
    gotoxy(112, 28);
    printf("                            ");
    bgcolor(bg);
}
int sebelum(char memilih[])
{
    bgcolor(15);
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
                gotoxy(i + 35, j + 10);
                printf(" ");
            }
        }
    }
    gotoxy(70, 14);
    printf("%s", memilih);
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
        }
    }
    gotoxy(67, 24);
    printf("%s", hapus[0]);
    gotoxy(97, 24);
    printf("%s", hapus[1]);
    bgcolor(bg);
    nd = pilihhapus();
    textcolor(tc);
    bgcolor(bg);
    return nd;
}
void formulir(int x)
{
    do
    {
        tbh = 0;
        strcpy(nama1, "0");
        cekhuruf = 0;
        cekhurufvokal = 0;
        gotoxy(36 + x, 15);
        do
        {
            nama1[tbh] = getch();
            if (nama1[tbh] == 13 && tbh > 0)
            {
                nama1[tbh] = '\0';
                tbh--;
                break;
            }
            else if (nama1[tbh] == '\b' && tbh > 0)
            {
                nama1[tbh] = '\0';
                tbh--;
                printf("\b \b");
            }
            else if ((nama1[tbh] >= 'a' && nama1[tbh] <= 'z' || nama1[tbh] >= 'A' && nama1[tbh] <= 'Z' || nama1[tbh] == ' ' && nama1[0] != ' ' && nama1[1] != ' ' && nama1[tbh - 1] != ' ' && nama1[tbh - 2] != ' ') && tbh < 30)
            {
                printf("%c", nama1[tbh]);
                tbh++;
            }
        } while (true);
        for (int i = 0; i < strlen(nama1); i++)
        {
            if (nama1[i] == 'a' || nama1[i] == 'i' || nama1[i] == 'u' || nama1[i] == 'e' || nama1[i] == 'o' || nama1[i] == 'A' || nama1[i] == 'I' || nama1[i] == 'U' || nama1[i] == 'E' || nama1[i] == 'O')
            {
                cekhurufvokal++;
            }
            if (nama1[i] >= 'a' && nama1[i] <= 'z' || nama1[i] >= 'A' && nama1[i] <= 'Z')
            {
                cekhuruf++;
            }
            if (nama1[i] == nama1[i - 1] && nama1[i] == nama1[i - 2])
            {
                strcpy(nama1, " ");
            }
        }
        if (strcmp(nama1, " ") == 0)
        {
            gotoxy(36 + x, 15);
            printf("deret huruf sama yang terlalu banyak  ");
            Sleep(2000);
            gotoxy(36 + x, 15);
            printf("                                        ");
            strcpy(nama1, " ");
        }
        else if (cekhuruf < 2)
        {
            gotoxy(36 + x, 15);
            printf("harus terdapat minimal 2 huruf      ");
            Sleep(2000);
            gotoxy(36 + x, 15);
            printf("                                        ");
            strcpy(nama1, " ");
        }
        else if (cekhurufvokal < 1)
        {
            gotoxy(36 + x, 15);
            printf("harus terdapat minimal 1 huruf vokal");
            Sleep(2000);
            gotoxy(36 + x, 15);
            printf("                                        ");
            strcpy(nama1, " ");
        }
        else if (nama1[strlen(nama1) - 1] == ' ')
        {
            gotoxy(36 + x, 15);
            printf("tidak boleh mengandung spasi di akhir nama");
            Sleep(2000);
            gotoxy(36 + x, 15);
            printf("                                            ");
            strcpy(nama1, " ");
        }
    } while (strcmp(nama1, " ") == 0);
    strupr(nama1);
    do
    {
        strcpy(kota1, "0");
        samakota = 0;
        gotoxy(36 + x, 18);
        printf("                                                 ");
        gotoxy(36 + x, 18);
        tbh = 0;
        do
        {
            kota1[tbh] = getch();
            if (kota1[tbh] == 13 && tbh > 0)
            {
                kota1[tbh] = '\0';
                tbh--;
                break;
            }
            else if (kota1[tbh] == '\b' && tbh > 0)
            {
                kota1[tbh] = '\0';
                tbh--;
                printf("\b \b");
            }
            else if ((kota1[tbh] >= 'a' && kota1[tbh] <= 'z' || kota1[tbh] >= 'A' && kota1[tbh] <= 'Z' || kota1[tbh] == ' ' && kota1[0] != ' ' && kota1[tbh - 1] != ' ') && tbh < 30)
            {
                printf("%c", kota1[tbh]);
                tbh++;
            }
        } while (true);
        strlwr(kota1);
        tbh = 0;
        FILE *data = fopen("PROJEKAN_KOTA.txt", "r");
        while (!feof(data))
        {
            fscanf(data, "%[^\n]s", &kotajabar[tbh]);
            fgets(slash[tbh], 100, data);
            tbh++;
        }
        fclose(data);
        for (int i = 0; i < tbh; i++)
        {
            if (strcmp(kota1, kotajabar[i]) == 0)
            {
                samakota = 1;
                break;
            }
        }
        if (kota1[strlen(kota1) - 1] == ' ')
        {
            gotoxy(36 + x, 18);
            printf("(Input kota / kabupaten jangan diakhiri spasi!!)");
            Sleep(2000);
        }
        else if (kota1[0] != 'k' && (kota1[1] != 'o' || kota1[1] != 'a') && (kota1[2] != 't' || kota1[2] != 'b'))
        {
            gotoxy(36 + x, 18);
            printf("(Input harus diawali kota / kabupaten!!)      ");
            Sleep(2000);
        }
        else if (samakota == 0)
        {
            gotoxy(36 + x, 18);
            printf("(Kota / kabupaten tidak ada di Jawa Barat)  ");
            Sleep(1000);
            gotoxy(36 + x, 18);
            printf("                                             ");
            gotoxy(36 + x, 18);
            printf("(Atau kota / kabupaten tidak terdaftar )  ");
            Sleep(1000);
        }
    } while (samakota == 0);
    strupr(kota1);
    do
    {
        gotoxy(36 + x, 21);
        printf("[   -  -     ]  [dd-mm-yyyy]");
        do
        {
            gotoxy(38 + x, 21);
            printf("  ");
            gotoxy(38 + x, 21);
            tbh = 0;
            do
            {
                tgll1[tbh] = getch();
                if (tgll1[tbh] == 13 && tbh > 1)
                {
                    tgll1[tbh] = '\0';
                    tbh--;
                    break;
                }
                else if (tgll1[tbh] == '\b' && tbh > 0)
                {
                    tgll1[tbh] = '\0';
                    tbh--;
                    printf("\b \b");
                }
                else if ((tgll1[tbh] >= '0' && tgll1[tbh] <= '9') && tbh < 2)
                {
                    printf("%c", tgll1[tbh]);
                    tbh++;
                }
            } while (true);
        } while (strlen(tgll1) < 2);
        do
        {
            gotoxy(41 + x, 21);
            printf("  ");
            gotoxy(41 + x, 21);
            tbh = 0;
            do
            {
                bl[tbh] = getch();
                if (bl[tbh] == 13 && tbh > 1)
                {
                    bl[tbh] = '\0';
                    tbh--;
                    break;
                }
                else if (bl[tbh] == '\b' && tbh > 0)
                {
                    bl[tbh] = '\0';
                    tbh--;
                    printf("\b \b");
                }
                else if ((bl[tbh] >= '0' && bl[tbh] <= '9') && tbh < 2)
                {
                    printf("%c", bl[tbh]);
                    tbh++;
                }
            } while (true);
        } while (strlen(bl) < 2);
        do
        {
            gotoxy(44 + x, 21);
            printf("    ");
            gotoxy(44 + x, 21);
            tbh = 0;
            do
            {
                th[tbh] = getch();
                if (th[tbh] == 13 && tbh > 3)
                {
                    th[tbh] = '\0';
                    tbh--;
                    break;
                }
                else if (th[tbh] == '\b' && tbh > 0)
                {
                    th[tbh] = '\0';
                    tbh--;
                    printf("\b \b");
                }
                else if ((th[tbh] >= '0' && th[tbh] <= '9') && tbh < 4)
                {
                    printf("%c", th[tbh]);
                    tbh++;
                }
            } while (true);
        } while (strlen(th) < 4);
        tg1 = atoi(tgll1);
        bl1 = atoi(bl);
        th1 = atoi(th);
        if (th1 < 1957 || th1 > 2005)
        {
            gotoxy(36 + x, 21);
            printf("tahun lahir harus antara 1957-2005  ");
            Sleep(2000);
            gotoxy(36 + x, 21);
            printf("                                    ");
            strcpy(th, " ");
        }
        else if (tg1 <= 0 || tg1 > 31 || bl1 <= 0 || bl1 > 12)
        {
            gotoxy(36 + x, 21);
            printf("tanggal atau bulan tidak valid!!    ");
            Sleep(2000);
            gotoxy(36 + x, 21);
            printf("                                    ");
            strcpy(th, " ");
        }
        else if ((th1 % 400 == 0 || (th1 % 100 != 0 && th1 % 4 == 0)) && (bl1 == 2 && tg1 > 29)) // kabisat
        {
            gotoxy(36 + x, 21);
            printf("tanggal tidak valid!!                ");
            Sleep(2000);
            gotoxy(36 + x, 21);
            printf("                                     ");
            strcpy(th, " ");
        }
        else if (!(th1 % 400 == 0 || (th1 % 100 != 0 && th1 % 4 == 0)) && bl1 == 2 && tg1 > 28)
        {
            gotoxy(36 + x, 21);
            printf("tanggal tidak valid!!                ");
            Sleep(2000);
            gotoxy(36 + x, 21);
            printf("                                     ");
            strcpy(th, " ");
        }
        else if ((bl1 == 4 || bl1 == 6 || bl1 == 9 || bl1 == 11) && tg1 > 30)
        {
            gotoxy(36 + x, 21);
            printf("tanggal tidak valid!!                ");
            Sleep(2000);
            gotoxy(36 + x, 21);
            printf("                                     ");
            strcpy(th, " ");
        }
    } while (strcmp(th, " ") == 0);
    strcat(tgll1, "-");
    strcat(bl, "-");
    strcat(bl, th);
    strcat(tgll1, bl);
    do
    {
        gotoxy(36 + x, 24);
        printf("                                          ");
        gotoxy(36 + x, 24);
        tbh = 0;
        strcpy(nohp1, "0");
        do
        {
            nohp1[tbh] = getch();
            if (nohp1[tbh] == 13 && tbh > 0)
            {
                nohp1[tbh] = '\0';
                tbh--;
                break;
            }
            else if (nohp1[tbh] == '\b' && tbh > 0)
            {
                nohp1[tbh] = '\0';
                tbh--;
                printf("\b \b");
            }
            else if ((nohp1[1] == '8' || nohp1[1] == '2') && tbh == 1)
            {
                printf("%c", nohp1[tbh]);
                tbh++;
            }
            else if ((nohp1[1] == '8' && (nohp1[2] >= '1' && nohp1[2] <= '3' || nohp1[2] == '5' || nohp1[2] >= '7' && nohp1[2] <= '9') || nohp1[1] == '2' && (nohp1[2] >= '1' && nohp1[2] <= '2')) && tbh == 2)
            {
                printf("%c", nohp1[tbh]);
                tbh++;
            }
            else if ((nohp1[tbh] >= '0' && nohp1[tbh] <= '9' && nohp1[0] == '0') && tbh < 13 && tbh != 1 && tbh != 2)
            {
                printf("%c", nohp1[tbh]);
                tbh++;
            }
        } while (true);
        for (int i = 0; i < cd; i++)
        {
            if (strcmp(nohp1, nohp[i]) == 0)
            {
                strcpy(nohp1, " ");
            }
        }
        if (strcmp(nohp1, " ") == 0)
        {
            gotoxy(36 + x, 24);
            printf("nomor hp ini sudah terdaftar!!  ");
            Sleep(2000);
        }
        else if (strlen(nohp1) < 11)
        {
            gotoxy(36 + x, 24);
            printf("nomor terlalu pendek!!      ");
            Sleep(2000);
        }
    } while (strlen(nohp1) < 11);
}