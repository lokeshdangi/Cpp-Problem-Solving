#include<iostream>
#include<string>
using namespace std;
string notes[] = {"C","C#","D","D#","E","F","F#","G","G#","A","A#","B"};

void print(int i,int start, int iter){
	string temp;
	while(iter >= 0){
		if(start + 1 > 11){
			start = -1;
		}
		start+=1;
		iter-=1;
	}
	cout << "Case " <<i<<":"<<notes[start-1] <<endl;

}
int main(){
	int n;
	cout <<"Enter number of test cases : ";
	cin >> n;
	int map[2][6] = {{1,2,3,4,5,6},{4,11,7,2,9,4}};
	int T[n][2];
	for(int i=0; i<n; i++){
		cout <<"Enter test case";
		cin >> T[i][0]>>T[i][1];
	}

	
	for(int i =0; i<n; i++){
		
		print(i,map[1][T[i][1]-1],T[i][0]);
		/*
		switch(T[i][1]){
			case 1: print(4,T[i][0]); break;
			case 2: print(11,T[i][0]); break;
			case 3: print(7,T[i][0]); break;
			case 4: print(2,T[i][0]); break;
			case 5: print(9,T[i][0]); break;
			case 6: print(4,T[i][0]); break;
		}
		*/
	}
	
	return 0;
}
