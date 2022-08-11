#include <stdio.h>
void swap(int *x, int *y){
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
   
}
void bubbleSort(int n, int *ptr)
{
    int i,j;
    for(i =0; i< n; i++){
        for(j= i+1; j< n; j++){
            if(*(ptr+j)<*(ptr+i)){
            int temp;
             temp = *(ptr+i);
                *(ptr+i) = *(ptr+j);
                *(ptr+j) = temp; 
            }
        }
    }
   
   
   
   
}
void insertionSort(int n, int *ptr)
{
    int i, j, key;
    for(i=1; i<n; i++){
    	key = ptr[i];
    	j = i -1;
    	
    	while (j >= 0 && ptr[j] > key){
    		ptr[j+1] = ptr[j];
    		j = j -1;
		}
		ptr[j+1]=key;
	}
}

void displayResult(int n, int *ptr){
    int i;
    for(i = 0; i< n ; i++)
    {
    	printf("Thu tu cac phan tu duoc sap xep: \n");
    	for(i = 0; i< n ; i++)
       printf("%d " , ptr[i]);
    }
   
}

int main(){
    int n = 5;
    int arr[] = {12,9,3,6,5};
    insertionSort(n,arr);
    displayResult(n,arr);
    printf("\n");
    bubbleSort(n,arr);
    displayResult(n,arr);
    int x = 3 ;int y = 6;
    printf("\nTruoc khi doi cho: x = %d, y = %d", x, y);
    swap(&x, &y);
    printf("\nSau khi doi cho: x = %d, y = %d", x, y);
    return 0;
}
