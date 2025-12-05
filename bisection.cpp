#include<bits/stdc++.h>
#define t 0.000001
using namespace std;
double f(double x) {
return pow(x,3)-5*x+3;
}
void bi(double a,double b){
double x;
x=(a+b)/2;
int i=1;
cout << "According to bisection  method " << endl;
if(f(a)*f(b)>0){
cout << "There is no roots Between " <<a<<"and "<<b<< endl;
}
else{
if(f(x)==0){
cout << "The required roots is= "<<x<< endl;
}
else {
while(fabs(a-b)>=t){
if(f(a)*f(x)<0){
b=x;
}
else{
a=x;
}
x=(a+b)/2;
cout << "At step "<<i<<" x "<<i<<"=" <<x<< endl;
i++;
}
cout << "The required roots is= "<<x << endl;
cout << "Number of iteration = "<<i-1 << endl;
}
}
}
int main(){
z:
int y;
double a,b;
cout << "Enter the value of a and b" << endl;
cin >> a>>b;
bi(a,b);
cout << "Run again? press 1 otherwise 0" << endl;
cin>>y;
if(y)
goto z;
}