#include <bits/stdc++.h> 
using namespace std;


// isalnum implementation is like this ..

bool isalnum(char c) {
    return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9');
}





// Maha brute force approach never use in life .......
bool checkPalindrome(string s)
{
    string str="";
    for(int i=s.size()-1;i>=0;i--){
        if(isalnum(s[i])) {
            str += tolower(s[i]);  // convert to lowercase before adding to str
        }
    }
    string ag="";
   for(int i=0;i<s.size();i++){
       if(isalnum(s[i])){
           ag += tolower(s[i]);
       }
   }
    if(str==ag) {
        return true;
    } else {
        return false;
    }
}





// good brute force approach
#include <iostream>
#include <string>

using namespace std;

bool is_palindrome1(string s) {
    // Remove all special characters and whitespaces from the string
    string stripped_s = "";
    for (char c : s) {
        if (isalnum(c)) {
            stripped_s += tolower(c);
        }
    }

    // Use two pointers to compare characters in-place
    int i = 0, j = stripped_s.length() - 1;
    while (i < j) {
        if (stripped_s[i] != stripped_s[j]) {
            return false;
        }
        i++;
        j--;
    }

    return true;
}

int main() {
    string s = "c1 O$d@eeD o1c";

    if (is_palindrome1(s)) {
        cout << "The string is a palindrome." << endl;
    } else {
        cout << "The string is not a palindrome." << endl;
    }

    return 0;
}




// best optimize version;
#include <iostream>
#include <string>

using namespace std;


bool is_palindrome(const string& s) {
    int left = 0, right = s.length() - 1;
    while (left < right) {
        while (left < right && !isalnum(s[left])) {
            left++;
        }
        while (left < right && !isalnum(s[right])) {
            right--;
        }
        if (tolower(s[left]) != tolower(s[right])) {
            return false;
        }
        left++;
        right--;
    }
    return true;
}

int main() {
    string s = "c1 O$d@eeD o1c";

    if (is_palindrome(s)) {
        cout << "The string is a palindrome." << endl;
    } else {
        cout << "The string is not a palindrome." << endl;
    }

    return 0;
}
