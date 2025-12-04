#include<bits/stdc++.h>
#define pi 3.14159
using namespace std;

double cosfun(double x,int n){
double f=1,sum=1;
int i=1;
n=n-1;
while(i<=n){
f=f*(2*i)*(2*i-1);
sum+=pow(-1,i)*pow(x,(2*i))/f;
i++;
}
return sum;
}
int main(){
z:
int n,y;
double x;
cout << "Enter the value of x and n" << endl;
cin>>x>>n;
x=x*pi/180;
cout << "The sum of cosine series= "<<cosfun(x,n) << endl;
cout << "Run again?  press 1 otherwise 0" << endl;
cin >> y;
if(y)
goto z;
}