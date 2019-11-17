#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <windows.h>
void  chgcolor(unsigned short color)
{
HANDLE sCon = GetStdHandle(STD_OUTPUT_HANDLE);
SetConsoleTextAttribute(sCon,color);
} 

int BinarySearch(int data[], int k, int l, int m){
    int t = (k+l)/2;
    if(k>l){
      return -1;
    } 
    if(data[t] == m){
      return t;
    }
    if(data[t] < m){
      return BinarySearch(data, t+1, l, m);
    } else {
      return BinarySearch(data, k, t-1, m);
    }
}

void lihat(int i, int data[]){
    for(i=0; i<10; i++){
        printf("%d, ", data[i]);
    }
}


int main(){
    int bil[10] = {3,6,7,8,10,11,12,14,15,17};
    int i, posisi, cari;

    int n = sizeof(bil)/sizeof(bil[0]);
    chgcolor(10);
    printf("=====================\n");
    chgcolor(15);
    printf("| Banyak Data : %d  |\n", n);
    chgcolor(10);
    printf("=====================\n");
    chgcolor(6);
	printf(" ____________________________________________________________\n");	
    printf("| Data Angka :  ");
    lihat(i, bil);
    printf("         |");
    printf("\n|____________________________________________________________|\n");
	chgcolor(15);
    printf(" Cari Angka : "); scanf("%d", &cari);
    posisi = BinarySearch(bil, 0, n-1, cari);
    
    if(posisi < 0){
      chgcolor(14);
      printf("-----------------------------------------\n");
      printf("| Maaf, data %d tidak ditemukan T_T Hwhw |\n", cari);
      printf("-----------------------------------------\n");
    } else {
      chgcolor(14);
      printf("---------------------------------------------\n");
      printf("| Selamat, data %d ditemukan pada indeks %d   |\n", cari, posisi+1);
      printf("---------------------------------------------\n");
    }
    getch();
    return 0;
}
