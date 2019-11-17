#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
void  chgcolor(unsigned short color)
{
HANDLE sCon = GetStdHandle(STD_OUTPUT_HANDLE);
SetConsoleTextAttribute(sCon,color);
} 

struct mahasiswa
{
	int npm;
	float ipk;
};

typedef struct mahasiswa mhs;

main() 
{
	struct mahasiswa mhs[3];
	int i, input;
	int jumlaharray = sizeof(mhs) / sizeof(mhs[3]);
	chgcolor(14);
 	printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
 	chgcolor(6);
 	printf("|              SELAMAT BERMAIN DENGAN ARRAY STRUCT ^_^             |\n");
 	chgcolor(14);
 	printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
 	printf("\n");
 	
	mhs[0].npm = 180;
	mhs[0].ipk = 3.80;
	
	mhs[1].npm = 181;
	mhs[1].ipk = 3.90;
	
	mhs[2].npm = 182;
	mhs[2].ipk = 4.00;
	chgcolor(9);
	printf("======================================\n");
	chgcolor(13);
	printf("|        Data Struct Mahasiswa       |\n");
	chgcolor(9);
	printf("======================================\n");
	for(i = 0; i < jumlaharray; i++)
	{
		chgcolor(15);
		printf("Npm : %d\n", mhs[i].npm);
		printf("ipk : %.2f\n\n", mhs[i].ipk);
	}
	printf("\n\n");
	chgcolor(9);
	printf("=========================================\n");
	chgcolor(13);
	printf("|    Data Struct Mahasiswa (REVERSE)    |\n");
	chgcolor(9);
	printf("=========================================\n");
	for(i = jumlaharray-1; i >= 0; i--)
	{
		chgcolor(15);
		printf("Npm : %d\n", mhs[i].npm);
		printf("ipk : %.2f\n\n", mhs[i].ipk);
	}
	printf("\n\n");
	chgcolor(9);
	printf("======================================\n");
	chgcolor(13);
	printf("|     Cari Data Berdasarkan NPM      |\n");
	chgcolor(9);
	printf("======================================\n");
	chgcolor(14);
	printf("Masukkan sebuah NPM : ");
	scanf("%d", &input);
	for(i = 0; i < jumlaharray; i++)
	{
		if(mhs[i].npm == input)
		{
		chgcolor(15);	
		printf("Npm : %d\n", mhs[i].npm);
		printf("ipk : %.2f\n\n", mhs[i].ipk);
		}else{
			chgcolor(15);
			printf("\n");
			printf("      ===========================\n");
			printf("      |Npm yg anda masukan salah|\n");
			printf("      ===========================\n");
		}
	}
	
	return 0;
}
