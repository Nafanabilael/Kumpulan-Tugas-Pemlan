#include <stdio.h>
#include <conio.h>
#include <windows.h>
void  chgcolor(unsigned short color)
{
HANDLE sCon = GetStdHandle(STD_OUTPUT_HANDLE);
SetConsoleTextAttribute(sCon,color);
} 

int main() {
	int i, pilih, cari;
	while (pilih != 1 || pilih != 2 || pilih != 3){
		int npm[5] = {180,181,182,183,184};
		float ipk[5] = {3.80,3.85,3.90,3.95,4.00};
	
		chgcolor(9);
 		printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
 		chgcolor(6);
 		printf("|      		  SELAMAT BERMAIN DENGAN ARRAY ^_^         	   |\n");
 		chgcolor(9);
 		printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
 		chgcolor(15);
		printf("1. Tampilkan data (Kecil ke Besar) \n2. Tampilkan data (Besar Ke Kecil) \n3. Cari data\n");
		printf("\n");
		chgcolor(10);
		printf("Masukkan Angka Pilihan Anda : ");
		chgcolor(15);
		scanf("%d", &pilih);
		if(pilih == 1){
			printf("Data Mahasiswa : \n\n");
			for(i = 0; i<5; i++){
				printf("Npm : %d\n", npm[i]);
				printf("ipk : %f\n\n", ipk[i]);
			}
			
		} else if (pilih == 2){
			printf("Data Mahasiswa : \n\n");
			for(i = 4 ; i>=0; i--){
				printf("Npm : %d\n", npm[i]);
				printf("ipk : %f\n\n", ipk[i]);	
		}	
		
		} else if (pilih == 3){
			chgcolor(10);
			printf("\n");
			printf("Masukkan Npm yang dicari    : ");
			chgcolor(15);
			scanf("%d", &cari);
			for(i = 0; i<=5; i++){
				if(npm[i] == cari){
					chgcolor(14);
					printf("\n");
					printf("    		=====================================\n");
					printf("        	|  	  Npm : %d                 |\n", npm[i]);
					printf("		|     	  Ipk : %f            |\n", ipk[i]);
					printf("		=====================================\n");
					printf("\n");
					break;
				}
				 else {
				printf("Data Npm yang Anda Masukan Salah\n");
			}
			}			
		}
	}
	
	return 0;
}
