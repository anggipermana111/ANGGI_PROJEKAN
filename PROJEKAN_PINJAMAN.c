#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <string.h>
#include <windows.h>
#include <time.h>
void erasepinjam()
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
void pinjamananggota()
{
    time_t sekarang = time(NULL);
    struct tm waktu = *localtime(&sekarang);
    do
    {
        FILE *pinjaman = fopen("PROJEKAN_PINJAMAN.txt", "r");
        sim = 0;
        while (!feof(pinjaman))
        {
            fscanf(pinjaman, "%s", &jenispinjampad[sim]);
            fscanf(pinjaman, "%d", &lamapinjampad[sim]);
            fscanf(pinjaman, "%ld", &totalpinjampad[sim]);
            sim++;
        }
        sim--;
        fclose(pinjaman);
        pinjaman = fopen("PROJEKAN_TANGGAL_ANGSUR.txt", "r");
        sim = 0;
        while (!feof(pinjaman))
        {
            fscanf(pinjaman, "%d", &bulanangsurpad[sim]);
            fscanf(pinjaman, "%d", &tahunangsurpad[sim]);
            sim++;
        }
        sim--;
        fclose(pinjaman);
        pinjaman = fopen("PROJEKAN_ANGSURAN.txt", "r");
        sim = 0;
        while (!feof(pinjaman))
        {
            fscanf(pinjaman, "%d", &periodeangsurpad[sim]);
            fscanf(pinjaman, "%ld", &besarangsur1pad[sim]);
            fscanf(pinjaman, "%ld", &besarangsur2pad[sim]);
            sim++;
        }
        sim--;
        fclose(pinjaman);
        textcolor(tc);
        char kodeanggota[100][5][100] = {};
        char namaanggota[100][5][100] = {};
        char kotaanggota[100][5][100] = {};
        char tgllanggota[100][5][100] = {};
        char nohpanggota[100][5][100] = {};
        char jenispinjam[100][5][100] = {};
        char lamapinjam[100][5][100] = {};
        char totalpinjam[100][5][100] = {};
        val = 0;
        bulan = 0;
        tahun = 0;
        erase();
        for (int i = 1; i <= 3; i++)
        {
            gotoxy(5, 3);
            Sleep(10);
            printf("   *********   ****  ****  ****      ******   ********   ****  ****  ");
            gotoxy(5, 4);
            Sleep(10);
            printf("   ****  ****  ****  ***** ****      ******  ****  ****  **********  ");
            gotoxy(5, 5);
            Sleep(10);
            printf("   ****  ****  ****  **********        ****  ****  ****  *** ** ***  ");
            gotoxy(5, 6);
            Sleep(10);
            printf("   *********   ****  **********        ****  **********  ***    ***  ");
            gotoxy(5, 7);
            Sleep(10);
            printf("   ****        ****  **** *****  **********  ****  ****  ***    ***  ");
            gotoxy(5, 8);
            Sleep(10);
            printf("   ****        ****  ****  ****  **********  ****  ****  ***    ***  ");
            Sleep(200);
            gotoxy(5, 3);
            Sleep(10);
            printf("   %s%s%c   %s  %s  %s      %s%c%c   %s%s   %s  %s  ", s, s, 219, s, s, s, s, 219, 219, s, s, s, s);
            gotoxy(5, 4);
            Sleep(10);
            printf("   %s  %s  %s  %s%c %s      %s%c%c  %s  %s  %s%s%c%c  ", s, s, s, s, 219, s, s, 219, 219, s, s, s, s, 219, 219);
            gotoxy(5, 5);
            Sleep(10);
            printf("   %s  %s  %s  %s%s%c%c        %s  %s  %s  %s %c%c %s  ", s, s, s, s, s, 219, 219, s, s, s, m1, 219, 219, m1);
            gotoxy(5, 6);
            Sleep(10);
            printf("   %s%s%c   %s  %s%s%c%c        %s  %s%s%c%c  %s    %s  ", s, s, 219, s, s, s, 219, 219, s, s, s, 219, 219, m1, m1);
            gotoxy(5, 7);
            Sleep(10);
            printf("   %s        %s  %s %s%c  %s%s%c%c  %s  %s  %s    %s  ", s, s, s, s, 219, s, s, 219, 219, s, s, m1, m1);
            gotoxy(5, 8);
            Sleep(10);
            printf("   %s        %s  %s  %s  %s%s%c%c  %s  %s  %s    %s  ", s, s, s, s, s, s, 219, 219, s, s, m1, m1);
        }
        gotoxy(77, 5);
        printf("[SPASI] UNTUK <<PREVIEW ");
        gotoxy(77, 6);
        printf("                          ");
        gotoxy(73, 7);
        printf(" [JENIS PINJAM]-[WAKTU]-[TOTAL] ");
        gotoxy(107, 5);
        printf("  [TAB] UNTUK NEXT>>    ");
        gotoxy(107, 6);
        printf("                        ");
        gotoxy(107, 7);
        printf("[ENTER] UNTUK MEMILIH>>");
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
        FILE *file = fopen("./PROJEKAN_PINJAMAN.txt", "r");
        cd = 0;
        cd4 = 0;
        while (!feof(file))
        {
            fscanf(file, "%s", &jenispinjam[cd4][cd]);
            fscanf(file, "%s", &lamapinjam[cd4][cd]);
            fscanf(file, "%s", &totalpinjam[cd4][cd]);
            if ((jenispinjam[cd4][cd][0] != '-' && jenispinjam[cd4][cd][0] != 'K' && jenispinjam[cd4][cd][0] != 'B') && val == 0)
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
        val = 0;
        file = fopen("./PROJEKAN_DAFTARANGGOTA_KOPERASI.txt", "r");
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
            bgcolor(15);
            beda = 0;
            erasepinjam();
            for (int k = 0; k < cek1[l] && cd4 != -1; k++)
            {
                for (int i = 0; i < 112; i++)
                {
                    for (int j = 0; j < 5; j++)
                    {
                        if (i == 0 || i == 1 || i == 9 || i == 10 || i == 44 || i == 45 || i == 67 || i == 68 || i == 89 || i == 90 || i == 110 || i == 111 || j == 0 || j == 4)
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
                printf("PINJAMAN %s", jenispinjam[l][k]);
                gotoxy(77, 14 + beda);
                printf("%s BULAN", lamapinjam[l][k]);
                gotoxy(99, 14 + beda);
                printf("Rp.%s,-", totalpinjam[l][k]);
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
                printf(" PINJAM KECIL");
                gotoxy(146, 14 + beda);
                printf(" PINJAM BESAR");
                beda += 6;
            }
            nd = pilihdaftar(cek1[l], l, 3);
            textcolor(tc);
            bgcolor(bg);
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
        if (nd == 1 && totalpinjampad[idx - 1] == 0)
        {
            erase();
            if (sebelum("APAKAH YAKIN INGIN MEMINJAM??") == 2)
            {
                erase();
                pinjamankecil(idx);
                strcpy(jenispinjampad[idx - 1], "KECIL");
                lamapinjampad[idx - 1] = 5;
                totalpinjampad[idx - 1] = atoi(pinkecil);
                periodeangsurpad[idx - 1] = 1;
                besarangsur1pad[idx - 1] = totalpinjampad[idx - 1] / 5;
                besarangsur2pad[idx - 1] = besarangsur1pad[idx - 1] + totalpinjampad[idx - 1] / 100;
                bulanangsurpad[idx - 1] = waktu.tm_mon + 1;
                tahunangsurpad[idx - 1] = waktu.tm_year + 1900;
                pinjaman = fopen("PROJEKAN_PINJAMAN.txt", "w");
                for (int i = 0; i < sim; i++)
                {
                    fprintf(pinjaman, "%s\n", jenispinjampad[i]);
                    fprintf(pinjaman, "%d\n", lamapinjampad[i]);
                    fprintf(pinjaman, "%ld\n", totalpinjampad[i]);
                }
                fclose(pinjaman);
                pinjaman = fopen("PROJEKAN_ANGSURAN.txt", "w");
                for (int i = 0; i < sim; i++)
                {
                    fprintf(pinjaman, "%d\n", periodeangsurpad[i]);
                    fprintf(pinjaman, "%ld\n", besarangsur1pad[i]);
                    fprintf(pinjaman, "%ld\n", besarangsur2pad[i]);
                }
                fclose(pinjaman);
                pinjaman = fopen("PROJEKAN_TANGGAL_ANGSUR.txt", "w");
                for (int i = 0; i < sim; i++)
                {
                    fprintf(pinjaman, "%d\n", bulanangsurpad[i]);
                    fprintf(pinjaman, "%d\n", tahunangsurpad[i]);
                }
                fclose(pinjaman);
            }
        }
        else if (nd == 2 && totalpinjampad[idx - 1] == 0)
        {
            erase();
            if (sebelum("APAKAH YAKIN INGIN MEMINJAM??") == 2)
            {

                erase();
                pinjamanbesar(idx);
                strcpy(jenispinjampad[idx - 1], "BESAR");
                lamapinjampad[idx - 1] = 10;
                totalpinjampad[idx - 1] = atoi(pinbesar);
                periodeangsurpad[idx - 1] = 1;
                besarangsur1pad[idx - 1] = totalpinjampad[idx - 1] / 10;
                besarangsur2pad[idx - 1] = besarangsur1pad[idx - 1] + totalpinjampad[idx - 1] / 50;
                bulanangsurpad[idx - 1] = waktu.tm_mon + 1;
                tahunangsurpad[idx - 1] = waktu.tm_year + 1900;
                pinjaman = fopen("PROJEKAN_PINJAMAN.txt", "w");
                for (int i = 0; i < sim; i++)
                {
                    fprintf(pinjaman, "%s\n", jenispinjampad[i]);
                    fprintf(pinjaman, "%d\n", lamapinjampad[i]);
                    fprintf(pinjaman, "%ld\n", totalpinjampad[i]);
                }
                fclose(pinjaman);
                pinjaman = fopen("PROJEKAN_ANGSURAN.txt", "w");
                for (int i = 0; i < sim; i++)
                {
                    fprintf(pinjaman, "%d\n", periodeangsurpad[i]);
                    fprintf(pinjaman, "%ld\n", besarangsur1pad[i]);
                    fprintf(pinjaman, "%ld\n", besarangsur2pad[i]);
                }
                fclose(pinjaman);
                pinjaman = fopen("PROJEKAN_TANGGAL_ANGSUR.txt", "w");
                for (int i = 0; i < sim; i++)
                {
                    fprintf(pinjaman, "%d\n", bulanangsurpad[i]);
                    fprintf(pinjaman, "%d\n", tahunangsurpad[i]);
                }
                fclose(pinjaman);
            }
        }
    } while (nd != 0);
}
void pinjamankecil(int idx)
{
    time_t sekarang = time(NULL);
    struct tm waktu = *localtime(&sekarang);
    char hari[10][10] = {"MINGGU", "SENIN", "SELASA", "RABU", "KAMIS", "JUM'AT", "SABTU"};
    textcolor(tc);
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
        Sleep(1);
    }
    gotoxy(50, 14);
    printf("PINJAMAN KECIL");
    gotoxy(50, 15);
    printf("______________");
    gotoxy(50, 17);
    printf("LAMA  PINJAMAN (BUNGA)  : 5 BULAN (1%%/BULAN)");
    gotoxy(50, 18);
    printf("______________________________________________________________________");
    gotoxy(50, 20);
    printf("BESAR PINJAMAN          : Rp.           (Rp500.000-Rp.10.000.000)");
    gotoxy(50, 21);
    printf("______________________________________________________________________");
    gotoxy(50, 23);
    printf("TANGGAL PINJAM          : %-6s %.2d/%.2d/%.4d [%.2d:%.2d]", hari[waktu.tm_wday], waktu.tm_mday, waktu.tm_mon + 1, waktu.tm_year + 1900, waktu.tm_hour, waktu.tm_min);
    gotoxy(50, 24);
    printf("______________________________________________________________________");

    do
    {
        gotoxy(76, 20);
        printf("Rp.           (Rp500.000-Rp.10.000.000)");
        gotoxy(79, 20);
        tbh = 0;
        do
        {
            pinkecil[tbh] = getch();
            if (pinkecil[tbh] == 13 && tbh > 0)
            {
                pinkecil[tbh] = '\0';
                tbh--;
                break;
            }
            else if (pinkecil[tbh] == '\b' && tbh > 0)
            {
                pinkecil[tbh] = '\0';
                tbh--;
                printf("\b \b");
            }
            else if ((pinkecil[tbh] >= '0' && pinkecil[tbh] <= '9' && pinkecil[0] != '0') && tbh < 10)
            {
                printf("%c", pinkecil[tbh]);
                tbh++;
            }
        } while (true);
        if (atoi(pinkecil) < 500000)
        {
            gotoxy(75, 20);
            printf(" nominal terlalu kecil!!                      ");
            Sleep(1000);
            gotoxy(75, 20);
            printf("                                               ");
        }
        else if (atoi(pinkecil) > 10000000)
        {
            gotoxy(77, 20);
            printf(" nominal melampaui batas!!                    ");
            Sleep(1000);
            gotoxy(77, 20);
            printf("                                               ");
        }
        for (int i = 0; i < strlen(pinkecil); i++)
        {
            if (i > (strlen(pinkecil) - 6) && i < strlen(pinkecil) && pinkecil[i] != '0')
            {
                strcpy(pinkecil, " ");
            }
        }
        if (strcmp(pinkecil, " ") == 0)
        {
            gotoxy(75, 20);
            printf(" lima digit terakhir harus angka 0            ");
            Sleep(1000);
            gotoxy(75, 20);
            printf("                                               ");
        }
    } while (atoi(pinkecil) < 500000 || (atoi(pinkecil) > 10000000));

    bgcolor(bg);
}
void pinjamanbesar(int idx)
{
    time_t sekarang = time(NULL);
    struct tm waktu = *localtime(&sekarang);
    char hari[10][10] = {"MINGGU", "SENIN", "SELASA", "RABU", "KAMIS", "JUM'AT", "SABTU"};
    textcolor(tc);
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
        Sleep(1);
    }
    gotoxy(50, 14);
    printf("PINJAMAN BESAR");
    gotoxy(50, 15);
    printf("______________");
    gotoxy(50, 17);
    printf("LAMA PINJAMAN (BUNGA)   : 10 BULAN (2%%/BULAN)");
    gotoxy(50, 18);
    printf("______________________________________________________________________");
    gotoxy(50, 20);
    printf("BESAR PINJAMAN          : Rp.           (Rp.10.100.000-Rp20.000.000)");
    gotoxy(50, 21);
    printf("______________________________________________________________________");
    gotoxy(50, 23);
    printf("TANGGAL BAYAR           : %-6s %.2d/%.2d/%.4d [%.2d:%.2d]", hari[waktu.tm_wday], waktu.tm_mday, waktu.tm_mon + 1, waktu.tm_year + 1900, waktu.tm_hour, waktu.tm_min);
    gotoxy(50, 24);
    printf("______________________________________________________________________");
    do
    {
        gotoxy(76, 20);
        printf("Rp.           (Rp.10.100.000-Rp.20.000.000)");
        gotoxy(79, 20);
        tbh = 0;
        do
        {
            pinbesar[tbh] = getch();
            if (pinbesar[tbh] == 13 && tbh > 0)
            {
                pinbesar[tbh] = '\0';
                tbh--;
                break;
            }
            else if (pinbesar[tbh] == '\b' && tbh > 0)
            {
                pinbesar[tbh] = '\0';
                tbh--;
                printf("\b \b");
            }
            else if ((pinbesar[tbh] >= '0' && pinbesar[tbh] <= '9' && pinbesar[0] != '0') && tbh < 10)
            {
                printf("%c", pinbesar[tbh]);
                tbh++;
            }
        } while (true);
        if (atoi(pinbesar) < 10100000)
        {
            gotoxy(75, 20);
            printf(" nominal terlalu kecil!!                      ");
            Sleep(1000);
            gotoxy(75, 20);
            printf("                                               ");
        }
        else if (atoi(pinbesar) > 20000000)
        {
            gotoxy(75, 20);
            printf(" nominal melampaui batas!!                    ");
            Sleep(1000);
            gotoxy(75, 20);
            printf("                                               ");
        }
        for (int i = 0; i < strlen(pinbesar); i++)
        {
            if (i > (strlen(pinbesar) - 6) && i < strlen(pinbesar) && pinbesar[i] != '0')
            {
                strcpy(pinbesar, " ");
            }
        }
        if (strcmp(pinbesar, " ") == 0)
        {
            gotoxy(75, 20);
            printf(" lima digit terakhir harus angka 0            ");
            Sleep(1000);
            gotoxy(75, 20);
            printf("                                               ");
        }
    } while (atoi(pinbesar) < 10100000 || atoi(pinbesar) > 20000000);
    bgcolor(bg);
}