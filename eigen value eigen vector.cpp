// Find the dominant eigenvalue and corresponding eigenvector
// Assuming that the matrix has dominant eigenvalue
#include<bits/stdc++.h>
using namespace std;
#define t 0.000001
int main(){
cout <<fixed<<setprecision(4);
int n;
cout << "Enter the order of matrix" << endl;
cin>>n;
double a[n][n];
double v[n],c[n];
cout << "Enter the value row-wise" << endl;
for(int i=0;i<n;i++){
for(int j=0;j<n;j++)
cin>>a[i][j];
}
cout << "Guess the initial eigenvalue " << endl;
for(int i=0;i<n;i++)
cin>>v[i];
double k=v[0];
double y;
do{
y=k;
for(int i=0;i<n;i++){
c[i]=0;
for(int j=0;j<n;j++)
c[i]=c[i]+a[i][j]*v[j];
}
k=abs(c[0]);
for(int i=1;i<n;i++){
if(abs(c[i])>k)
k=abs(c[i]);
}
for(int i=0;i<n;i++){
v[i]=c[i]/k;
}
}while(abs(k-y)>=t);
cout << "largest eigen value " <<k<< endl;
cout << "Corresponding eigen vector " << endl;
for(int i=0;i<n;i++)
cout << v[i] <<"  ";
}
