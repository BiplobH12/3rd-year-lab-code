#include<bits/stdc++.h>
using namespace std;
void bill(double u) {
    if(u<=50) {
        cout << "The cost of current is  "<<u <<"Units (>50)"<< endl;
        cout << "The electric bill = 100 Tk" << endl;
    }
    else if(u>50&&u<=200) {
        cout << "At first step 50 units =  100 Tk"<< endl;
        cout << "At second step " <<(u-50)<<" units(units×2.5 tk)"<<((u-50)*2.5)<<"Tk"<< endl;
        cout << "The electric bill = "<<(100+((u-50)*2.5))<<"Tk" << endl;
    }
    else if(u>200&&u<=500) {
        cout << "At first step 50 units = 100 Tk"<< endl;
        cout << "At second step  " <<(200-50)<<" units(units×2.5 tk)= "<<((200-50)*2.5)<<"Tk"<< endl;
        cout << "At third step " <<(u-200)<<" units(units×3.5 tk)= "<<((u-200)*3.5)<<"Tk"<< endl;
        cout << "The electric bill = "<<(100+((200-50)*2.5))+ ((u-200)*3.5)<<"Tk" << endl;
    }
    else {
        cout << "At first step 50 units =100 Tk "<< endl;
        cout << "At second step " <<(200-50)<<" units(units×2.5 tk)= "<<((200-50)*2.5)<<"Tk"<< endl;
        cout << "At third step " <<(500-200)<<" units(units×3.5 tk)= "<<((500-200)*3.5)<<"Tk"<< endl;
       cout<< "At fourth step " <<(u-500)<<" units(units×5.0 tk)= "<<((u-500)*5.0)<<"Tk"<< endl;
        cout << "The electric bill = "<<(100+((200-50)*2.5))+ ((500-200)*3.5)+((u-500)*5.0)<<"Tk" << endl;
    }
}
int main(){
z:
double u;
cout << "Enter the amount of units " << endl;
cin >> u;
bill(u);
int y;
cout << "Run Again? yes 1 or no 0" << endl;
cin>>y;
if(y)
goto z;
}
