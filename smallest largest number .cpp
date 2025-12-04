#include <iostream>
#include <algorithm>
using namespace std;

void printSmallestNumber(long long n) {
    int digit[20];  
    int idx = 0;  

    // Number কে digit এ ভাগ করা
    while (n > 0) {  
        digit[idx++] = n % 10;  
        n /= 10;  
    }  

    // Digit গুলো ascending order এ sort করা
    sort(digit, digit + idx);  

    // Leading zero থাকলে ঠিক করা
    if (digit[0] == 0) {  
        for (int i = 1; i < idx; i++) {  
            if (digit[i] != 0) {  
                swap(digit[0], digit[i]);  
                break;  
            }  
        }  
    }  

    cout << "Smallest possible number = ";  
    for (int i = 0; i < idx; i++)  
        cout << digit[i];  
    cout << endl;
}
void largest(long long n){
int digit[20];  
    int idx = 0;  

    // Number কে digit এ ভাগ করা
    while (n > 0) {  
        digit[idx++] = n % 10;  
        n /= 10;  
    }  

    // Digit গুলো ascending order এ sort করা
    sort(digit, digit+idx);
    
cout << "largest possible number = ";  
    while(idx--)  
        cout << digit[idx];  
    cout << endl;
}

int main() {
    long long n;
    cout << "Enter number: ";
    cin >> n;

    if(n < 0){
        cout << "Please enter a positive number!" << endl;
        return 0;
    }
    printSmallestNumber(n);
    largest(n);
    return 0;
}