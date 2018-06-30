#include<iostream>
using namespace std;
int main(){
	int n;
	float temp;
	cout << "Enter size: ";
	cin >> n;
	
	float value[n],weight[n],ratio[n];
	
	for(int i =0 ;i < n; i++){
		cout << "Enter value:";
		cin >> value[i];
	}
	for(int i= 0;i < n;i++){
		cout << "Enter weight:";
		cin >> weight[i];
	}
	for(int i= 0;i < n;i++){
		ratio[i] = value[i]/weight[i];	
	}
	
	for(int i = 0;i < 3; i++){
		for(int j =i; j < 3; j++){
			if(ratio[i] < ratio[j]){
				temp = ratio[i] ;
				ratio[i] = ratio[j];
				ratio[j] = temp;
				
				temp = weight[i] ;
				weight[i] = weight[j];
				weight[j] = temp;
				
				temp = value[i] ;
				value[i] = value[j];
				value[j] = temp;
			}
		}
	}
	for(int i = 0; i < n; i++){
		cout <<ratio[i]<<",";
	}
	int sack;
	float total = 0;
	cout <<"Enter Sack size :";
	cin >> sack;
	int i = 0;
	
	while(sack >= 0){
		if(weight[i] <= sack){
			sack-=weight[i];
			total+=value[i];
		}
		else{
			total+=sack/weight[i] * value[i];
			sack-= sack/weight[i] * value[i];
			break;
			
		}
		i++;
	}
	
	cout << total;
	return 0;
}
