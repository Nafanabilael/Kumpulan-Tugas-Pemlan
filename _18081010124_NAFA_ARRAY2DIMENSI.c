#include <stdio.h>
#include <windows.h>
void  chgcolor(unsigned short color)
{
HANDLE sCon = GetStdHandle(STD_OUTPUT_HANDLE);
SetConsoleTextAttribute(sCon,color);
} 
struct mahasiswa {
	char npm[10];
	char nama[25];
}mhs[50];
int main() {
  mhs [50];
  int i, n, j,  nilai, jmlsmt, jmlmk, sks[50][30], jumlahnilai, skssmt[14], jumlahsks, totalsks=0;
  char mk[30], nilaihuruf[50][30], matkul[50][50][30];
  float ipk,nr[14], totalnr=0;
  chgcolor(9);
  printf("=============================================================================\n");
  chgcolor(6);
  printf("|\t                Program Menghitung IPK Mahasiswa                    |\n");
  chgcolor(9);
  printf("=============================================================================\n");
  chgcolor(15);
  printf("Masukkan Nama Anda: ");
  scanf("%s"),mhs[n].nama;
  printf("Masukkan Npm Anda : ");
  scanf("%s"),mhs[n].npm;
  printf("==============================================\n");
  printf("Masukkan Jumlah Semester Anda: ");
  scanf("%d", &jmlsmt);
  printf("==============================================\n");
  if (jmlsmt < 2 || jmlsmt > 14) {
  	chgcolor(14);
    printf("Masukan data semester salah!\n");
    return 0;
  }
  else {
    for (i = 0; i < jmlsmt; i++) {
      jumlahnilai = 0;
      jumlahsks = 0;
      printf("Masukkan jumlah mata kuliah anda di semester %d: ", i + 1);
      scanf("%d", &jmlmk);
      printf("==============================================\n");
      if (jmlmk < 2) {
        printf("Jumlah matakuliah tidak boleh kurang dari 2\n");
        return 0;
      }
      else {
        for (j = 0; j < jmlmk; j++) {
          chgcolor(10);
          printf(" __________________________\n");
          printf("|Masukkan mata kuliah ke %d |\n", j + 1);
          printf("|__________________________|\n\n");
          chgcolor(15);
          printf("Masukkan nama matkul: ");
          scanf(" %s", matkul[i][j]);
          printf("Masukkan jumlah sks matkul: ");
          scanf("%d", &sks[i][j]);
          printf("Masukkan nilai matkul: ");
          scanf(" %c", &nilaihuruf[i][j]);
          if (nilaihuruf[i][j] == 'A') {
            nilai = 4 * sks[i][j];
          }
          else if (nilaihuruf[i][j] == 'B') {
            nilai = 3 * sks[i][j];
          }
          else if (nilaihuruf[i][j] == 'C') {
            nilai = 2 * sks[i][j];
          }
          else if (nilaihuruf[i][j]=='D') {
            nilai = 1 * sks[i][j];
          }
          else if (nilaihuruf[i][j]=='E') {
            nilai = 0 * sks[i][j];
          }
          else {
            printf("Input salah!\n");
            return 0;
          }
          jumlahnilai = jumlahnilai + nilai;
          jumlahsks = jumlahsks + sks[i][j];
        }
        if(jumlahsks > 24){
          printf("Jumlah SKS semester lebih dari 24\n");
          return 0;
        } else {
          skssmt[i] = jumlahsks;
          nr[i] = jumlahnilai / jumlahsks;
        }   
      }
    }
  }
  chgcolor(6);
  printf("==============================================\n");
  chgcolor(10);
  printf("|                Cetak Nilai                 |\n");
  chgcolor(6);
  printf("==============================================\n");
  chgcolor(14);
  printf("      | Nama  = NAFA               %s|\n",mhs[n].nama);
  printf("      | Npm   = 18081010124%s         |\n",mhs[n].npm);
  printf("      |_____________________________|\n");
  for(i = 0; i < jmlsmt; i++){
  	chgcolor(15);
    printf("\nHasil Semester %d :\n", i+1);
    printf("\n%12s%12s%12s","Mata Kuliah", "SKS", "Nilai\n");
    for(j = 0; j < jmlmk; j++){
    	chgcolor(14);
      printf("%12s%12d%12c\n",matkul[i][j],sks[i][j],nilaihuruf[i][j]);
    }
    printf("--------------------------------------------\n");
    printf("\nSKS\t: %d\n", skssmt[i]);
    printf("NR\t: %.2f\n", nr[i]);
    totalsks = totalsks + skssmt[i];
    totalnr = totalnr + nr[i];
    printf("--------------------------------------------\n");
  }
  ipk = totalnr/jmlsmt;
  printf("\n");
  chgcolor(10);
  printf("==============================================\n");
  printf("| Total SKS\t: %d                         |\n", totalsks);
  printf("| IPK\t\t: %.2f                       |\n", ipk);
  printf("==============================================\n");
  return 0;
}
