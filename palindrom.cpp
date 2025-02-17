#include<iostream>
using namespace std;
// best case time complexity when one digit or  worst case time complexity when n digits 
bool isPalindrome(int x) {
    if (x < 0 || (x != 0 && x % 10 == 0)) {
        return false;
    }

    int reversed = 0;
    while (x > reversed) {
        reversed = reversed * 10 + x % 10;
        x /= 10;
    }
    return (x == reversed) || (x == reversed / 10);
}

int main(){
    cout<<"Enter digits:";
    int x;
    cin>>x;
    cout<<isPalindrome(x);
}