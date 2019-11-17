#include <stdio.h>             


int main()                        
{
	int i,j,l[6] ={8,10,2,3,6,7};
	printf("Terdapat 6 angka yaitu: ");
      for(i=0;i<6;i++)
    {
        printf("%i",l[i]);
        printf(" ");
    }
	for ( i = 0; i < 6; i++)                    
	{
		for ( j = 0; j < 6; j++)             
		{
			if (l[j] > l[i])                
			{
				int tmp = l[i];         
				l[i] = l[j];           
				l[j] = tmp;             
			}  
		}
	}
	printf("\n");  
	printf(" _____________________________________\n"); 
	printf("| Ascending : ");                  
	for (i = 0; i < 6; i++)                    
	{
		printf(" %d |", l[i]);
	}
	for ( i = 0; i < 6; i++)                   
	{
		for ( j = 0; j < 6; j++)            
		{
			if (l[j] < l[i])              
			{
				int tmp = l[i];        
				l[i] = l[j];            
				l[j] = tmp;           
			}
		}
	}
	printf("\n"); 
    printf("|_____________________________________|\n"); 
	printf("\n");  
	printf(" ______________________________________\n");  
	printf("| Descending : ");  
 
	            
	for ( i = 0; i < 6; i++)                    
	{
		printf(" %d |", l[i]);  
	                 
	}
	printf("\n"); 
    printf("|______________________________________|\n"); 
	return 0;                                      
}
