#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
void ass(double a[],int n){
double t;
for(int i=0;i<n;i++){
for(int j=i+1;j<n;j++){
if(a[i]>a[j]){
t=a[i];
a[i]=a[j];
a[j]=t;
}
}
}
cout << "Assending Order is =" << endl;
for(int i=0;i<n;i++)
cout << a[i]<< endl;
}
void dis(double a[],int n){
double t;
for(int i=0;i<n;i++){
for(int j=i+1;j<n;j++){
if(a[i]<a[j]){
t=a[i];
a[i]=a[j];
a[j]=t;
}
}
}
cout << "dissending Order is =" << endl;
for(int i=0;i<n;i++)
cout << a[i]<< endl;
}
int main(){
z:
int n,y;
cout << "Enter the dimension number" << endl;
cin >>n;
cout << "Enter the value of array" << endl;
double a[n];
for(int i=0;i<n;i++){
cin >> a[i];
}
ass(a,n);
dis(a,n);
cout << "Run again? press 1 otherwise 0" << endl;
cin >> y;
if(y)
goto z;

}