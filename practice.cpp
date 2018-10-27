#include<iostream>
using namespace std;
struct Poly{
	int coef;
	int power;
	Poly *next;
};
class Polynomial{
	public:
	Poly * root = NULL;
	int count_terms = 0;
	
		void createnode(int coef,int power){
			Poly *temp = new(Poly);
			temp->coef = coef;
			temp->power = power;
			temp->next =NULL;
			
			if(root == NULL){
				//cout << "ROOT" <<endl;
				root = temp;
				count_terms++;
			}else{
				
				Poly * root_temp = NULL;
				Poly * previous = NULL;
				Poly * current = NULL;
				root_temp = root;
				int flag = 0;
				int equal = 0;
				
				while(root_temp != NULL){
					
					if(power == root_temp->power){
						
						root_temp->coef = root_temp->coef + coef;
						if(root_temp->coef == 0){
							clean();
						}
						/*
						if(root_temp->coef == 0){
							cout << "REMOVING MONOMIAL" <<endl;
							if(previous == NULL){
								root = root_temp->next;
								count_terms--;	
							}else{
								previous->next = root_temp->next;
								count_terms--;
							}
							
							
						//END IF
						}
						*/
						equal = 1;
						break;
					}else if(power > root_temp->power){
						flag = 1;
						previous = current;
						current = root_temp;
						break;
						
					}else{
						
						previous = current;
						current = root_temp;
						root_temp = root_temp->next;	
					}
					
				}
				if(equal == 0){
				
				if(previous == NULL && flag == 1){
					//cout << "BEGINING" <<endl;
					temp->next = current;
					root = temp;
					count_terms++;
					
				}else if(root_temp == NULL){
					//cout <<"END" <<endl;
					current->next = temp;
					count_terms++;
				}else{
					//cout << "MIDDLE"<<endl;
					temp->next = previous->next;
					previous->next = temp;
					count_terms++;
					
				}
			}
				
			}

		}
		int getDegree(){
			if(root == NULL){
				cout << "Empty polynomial";
			}else{
				cout << "Degree :" << root->power <<endl; 
			}
		}
		
		
		int getNoOfTerms(){
			if(root == NULL){
				cout << "Empty polynomial";
			}else{
				cout << "No of terms :" << count_terms <<endl; 
			}
		}
		void clean(){
			
			Poly * root_temp = root;
			Poly * previous = NULL;
			Poly * current = NULL;
			
			while(root_temp != NULL){
				if(root_temp->coef == 0){
					if(previous == NULL && current == NULL){
						cout << "begin";
						root = root_temp->next;
						count_terms--;
					}else if(previous != NULL && current != NULL && current->next == NULL){
						cout << "middle";
						previous->next = current->next;
						count_terms--;
					}else{
						cout << "end";
						previous->next = NULL;
						count_terms--;
					}
				}
				previous = current;
				current = root_temp;
				root_temp = root_temp->next;
				
			}
		}
		
		
		void addPoly(Polynomial other){
			Polynomial p;
			Poly * root_temp = root;
			Poly * other_temp = other.root;
			while(root_temp != NULL){
				p.createnode(root_temp->coef,root_temp->power);
				root_temp = root_temp->next;
			}
			while(other_temp != NULL){
				p.createnode(other_temp->coef,other_temp->power);
				other_temp = other_temp->next;
			}
			p.viewpoly();
			
		}
		
		void viewpoly(){
			Poly * root_temp = NULL;
			root_temp = root;
			
			if(root == NULL){
				cout << "Empty polynomial";
			}else{
			
				while(root_temp!=NULL){
					cout << root_temp->coef << "X^" << root_temp->power<<" "<<endl;
					root_temp = root_temp->next;
				}
			}
		}
	
	
};
int main(){
	Polynomial p1;
	Polynomial p2;
	p1.createnode(1,11);
	p1.createnode(1,5);
	p2.createnode(-1,5);
	p2.createnode(-1,15);
	p2.createnode(2,11);
	
	
	p1.addPoly(p2);
	return 0;
}
