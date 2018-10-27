#include<iostream>
using namespace std;

int main(){
	
	int n;
	int c;
	n = 2;
	c = 1;
	int fact = 1;
	for(int i=0;i < c;i++){
		fact = fact *n;
		n--;
	}
	int fact1 = 1;
	for(int j=1;j<=c;j++){
		fact1 = fact1 *j; 
	}
	cout << fact/fact1;
	
	return 0;
}
