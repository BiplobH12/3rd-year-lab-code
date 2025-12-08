#include<bits/stdc++.h>
#define pi 3.14159
#define t 0.00001
using namespace std;
double f(double x){
return x*exp(x)-1;
}
double ff(double x){
return x*exp(x)+exp(x);
}
void newtonrephson(double x1){
double x0;
int i=1;
cout << ".....According to Newton rephson .... " << endl;
while(1){
x0=x1;
if(ff(x1)==0){
cout << "Mathematical error"<< endl;
exit(0);
}
x1=x0-(f(x0)/ff(x0));
cout << "x"<<i<<"=" <<x1<< endl;
i++;
if(fabs(x1-x0)<t)
break;
}
cout << "The root is ="<<x1<< endl;
cout << "number of iteration "<<i-1 << endl;
}
int main(){
z:
double x;
cout << "Enter initial guess value " << endl;
cin>>x;
newtonrephson(x);
int y;
cout << "Run again? yes Press any number exit to 0" << endl;
cin>>y;
if(y)
goto z;
}