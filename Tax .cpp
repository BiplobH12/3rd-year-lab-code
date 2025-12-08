#include<bits/stdc++.h>
using namespace std;
void tax(double income ) {
double t=0,t1=0,t2=0,t3=0,t4=0;
    if(income <=250000) {
        cout << "Income >=250000" << endl;
        cout << " Tax = "<<t<< endl;
    }
    else if(income<=500000) {
        cout << "Income <=500000" << endl;
        cout << "1st Step tax for (Income <=250000)= "<<t << endl;
        t1=(income-250000)*0.05;
        cout << "2nd Step tax for next 250000= "<<t << endl;
        cout << "all Tax = "<<t1+t<< endl;
    }
    else if(income <=1000000) {
        cout << "Income <=1000000" << endl;
        cout << "1st Step tax for (Income <=250000)= "<<t<< endl;
        t1=(500000-250000)*0.05;
        cout << "2nd Step tax for next 250000= " <<t1<< endl;
        t2=(income -500000)*0.1;
        cout << "3rd Step tax for next 500000= " <<t2<< endl;
        cout << "all Tax = "<<t2+t1+t<< endl;
    }
    else if(income <=5000000) {
        cout << "Income <=5000000" << endl;
        cout << "1st Step tax for (Income <=250000)= "<<t<< endl;
        t1=(500000-250000)*0.05;
        cout << "2nd Step tax for next 250000= " <<t1<< endl;
        t2=(1000000-500000)*0.1;
        cout << "3rd Step tax for next 500000= " <<t2<< endl;
        t3=(income-1000000)*0.2;
        cout << "4th Step tax for next 4000000= " <<t3<< endl;
        cout << "all Tax = "<<t3+t2+t1+t<< endl;
    }
    else {
        cout << "Income above 5000000" << endl;
        cout << "1st Step tax for (Income <=250000)= "<<t<< endl;
        t1=(500000-250000)*0.05;
        cout << "2nd Step tax for next 250000= " <<t1<< endl;
        t2=(1000000-500000)*0.1;
        cout << "3rd Step tax for next 500000= " <<t2<< endl;
        t3=(5000000-1000000)*0.2;
        cout << "4th Step tax for next 4000000= " <<t3<< endl;
        t4=(income-5000000)*0.4;
        cout << "5th Step tax for above 5000000= " <<t4<< endl;
        cout << "all Tax = "<<t4+t3+t2+t1+t<< endl;
    }

}
int main() {
cout <<fixed<<setprecision(8);
double income;
string s;
cout << "Enter your full name" << endl;
getline(cin,s);
cout << "Enter your yearly income " << endl;
cin>>income;
cout << "mr/mis: "<<s<< endl;
tax(income);
return 0;
}