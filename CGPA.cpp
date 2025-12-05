#include<bits/stdc++.h>
using namespace std;
double gpa(double mark){
if(mark>=80)
return 4.0;
else if(mark>=75)
return 3.75;
else if(mark>=70)
return 3.50;
else if(mark>=65)
return 3.25;
else if(mark>=60)
return 3.0;
else if(mark>=55)
return 2.75;
else if(mark>=50)
return 2.50;
else if(mark>=45)
return 2.25;
else if(mark>=40)
return 2.0;
else 
return 0.0;
}
double cgp(double a[]){
double sum=0;
for(int i=0;i<11;i++){
sum+=gpa(a[i])*4.0;
}
return sum/42;
}
int main(){
z:
string n;
int id,c=0;
cout << "Enter your name " << endl;
getline(cin,n);
cout << "Enter your ID " << endl;
cin >> id;
cout << "Mr./Mrs " <<n<<" your id "<<id<< endl;
double a[11];
for(int i=0;i<9;i++){
cout<<"Enter mark At the subject  A.math 30"<<i+1<<"(0-100)= ";
cin>>a[i];
}
cout<<"Enter mark At the subject  A.math 320(0-100)= ";
cin >> a[9];
cout<<"Enter mark At the subject  A.math 321(0-50)= ";
cin >> a[10];
for(int i=0;i<11;i++){
if(gpa(a[i])==0.0)
c++;
}
if(a[9]<40||a[10]<20){
cout << "Sorry, you are fail" << endl;
}
else if(cgp(a)<2.0||c>2){
cout << "Sorry, you are fail" << endl;
cout << "your cgpa is " <<cgp(a)<<"<2.0"<< endl;
}
else{
cout << " congratulation! you pass at 3rd year " << endl;
cout << "your CGPA is "<<cgp(a)<< endl;
}
cout << "Run Again?  press 1 otherwise 0" << endl;
int y;
cin>>y;
if(y)
goto z;
}