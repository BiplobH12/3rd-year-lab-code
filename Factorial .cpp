#include<iostream>
using namespace std;
void f(int n){
int f=1;
for(int i=1;i<=n;i++){
f*=(i);
}
cout <<n<< "! Factorial is =" <<f<< endl;
}
int main(){
a:
int n,y;
cout << "Enter the number to calculated factorial of number " << endl;
cin>>n;
f(n);
cout << "Run Again press 1" << endl;
cin>>y;
if(y)
goto a;
}
    