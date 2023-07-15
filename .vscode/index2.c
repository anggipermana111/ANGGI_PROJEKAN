#include <stdio.h>
#include <conio.h>
#include <windows.h>
void main()
{
    float tb;
    int bb;
    char nama[50];
    float tamp1;
    float tamp2;
    float imt;
    system("color 2");
    system("pause");
    system("cls");
    for(int x=1;x<=8;x++){
        printf("\t\t\t");
        for(int y=1;y<=72;y++){
            if(y>=6 && y<=11 && x>=2 && x<=3 || y>=6 && y<=11 && x>=6 && x<=7 || y>=8 && y<=9 && x>=4 && x<=5 ||
            y>=17 && y<=19 && x>=2 && x<=3 || y>=26 && y<=28 && x>=2 && x<=3 || y>=17 && y<=19 && x>=6 && x<=7 ||
             y>=26 && y<=28 && x>=6 && x<=7){
                printf(" ");
            }
            else{
                printf("X");
            }
        }
        printf("\n");
    }
    printf("\t\t\t\t\tmasukkan nama :____________________\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b");
    scanf("%s", &nama);
    gets(nama);
    printf("\t\t\t\t\tmasukkan tinggi badan :___\b\b\b");
    scanf("%f", &tb);
    printf("\t\t\t\t\tmasukkan berat badan :___\b\b\b");
    scanf("%d", &bb);
    tamp1 = (tb / 100);
    tamp2 = tamp1 * tamp1;
    imt = bb / tamp2;
    printf("\t\t\t\t\t===================================================\n");
    printf("\t\t\t\t\tnama :%s\n", nama);
    printf("\t\t\t\t\tIndeks Masa Tubuh :%f\n", imt);
    printf("\t\t\t\t\t===================================================\n");
    if (imt <= 18.5)
    {
        printf("\t\t\t\t\tketerangan :UNDERWEIGHT\a");
    }
    else if (imt > 18.5 && imt <= 25)
    {
        printf("\t\t\t\t\tketerangan :NORMAL\a");
    }
    else if (imt > 25 && imt <= 27)
    {
        printf("\t\t\t\t\tketerangan :OVERWEIGHT\a");
    }
    else if (imt > 27)
    {
        printf("\t\t\t\t\tketerangan :OBESITAS\a");
    }
    printf("\n\t\t\t\t\tpress ->enter<-\n");

    getch();
}
