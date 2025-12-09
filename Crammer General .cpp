#include<bits/stdc++.h>
using namespace std;
double dat(double a[100][100],int n){
double tm[100][100],d=1;
for(int i=0;i<n;i++){
for(int j=0;j<n;j++)
tm[i][j]=a[i][j];
}
for(int i=0;i<n;i++){
int p=i;
for(int k=i+1;k<n;k++){
if(fabs(tm[k][i])>fabs(tm[p][i]))
p=k;
}
if(p!=i){
for(int j=0;j<n;j++){
swap(tm[i][j],tm[p][j]);
}
d*=-1;
}
}
for (int i=0;i<n;i++){
if(fabs(tm[i][i])<1e-9)return 0;
for(int j=i+1;j<n;j++){
double f=tm[j][i]/tm[i][i];
for(int k=0;k<n;k++)
tm[j][k]-=f*tm[i][k];
}
d*=tm[i][i];
}
return d;
}
int main(){
double a[100][100],md,modi[100][100],b[100],x[100];
int n;
cout << "Enter the value of n" << endl;
cin>>n;
cout << "Enter element " << endl;
for(int i=0;i<n;i++){
for(int j=0;j<n;j++)
cin>>a[i][j];
}
md=dat(a,n);
cout << "Enter rhs" << endl;
for(int i=0;i<n;i++){
cin>>b[i];
}
for(int c=0;c<n;c++){
for(int i=0;i<n;i++){
for(int j=0;j<n;j++){
if(c==j)modi[i][j]=b[i];
else modi[i][j]=a[i][j];
}
}
x[c]=dat(modi,n)/md;
}
cout << " solution be " << endl;
for(int i=0;i<n;i++)
cout << "x"<<i+1<<"= "<<x[i] << endl;
}