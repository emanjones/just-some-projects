#include<iostream>
#include<cmath>
using namespace std;
int globalchoose,globalchoose2,globalchoose3;

void AP(){
    int a,d,n,choose1,choose2,choose3,Tn;
    cout<<"what is the first term (a)";
     cin>>a;
     cout<<"what is the common difference (d)";
     cin>>d;
     cout<<"what is the term you are looking for (n)";
     cin>>n;
     Tn=a+((n-1)*d);
     cout<<"your value is "<<Tn<<endl;

}
void NOdAP(){
int a,d,n,gv,tn,Tn,t,n1;

cout<<"what is the first term (a)";
     cin>>a;
     cout<<"what is the value given to you (gv)";
     cin>>gv;
     cout<<"what is the term is gv(n1) T";
     cin>>n1;
     cout<<"what is the term are you looking for T";
     cin>>n;
      t=n1-1;
     tn=gv-a;  
     d=tn/t;
    Tn=a+((n-1)*d);
     
      cout<<"common difference is equal to"<<d<<endl;
     cout<<"your value is "<<Tn<<endl;
}
void NOaAP(){
int a,d,n,gv,tn,Tn,t,n1;
cout<<"what is the diference (d) ";
    cin>>d;
cout<<"what is the value given to you (gv)";
     cin>>gv;
     cout<<"what is the term is gv(n1) T";
     cin>>n1;
     cout<<"what term are you looking for T";
     cin>>n;
     t=n1-1;
     tn=t*d;
     a=gv-tn;
     Tn=a+((n-1)*d);
     cout<<"first term is equal to "<<a<<endl;
     cout<<"your value is "<<Tn<<endl;

}
void gp(){
 int a,r,n,tn;
     cout<<"what is the first term (a)";
     cin>>a;
     cout<<"what is the common difference (d)";
     cin>>r;
     cout<<"what is the term you are looking for (n)";
     cin>>n;
     tn=a*pow(r,(n-1));
        cout<<"your number is"<< tn<<endl;
}







int main(){

     
     try
     {
        
     
          cout<<"*******************"<<endl;
cout<<"choose operation"<<endl;
cout<<"A.P =1"<<endl;//stis is done
cout<<"G.P =2"<<endl;//halfwaydoe
cout<<"*******************"<<endl;
cin>>globalchoose;
if(globalchoose==1){//AP
cout<<"*******************"<<endl;
cout<<"what is your situation"<<endl;
cout<<"no common difference (d)= 1"<<endl;
cout<<"no first term(a)=2"<<endl;
cout<<"complete=3 "<<endl;
cout<<"*******************"<<endl;
cin>>globalchoose2;
   if(globalchoose2==3){
    AP();
   }else if(globalchoose2==1){
    NOdAP();
}else{
NOaAP();//delete and put back column if giving you unnesesary errors if not then its somthing in your code
}
}//next one
else if(globalchoose==2){//GP
cout<<"*******************"<<endl;
cout<<"what is your situation"<<endl;
cout<<"no common difference (d)= 1"<<endl;
cout<<"no first term(a)=2"<<endl;
cout<<"complete=3 "<<endl;
cout<<"*******************"<<endl;
cin>>globalchoose3;
 if(globalchoose3==3)
 {
    gp();//full GP
 }
 
else{
          throw 505;
     }

     }  
     }
     catch(...)
     {
          cout<<"wrong input";
     }
     
    
     







 return 0;
}//GP is at the botom
























































































//your still here




























































//when will you stop































































//are you that confident    



























































































//idiot ther is nothing here you didn`t start is and start it at the top not botoom