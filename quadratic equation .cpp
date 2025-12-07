#include<bits/stdc++.h>
using namespace std;
class root{
private :
double a,b,c;
double x1,x2,img,r,e;
public:
void setvalue(){
cout << "Enter the value of a,b and c " << endl;
cin>>a>>b>>c;
}
void getvalue(){
e=pow(b,2)-4*a*c;
if(a==0){
cout << "This isn’t quadratic equation get one root " << endl;
cout << "Root is ="<<((-c)/b)<< endl;
}
else {
if(e>0){
cout << "Root is real and unequal " << endl;
x1=((-b)+sqrt(e))/2.0*a;
x2=((-b)-sqrt(e))/2.0*a;
cout << "Roots are x1= "<<x1<<"and x2= "<<x2<<endl;
}
else if(e==0){
cout << "Root is real and equal " << endl;
x1=(-b)/2*a;
x2= x1;
cout << "Roots are x1= "<<x1<<"and x2= "<<x2<<endl;
}
else{
cout << "Root is imaginary and unequal " << endl;
r=(-b)/2.0*a;
img=sqrt(abs(e))/2.0*a;
cout << "Roots are x1= "<<r<<"+i"<<img<<"and x2= "<<r<<"-i"<<img<<endl;
}
}
}
};
int main(){
root eqn;
eqn.setvalue();
eqn.getvalue();

}