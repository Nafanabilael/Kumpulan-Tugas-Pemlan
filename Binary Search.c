#include <stdio.h>
 
int main()
{
   int c, awal, akhir, tengah, n, cari, array[50];
 
   printf("Masukkan banyak bilangan : \n");
   scanf("%d",&n);
 
   printf("Masukan %d bilangan tersebut: \n", n);
 
   for (c = 0; c < n; c++)
      scanf("%d",&array[c]);
 
   printf("Cari angka\n");
   scanf("%d", &cari);
 
   awal = 0;
   akhir = n - 1;
   tengah = (awal+akhir)/2;
 
   while (awal <= akhir) {
      if (array[tengah] < cari)
         awal = tengah + 1;    
      else if (array[tengah] == cari) { 
         printf("%d ada di data ke %d.\n", cari, tengah+1);
         break;
      }
      else
         akhir = tengah - 1;
 
      tengah = (awal + akhir)/2;
   }
   if (awal > akhir)
      printf("Tidak ditemukan! %d tidak ada dalam data.\n", cari);
 
   return 0;  
}
