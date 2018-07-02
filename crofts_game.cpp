#include<iostream>
using namespace std;
int main(){
	int n,temp;
	cout <<"Enter size of array :";
	cin >> n;
	cout <<"Enter array-1 elements :";
	int P1[n],P2[n],sum[n];
	for(int i = 0;i <n; i++){
		cin >> P1[i];
	}
	
	cout <<"Enter array-2 elements :";
	for(int i = 0;i <n; i++){
		cin >> P2[i];
	}
	for(int i = 0;i <n; i++){
		sum[i] = P1[i] + P2[i];
	}
	
	for(int i = 0;i < n; i++){
		for(int j =i; j < n; j++){
			if(sum[i] < sum[j]){
				temp = sum[i] ;
				sum[i] = sum[j];
				sum[j] = temp;
				
				temp = P1[i] ;
				P1[i] = P1[j];
				P1[j] = temp;
				
				temp = P2[i] ;
				P2[i] = P2[j];
				P2[j] = temp;
			}
		}
	}

	int P1_score=0,P2_score=0;
	bool flag = true;
	for(int i =0;i <n;i++){
		if(flag){
			P1_score+=P1[i];
		}else{
			P2_score+=P2[i];
		}
		flag = !flag;
	}
	
	if(P1_score == P2_score){
		cout <<"tie";
	}else if(P1_score > P2_score){
		cout <<"first";
	}else{
		cout <<"second";
	}
	return 0;
}
