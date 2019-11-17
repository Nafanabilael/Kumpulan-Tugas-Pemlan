#include <stdio.h>
#include <conio.h>
#include <windows.h>
void chgcolor(unsigned short color)
{
HANDLE sCon = GetStdHandle(STD_OUTPUT_HANDLE);
SetConsoleTextAttribute(sCon,color);
} 
main()
 {
 	float pasword;
 	char nama [30];
 	chgcolor(9);
 	printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
 	printf("~                   LOGIN BIODATA DIRI                   ~\n");
 	printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    chgcolor(15);
 	printf(" Masukan Nama Anda              : ");
 	gets(nama);
 	printf(" Masukan Pasword Anda           : ");
 	scanf("%f", &pasword);
    if(pasword >= 123 && pasword <=123){
    chgcolor(14);	
    printf("\n               Selamat, Anda Berhasil Masuk\n");
    chgcolor(9);
 	printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
 	chgcolor(4);
 	printf("\n      = =   = =         = =   = =         = =   = =       ");
 	printf("\n     =    =    =       =    =    =       =    =    =      ");
 	printf("\n      =       =         =       =         =       =       ");
 	printf("\n        =   =             =   =             =   =         ");
 	printf("\n          =                 =                 =       \n\n");
 	printf("\n");
 	chgcolor(10);
    printf("==========================================================\n");
 	printf("==                TAMPILAN BIODATA DIRI                 ==\n");
 	printf("==========================================================");
	chgcolor(14);
 	printf("\n==\t     ==  Halo, %s  ==         ==              ",nama);
 	printf("\n==           ==================================         ==");
 	printf("\n==                                                      ==");
 	printf("\n==\t  NPM              :18081010124                 ==");
 	printf("\n==\t  Tanggal Lahir    :15 Desember 1999            ==");
 	printf("\n==\t  Alamat           :Tuban                       ==");
 	printf("\n==\t  Jenis Kelamin    :Perempuan                   ==");
 	printf("\n==\t  Jurusan          :Teknik Informatika          ==");
 	printf("\n==\t  Angkatan         :2018                        ==");
 	printf("\n==\t  Usia             :19 Tahun                    ==");
 	printf("\n==\t  Tinggi           :163.2 cm                    ==");
 	printf("\n==\t  Hobi             :Memasak dan Menggambar      ==");
 	printf("\n==\t  Minuman Favorite :Kopi                        ==");
 	printf("\n");
 	chgcolor(10);
 	printf("==========================================================\n");
 	printf("==========================================================\n");
 	} 
	else {
	chgcolor(14);
	printf("\n");
	printf("\n             ================================  ");	
    printf("\n             | Maaf, Pasword Anda Salah !!! |\n");
    printf("             ================================\n");
    }
 	
	getch();	
 	 
 }

