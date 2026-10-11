#include<iostream>
using namespace std;

int main() {
  int n;
float grade,credits,totalPoints=0,totalCredits=0;
 cout<<"Enter number of subjects: ";
cin>>n;

for(int i=0;i<n;i++){
 cout<<"Enter grade points and credits: ";
 cin >> grade >> credits;
totalPoints += grade*credits;
totalCredits += credits;
}

if(totalCredits>0){
cout<<"CGPA="<<totalPoints/totalCredits;
}else{
cout<<"Invalid credits!";
}
return o;
}
