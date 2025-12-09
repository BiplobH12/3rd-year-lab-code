#include<bits/stdc++.h>
using namespace std;
void largest(long long n){
int a[100],k=0,t;
while(n>0){
a[k]=n%10;
n=n/10;
k++;
}
for(int i=0;i<k;i++){
for(int j=i+1;j<k;j++){
if(a[j]>a[i]){
t=a[j];
a[j]=a[i];
a[i]=t;
}
}
}
cout << "Largest number " << endl;
for(int i=0;i<k;i++)
cout <<a[i];
cout<< endl;
}
void smallest(long long n){
int a[100],k=0,t;
while(n>0){
a[k]=n%10;
n=n/10;
k++;
}
for(int i=0;i<k;i++){
for(int j=i+1;j<k;j++){
if(a[j]<a[i]) {
t=a[j];
a[j]=a[i];
a[i]=t;
}
}
}
if(a[0]==0){
for(int i=1;i<k;i++){
if(a[i]!=0){
t=a[i];
a[i]=a[0];
a[0]=t;
break;
}
}
}
cout << "smallest number " << endl;
for(int i=0;i<k;i++)
cout <<a[i];
cout<< endl;
}

int main(){
z:
long long n;
double x;
cout << "Enter the number positive number" << endl;
cin>>n;
largest(n);
smallest(n);
int y;
cout << "Run again? yes Press any number exit to 0" << endl;
cin>>y;
if(y)
goto z;
}