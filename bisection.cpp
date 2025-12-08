#include<bits/stdc++.h>
#define pi 3.14159
#define t 0.00001
using namespace std;
double f(double x){
return 3*x-cos(x*pi/180)-1;
}
void bisection(double a,double b){
double x=(a+b)/2;
int i=1;
cout << ".....According to bisection.... " << endl;
if(f(a)*f(b)>0){
cout << "There is no roots Between " <<a<<" and "<<b<< endl;
exit(0);
}
if(f(x)==0){
cout << "The root is" <<x<< endl;
}
else{
while(fabs(b-a)>=t){
x=(a+b)/2;
if(f(a)*f(x)<0)b=x;
else if (f(x)*f(b)<0)a=x;
cout << "x"<<i<<"=" <<x<< endl;
i++;
}
cout << "The root is ="<<x<< endl;
cout << "number of iteration "<<i-1 << endl;
}
}
int main(){
z:
double a,b;
cout << "Enter the value of a and b" << endl;
cin>>a>>b;
bisection(a,b);
int y;
cout << "Run again? yes Press any number exit to 0" << endl;
cin>>y;
if(y)
goto z;
}
