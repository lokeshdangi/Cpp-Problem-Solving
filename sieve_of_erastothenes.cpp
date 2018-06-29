#include<iostream>
using namespace std;
int sieve(int n){
	bool marked[n];
	
	for(int i = 0; i< n; i++){
		marked[i] = true;
	}
	
	for(int i = 3; i < n; i+=2){
		if(marked[i]){
			for(int j = i*2; j < n; j+=i){
				marked[j] = false;
			}
		}
	}
	cout << 2;
	for(int k = 3;k < n; k+=2){
		if(marked[k]){
			cout << ","<< k ;
		}
	}
}
int main(){
	cout << "Enter Limit : ";
	int n;
	cin >> n;
	
	if(n==0 || n==1){
		cout <<"None";
	}else if(n==2){
		cout << 2;
	}else{
		sieve(n + 1);
	}
		return 0;
}
