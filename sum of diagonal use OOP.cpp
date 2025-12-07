#include<bits/stdc++.h>
using namespace std;
class matrix{
private:
int n;
double dsum=0.0,ltsum=0.0,utsum=0.0,a[100][100];
public:
void setvalue(){
cout << "Enter the value of n" << endl;
cin>>n;
for(int i=0;i<n;i++){
for(int j=0;j<n;j++)
cin>>a[i][j];
}
}
void getvalue(){
for(int i=0;i<n;i++){
for(int j=0;j<n;j++){
if(i>j)
ltsum+=a[i][j];
else if(j>i)
utsum+=a[i][j];
else 
dsum+=a[i][j];
}
}
cout << " sum of Diagonal element  "<<dsum << endl;
cout << " sum of lower Triangular element  "<<ltsum << endl;
cout<< " sum of upper Triangular element  "<<utsum << endl;
}
};
int main(){
matrix m;
m.setvalue();
m.getvalue();
}