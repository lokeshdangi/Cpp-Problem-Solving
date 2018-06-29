#include<iostream>
using namespace std;

void print(bool marked[], int n, int m){
	for(int k = 3;k < n; k+=2){
		if((marked[k]) && (k >= m)) {
			cout << ","<< k ;
		}
	}
}
int sieve(int n,int m){
	bool marked[n];
	
	for(int i = 0; i < n; i++){
		marked[i] = true;
	}
	
	for(int i = 3; i < n; i+=2){
		if(marked[i]){
			for(int j = i*2; j < n; j+=i){
				marked[j] = false;
			}
		}
	}
	if(m <= 2){
		cout << 2;
		print(marked, n, 3);
	}
	else if(m > 2){
		print(marked, n, m);
	}

	
	

}
int main(){
	int n,m;
	cout << "Enter Lower Limit : ";
	cin >> m;
	cout << endl << "Enter Upper Limit : ";
	cin >> n;
	
	if(n==0 || n==1){
		cout <<"None";
	}else if(n==2){
		cout << 2;
	}else{
		sieve(n + 1,m);
	}
		return 0;
}
