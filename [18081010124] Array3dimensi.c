#include <string.h>
#include <conio.h>
#include <math.h>
#include <windows.h>
//NAFA NABILA EL INDRI 
//18081010124
void  chgcolor(unsigned short color)
{
HANDLE sCon = GetStdHandle(STD_OUTPUT_HANDLE);
SetConsoleTextAttribute(sCon,color);
} 

int main(){
	int i,j,k;
	char m=64;
	int data [3][3][3]={{{2,1,8},{4,3,5},{1,8,2}},{{3,5,2},{-2,3,8},{1,-4,5}},{{3,-2,1},{6,4,1},{2,-5,3}}};
	float lab,lbc,lde,lef,lgh,lhi,l1,l2,l3;
	
	for(i=0; i<3; i++){
	chgcolor(14);
	printf(" _________________\n");
	printf("|                 |\n");
	printf("|   Array ke %d    |\n", i+1);
	printf("|_________________|\n\n");
	chgcolor(15);
	printf("  X    Y    Z \n");		
	for(j=0; j<3; j++){
		++m;
		chgcolor(10);
		printf(" Baris %c \n",m);
		chgcolor(15);
		for(k=0; k<3; k++){
			printf("  %d  ", data[i][j][k]);
			}
		printf("\n");
		}
	lab = sqrt(pow((data[0][0][0]-data[0][1][0]),2)+pow((data[0][0][1]-data[0][1][1]),2)+pow((data[0][0][2]-data[0][1][2]),2));
	lbc = sqrt(pow((data[0][1][0]-data[0][2][0]),2)+pow((data[0][1][1]-data[0][2][1]),2)+pow((data[0][1][2]-data[0][2][2]),2));
	l1 = lab+lbc;
	
	lde = sqrt(pow((data[1][0][0]-data[1][1][0]),2)+pow((data[1][0][1]-data[1][1][1]),2)+pow((data[1][0][2]-data[1][1][2]),2));
	lef = sqrt(pow((data[1][1][0]-data[1][2][0]),2)+pow((data[1][1][1]-data[1][2][1]),2)+pow((data[1][1][2]-data[1][2][2]),2));
	l2 = lde+lef;
	
	lgh = sqrt(pow((data[2][0][0]-data[2][1][0]),2)+pow((data[2][0][1]-data[2][1][1]),2)+pow((data[2][0][2]-data[2][1][2]),2));
	lhi = sqrt(pow((data[2][1][0]-data[2][2][0]),2)+pow((data[2][1][1]-data[2][2][1]),2)+pow((data[2][1][2]-data[2][2][2]),2));
	l3 = lgh+lhi;
	
	}
  printf("\n");
  chgcolor(9);
  printf("==============================================\n");
  chgcolor(6);
  printf("|\t          Perhitungan                |\n");
  chgcolor(9);
  printf("==============================================\n\n");
  chgcolor(15);	
  	printf(" _________________________________\n");
  	printf("|                                 |\n");
    printf("|Lintasan AB = %f           |\n",lab);
	printf("|Lintasan BC = %f           |\n",lbc);
	printf("|_________________________________|\n");
	chgcolor(14);
	printf("   | Total A ke C = %f |\n",l1);
    printf("   |__________________________|\n\n");
    chgcolor(15);
	
  	printf(" _________________________________\n");
  	printf("|                                 |\n");
    printf("|Lintasan DE = %f           |\n",lde);
	printf("|Lintasan EF = %f           |\n",lef);
	printf("|_________________________________|\n");
	chgcolor(14);
	printf("   | Total D ke F = %f |\n",l2);
    printf("   |__________________________|\n\n");	
    chgcolor(15);

  	printf(" _________________________________\n");
  	printf("|                                 |\n");
    printf("|Lintasan GH = %f           |\n",lgh);
	printf("|Lintasan HI = %f          |\n",lhi);
	printf("|_________________________________|\n");
	chgcolor(14);
	printf("   | Total G ke I = %f |\n",l3);
    printf("   |__________________________|\n\n");
    chgcolor(15);
	
	
return 0;
}
