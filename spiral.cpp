#include<iostream>
using namespace std;

int main(){
	
	int arr[5][5] = {{21,22,23,24,45},{25,26,27,28,78},{29,10,11,12,18},{13,14,15,16,82},{45,98,96,92,91}};
	int r = 5 ;
	int c = 5;
	for(int i=0;i < r; i++){
		for(int j=0; j < c;j++){
			cout << arr[i][j] <<" ";	
		}
		cout << endl;
	}
	
	cout << "SPIRAL" << endl;
	
	int i=0;
	int j=0;
	int F_i=r;
	int F_j=c;
	int I_i=0;
	int I_j =0;
	
	while(true){
		for(j=I_j; j< F_j;j++){
			cout << arr[I_i][j] << " ";
		}
		I_i++;
		
		if(I_i == F_i && I_j ==F_j){
			break;
		}
		
		cout<< ",";

	
		for(i=I_i; i < F_i ; i++){
			cout << arr[i][F_j-1] << " ";
		}
		F_j--;
		
		if(I_i ==F_i && I_j ==F_j){
			break;
		}
		
		cout << ",";

		for(j=F_j-1; j >=I_j;j--){
			cout << arr[F_i-1][j] << " ";
		}
		F_i--;
		
		if(I_i ==F_i && I_j ==F_j){
			break;
		}
				cout << ",";

		for(i= F_i-1; i >= I_i;i--){
			cout << arr[i][I_j] << " ";
		}
		I_j++;
		
		if(I_i ==F_i && I_j ==F_j){
			break;
		}
		
		cout << ",";

	}
}
