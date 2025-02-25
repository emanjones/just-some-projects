#include<iostream>
#include<vector>
#include<string>
using namespace std;
int room,rooms,c=0;
vector<int> noofroomsavalable = {1,2,3,4,5,6,7,8,9,10};
vector<string> noofroomsbooked = {"not booked","not booked","not booked","not booked","not booked","not booked","not booked","not booked","not booked","not booked"};
bool all_rooms_booked(const vector<string>& rooms) {
    for (const string& status : rooms) {
        if (status != "booked") {
            return false;
        }
    }
    return true;
}
int main(){
   while (true)
   {
    cout<<"menu\n";
    cout<<"1. Book a room\n";
    cout<<"2.no of rooms\n";
    cout<<"3. Cancel booking\n";
    cin>>room;
    if (room==1)
    {
        cout<<"which room\n";
        cin>>rooms;
        noofroomsbooked.at(rooms)="booked";
        noofroomsavalable.at(rooms)=0;
        cout<<"room booked\n";
           if(all_rooms_booked(noofroomsbooked))
           {
            cout<<"no rooms available\n";   
           }
           
    }
    else if (room==2)
    {
        cout<<"rooms booked are\n";
        for(string i : noofroomsbooked){
            cout<<"room"<<c++<<i<<endl;
        }
    }else{
        cout<<"which room\n";
        cin>>rooms;
        noofroomsbooked.at(rooms)="not booked";
        noofroomsavalable.at(rooms)=0;
        cout<<"room booking cancelled\n";
    }
   }
   
        
    
    
    
    return 0;
    
    
    
    
    

    
    }
