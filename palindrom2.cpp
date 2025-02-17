#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(int x) {
    if (x < 0) return false;
    string s = to_string(x);
    int left = 0, right = s.length() - 1;
    while (left < right) {
        if (s[left] != s[right]) return false;
        left++;
        right--;
    }
    return true;
}

int main() {
    int x
    cout<<"Enter digits:";
    cin>>x;
    if (isPalindrome(x)) {
        cout << x << " is a palindrome." << endl;
    } else {
        cout << x << " is not a palindrome." << endl;
    }
    return 0;
}
