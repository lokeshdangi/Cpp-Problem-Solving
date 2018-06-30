#include<iostream>
#include <algorithm>
using namespace std;
int main(){
	int sack,n;
	cout << "Enter sack size: ";
	cin >> sack;
	cout <<"Enter size : ";
	cin >>n;
	n+=1;
	int mat[n][sack +1];
	int temp;
	int weight[n],value[n];
	weight[0] = 0;
	value[0] = 0;
	
	for(int i = 1;i < n;i++){
		cout <<"Enter weight : ";
		cin >> weight[i];
	}
	
	for(int i = 1;i < n;i++){
		cout <<"Enter value : ";
		cin >> value[i];
	}	
	for(int i =0;i < n; i++){
		mat[i][0] = 0;
	}
	for(int i = 0;i < sack +1;i++){
		mat[0][i] = 0;
	}
	for(int i = 1; i < n; i++){
		for(int j = 1; j < sack +1;j++){
			if(j  >= weight[i]){
				mat[i][j] = std::max(mat[i-1][j],mat[i-1][j - weight[i]] + value[i]); 
			}
			else{
				 
				mat[i][j] = mat[i-1][j];
			}
		}
	}
	/*
	cout <<"WHOLE MAT"<<endl;
	for(int i = 0;i < n;i++){
		for(int j = 0; j < sack +1; j++){
			cout << mat[i][j]<<",";
		}
		cout << endl;
	}
	*/
	
	//Back Tracking
	int i = n - 1;
	int j = sack;
	cout << "WEIGHTS : ";	
	while(j > 0){
		if(mat[i-1][j] == mat[i][j]){
			i-=1;
		}else{
			i-=1;
			j-=weight[i+1];
			cout <<weight[i+1]<<",";
		}
	}
	cout <<endl<<"TOTAL VALUE :" << mat[n-1][sack];
	
	return 0;
}
