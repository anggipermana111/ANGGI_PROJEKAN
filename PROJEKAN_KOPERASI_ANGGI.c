#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
#include <windows.h>
#include <stdbool.h>
#include <time.h>
#include "PROJEKAN_LOGO.c"
#include "PROJEKAN_KOPERASI_ISI.c"

int koderegistrasi(),
    sebelumlogin(),
    pilihlogin(),
    first(),
    pilih(int j),
    pilihdaftar(int max, int sesi, int jenis),
    pilihan(),
    sebelum(char memilih[]);

void backcolor(int c),
    geserlogin(int x, int c1),
    miderase(),
    closed(),
    masuk(),
    tentang(),
    erase(),
    gerak(int a, int c1, int j),
    setelan(),
    daftaranggota(),
    erasedaftar(),
    geserdaftar(int x, int y, int c1, int index, int jenis),
    tambahanggota(),
    editanggota(int idx),
    hapusanggota(int idx),
    geser(int x, int y, int c1),
    formulir(int x),
    statusangsuran(int idx),
    bayarangsuran(int idx),
    pinjamankecil(int idx),
    pinjamanbesar(int idx),
    simpanansukarela(int idx),
    simpananwajib(int idx);

char
    user[100],
    pass[100],
    userpad[10][100],
    passpad[10][100];

int
    a,
    c,
    n,
    p,
    us,
    ps,
    cekuser,
    cekchar,
    cektitik,
    akunsama,
    gagal,
    ka,
    tc,
    bg = 11,
    bg2 = 15,
    pc = 6,
    x,
    y,
    ulang,
    cek,
    cekuser,
    akunsama,
    cekchar,
    cektitik,
    back;

char
    menu[][100] = {"DAFTAR ANGGOTA", "   SIMPANAN   ", "   PINJAMAN   ", "   ANGSURAN   ", "   KEMBALI    "},
    awal[][100] = {"    MASUK     ", "   TENTANG    ", "   SETELAN    ", "    KELUAR    "},
    setting[][100] = {"  TEMA MERAH  ", "  TEMA BIRU   ", "  TEMA HITAM  ", "   KEMBALI    "};

char
    c1[100] = {219, 219, 219, 219, 219, 219, 219, 219},
    close[] = "CLOSED PLEASE WAIT...",
    log1[][10] = {"REGISTER", " LOGIN  "},
    user[100],
    pass[100],
    pass1[100],
    s[5] = {219, 219, 219, 219},
    l[][100] = {"USERNAME", "PASSWORD"},
    k[][100] = {"KEMBALI", "LANJUT"},
    userpad[10][100],
    passpad[10][100];

char simwajibpad[100][100];
char simsukarelapad[100][100];
int periodeangsurpad[100];
long besarangsur1pad[100];
long besarangsur2pad[100];
char kodeunikpad[100];
char kodeunik[100];
int kode1;
int bulanpad1[100];
int tahunpad1[100];
int xd, yd, nd, pd, id;
int cd;
int cs;
int cd4;
int cek1[100];
int beda;
int idx;
int max2;
int val;
int cekhuruf;
int cekhurufvokal;
char hapus[][10] = {"TIDAK", " IYA "};
char daftar[][100] = {" EDIT ANGGOTA ", "HAPUS ANGGOTA"};
char kode[100][100];
char nama[100][100];
char kota[100][100];
char tgll[100][100];
char nohp[100][100];
int tbh;
char nama1[100];
char kota1[100];
int samakota;
char tgll1[10], bl[10], th[10];
int tg1, bl1, th1;
char nohp1[100];
char kotajabar[100][100];
char slash[100][100];
char jenispinjampad[100][100];
int lamapinjampad[100];
long totalpinjampad[100];
int val;
int n;
int p;
int x, y;
int xd, yd, nd, pd, id;
int cd;
int cd4;
int cek1[100];
int beda;
int idx;
int max2;
int val;
int cekhuruf;
int cekhurufvokal;
char simpan1[][100] = {"    WAJIB    ", "   SUKARELA  "};
int tbh;
int pd, xd, yd;
char slash[100][100];
char simwajib[100];
char simsukarela[100];
long long 
swajib,
ssukarela;
int swajibpad[100];
int ssukarelapad[100];
int sim;
int bulanpad[100];
int tahunpad[100];
int bulan;
int tahun;
int val;
char m1[5] = {219, 219, 219};
int n;
int p;
int x, y;
int xd, yd, nd, pd, id;
int cd;
int cd4;
int cek1[100];
int beda;
int idx;
int max2;
int val;
int cekhuruf;
int cekhurufvokal;
char pinjam1[][100] = {" PINJAM KECIL", " PINJAM BESAR"};
int tbh;
int pd, xd, yd;
char slash[100][100];
char pinkecil[100];
char pinbesar[100];
char pinkecilpad[100][100];
char pinbesarpad[100][100];
int swajib;
int ssukarela;
int pkecilpad[100];
int pbesarpad[100];
int sim;
int bulanpad[100];
int tahunpad[100];
int bulan;
int tahun;
int periodeangsurpad[100];
long besarangsur1pad[100];
long besarangsur2pad[100];
int bulanangsurpad[100];
int tahunangsurpad[100];
int val;
int n;
int p;
int x, y;
int xd, yd, nd, pd, id;
int cd;
int cd4;
int cek1[100];
int beda;
int idx;
int max2;
int val;
int cekhuruf;
int cekhurufvokal;
char angsur1[][100] = {"STATUS ANGSUR", " BAYAR ANGSUR"};
int tbh;
int pd, xd, yd;
char slash[100][100];
char simwajib[100];
char simsukarela[100];
char simwajibpad[100][100];
char simsukarelapad[100][100];
int swajib;
int ssukarela;
int tbh;
int pd, xd, yd;
char pinkecil[100];
char pinbesar[100];
char pinkecilpad[100][100];
char pinbesarpad[100][100];
int swajib;
int ssukarela;
int pkecilpad[100];
int pbesarpad[100];
int sim;
int bulanpad1[100];
int tahunpad1[100];
int bulan;
int tahun;
int periodeangsurpad[100];
long besarangsur1pad[100];
long besarangsur2pad[100];
char jenispinjampad[100][100];
int lamapinjampad[100];
long totalpinjampad[100];
int periode;
long nominal1;
int selisihbulan;

void gotoxy(int x, int y)
{
    COORD a = {x, y};
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), a);
}
int latar = 0, teks = 7;
void textcolor(int a)
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), a + latar * 16);
    teks = a;
}
void bgcolor(int a)
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), teks + a * 16);
    latar = a;
}
void miderase()
{
    textcolor(tc);
    bgcolor(bg);
    for (int x = 1; x <= 15; x++)
    {

        for (int y = 1; y <= 116; y++)
        {
            gotoxy(y + 26, x + 18);
            printf(" ");
        }
    }
}

void main()
{
    FILE *file = fopen("PROJEKAN_WARNA_KOPERASI.txt", "r");
    fscanf(file, "%d", &back);
    fscanf(file, "%d", &tc);
    fscanf(file, "%d", &bg);
    fscanf(file, "%d", &pc);
    fclose(file);
    backcolor(back);
    logo();
    erase();
    textcolor(tc);
    bgcolor(bg);
    first();
}