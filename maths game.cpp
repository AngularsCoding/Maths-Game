#include <iostream>
#include <conio.h> 
#include <time.h>
#include <stdlib.h>

using namespace std;

void play();
void instructions();

int main(){
	//random no generation
	srand( (unsigned)time(NULL) );
	
	char option;
	
	do{
		system("cls");
		cout<<"-----------------------------------"<<endl;
		cout<<"           MATHS GAME			  "<<endl;
		cout<<"-----------------------------------"<<endl<<endl;
		cout<<"1. Play"<<endl;
		cout<<"2. Instructions"<<endl;
		cout<<"3. Exit"<<endl<<endl;
		cout<<"Choose Option (1-3):";
		cin>>option;
	
		switch(option){
			case '1':
				play();
				break;
			case '2':
				instructions();
				break;
		}
	}while(option != '3');
	
	return 0;
}

void play(){ 
	 int level, limit;
	 char option;
	 
	 system("cls");
	 cout<<"-----------------------------------"<<endl;
	 cout<<"           MATHS GAME			  "<<endl;
	 cout<<"-----------------------------------"<<endl<<endl;
	 cout<<"1. Level 1"<<endl;
	 cout<<"2. Level 2"<<endl;
	 cout<<"3. Level 3"<<endl;
	 cout<<"4. Back to Menu"<<endl<<endl;
	 cout<<"Choose Option (1-4):";
	 cin>>option;

	 switch(option){
		case '1': limit = 10; break;
		case '2': limit = 20; break;
		case '3': limit = 100; break;
		case '4': break;
	 }
	 
	 float q1, q2, ans, correctAns;
	 int correctNo = 0, totalNo;
	 char operation;
	 totalNo = 5;
	 
	 if( option != '4' ){
		 for(int i=0; i<totalNo; i++){
		 	q1 = rand()%limit;
		 	q2 = rand()%limit;
		 	
		 	int tmpOp = rand()%3;
	 		switch(tmpOp){
			      case 0:operation = '+'; break;
				  case 1: operation = '-'; break;
				  case 2:operation = '*'; break; 
	 		}
	 		
		 	cout<<"("<<(i+1)<<"). ";
		 	cout<<q1<<" "<<operation<<" "<<q2<<" = ";
		 	
			cin>> ans;
			
			switch(operation){
			      case '+': correctAns = q1 + q2; break;
				  case '-': correctAns = q1 - q2; break;
				  case '*': correctAns = q1 * q2; break; 
	 		}
			
			if( correctAns == ans ){
				correctNo++;
				cout<<"correct."<<endl<<endl;
			}
			else{
				cout<<"wrong"<<endl;
		 		cout<<q1<<" "<<operation<<" "<<q2<<" = ";
			 	cout<<correctAns<<endl<<endl;
			}
		 }
		 
		 cout<<"Total: "<<totalNo<<endl;
		 cout<<"Correct: "<<correctNo<<endl<<endl;
		 
		 cout<<"Press any key to continue..."<<endl;
		 getch();
	 }
}

void instructions(){
	system("cls");
	cout<<"-----------------------------------"<<endl;
	cout<<"          Instructions			  "<<endl;
	cout<<"-----------------------------------"<<endl<<endl;
	cout<<"1. This game contains basic arithmetic problems"<<endl;
	cout<<"2. Each correct answer will yeild to 1 Point"<<endl;
	cout<<"3. Total questions will be 5 "<<endl;
	cout<<"4. To win, you need 3 or more correct answers"<<endl;
	cout<<endl;
	
	cout<<"Press any key to continue..."<<endl;
	getch();
}
