#include<bits/stdc++.h>
using namespace std;
void lg(long long int n,int a[1000]) {
    int m=0;
    while(n>0) {
        a[m]=n%10;
        n=n/10;
        m++;
    }
    for(int i=0; i<m; i++) {
        for(int j=i+1; j<m; j++) {
            if(a[j]>a[i])
                swap(a[i],a[j]);
        }
    }
    cout << "The largest number is " << endl;
    for(int i=0; i<m; i++)
        cout <<a[i];
    cout<< endl;
}
void sm(long long int n,int a[1000]) {
    int m=0;
    while(n>0) {
        a[m]=n%10;
        n=n/10;
        m++;
    }
    for(int i=0; i<m; i++) {
        for(int j=i+1; j<m; j++) {
            if(a[i]>a[j])
                swap(a[i],a[j]);
        }
    }
    if(a[0]==0) {
        for(int i=1; i<m; i++) {
            if(a[i]!=0) {
                swap(a[i],a[0]);
                break ;
            }
        }
    }
    cout << "The smallest number is " << endl;
    for(int i=0; i<m; i++)
        cout <<a[i];
    cout<< endl;
}

int main() {
    long long int n;
    cout << "Enter the number " << endl;
    cin>>n;
    int a[100];
    lg(n,a);
    sm(n,a);
}