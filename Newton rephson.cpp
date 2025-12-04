#include<iostream>
#include<cmath>
#include<iomanip>
#define pi 3.14159
#define t 0.00000001
using namespace std;
double f(double x){
return 3*x-cos(x)-1;
}
double ff(double x){
return 3+sin(x);
}
void nr(double x1){
double x0=0;
int i=1;
cout << "According to Newton repsons method " << endl;
while(abs(x1-x0)>=t){
x0=x1;
if(ff(x0)==0){
cout << " Mathematical error " << endl;
exit(0);
}
else{
x1=x0-f(x0)/ff(x0);
cout << "At step "<<i<<" is"<<" x"<<i<<"="<<x1<< endl;
i++;
}
}
cout << "The required roots is= " <<x1<< endl;
cout << "Number of iterations is = " <<i-1<< endl;
}
int main(){
a:
int y;
double x;
cout << "Initial value of " << endl;
cin>>x;
x=x*pi/180;
nr(x);
cout << "You run again press 1 otherwise press 0" << endl;
cin>>y;
if(y)
goto a;
return 0;
}