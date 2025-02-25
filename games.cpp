#include <iostream>
#include<cstdlib>
using namespace std;
int choose,choose2,r,choose3,blackjackchoose1,blackjackchoose2,	rock=1,paper=2,scisors=3,opponent,input;
string opponentname;



void game(){
    while (true){
        cout<<"**************"<<endl;//this is the start
        cout<<"choose your game mode"<<endl;
        cout<<"**************"<<endl;
        cout<<"jackpot =1"<<endl;
        cout<<"blackjack = 2"<<endl;
        cout<<"rock,paper,scissors = 3"<<endl;
        cout<<"dice =4"<<endl;
        cout<<"choose"<<endl;
        cin>>choose;
            if(choose==1){//jackpot game
                cout<<"choose mode"<<endl;
                cout<<"easy 1-15 =1"<<endl;
                cout<<"hard 1-50 = 2"<<endl;
                cout<<"immposible = 3"<<endl;
                cin>>choose2;
                    if(choose2==1){//easy mode
                        
                         r=1+(rand()%15);
                        cout<<"choose a number";
                        cin>>choose3;
                            if(choose3==r){
                                cout<<"u win";
                            }else{
                                cout<<"wrong";
                            }
            
            }
                                else if(choose2==2){//hardmode
                                    r=1+(rand()%50);
                                            cout<<"choose a number";
                                            cin>>choose3;
                                                if(choose3==r){
                                                    cout<<"u win";
                                                }else{
                                                    cout<<"wrong";
                                                }
                                                    }else{//impossiblemode
                                                        r=1+(rand()%50);
                                                                cout<<"choose a number";
                                                                cin>>choose3;
                                                                    if(choose3==r){
                                                                        cout<<"u win";
                                                                    }else{
                                                                        cout<<"wrong";
                                                                    }
            }
             
}else if(choose==2){//blackjack
     cout<<"choose mode"<<endl;
                cout<<"red =1"<<endl;
                cout<<"green =2"<<endl;
                cout<<"black =3"<<endl;
                cin>>blackjackchoose1;
        if(blackjackchoose1==1){//red
            r=1+(rand()%3);
            cout<<"choose a number from one to three"<<endl;
            cin>>blackjackchoose2;
            if(blackjackchoose2==r){
                cout<<"you did it";
            }else{
                cout<<"try again";
            }
        }
        else if(blackjackchoose1==2){//green
            
            r=1+(rand()%6);
            cout<<"choose a number from one to three"<<endl;
            cin>>blackjackchoose2;
            if(blackjackchoose2==r){
                cout<<"you did it";
            }else{
                cout<<"try again";
            }
        
}
    else{//black
     r=1+(rand()%9);
            cout<<"choose a number from one to three"<<endl;
            cin>>blackjackchoose2;
            if(blackjackchoose2==r){
                cout<<"you did it";
            }else{
                cout<<"try again";
            }
}

    }
    else if(choose==3){//rock,paper,scisors
    opponent=1+(rand()%3);
    cout<<"enter item"<<endl;
    cout<<"rock=1"<<endl;
    cout<<"paper=2"<<endl;
    cout<<"scisors=3"<<endl;
    cin>>input;
    if (opponent==1)
    {
        opponentname="ROCK";
    }else if(opponent==2){
opponentname="PAPER";
    }else{
        opponentname="scissors";
    }
    
    if(input==1 && opponent==2 || input==2 && opponent==3 || input==3 && opponent==1 ){
		cout<<"you lose";
        cout<<" the opponent chose "+ opponentname<<endl;
	}
	else if(input==1 && opponent==3 || input==2 && opponent==1 || input==3 and opponent==2){
			cout<<"you win"<<endl;
            cout<<" the opponent chose " + opponentname<<endl;
	}else{
		cout<<"its a draw";
	}
}
else{
    r=1+rand()%6;
    cout<<"your number is"<<r<<endl;
}
}

}





int main(){
game();//the main game

return 0;
}