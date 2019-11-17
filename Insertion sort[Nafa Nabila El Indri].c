#include <stdio.h>
//insertion sort

int main(){
	int i,j,A[6] ={2,1,8,4,6,9};
	printf(" ___________________________________\n");
	printf("| Data Awal |");
      for(i=0;i<6;i++)
    {
        printf(" %i |",A[i]);
    } 
    printf("\n");
    printf("|___________|___|___|___|___|___|___|\n");
	for(int i=1; i<6; i++){
		for(int j=i; j>0 && A[j]<A[j-1]; j--){ 
			int temp=A[j-1];
			A[j-1]=A[j];
			A[j]=temp;
		}
	}

	printf("\n");
	printf(" _________________________________________________________________\n");
	printf("| Data seteleah dilakukan insertion sort  | ");
	for(int i=0; i<6; i++){
		printf("%d | ", A[i]);
	}
	printf("\n");
	printf("|_________________________________________|___|___|___|___|___|___|\n");
	getchar();
}
