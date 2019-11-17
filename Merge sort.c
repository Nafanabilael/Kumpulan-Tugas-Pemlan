#include <stdio.h>
//mergesort
//nafanabilaelindri
int array[] = {8,3,5,1,7,2};


void merging(int low, int mid, int high) {
  
      
    int temp[high + 1];
    int i = low;
    int j = mid + 1;
    int k = 0;

    while (i <= mid && j <= high)
    {
        if (array[i] <= array[j])
            temp[k++] = array[i++];
        else
            temp[k++] = array[j++];
    }
    while (i <= mid)
        temp[k++] = array[i++];
    while (j <= high)
        temp[k++] = array[j++];
    k--;
    while (k >= 0)
    {
        array[k + low] = temp[k];
        k--;
    }
}

void sort(int low, int high) {
   int mid;
   
   if(low < high) {
      mid = (low + high) / 2;
      sort(low, mid);
      sort(mid+1, high);
      merging(low, mid, high);
   } else { 
      return;
   }   
}

int main() { 
   int i;

   printf("Data sebelum di merge sort\n");
   
   for(i = 0; i <= 5; i++)
      printf("%d ", array[i]);

   sort(0, 5);

   printf("\nData sesudah di merge sort\n");
   
   for(i =0; i <= 5; i++)
      printf("%d ", array[i]);
}
