#include<iostream>
using namespace std;
void prime(int n){
bool f=1;
if(n==0||n==1)
cout << n<<"is not prime number " << endl;
else{
for(int i=2;i<n;i++){
if(n%i==0){
f=0;
break;
}
}
if(f)
cout <<n<< " is Prime number" << endl;
else
cout <<n<< "  is not prime number" << endl;
}
}
int main(){
a:
int n,y;
cout << "Enter the number to check prime " << endl;
cin>>n;
prime(n);
cout << "Run Again press 1" << endl;
cin>>y;
if(y)
goto a;
}
    