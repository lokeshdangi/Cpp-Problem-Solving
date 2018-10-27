#include<iostream>
using namespace std;

void toh(int n,char from , char to, char aux){
	if(n==1){
		cout << from << " "<< to << endl;
		return; 
	}
	toh(n-1,from,aux,to);
	cout << from << " " << to<< endl;
	toh(n-1,aux,to,from);
}
int main(){
	toh(4,'A','C','B');
	
	return 0;
}


