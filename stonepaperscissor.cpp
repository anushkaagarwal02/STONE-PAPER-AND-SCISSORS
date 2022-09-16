#include<iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
char ch='y';
int diff;
int compscore=0, userscore=0;

while(ch=='y')
{
int user=0;
srand(time(0));
int random=(rand() % 3) ; 
cout<<"******************************************************"<<endl;
cout<<"            WELCOME TO THE GAME                       "<<endl;
cout<<"******************************************************"<<endl;
cout<<"Your Choice?"<<endl;
cout<<"0-PAPER"<<endl<<"1-STONE"<<endl<<"2-SCISSORS"<<endl<<"3-EXIT"<<endl;
cout<<"******************************************************"<<endl;
cin>>user;


cout<<random<<endl;
switch(user)
{
case 0:
{
string pa[3]={"PAPER","STONE","SCISSORS"};
cout<<"   USER "<<"  "<<"    COMPUTER\n "" "<<pa[user]<<"     |   "<<pa[random]<<endl;
diff=user-random;
if(user==random)
{
   cout<<"it's a draw"<<endl;
}
else if(diff==-2)
{
    cout<<"computer wins"<<endl;
    compscore++;
}
else if(diff==-1)
{
    cout<<"user wins"<<endl;
    userscore++;
  
}
  cout<<"   USER "<<"  "<<"    COMPUTER\n "" "<<userscore<<"     |   "<<compscore<<endl;
break;}




case 1:
{string st[3]={"SCISSORS","STONE","PAPER"};
cout<<"  USER "<<"  "<<"    COMPUTER\n"" "<<st[user]<<"     |   "<<st[random]<<endl;
diff=user-random;
if(user==random)
{
   cout<<"it's a draw"<<endl;
}
else if(diff==-1)
{
    cout<<"computer wins"<<endl;
      compscore++;
}
else if(diff==1)
{
    cout<<"user wins"<<endl;
     userscore++;
}

  cout<<"   USER "<<"  "<<"    COMPUTER\n "" "<<userscore<<"     |   "<<compscore<<endl;
break;}




case 2:
{string sc[3]={"STONE","PAPER","SCISSORS"};
diff=user-random;
cout<<"   USER "<<"  "<<"       COMPUTER\n"" "<<sc[user]<<"     |   "<<sc[random]<<endl;
if(user==random)
{
   cout<<"it's a draw"<<endl;
}
else if(diff==2)
{
    cout<<"computer wins"<<endl;
      compscore++;
}
else if(diff==1)
{
    cout<<"user wins"<<endl;
     userscore++;
}

cout<<"   USER "<<"  "<<"    COMPUTER\n "" "<<userscore<<"     |   "<<compscore<<endl;
break;
}
case 3:
{cout<<"WELL-PLAYED"<<endl;
  
   goto a;
   break;
}
default:
cout<<"enter something valid";
break;
}

}
a:
cout<<"   USER "<<"  "<<"    COMPUTER\n "" "<<userscore<<"     |   "<<compscore<<endl;
 if(compscore>userscore)
 {
    cout<<"OOPS! COMPUTER WON";
    cout<<"BETTER LUCK NEXT TIME";
 }
 else if(compscore<userscore)
    {
    cout<<"CONGRATULATIONS USER WON";

 }
 else{
    cout<<"IT'S A DRAW";
 }
 }

