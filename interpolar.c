#include<stdio.h>
#include <conio.h>
int main()
{
            
            int L[8], i,j,k,tkr,low,high,pos,tm;
            for(i=0;i<8;i++)
            {
                        printf("data ke-%d : ",i+1);
                        scanf("%d",&L[i]);
            }
            printf("\n Cari data : ");
            scanf("%d",&k);
            for(i=0;i<8;i++){
                        for(j=i+1;j<8;j++){
                                    if (L[i]>L[j]){
                                                tkr=L[i]; L[i]=L[j]; L[j]=tkr;
                                    }
                        }
            }
            tm=0;
            high=7; low=0; do
            {
                        pos = ((k - L[low]) / (L[high] - L[low]))*(high-low) +  low;
                        if (L[pos] == k){
                                    tm++;
                                    break;
                        }
                        if (L[pos] > k)
                                    high = pos-1;
                        else if (L[pos] < k)
                                    low = pos + 1;
            }
            while(k >= L[low] && k <= L[high]);
                        if (tm>0){
                                    printf(" _____________________________\n");
                                    printf("| Selamat data %d ditemukan   |\n",k);
                                    printf("|____________________________|\n");
                        }else{
                        		    printf(" _________________________________\n");
                                    printf("| Maaf, data tidak di temukan T-T | \n");
									printf("|_________________________________|\n");}
                                

                        
            return(0);
}
