#include <iostream>
using namespace std;

int main(){

    void calculGpa();
    void calculCgpa();


cout<<"Choose your option kindly"<<endl;

cout<<"........   Calculator    ......."<<endl;

cout<<"1.GPA"<<endl;

cout<<"2.CGPA"<<endl;
int n;

cin>> n;

switch(n){
case 1:
    calculGpa();
    break;


    case 2:
    calculCgpa();
    break;

    default:
        cout<<"Your input is wrong"<<endl;
        break;
}
return 0;

}
void calculGpa(){
int q;
cout<<"Enter the number of subjects you want to add :"<<endl;
cin>>q;
float credit[q];

float point[q];

float sum=0;
float total;

for (int i=0; i<q; i++){
        cout<<"Enter the credit of your subject " <<i+1<<" :- "<<endl;

    cin>>credit[i];

     cout<<"Enter the point of your subject " <<i+1<<" :- "<<endl;


    cin>>point[i];
cout<<endl;

}


for (int j=0; j<q; j++){
      total=credit[j]*point[j];
      sum=sum+total;
}

float Tcredit=0;

for(int k=0;k<q; k++){
    Tcredit=Tcredit+credit[k];
}


float Point=sum/Tcredit;

cout<<" Total Credit :"<<Tcredit<<endl;

cout<<"Total Point :"<<sum<<endl;

cout<<" GPA :"<<Point<<endl;
}


void calculCgpa(){

int l;

cout<<"..How many semesters do you want to add???.."<<endl;

cin>>l;

float sem[l];


for(int i=0;i<l;i++){

        cout<<"Enter GPA of Semester "<<i+1<<": "<<endl;

    cin>>sem[l];



}

float semTotal=0;


for(int j=0;j<l;j++){


    semTotal=semTotal+sem[l];
}

cout<<"Your Cgpa is : "<<semTotal/l<<endl;


}


