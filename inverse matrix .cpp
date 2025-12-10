#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
double a[100][200],t[100][100];
cout << "Enter order " << endl;
cin>>n;
cout << "Enter element " << endl;
for(int i=0;i<n;i++){
for(int j=0;j<2*n;j++)
a[i][j]=0;
}
for(int i=0;i<n;i++){
for(int j=0;j<n;j++){
cin>>t[i][j];
a[i][j]=t[i][j];
}
}
for(int i=0;i<n;i++){
for(int j=0;j<n;j++){
a[i][j+n]=(j==i);
}
}
for(int i=0;i<n;i++){
int p=i;
for(int k=i+1;k<n;k++){
if(fabs(a[k][i])>fabs(a[p][i])) p=k;
}
if(p!=i){
for(int j=0;j<2*n;j++){
swap(a[i][j],a[p][j]);
}
}
}
for(int i=0;i<n;i++){
double pv=a[i][i];
if(fabs(a[i][i])<1e-9){
cout << "No inverse " << endl;
exit (0);
}
for(int j=0;j<2*n;j++){
 a[i][j]/=pv;
 }
for(int k=0;k<n;k++){
if(k!=i){
double f=a[k][i];
for(int j=0;j<2*n;j++)
a[k][j]-=f*a[i][j];
}
}
}
cout << "The inverse matrix " << endl;
for(int i=0;i<n;i++){
for(int j=n;j<2*n;j++)
cout <<a[i][j]<<" ";
cout<<endl;
}
double r[100][100];
for(int i=0;i<n;i++){
for(int j=0;j<n;j++){
r[i][j]=0;
for(int k=0;k<n;k++)
r[i][j]+=t[i][k]*a[k][j+n];
}
}
cout << "The A*inverse(A ) = " << endl;
for(int i=0;i<n;i++){
for(int j=0;j<n;j++)
cout <<round(abs(r[i][j]))<<" ";
cout<<endl;
}
return 0;
}