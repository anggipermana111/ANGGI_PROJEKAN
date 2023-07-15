#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <string.h>
#include <windows.h>
#include <time.h>
void erasesimpan()
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
void simpanananggota()
{
    time_t sekarang = time(NULL);
    struct tm waktu = *localtime(&sekarang);
    FILE *simpanan = fopen("PROJEKAN_TANGGAL.txt", "r");
    sim = 0;
    while (!feof(simpanan))
    {
        fscanf(simpanan, "%d", &bulanpad[sim]);
        fscanf(simpanan, "%d", &tahunpad[sim]);
        sim++;
    }
    sim--;
    fclose(simpanan);
    do
    {
        textcolor(tc);
        char kodeanggota[100][5][100] = {};
        char namaanggota[100][5][100] = {};
        char kotaanggota[100][5][100] = {};
        char tgllanggota[100][5][100] = {};
        char nohpanggota[100][5][100] = {};
        char wajibanggota[100][5][100] = {};
        char sukarelaanggota[100][5][100] = {};
        val = 0;
        bulan = 0;
        tahun = 0;
        erase();
        for (int i = 1; i <= 3; i++)
        {
            gotoxy(5, 3);
            Sleep(10);
            printf("   *********  ****  ****  ****  *********    ********   ****  ****  ");
            gotoxy(5, 4);
            Sleep(10);
            printf("  ****        ****  **********  ****  ****  ****  ****  ***** ****  ");
            gotoxy(5, 5);
            Sleep(10);
            printf("  *********   ****  *** ** ***  ****  ****  ****  ****  **********  ");
            gotoxy(5, 6);
            Sleep(10);
            printf("   *********  ****  ***    ***  *********   **********  **********  ");
            gotoxy(5, 7);
            Sleep(10);
            printf("        ****  ****  ***    ***  ****        ****  ****  **** *****  ");
            gotoxy(5, 8);
            Sleep(10);
            printf("  *********   ****  ***    ***  ****        ****  ****  ****  ****  ");
            Sleep(200);
            gotoxy(5, 3);
            Sleep(10);
            printf("   %s%s%c  %s  %s  %s  %s%s%c    %s%s   %s  %s  ", s, s, 219, s, s, s, s, s, 219, s, s, s, s);
            gotoxy(5, 4);
            Sleep(10);
            printf("  %s        %s  %s%s%c%c  %s  %s  %s  %s  %s%c %s  ", s, s, s, s, 219, 219, s, s, s, s, s, 219, s);
            gotoxy(5, 5);
            Sleep(10);
            printf("  %s%s%c   %s  %c%c%c %c%c %c%c%c  %s  %s  %s  %s  %s%s%c%c  ", s, s, 219, s, 219, 219, 219, 219, 219, 219, 219, 219, s, s, s, s, s, s, 219, 219);
            gotoxy(5, 6);
            Sleep(10);
            printf("   %s%s%c  %s  %c%c%c    %c%c%c  %s%s%c   %s%s%c%c  %s%s%c%c  ", s, s, 219, s, 219, 219, 219, 219, 219, 219, s, s, 219, s, s, 219, 219, s, s, 219, 219);
            gotoxy(5, 7);
            Sleep(10);
            printf("        %s  %s  %c%c%c    %c%c%c  %s        %s  %s  %s %s%c  ", s, s, 219, 219, 219, 219, 219, 219, s, s, s, s, s, 219);
            gotoxy(5, 8);
            Sleep(10);
            printf("  %s%s%c   %s  %c%c%c    %c%c%c  %s        %s  %s  %s  %s  ", s, s, 219, s, 219, 219, 219, 219, 219, 219, s, s, s, s, s, s);
        }
        gotoxy(77, 5);
        printf("[SPASI] UNTUK <<PREVIEW ");
        gotoxy(77, 6);
        printf("                          ");
        gotoxy(73, 7);
        printf("SIMPAN [POKOK]-[WAJIB]-[SUKARELA]");
        gotoxy(107, 5);
        printf("  [TAB] UNTUK NEXT>>    ");
        gotoxy(107, 6);
        printf("                        ");
        gotoxy(107, 7);
        printf("[ENTER] UNTUK MEMILIH>>");
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
        FILE *file = fopen("./PROJEKAN_SIMPANAN.txt", "r");
        cd = 0;
        cd4 = 0;
        while (!feof(file))
        {
            fscanf(file, "%s", &wajibanggota[cd4][cd]);
            fscanf(file, "%s", &sukarelaanggota[cd4][cd]);
            if (!(wajibanggota[cd4][cd][0] >= '0' && wajibanggota[cd4][cd][0] <= '9') && val == 0)
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
            erasesimpan();
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
                printf("Rp.1000000,-");
                gotoxy(77, 14 + beda);
                printf("Rp.%s,-", wajibanggota[l][k]);
                gotoxy(100, 14 + beda);
                printf("Rp.%s,-", sukarelaanggota[l][k]);
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
                printf("    WAJIB    ");
                gotoxy(146, 14 + beda);
                printf("   SUKARELA  ");
                beda += 6;
            }
            nd = pilihdaftar(cek1[l], l, 2);
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
        bulan = waktu.tm_mon + 1;
        tahun = waktu.tm_year + 1900;
        if (nd == 1 && bulanpad[idx - 1] != bulan && tahunpad[idx - 1] != tahun)
        {
            erase();
            if (sebelum("APAKAH YAKIN INGIN MENYIMPAN??") == 2)
            {
                erase();
                simpananwajib(idx);
                bulanpad[idx - 1] = bulan;
                tahunpad[idx - 1] = tahun;
                simpanan = fopen("PROJEKAN_TANGGAL.txt", "w");
                for (int i = 0; i < sim; i++)
                {
                    fprintf(simpanan, "%d\n", bulanpad[i]);
                    fprintf(simpanan, "%d\n", tahunpad[i]);
                }
                fclose(simpanan);
            }
        }
        else if (nd == 2)
        {
            erase();
            if (sebelum("APAKAH YAKIN INGIN MENYIMPAN??") == 2)
            {
                erase();
                simpanansukarela(idx);
            }
        }
    } while (nd != 0);
}
void simpananwajib(int idx)
{
    int nominalwajib = 0;
    bulan = 0;
    tahun = 0;
    time_t sekarang = time(NULL);
    struct tm waktu = *localtime(&sekarang);
    char hari[10][10] = {"MINGGU", "SENIN", "SELASA", "RABU", "KAMIS", "JUM'AT", "SABTU"};
    FILE *simpanan = fopen("PROJEKAN_TANGGAL.txt", "r");
    sim = 0;
    while (!feof(simpanan))
    {
        fscanf(simpanan, "%d", &bulanpad[sim]);
        fscanf(simpanan, "%d", &tahunpad[sim]);
        sim++;
    }
    sim--;
    fclose(simpanan);

    simpanan = fopen("PROJEKAN_SIMPANAN.txt", "r");
    sim = 0;
    while (!feof(simpanan))
    {
        fscanf(simpanan, "%d", &swajibpad[sim]);
        fscanf(simpanan, "%d", &ssukarelapad[sim]);
        sim++;
    }
    sim--;
    fclose(simpanan);
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
    bulan = waktu.tm_mon + 1;
    tahun = waktu.tm_year + 1900;
    gotoxy(50, 14);
    printf("SIMPANAN WAJIB");
    gotoxy(50, 15);
    printf("______________");
    gotoxy(50, 17);
    printf("JENIS SIMPANAN          : WAJIB");
    gotoxy(50, 18);
    printf("______________________________________________________________________");
    gotoxy(50, 20);
    printf("BESAR SIMPANAN          : ");
    gotoxy(50, 21);
    printf("______________________________________________________________________");
    gotoxy(50, 23);
    printf("TANGGAL BAYAR           : %-6s %.2d/%.2d/%.4d [%.2d:%.2d]", hari[waktu.tm_wday], waktu.tm_mday, waktu.tm_mon + 1, waktu.tm_year + 1900, waktu.tm_hour, waktu.tm_min);
    gotoxy(50, 24);
    printf("______________________________________________________________________");

    do
    {
        gotoxy(76, 20);
        tbh = 0;
        do
        {
            simwajib[tbh] = getch();
            if (simwajib[tbh] == 13 && tbh > 0)
            {
                simwajib[tbh] = '\0';
                tbh--;
                break;
            }
            else if (simwajib[tbh] == '\b' && tbh > 0)
            {
                simwajib[tbh] = '\0';
                tbh--;
                printf("\b \b");
            }
            else if ((simwajib[tbh] >= '0' && simwajib[tbh] <= '9' && simwajib[0] != '0') && tbh < 10)
            {
                printf("%c", simwajib[tbh]);
                tbh++;
            }
        } while (true);
        if (strlen(simwajib) < 5)
        {
            gotoxy(76, 20);
            printf("nominal terlalu kecil!!               ");
            Sleep(1000);
            gotoxy(76, 20);
            printf("                                           ");
        }
        for (int i = 0; i < strlen(simwajib); i++)
        {
            if (i > (strlen(simwajib) - 4) && i < strlen(simwajib) && simwajib[i] != '0')
            {
                strcpy(simwajib, " ");
            }
        }
        if (strcmp(simwajib, " ") == 0)
        {
            gotoxy(75, 20);
            printf(" tiga digit terakhir harus angka 0            ");
            Sleep(1000);
            gotoxy(75, 20);
            printf("                                               ");
        }
    } while (strlen(simwajib) < 5);
    bgcolor(bg);
    swajibpad[idx - 1] += atoi(simwajib);
    FILE *simpan = fopen("PROJEKAN_SIMPANAN.txt", "w");
    for (int i = 0; i < sim; i++)
    {
        fprintf(simpan, "%d\n", swajibpad[i]);
        fprintf(simpan, "%d\n", ssukarelapad[i]);
    }
    fclose(simpan);
}
void simpanansukarela(int idx)
{
    FILE *simpanan = fopen("PROJEKAN_SIMPANAN.txt", "r");
    sim = 0;
    while (!feof(simpanan))
    {
        fscanf(simpanan, "%d", &swajibpad[sim]);
        fscanf(simpanan, "%d", &ssukarelapad[sim]);
        sim++;
    }
    sim--;
    fclose(simpanan);
    time_t sekarang = time(NULL);
    struct tm waktu = *localtime(&sekarang);
    char hari[10][10] = {"MINGGU", "SENIN", "SELASA", "RABU", "KAMIS", "JUM'AT", "SABTU"};
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
    printf("SIMPANAN SUKARELA");
    gotoxy(50, 15);
    printf("_________________");
    gotoxy(50, 17);
    printf("JENIS SIMPANAN          : SUKARELA");
    gotoxy(50, 18);
    printf("______________________________________________________________________");
    gotoxy(50, 20);
    printf("BESAR SIMPANAN          : ");
    gotoxy(50, 21);
    printf("______________________________________________________________________");
    gotoxy(50, 23);
    printf("TANGGAL BAYAR           : %-6s %.2d/%.2d/%.4d [%.2d:%.2d]", hari[waktu.tm_wday], waktu.tm_mday, waktu.tm_mon + 1, waktu.tm_year + 1900, waktu.tm_hour, waktu.tm_min);
    gotoxy(50, 24);
    printf("______________________________________________________________________");
    do
    {
        gotoxy(76, 20);
        printf("                                ");
        gotoxy(76, 20);
        tbh = 0;
        do
        {
            simsukarela[tbh] = getch();
            if (simsukarela[tbh] == 13 && tbh > 0)
            {
                simsukarela[tbh] = '\0';
                tbh--;
                break;
            }
            else if (simsukarela[tbh] == '\b' && tbh > 0)
            {
                simsukarela[tbh] = '\0';
                tbh--;
                printf("\b \b");
            }
            else if ((simsukarela[tbh] >= '0' && simsukarela[tbh] <= '9' && simsukarela[0] != '0') && tbh < 10)
            {
                printf("%c", simsukarela[tbh]);
                tbh++;
            }
        } while (true);
        if (strlen(simsukarela) < 5)
        {
            gotoxy(76, 20);
            printf("nominal terlalu kecil!!     ");
            Sleep(1000);
        }
        for (int i = 0; i < strlen(simsukarela); i++)
        {
            if (i > (strlen(simsukarela) - 4) && i < strlen(simsukarela) && simsukarela[i] != '0')
            {
                strcpy(simsukarela, " ");
            }
        }
        if (strcmp(simsukarela, " ") == 0)
        {
            gotoxy(75, 20);
            printf(" tiga digit terakhir harus angka 0            ");
            Sleep(1000);
            gotoxy(75, 20);
            printf("                                               ");
        }
    } while (strlen(simsukarela) < 5);
    bgcolor(bg);
    ssukarela = atoi(simsukarela);
    ssukarelapad[idx - 1] += ssukarela;
    FILE *simpan = fopen("PROJEKAN_SIMPANAN.txt", "w");
    for (int i = 0; i < sim; i++)
    {
        fprintf(simpan, "%d\n", swajibpad[i]);
        fprintf(simpan, "%d\n", ssukarelapad[i]);
    }
    fclose(simpan);
}