#include <stdio.h>
#include <conio.h>


int main(){
	int arr[10]={10,100,50,75,25,150,125,115,175,110};
	int i,size=10;
	printf("\nThe Array Elements are : \n");
	for(i=0;i<10;i++){
		printf("%d\t",arr[i]);
	}
	qsort(arr,0,size-1);
	printf("\n Quick Sorted ELements\n");
	for(i=0;i<10;i++){
		printf("%d\t",arr[i]);
	}
}
void qsort(int arr[10], int fst, int last){
	int i,j,pivot,temp;
	if(fst<last){
		pivot=fst;
		i=fst;
		j=last;
		while(i<j){
			while(arr[i]<=arr[pivot] && i<last)
				i++;
			while(arr[j]>arr[pivot])
				j--;
			if(i<j){
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
		temp = arr[pivot];
		arr[pivot]=arr[j];
		arr[j]=temp;
		qsort(arr,fst,j-1);
		qsort(arr,j+1,last);
	}
}
