#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <string.h>
#include <windows.h>
#include <time.h>
void eraseangsur()
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
void angsurananggota()
{
    time_t sekarang = time(NULL);
    struct tm waktu = *localtime(&sekarang);
    bulan = 0;
    tahun = 0;
    selisihbulan = 0;
    do
    {
        FILE *angsuran = fopen("PROJEKAN_ANGSURAN.txt", "r");
        sim = 0;
        while (!feof(angsuran))
        {
            fscanf(angsuran, "%d", &periodeangsurpad[sim]);
            fscanf(angsuran, "%ld", &besarangsur1pad[sim]);
            fscanf(angsuran, "%ld", &besarangsur2pad[sim]);
            sim++;
        }
        sim--;
        fclose(angsuran);
        angsuran = fopen("PROJEKAN_TANGGAL_ANGSUR.txt", "r");
        sim = 0;
        while (!feof(angsuran))
        {
            fscanf(angsuran, "%d", &bulanpad1[sim]);
            fscanf(angsuran, "%d", &tahunpad1[sim]);
            sim++;
        }
        sim--;
        fclose(angsuran);
        angsuran = fopen("PROJEKAN_PINJAMAN.txt", "r");
        sim = 0;
        while (!feof(angsuran))
        {
            fscanf(angsuran, "%s", &jenispinjampad[sim]);
            fscanf(angsuran, "%d", &lamapinjampad[sim]);
            fscanf(angsuran, "%ld", &totalpinjampad[sim]);
            sim++;
        }
        sim--;
        fclose(angsuran);

        textcolor(tc);
        char kodeanggota[100][5][100] = {};
        char namaanggota[100][5][100] = {};
        char kotaanggota[100][5][100] = {};
        char tgllanggota[100][5][100] = {};
        char nohpanggota[100][5][100] = {};
        char periodeangsur[100][5][100] = {};
        char besarangsur1[100][5][100] = {};
        char besarangsur2[100][5][100] = {};
        val = 0;
        bulan = 0;
        tahun = 0;
        erase();
        for (int i = 1; i <= 3; i++)
        {
            gotoxy(5, 3);
            Sleep(10);
            printf(" ********   ****  ****   ********    *********  ****  ****  ********* ");
            gotoxy(5, 4);
            Sleep(10);
            printf("****  ****  ***** ****  ****  ****  ****        ****  ****  ****  ****");
            gotoxy(5, 5);
            Sleep(10);
            printf("****  ****  **********  ****        *********   ****  ****  ****  ****");
            gotoxy(5, 6);
            Sleep(10);
            printf("**********  **********  **** *****   *********  ****  ****  ********  ");
            gotoxy(5, 7);
            Sleep(10);
            printf("****  ****  **** *****  ****  ****        ****  **********  **** **** ");
            gotoxy(5, 8);
            Sleep(10);
            printf("****  ****  ****  ****   *********  *********    ********   ****  ****  ");
            Sleep(200);
            gotoxy(5, 3);
            Sleep(10);
            printf(" %s%s   %s  %s   %s%s    %s%s%c  %s  %s  %s%s%c ", s, s, s, s, s, s, s, s, 219, s, s, s, s, 219);
            gotoxy(5, 4);
            Sleep(10);
            printf("%s  %s  %s%c %s  %s  %s  %s        %s  %s  %s  %s", s, s, s, 219, s, s, s, s, s, s, s, s);
            gotoxy(5, 5);
            Sleep(10);
            printf("%s  %s  %s%s%c%c  %s        %s%s%c   %s  %s  %s  %s", s, s, s, s, 219, 219, s, s, s, 219, s, s, s, s);
            gotoxy(5, 6);
            Sleep(10);
            printf("%s%s%c%c  %s%s%c%c  %s %s%c   %s%s%c  %s  %s  %s%s  ", s, s, 219, 219, s, s, 219, 219, s, s, 219, s, s, 219, s, s, s, s);
            gotoxy(5, 7);
            Sleep(10);
            printf("%s  %s  %s %s%c  %s  %s        %s  %s%s%c%c  %s %s ", s, s, s, s, 219, s, s, s, s, s, 219, 219, s, s);
            gotoxy(5, 8);
            Sleep(10);
            printf("%s  %s  %s  %s   %s%s%c  %s%s%c    %s%s   %s  %s", s, s, s, s, s, s, 219, s, s, 219, s, s, s, s);
        }
        gotoxy(80, 5);
        printf("[SPASI] UNTUK <<PREVIEW ");
        gotoxy(80, 6);
        printf("                          ");
        gotoxy(80, 7);
        printf("ANGSUR [NORMAL] [+BUNGA]");
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
        FILE *file = fopen("./PROJEKAN_ANGSURAN.txt", "r");
        cd = 0;
        cd4 = 0;
        while (!feof(file))
        {
            fscanf(file, "%s", &periodeangsur[cd4][cd]);
            fscanf(file, "%s", &besarangsur1[cd4][cd]);
            fscanf(file, "%s", &besarangsur2[cd4][cd]);
            if (!(periodeangsur[cd4][cd][0] >= '0' && periodeangsur[cd4][cd][0] <= '9') && val == 0)
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
            eraseangsur();
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
                printf("ANGSURAN KE - %s", periodeangsur[l][k]);
                gotoxy(77, 14 + beda);
                printf("Rp.%s,-", besarangsur1[l][k]);
                gotoxy(99, 14 + beda);
                printf("Rp.%s,-", besarangsur2[l][k]);
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
                printf("STATUS ANGSUR");
                gotoxy(146, 14 + beda);
                printf(" BAYAR ANGSUR");
                beda += 6;
            }
            nd = pilihdaftar(cek1[l], l, 4);
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
        selisihbulan = ((bulan - bulanpad1[idx - 1]) + ((tahun - tahunpad1[idx - 1]) * 12));
        if (nd == 1)
        {
            erase();
            statusangsuran(idx);
        }
        else if (nd == 2 && selisihbulan > 0 && selisihbulan <= lamapinjampad[idx - 1])
        {
            erase();
            bayarangsuran(idx);
        }
    } while (nd != 0);
}
void bayarangsuran(int idx)
{
    bulan = 0;
    tahun = 0;
    time_t sekarang = time(NULL);
    struct tm waktu = *localtime(&sekarang);
    char hari[10][10] = {"MINGGU", "SENIN", "SELASA", "RABU", "KAMIS", "JUM'AT", "SABTU"};
    FILE *angsuran = fopen("PROJEKAN_ANGSURAN.txt", "r");
    sim = 0;
    while (!feof(angsuran))
    {
        fscanf(angsuran, "%d", &periodeangsurpad[sim]);
        fscanf(angsuran, "%ld", &besarangsur1pad[sim]);
        fscanf(angsuran, "%ld", &besarangsur2pad[sim]);
        sim++;
    }
    sim--;
    fclose(angsuran);
    angsuran = fopen("PROJEKAN_TANGGAL_ANGSUR.txt", "r");
    sim = 0;
    while (!feof(angsuran))
    {
        fscanf(angsuran, "%d", &bulanpad1[sim]);
        fscanf(angsuran, "%d", &tahunpad1[sim]);
        sim++;
    }
    sim--;
    fclose(angsuran);
    angsuran = fopen("PROJEKAN_PINJAMAN.txt", "r");
    sim = 0;
    while (!feof(angsuran))
    {
        fscanf(angsuran, "%s", &jenispinjampad[sim]);
        fscanf(angsuran, "%d", &lamapinjampad[sim]);
        fscanf(angsuran, "%ld", &totalpinjampad[sim]);
        sim++;
    }
    sim--;
    fclose(angsuran);
    bgcolor(15);
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
                gotoxy(i + 35, j + 10);
                printf(" ");
            }
        }
        Sleep(1);
    }
    bulan = waktu.tm_mon + 1;
    tahun = waktu.tm_year + 1900;
    selisihbulan = 0;
    nominal1 = 0;
    selisihbulan = ((bulan - bulanpad1[idx - 1]) + ((tahun - tahunpad1[idx - 1]) * 12));
    if (bulanpad1[idx - 1] != 0 && selisihbulan > 0)
    {
        if (strcmp(jenispinjampad[idx - 1], "KECIL") == 0 && selisihbulan <= 5)
        {
            periode = periodeangsurpad[idx - 1];
            for (int i = 0; i < selisihbulan; i++)
            {
                lamapinjampad[idx - 1]--;
                periodeangsurpad[idx - 1]++;
                totalpinjampad[idx - 1] -= besarangsur1pad[idx - 1];
                nominal1 += besarangsur2pad[idx - 1];
                besarangsur2pad[idx - 1] = besarangsur1pad[idx - 1] + (totalpinjampad[idx - 1] / 100);
            }
            bulanpad1[idx - 1] = bulan;
            tahunpad1[idx - 1] = tahun;

            if (totalpinjampad[idx - 1] == 0)
            {
                strcpy(jenispinjampad[idx - 1], "-");
                periodeangsurpad[idx - 1] = 0;
                besarangsur1pad[idx - 1] = 0;
                besarangsur2pad[idx - 1] = 0;
            }
            angsuran = fopen("PROJEKAN_PINJAMAN.txt", "w");
            for (int i = 0; i < sim; i++)
            {
                fprintf(angsuran, "%s\n", jenispinjampad[i]);
                fprintf(angsuran, "%d\n", lamapinjampad[i]);
                fprintf(angsuran, "%ld\n", totalpinjampad[i]);
            }
            fclose(angsuran);
            angsuran = fopen("PROJEKAN_ANGSURAN.txt", "w");
            for (int i = 0; i < sim; i++)
            {
                fprintf(angsuran, "%d\n", periodeangsurpad[i]);
                fprintf(angsuran, "%ld\n", besarangsur1pad[i]);
                fprintf(angsuran, "%ld\n", besarangsur2pad[i]);
            }
            fclose(angsuran);
            angsuran = fopen("PROJEKAN_TANGGAL_ANGSUR.txt", "w");
            for (int i = 0; i < sim; i++)
            {
                fprintf(angsuran, "%d\n", bulanpad1[i]);
                fprintf(angsuran, "%d\n", tahunpad1[i]);
            }
            fclose(angsuran);
        }
        else if (strcmp(jenispinjampad[idx - 1], "BESAR") == 0 && selisihbulan <= 10)
        {
            periode = periodeangsurpad[idx - 1];
            for (int i = 0; i < selisihbulan; i++)
            {
                lamapinjampad[idx - 1]--;
                periodeangsurpad[idx - 1]++;
                totalpinjampad[idx - 1] -= besarangsur1pad[idx - 1];
                nominal1 += besarangsur2pad[idx - 1];
                besarangsur2pad[idx - 1] = besarangsur1pad[idx - 1] + (totalpinjampad[idx - 1] / 50);
            }
            bulanpad1[idx - 1] = bulan;
            tahunpad1[idx - 1] = tahun;

            if (totalpinjampad[idx - 1] == 0)
            {
                strcpy(jenispinjampad[idx - 1], "-");
                periodeangsurpad[idx - 1] = 0;
                besarangsur1pad[idx - 1] = 0;
                besarangsur2pad[idx - 1] = 0;
            }
            angsuran = fopen("PROJEKAN_PINJAMAN.txt", "w");
            for (int i = 0; i < sim; i++)
            {
                fprintf(angsuran, "%s\n", jenispinjampad[i]);
                fprintf(angsuran, "%d\n", lamapinjampad[i]);
                fprintf(angsuran, "%ld\n", totalpinjampad[i]);
            }
            fclose(angsuran);
            angsuran = fopen("PROJEKAN_ANGSURAN.txt", "w");
            for (int i = 0; i < sim; i++)
            {
                fprintf(angsuran, "%d\n", periodeangsurpad[i]);
                fprintf(angsuran, "%ld\n", besarangsur1pad[i]);
                fprintf(angsuran, "%ld\n", besarangsur2pad[i]);
            }
            fclose(angsuran);
            angsuran = fopen("PROJEKAN_TANGGAL_ANGSUR.txt", "w");
            for (int i = 0; i < sim; i++)
            {
                fprintf(angsuran, "%d\n", bulanpad1[i]);
                fprintf(angsuran, "%d\n", tahunpad1[i]);
            }
            fclose(angsuran);
        }
    }
    gotoxy(50, 14);
    printf("BAYAR ANGSURAN");
    gotoxy(50, 15);
    printf("______________");
    gotoxy(50, 17);
    printf("ANGSURAN KE             : %d", periode);
    gotoxy(50, 18);
    printf("______________________________________________________________________");
    gotoxy(50, 20);
    printf("BESAR ANGSURAN          : Rp.%-10ld                (untuk %d bulan)", nominal1, selisihbulan);
    gotoxy(50, 21);
    printf("______________________________________________________________________");
    gotoxy(50, 23);
    printf("TANGGAL BAYAR           : %-6s %.2d/%.2d/%.4d [%.2d:%.2d]", hari[waktu.tm_wday], waktu.tm_mday, waktu.tm_mon + 1, waktu.tm_year + 1900, waktu.tm_hour, waktu.tm_min);
    gotoxy(50, 24);
    printf("______________________________________________________________________");
    bgcolor(bg);
    gotoxy(0, 0);
    system("pause>nul");
}
void statusangsuran(int idx)
{
    char kodestatus[100][100] = {};
    char namastatus[100][100] = {};
    char kotastatus[100][100] = {};
    char tgllstatus[100][100] = {};
    char nohpstatus[100][100] = {};
    char status[100] = {};
    textcolor(tc);
    bgcolor(15);
    FILE *angsuran = fopen("./PROJEKAN_DAFTARANGGOTA_KOPERASI.txt", "r");
    sim = 0;
    while (!feof(angsuran))
    {
        fscanf(angsuran, "%[^\n]s", &kodestatus[sim]);
        fgets(slash[sim], 100, angsuran);
        fscanf(angsuran, "%[^\n]s", &namastatus[sim]);
        fgets(slash[sim], 100, angsuran);
        fscanf(angsuran, "%[^\n]s", &kotastatus[sim]);
        fgets(slash[sim], 100, angsuran);
        fscanf(angsuran, "%[^\n]s", &tgllstatus[sim]);
        fgets(slash[sim], 100, angsuran);
        fscanf(angsuran, "%[^\n]s", &nohpstatus[sim]);
        fgets(slash[sim], 100, angsuran);
        sim++;
    }
    sim--;
    fclose(angsuran);
    angsuran = fopen("PROJEKAN_TANGGAL_ANGSUR.txt", "r");
    sim = 0;
    while (!feof(angsuran))
    {
        fscanf(angsuran, "%d", &bulanpad1[sim]);
        fscanf(angsuran, "%d", &tahunpad1[sim]);
        sim++;
    }
    sim--;
    fclose(angsuran);
    angsuran = fopen("PROJEKAN_PINJAMAN.txt", "r");
    sim = 0;
    while (!feof(angsuran))
    {
        fscanf(angsuran, "%s", &jenispinjampad[sim]);
        fscanf(angsuran, "%d", &lamapinjampad[sim]);
        fscanf(angsuran, "%ld", &totalpinjampad[sim]);
        sim++;
    }
    sim--;
    fclose(angsuran);
    if (bulanpad1[idx - 1] == 0 && totalpinjampad[idx - 1] == 0)
    {
        strcpy(status, "BELUM MEMINJAM");
    }
    else if (totalpinjampad[idx - 1] == 0)
    {
        strcpy(status, "LUNAS");
    }
    else if (totalpinjampad[idx - 1] != 0)
    {
        strcpy(status, "BELUM LUNAS");
    }
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
    printf("%-30s (KA%-3s)", namastatus[idx - 1], kodestatus[idx - 1]);
    gotoxy(50, 15);
    printf("______________________________________");
    gotoxy(50, 17);
    printf("SISA PINJAMAN           : %ld", totalpinjampad[idx - 1]);
    gotoxy(50, 18);
    printf("______________________________________________________________________");
    gotoxy(50, 20);
    printf("WAKTU                   : %ld BULAN ", lamapinjampad[idx - 1]);
    gotoxy(50, 21);
    printf("______________________________________________________________________");
    gotoxy(50, 23);
    printf("STATUS ANGSURAN         : %s", status);
    gotoxy(50, 24);
    printf("______________________________________________________________________");
    bgcolor(bg);
    gotoxy(0, 0);
    system("pause>nul");
}