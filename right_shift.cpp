#include<iostream>
using namespace std;

int main(){
	
	int arr[]  = {1,2,3,4,5,6,7,8,9};
	int n = sizeof(arr)/sizeof(arr[0]);
	cout << n <<endl;
	
	for(int i=0;i < n;i++){
		cout << arr[i] << ",";
	}
	cout << endl;
	int shift = 5;
	int temp[shift];
	int i;
	int j;
	for(int i=n-shift,j=0;i < n;i++,j++){
		temp[j] = arr[i];
	}
	for(int i=0;i < shift;i++){
		cout << temp[i] << ",";
	}
	cout << endl;
	cout << "SLICE" << endl;
	for(int i=n-shift;i>=0;i--){
		arr[i+shift] = arr[i];
		
	}
	
	for(int i=0;i < n;i++){
		cout << arr[i] << ",";
	}
	cout << endl;
	for(int i=0;i < shift;i++){
		arr[i] = temp[i];
	}
	
	for(int i=0;i < n;i++){
		cout << arr[i] << ",";
	}
	cout << endl;
	return 0;
}
