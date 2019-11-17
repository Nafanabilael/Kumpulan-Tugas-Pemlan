#include <stdio.h>
#include <windows.h>
void chgcolor(unsigned short color)
{
HANDLE sCon = GetStdHandle(STD_OUTPUT_HANDLE);
SetConsoleTextAttribute(sCon,color);
} 

int pangkatiteratif(int e, int w){
	int hasil = 1;
	int i=1;
	for (i=1; i<=w; i++){
		hasil = hasil * e;
	}
	return hasil;
	}
int pangkatrekursif(int e, int w){
	if (w==0)
		return 1;
	else  
		return  e * pangkatrekursif(e,w-1); 			
	}
 
	 int main () 
	{
		int e,w;
		chgcolor(9);
 		printf(" ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
 		chgcolor(6);
 		printf(" ~                     SELAMAT DATANG                     ~\n");
 		printf(" ~             SELAMAT BERMAIN DENGAN PANGKAT ^_^         ~\n");
 		printf(" ~                 NAFA NABILA EL INDRI (EL)              ~\n");
 		chgcolor(9);
 		printf(" ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
 		chgcolor(15);
 		printf("\n");
		printf(" Masukan Bilangan	: ");
		scanf("%d", &e);
		printf(" Masukan Pangkat 	: ");
		scanf("%d", &w);
		printf("\n");
		chgcolor(14);
		printf(" ==========================================================\n");
		printf(" |              Hasil Iteratif dari %d^%d = %d              |\n",e,w,pangkatiteratif(e,w));
		printf(" |              Hasil Rekursif dari %d^%d = %d              |\n",e,w,pangkatrekursif(e,w));
		printf(" ==========================================================\n");
		return 0;
			
	}
			

