#include<iostream>
#include<sstream>
using namespace std;

void control(string name1,string name2){
	int j = 0;

	for(int i = 0; i< name1.length(); i++){
		if(name1.length() == j){

		}
		if(name1[i] == name2[j]){
			j+=1;
		}
	}
	if(name2.length() == j){
		cout << "YES"<< endl;
	}else{
		cout << "NO" << endl;
	}
}
int main(){
	int n;
	string name1,name2;
	cout <<"Enter number of test cases :";
	cin >> n;
	string s[n*2];
	for(int i =0; i < n*2; i++){
		cin >> s[i];
	}
	for(int i =0; i < n*2; i+=2){	
		name1 = s[i]; 
		name2 = s[i+1];
		if((name1.length() == name2.length()) && (name1 == name2)){
			cout <<"YES" << endl;
		}else if(name1.length() >= name2.length()){
			control(name1,name2);	
		}else{
			control(name2,name1);
		}
		
	}
	return 0;
}
