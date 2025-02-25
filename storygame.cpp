#include<iostream>
#include<cstdlib>
using namespace std;
int health;
bool start=false;
void introduction(){
  cout<<""<<endl;
cout<<"You are a young adventurer drawn to the legend of the Lost Treasure of Whispering Pines"<<endl;
cout<<"                                                                                         "<<endl;
}
void chapter3(){
  
  int c3chioce;
  string tryagain;
  cout<<""<<endl;
cout<<"With the guardian pacified, you approach the chest."<<endl;
cout<<"Inside, you find three objects, each glowing with a faint aura."<<endl;
cout<<"A final inscription reads:"<<endl;
cout<<""<<endl;
cout<<"'The treasure before you is not mere gold,"<<endl;
cout<<"But a power to shape destinies untold."<<endl;
cout<<"Choose wisely, for each path shall bind,"<<endl;
cout<<"Your heart, your soul, and your mind.'"<<endl;
cout<<""<<endl;
cout<<"The three objects are"<<endl;
cout<<""<<endl;
cout<<"1.A golden crown – Wealth and power beyond imagination."<<endl;
cout<<"2.A glowing crystal – Mystical knowledge and abilities."<<endl;
cout<<"3.A simple journal – The truth of the forest’s mysteries."<<endl;
cout<<"4.What do you choose?"<<endl;
cin>>c3chioce;
        switch (c3chioce)
        {
        case 1:
          cout<<"You take the crown, feeling its immense weight and power."<<endl;
          cout<<"The forest whispers grow louder, mocking you."<<endl;
          cout<<"The crown’s curse binds you, and though you leave rich, you are forever haunted by shadows."<<endl;
          cout<<""<<endl;
          cout<<"press P to tryagain"<<endl;
          cin>>tryagain;
          start=false;
            if (tryagain=="p")
            {
              start=true;
            }else{
              cout<<"hi";
            }   
          break;
        case 2:
        cout<<"You choose the crystal."<<endl;
        cout<<"Light fills you, revealing the secrets of the forest."<<endl;
        cout<<"You leave with profound knowledge and a sense of peace, having gained something far greater than gold."<<endl;
        cout<<""<<endl;
        cout<<"press P to tryagain"<<endl;
          cin>>tryagain;
          start=false;
            if (tryagain=="p")
            {
              start=true;
            }else{
              cout<<"hi";
            }   
        break;
        default:
        cout<<"You take the journal and begin to read"<<endl;
        cout<<"It tells the story of the treasure, the guardian, and the forest’s ancient secrets."<<endl;
        cout<<"You leave with a sense of closure, knowing you have uncovered the truth."<<endl;
        cout<<""<<endl;
        cout<<"press P to tryagain"<<endl;
          cin>>tryagain;
          start=false;
            if (tryagain=="p")
            {
              start=true;
            }else{
              cout<<"hi";
            }   
          break;
        }
}
















void chapter2(){//second chapter
  int rand1,rand2,c2choice,rand3;
  cout<<""<<endl;
cout<<"The overgrown path leads you to a clearing dominated by a towering stone monolith"<<endl;
cout<<" Its surface is etched with glowing carvings, and strange whispers seem to emanate from it. At its base lies a weathered chest, bound with iron bands."<<endl;
cout<<"Before you can approach, the air grows heavy, and a hulking creature steps out from the shadows."<<endl;
cout<<"The guardian has arrived. Its glowing eyes burn with intensity, and a deep growl rumbles from its throat. It blocks your path, daring you to proceed"<<endl;
cout<<""<<endl;
cout<<"The riddle from earlier echoes in your mind:"<<endl;
cout<<"'The treasure’s keeper guards it well,"<<endl;
cout<<"But words, not blades, its wrath can quell.'"<<endl;
cout<<""<<endl;
cout<<"what do you do"<<endl;
cout<<""<<endl;
cout<<"1.Speak to the guardian."<<endl;
cout<<"2.Offer something valuable to the guardian."<<endl;
cout<<"3.Attempt to decipher the carvings on the "<<endl;
cout<<".Draw your weapon and prepare to fight."<<endl;
cin>>c2choice;
switch (c2choice)
{
case 1://gardian talk
   rand1=1+rand()%2;
      switch (rand1)
      {
      case 1://first posibility of speaking to the gardian
        cout<<"The guardian listens and steps aside, impressed by your resolve. "<<endl;
        chapter3();
        break;
      case 2://second posibility
      cout<<"The guardian roars and slashes at you, driving you back. You lose health and confidence. Try another approach."<<endl;
      cout<<"1.Speak to the guardian."<<endl;
      cout<<"2.Offer something valuable to the guardian."<<endl;
      cout<<"3.Attempt to decipher the carvings on the "<<endl;
      cout<<".Draw your weapon and prepare to fight."<<endl;
      cin>>c2choice;
      break;
      
      default:
      cout<<"def";
        break;
      }

  break;
  case 2://an offering
  rand2=1+rand()%2;
  cout<<"You present an offering from your belongings."<<endl;
       switch (rand2)
       {
       case 1://first offering posiblity
        cout<<"The guardian nods in approval and steps aside. "<<endl;
        chapter3();
        break;
        case 2://second posibiliy
        cout<<"The guardian growls and crushes the item underfoot. You lose an item and gain nothing. Try another approach"<<endl;
        cout<<"1.Speak to the guardian."<<endl;
      cout<<"2.Offer something valuable to the guardian."<<endl;
      cout<<"3.Attempt to decipher the carvings on the "<<endl;
      cout<<".Draw your weapon and prepare to fight."<<endl;
      cin>>c2choice;
        break;
       
       default:
       cout<<"pro BRO";
        break;
       }
  break;
  case 3:
  rand3=1+rand()%2;
  cout<<"You study the carvings on the monolith."<<endl;
       switch (rand3)
       {
       case 1:
        cout<<"A phrase is revealed. Speaking it aloud causes the guardian to vanish, granting you safe passage. Proceed to Chapter 3."<<endl;
      chapter3();
        break;/*third choice
                 analisis of carvings
                       good posibility
        */
       
       default:
       cout<<"The carvings glow red, and the guardian becomes enraged, attacking you. Try another approach."<<endl;
       cout<<"1.Speak to the guardian."<<endl;
      cout<<"2.Offer something valuable to the guardian."<<endl;
      cout<<"3.Attempt to decipher the carvings on the "<<endl;
      cout<<".Draw your weapon and prepare to fight."<<endl;
      cin>>c2choice;
        break;
       }
  break;

default:
introduction();
  break;
}








}

void chapter1(){//first chapter
int c1choice;
  cout<<"The forest feels alive around you. The sound of rustling leaves and distant bird calls echo through the trees. Before long, you come to a fork in the path."<<endl;
  cout<<""<<endl;
  cout<<"One trail is wide, well-trodden, and inviting, bathed in faint sunlight filtering through the canopy. The other is narrow, overgrown with vines and thorns, as though nature itself is trying to conceal it."<<endl;
     cout<<""<<endl;
  cout<<"the map offers a criptic verse:"<<endl;
  cout<<"'where the sun's rays seldom reach,'"<<endl;
  cout<<"the treasure lies beond the breach"<<endl;
  cout<<"choose the path that nature hides"<<endl;
  cout<<"and trust the wind to be your guide"<<endl;
  cout<<"                                   "<<endl;
  cout<<"    what do you do                               "<<endl;
  cout<<"1.take the wide path       "<<endl;
  cout<<"2.take the overgrown path"<<endl;
  cout<<"3.stopto analyse the map for hidden clues"<<endl;
  cout<<"leave the forest and abandon the quest."<<endl;
cin>>c1choice;
switch (c1choice)
{
case 1://wide path
  cout<<"You choose the wide path, enjoying its ease and beauty."<<endl;
  cout<<"However, as you walk, the whispers grow louder, almost mocking you. Suddenly, the ground collapses beneath you into a hidden pit filled with thorny branches. You manage to climb out, bloodied and bruised, but part of your map is torn, and some supplies are lost. Return to the fork to try again."<<endl;
  cout<<""<<endl;
  cout<<"1.take the wide path       "<<endl;
  cout<<"2.take the overgrown path"<<endl;
  cout<<"3.stopto analyse the map for hidden clues"<<endl;
  cout<<"leave the forest and abandon the quest."<<endl;
  cin>>c1choice;
  break;
  case 2://overgrown path
  cout<<"You push through the vines and thorns, their sharp edges cutting at your clothes and skin."<<endl;
  cout<<"Its grueling, but the path feels right. Along the way, you notice carvings on the trees that match symbols on your map. You’re heading deeper into the heart of the forest. Proceed to Chapter 2."<<endl;
  chapter2();
  break;
  case 3://analysis path
  cout<<"You pause to study the map, tracing the symbols with your finger."<<endl;
  cout<<"A gust of wind rustles the trees, and you realize the overgrown path matches the riddle. You choose it and proceed. Proceed to Chapter 2."<<endl;
  chapter2();
break;
default:
introduction();
  break;
}






}


 int main(){
    
    string s;
cout<<"\\        //\\        //  |----   |         | //            //\\        //\\       |----  "<<endl;
cout<<" \\      //  \\      //   |       |         |//            //  \\      //  \\      |  "<<endl;
cout<<"  \\    //    \\    //    |----   |         |\\      O    //    \\    //    \\     |---- "<<endl;
cout<<"   \\  //      \\  //     |       |         | \\         //      \\  //      \\    |  "<<endl;
cout<<"    \\//        \\//      |----   |______   |  \\       //        \\//        \\   |----  "<<endl;
  cout<<"type start ";
  cin>>s;
      
          if (s=="start")
          {
            start=true;
            if (start=true)
            {
              introduction();
              chapter1();
              chapter2();
              chapter3();
            }
            
          }
          else{
            cout<<"wrong input";
          }
          
          
   
    return 0;
 }