#include<iostream>
using namespace std;

int main(){
	char str[] = "abcddcab";
	int left[26];
	int right[26];
	for(int i=0;i < 26;i++){
		left[i] = 0;
		right[i] = 0;
	}
	
	int n = sizeof(str)/sizeof(str[0]);
	n = n-1;
	int nb2 = n/2;
	
	if (n % 2 == 0){
		
	
	for(int i=0;i<nb2;i++){
		
		left[int(str[i])-97]++;
		right[int(str[nb2+i])-97]++;
	}
	}else{
		for(int i=0;i<nb2;i++){
		
		left[int(str[i])-97]++;
		right[int(str[nb2+1+i])-97]++;
	}
	}
	
	for(int i=0;i < 26;i++){			
			cout << char(97+i) << " : " << left[i] << " : " <<right[i]<< endl;
		
	}
	return 0;
}
