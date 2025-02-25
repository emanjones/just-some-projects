#include<iostream>
#include<ctime>
using namespace std;



int rock,paper,scisors,maxrandom,input,opponent;


void pictures(){
	if(opponent==2 ){
		cout<<" ______________/n";
		cout<<" |            |/n";
		cout<<" |   PAPER    |/n";
		cout<<" |            |/n";
		cout<<" |____________|/n";
	}else if(opponent==1){
		cout<<" ______________/n";
		cout<<" |            |/n";
		cout<<" |    ROCK    |/n";
		cout<<" |            |/n";
		cout<<" |____________|/n";
	}else if(opponent==3 ){
		cout<<" ______________/n";
		cout<<" |            |/n";
		cout<<" |  SCISORS   |/n";
		cout<<" |            |/n";
		cout<<" |____________|/n";
	}
	
		
}
void picturess(){
		if(input==2 ){
		cout<<'______________/n';
		cout<<'|            |/n';
		cout<<'|   PAPER    |/n';
		cout<<'|            |/n';
		cout<<'|____________|/n';
	}else if(input==1){
		cout<<"______________/n";
		cout<<"|            |/n";
		cout<<"|    ROCK    |/n";
		cout<<"|            |/n";
		cout<< "|____________|/n";
	}else if( input==3){
		cout<<"______________/n";
		cout<<"|            |/n";
		cout<<"|    SCISORS |/n";
		cout<<"|            |/n";
		cout<<"|____________|/n";
	}
}







void gameplay(){
	
		
	rock=1;
	paper=2;
	scisors=3;
	maxrandom=3;
	opponent=1;
	
	
	
    
	
	if(input==1 and opponent==2){
		cout<<"you lose";
	}else if(input==2 and opponent==3){
		cout<<"you lose";
	}else if(input==1 and opponent==3){
			cout<<"you win";
	}else if(input==2 and opponent==1){
			cout<<"you win";
	}else if(input==3 and opponent==2){
			cout<<"you win";
	}else if(input==3 and opponent==1){
			cout<<"you lose";
	}else{
		cout<<"its a draw";
	}
		

		
	
}



int main(){
	cout<<"enter item/n rock=1/n paper=2/n scisors=3";
   cin>>input;
    
	gameplay();
	pictures();  picturess();
	return 0;
}
