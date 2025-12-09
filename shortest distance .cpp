#include<bits/stdc++.h>
using namespace std;
class di {
private:
double x1,x2,y1,y2,max=-1e9,min=1e9,dis=0;
public:

double d(double x1,double x2,double y1,double y2){
return sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
}
void rvalue(){
int n;
cout << "Enter the number of points" << endl;
cin>>n;
double a[100][2];
cout << "Enter the points (x,y)" << endl;
for(int i=0;i<n;i++){
cin>>a[i][0]>>a[i][1];
}
for(int i=0;i<n;i++){
for(int j=i+1;j<n;j++){
 dis=d(a[i][0],a[j][0],a[i][1],a[j][1]);
 if(dis<min)min=dis;
if(dis>max)max=dis;
}
}
cout << "The largest distance " <<max<< endl;
cout << "The minimum distance " <<min<< endl;
}
};
int main(){
di ds;
ds.rvalue();
}
