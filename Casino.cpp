
#include <cstdlib>
#include <ctime>
#include<iostream>
using namespace std;
int main (){
         cout<<"......Welcome ........"<<endl;
    cout<<"You will have to Guess Number Between 1-10!!!"<<endl;
    cout<<"..........   Let's Start the guessing game   ........"<<endl;
   while(true){

    cout<<".........Choose Level............"<<endl;
cout << "1. Level-1  [Easy] (You will get 5 chances to guess)"<<endl;
cout<<"2. Level-2 [Medium] (You will get 3 chances to guess)"<<endl;
cout<<"3. Level-3 [Hard] (You will get 2 chances to guess)"<<endl;
cout<<"0.......Please Enter 0 to stop the game ......."<<endl;
     int num;

cout<<"Enter your option (choose 1,2,3 or 0) "<<endl;
cin>>num;

 int random;
   srand(time(0));
   random=1+(rand() % 10);
int guess;
    if(num==1){
            cout<<"only 5 chances.."<<endl;
            int check=5;
   for(int i=1; i<=5; i++){
        cout<<"Enter the number"<<endl;
cin>>guess;

    if (random==guess){
       cout<<"You won the game" <<endl;
       break;
    }
    else{
        cout<<"Wrong Guess !!"<<endl;
        if (random<guess){
cout<<"The number is Smaller than your guess..."<<endl;
    }
    else{
cout<<"The number is bigger than your guess..."<<endl;

    }
check--;
cout<<"Your chance left"<<endl;
cout<<check<<endl;

if(check==0){
    cout<<"Your chance is finished...."<<endl;

}
}
    }


    }
  else  if(num==2){
         cout<<"only 3 chances.."<<endl;
            int check=3;
 for(int i=1; i<=3; i++){
       cout<<"Enter the number"<<endl;
 cin>>guess;
    if (random==guess){
       cout<<"You won the game" <<endl;
       break;
    }
else
    {
        cout<<"Wrong guess !!"<<endl;
         if (random<guess){
cout<<"The number is Smaller than your guess..."<<endl;
    }
    else{
cout<<"The number is bigger than your guess..."<<endl;
    }
    check--;
    cout<<"Your chance left-"<<endl;
    cout<<check<<endl;

 if(check==0){
    cout<<"Your chance is finished...."<<endl;

}
 }
    }
}
 else if(num==3){
         cout<<"only 2 chances.."<<endl;
        int check=2;
 for(int i=1; i<=2; i++){
       cout<<"Enter the number"<<endl;
 cin>>guess;
    if (random==guess){
       cout<<"You won the game" <<endl;
       break;
    }
    else
    {
        cout<<" You lost the game ..."<<endl;
        if (random<guess){
cout<<"The number is Smaller than your guess..."<<endl;
    }
    else{
cout<<"The number is bigger than your guess..."<<endl;
    }



check--;
cout<<"Your chance left-"<<endl;
cout<<check<<endl;

if(check==0){
    cout<<"Your chance is finished...."<<endl;

}
    }

 }

 }
else if(num==0){
    exit(0);
}
 else{
    cout<<"..........You choosed wrong option please try again!!!........."<<endl;
 }
   }
 return 0;
}
