#include<iostream>
using namespace std;

void swap(int *x, int *y){
	int temp = *x;
	*x = *y;
	*y = temp;
}
int part(int arr[], int low, int high){
	
	int pivot = arr[high];
	int i = low-1;
	
	for(int j = low;j <=high-1;j++){
		
		if (arr[j] <= pivot){
			
			i++;
			swap(&arr[i],&arr[j]);
		}
	}
	swap(&arr[i+1],&arr[high]);
	
	return (i+1);
}

void quicksort(int arr[], int low, int high){
	
	if(low <  high){
		int correct_pos = part(arr,low,high)	;
		
		quicksort(arr, low, correct_pos - 1); 
        quicksort(arr, correct_pos + 1, high); 
	
		
	}
}


int main(){
	
	int arr[] = {8,5,2,14,6,2,3,7,0};
	int n = sizeof(arr)/sizeof(arr[0]);
	quicksort(arr,0,n-1);
	
	for(int i=0;i < n;i++){
		cout << arr[i] << ",";
	}
	return 0;
}
