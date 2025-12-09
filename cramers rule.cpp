#include<bits/stdc++.h>
using namespace std;
#define t 0.00001
double dat(double a[][100],int n) {
    double tm[100][100],deter=1;
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++)
            tm[i][j]=a[i][j];
    }
    for(int i=0; i<n; i++) {
        for(int k=i+1; k<n; k++) {
            if(fabs(tm[i][i])<fabs(tm[k][i])) {
                for(int j=0; j<n; j++) {
                    double ttm=tm[i][j];
                    tm[i][j]=tm[k][j];
                    tm[k][j]=ttm;
                }
                deter*=-1;
            }
        }
    }
    for(int i=0; i<n-1; i++) {
    if(fabs(tm[i][i]) < t) continue;  // t=0.00001
        for(int k=i+1; k<n; k++) {
            double f=tm[k][i]/tm[i][i];
            for(int j=0; j<n; j++) {
                tm[k][j]=tm[k][j]-tm[i][j]*f;
            }
        }
    }
    for(int i=0; i<n; i++)
        deter*=tm[i][i];

    return deter;
}
class cr{

private :
    int n;
    double a[100][100],modi[100][100],b[100],x[100],maindat=0;
    public :
    void result (){
    cout << "Enter the Order" << endl;
    cin>>n;
    cout << "Enter the element " << endl;
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            cin>>a[i][j];
        }
    }
    cout << "Enter rhs maxtrix" << endl;
    for(int i=0;i<n;i++)
    cin>>b[i];
    maindat=dat(a,n);
    if(maindat==0){
    cout << "No solution " << endl;
    exit(0);
    }
    for(int col=0;col<n;col++){
    for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
    if(i==j)
    modi[i][j]=b[i];
    else
    modi[i][j]=a[i][j];
    }
    }
    x[col]=dat(modi,n)/maindat;
    }
    cout << "Value  of x is " << endl;
    for(int i=0;i<n;i++){
    cout << "x" <<i+1<<"= "<<x[i]<< endl;
    }
    }
    
};
int main(){
cr c;
c.result();
}