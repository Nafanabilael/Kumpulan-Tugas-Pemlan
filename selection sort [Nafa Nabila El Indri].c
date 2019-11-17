#include <stdio.h>
//selection sort

int main(){
	int i,j,A[6]={3,1,2,5,8,7};
	printf(" ___________________________________\n");
	printf("| Data Awal |");
      for(i=0;i<6;i++)
    {
        printf(" %i |",A[i]);
    }
    printf("\n");
    printf("|___________|___|___|___|___|___|___|\n");
    
	for(i=0; i<6; i++){
		int iMin=i;
		for(j=i; j<6; j++){
			if(A[j]<A[iMin]){
				iMin=j;
			}
		}
		int temp=A[i];
		A[i]=A[iMin];
		A[iMin]=temp;
	}
	printf("\n");
	printf(" _________________________________________________________________\n");
	printf("| Data seteleah dilakukan selection sort  | ");
	for(i=0; i<6; i++){
		printf("%d | ", A[i]);
	}
	printf("\n");
	printf("|_________________________________________|___|___|___|___|___|___|\n");
	getchar();
}
