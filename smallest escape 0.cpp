#include <iostream>
#include <algorithm>
using namespace std;

int main() {
long long n;
cout << "Enter number: ";
cin >> n;

int digit[20];  
int idx = 0;  

while (n > 0) {  
    digit[idx++] = n % 10;  
    n /= 10;  
}  

sort(digit, digit + idx);  

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

return 0;

}