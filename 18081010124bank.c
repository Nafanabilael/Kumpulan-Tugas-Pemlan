// Nafa Nabila El Indri (18081010124)//
#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <windows.h>
void  chgcolor(unsigned short color)
{
HANDLE sCon = GetStdHandle(STD_OUTPUT_HANDLE);
SetConsoleTextAttribute(sCon,color);
} 

struct alamat{
 char jalan[15];int norumah;
 char kota[15],propinsi[17];
};
struct tanggal{
 int tanggal, bulan, tahun;
};

struct nasabah{
 int norek;
 int umur;
 double saldo;
 char bank[8];
 char nama[20];
 struct alamat addr;
 struct tanggal tgllahir;
};

typedef struct nasabah nasabah;
int main()
{
 int i, x, pilih, cari;
 char c[5];
 double jmlBCA,jmlMDR,max,min;
 while (pilih != 1 || pilih != 2 || pilih != 3 || pilih != 4 || pilih != 5 || pilih != 6 || pilih != 7 || pilih != 8  || pilih != 9){
 nasabah p[2];


strcpy(p[0].nama, "El");strcpy(p[0].bank, "BNI");strcpy(p[0].addr.jalan, "Jl. Braga ");strcpy(p[0].addr.kota, "Bandung");strcpy(p[0].addr.propinsi, "Jawa Barat");
p[0].umur = 20;p[0].saldo = 9000000;p[0].addr.norumah = 8;p[0].norek = 12801;p[0].tgllahir.tanggal = 15;p[0].tgllahir.bulan = 12;p[0].tgllahir.tahun = 1999;

strcpy(p[1].nama, "Nafa");strcpy(p[1].bank, "BRI");strcpy(p[1].addr.jalan, "Jl. Wiguna 1 ");strcpy(p[1].addr.kota, "Surabaya");strcpy(p[1].addr.propinsi, "Jawa Timur");
p[1].umur = 49;p[1].saldo = 12000000;p[1].addr.norumah = 2;p[1].norek = 12802;p[1].tgllahir.tanggal = 12;p[1].tgllahir.bulan = 9;p[1].tgllahir.tahun = 1970;

strcpy(p[2].nama, "One");strcpy(p[2].bank, "BCA");strcpy(p[2].addr.jalan, "Jl. Inajadulu");strcpy(p[2].addr.kota, "Denpasar");strcpy(p[2].addr.propinsi, "Bali");
p[2].umur = 25;p[2].saldo = 8000000;p[2].addr.norumah = 1;p[2].norek = 12803;p[2].tgllahir.tanggal = 29;p[2].tgllahir.bulan = 3;p[2].tgllahir.tahun = 1994;

Menu:
	chgcolor(14);
	printf(" ____________________________________________________\n");
	printf("|                     Data Rekening                  |\n");
    printf("|____________________________________________________|\n");
    printf("|________________________Menu________________________|\n");
    printf("|    1. Cetak Daftar Nasabah                         |\n");
    printf("|    2. Cari Nasabah                                 |\n");
    printf("|    3. Akumulasi Saldo                              |\n");
    printf("|    4. Pencarian Nasabah Berdasarkan Kota           |\n");
    printf("|    5. Pencarian Nasabah Berdasarkan Provinsi       |\n");
    printf("|    6. Tampilan Nasabah Umur Tertentu               |\n");
    printf("|    7. Peringkat Saldo Nasabah Terbanyak            |\n");
    printf("|    8. Peringkat Saldo Nasabah Tersedikit           |\n");
    printf("|    9. Keluar                                       |\n");
    printf("|____________________________________________________|\n");
    chgcolor(15);
	printf(" Pilihan Anda : ");
	scanf("%d", &pilih);
	if (pilih == 1)
	{

	for(i = 0 ; i<3 ; i++){
				chgcolor(9);
				printf("=============================================================================\n");
				chgcolor(6);
				printf("|                              Tampilan Data                                |\n");
				chgcolor(9);
				printf("=============================================================================\n");
				chgcolor(15);
				printf("No Rekening           =  %i\n",p[i].norek);
				printf("Nama Bank             =  %s\n",p[i].bank);
				printf("Jumlah Saldo          =  %.2f\n",p[i].saldo);
				printf("Nama                  =  %s \n",p[i].nama);
				printf("Umur                  =  %i\n",p[i].umur);
				printf("Tempat tanggal lahir  =  %i-%i-%i\n",p[i].tgllahir.tanggal,p[i].tgllahir.bulan,p[i].tgllahir.tahun);
				printf("Alamat                =  %s no %i kota %s ,%s\n",p[i].addr.jalan,p[i].addr.norumah,p[i].addr.kota,p[i].addr.propinsi);
				chgcolor(9);
				printf("=============================================================================\n");
                                                              
	}
	goto Menu;
	}else if (pilih == 2){
	printf(" Cari Nama : ");
			scanf("%s", &c);
			for(i = 0; i<3; i++){
				if(strstr(p[i].nama, c)){
				chgcolor(9);
				printf("=============================================================================\n");
				chgcolor(6);
				printf("|                              Tampilan Data                                |\n");
				chgcolor(9);
				printf("=============================================================================\n");
				chgcolor(15);
				printf("No Rekening           = %i\n",p[i].norek);
				printf("Nama Bank             = %s\n",p[i].bank);
				printf("Jumlah Saldo          = %.2f\n",p[i].saldo);
				printf("Nama                  = %s \n",p[i].nama);
				printf("Umur                  = %i\n",p[i].umur);
				printf("Tempat tanggal lahir  = %i-%i-%i\n",p[i].tgllahir.tanggal,p[i].tgllahir.bulan,p[i].tgllahir.tahun);
				printf("Alamat                = %s no %i, kota %s ,%s\n",p[i].addr.jalan,p[i].addr.norumah,p[i].addr.kota,p[i].addr.propinsi);
				chgcolor(9);
				printf("=============================================================================\n");
   				goto Menu;
					break;
				}
		}
	}else if (pilih == 3){
			chgcolor(10);
			printf("===============================================\n");
			chgcolor(6);
			printf("|             Total Saldo Akumulasi           |\n");
			chgcolor(10);
			printf("===============================================\n");
			chgcolor(15);
			float hasil=0;
			
			for(i=0;i<3;i++){
				hasil+=p[i].saldo;
				printf("%.2f\n",p[i].saldo);			
			}
			printf("--------------------------+\n");
			printf("%.2f\n\n",hasil);
    			goto Menu;
			 
	}else if (pilih == 4){
		printf("Cari Data  : ");
			scanf("%s", &c);
			for(i = 0; i<3; i++){

				if(strstr(p[i].addr.kota, c)){
				chgcolor(9);
				printf("=============================================================================\n");
				chgcolor(6);
				printf("|                              Tampilan Data                                |\n");
				chgcolor(9);
				printf("=============================================================================\n");
				chgcolor(15);
				printf("| No Rekening           =  %i\n",p[i].norek);
				printf("| Nama Bank             =  %s\n",p[i].bank);
				printf("| Jumlah Saldo          =  %.2f\n",p[i].saldo);
				printf("| Nama                  =  %s \n",p[i].nama);
				printf("| Umur                  =  %i\n",p[i].umur);
				printf("| Tempat tanggal lahir  =  %i-%i-%i\n",p[i].tgllahir.tanggal,p[i].tgllahir.bulan,p[i].tgllahir.tahun);
				printf("| Alamat                =  %s no %i kota %s ,%s\n",p[i].addr.jalan,p[i].addr.norumah,p[i].addr.kota,p[i].addr.propinsi);
				chgcolor(9);
				printf("=============================================================================\n");
				printf("\n");
    			chgcolor(15);
    			goto Menu;
				break;
}
}


	}else if (pilih == 5){

				printf(" Cari Provinsi : ");
				scanf("%s", &c);
				for(i = 0; i<3; i++){

				if(strstr(p[i].addr.propinsi, c)){
				chgcolor(9);
				printf("\n");
				printf("=============================================================================\n");
				chgcolor(6);
				printf("|                              Tampilan Data                                |\n");
				chgcolor(9);
				printf("=============================================================================\n");
				chgcolor(15);
				printf("No Rekening           =%i\n",p[i].norek);
				printf("Nama Bank             =%s\n",p[i].bank);
				printf("Jumlah Saldo          =%.2f\n",p[i].saldo);
				printf("Nama                  =%s \n",p[i].nama);
				printf("Umur                  =%i\n",p[i].umur);
				printf("Tempat tanggal lahir  =%i-%i-%i\n",p[i].tgllahir.tanggal,p[i].tgllahir.bulan,p[i].tgllahir.tahun);
				printf("Alamat                =%s no %i, kota %s ,%s\n",p[i].addr.jalan,p[i].addr.norumah,p[i].addr.kota,p[i].addr.propinsi);
				chgcolor(9);
				printf("=============================================================================\n");
				goto Menu;
    			break;
}

}
		
	}else if (pilih == 6){
			printf(" Umur Nasabah : ");
			scanf("%i", &cari);
			for(i = 0; i<3; i++){
				if(p[i].umur== cari){
				chgcolor(9);
				printf("=============================================================================\n");
				chgcolor(6);
				printf("|                              Tampilan Data                                |\n");
				chgcolor(9);
				printf("=============================================================================\n");
				chgcolor(15);
				printf("Nama Bank             =%s\n",p[i].bank);
				printf("Jumlah Saldo          =%.2f\n",p[i].saldo);
				printf("Nama                  =%s \n",p[i].nama);
				printf("Umur                  =%i\n",p[i].umur);
				printf("Tempat tanggal lahir  =%i-%i-%i\n",p[i].tgllahir.tanggal,p[i].tgllahir.bulan,p[i].tgllahir.tahun);
				printf("Alamat                =%s no %i kota %s ,%s\n",p[i].addr.jalan,p[i].addr.norumah,p[i].addr.kota,p[i].addr.propinsi);
				chgcolor(9);
				printf("=============================================================================\n");
				printf("\n");
    			goto Menu;
				break;
}
}
			
		}else if(pilih == 7){


			 for(i=0; i<3; i++){
        	 if(p[i].saldo>11000000){
    chgcolor(10);
	printf("===============================================\n");
	chgcolor(6);
	printf("|    Saldo terbanyaknya adalah %.2f    |\n",p[i].saldo);
	chgcolor(10);
	printf("===============================================\n");
    printf("\n");
    goto Menu;
    break;
        }
			 }



}else if(pilih == 8){
for(i=0; i<3; i++){
        	 if(p[i].saldo<8500000){
    chgcolor(10);
	printf("===============================================\n");
	chgcolor(6);
	printf("|    Saldo tersedikitnya adalah %.2f    |\n",p[i].saldo);
	chgcolor(10);
	printf("===============================================\n");
    printf("\n");
    goto Menu;			
    break;

			}
		}
 }else{
 		chgcolor(14);
        printf("\n Terima Kasih Telah Bertransaksi Disini......\n");
      }
return 0;
}
}








