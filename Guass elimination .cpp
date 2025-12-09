#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cout << "Enter order" << endl;
cin>>n;
double t[100][100],x[100];
cout << "Enter Augmented matrix " << endl;
for(int i=0;i<n;i++){
for(int j=0;j<=n;j++)
cin>>t[i][j];
}
for(int i=0;i<n;i++){
int p=i;
for(int k=0;k<n;k++){
if(fabs(t[k][i])>fabs(t[p][i]))
p=k;
}
if(p!=i){
for(int j=0;j<=n;j++)
swap(t[i][j],t[p][j]);
}
}
for(int i=0;i<n;i++){
if(abs(t[i][i])<1e-9){
cout << "System is inconsistent" << endl;
exit(0);
}
for(int j=i+1;j<n;j++){
double f=t[j][i]/t[i][i];
for(int k=0;k<=n;k++){
t[j][k]-=f*t[i][k];
}
}
}
for(int i=n-1;i>=0;i--){
x[i]=t[i][n];
for(int j=i+1;j<n;j++){
x[i]-=t[i][j]*x[j];
}
x[i]/=t[i][i];
}
for(int i=0;i<n;i++){
cout<<"x"<<i+1<<" = "<<x[i]<<endl;
}
return 0;
}