#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cout << "Enter string: ";
    getline(cin, str);

    int start = 0;
    int end = str.length() - 1;

    while (start < end) {

        
        if (((str[start] >= 'a' && str[start] <= 'z') ||
              (str[start] >= 'A' && str[start] <= 'Z') ||
              (str[start] >= '0' && str[start] <= '9'))) {
            start++;
            continue;
        }

        if (!((str[end] >= 'a' && str[end] <= 'z') ||
              (str[end] >= 'A' && str[end] <= 'Z') ||
              (str[end] >= '0' && str[end] <= '9'))) {
            end--;
            continue;
        }

        
        char a = str[start];
        char b = str[end];

        if (a >= 'A' && a <= 'Z') a += 32;
        if (b >= 'A' && b <= 'Z') b += 32;

        if (a != b) {
            cout << "Not Palindrome";
            return 0;
        }

        start++;
        end--;
    }

    cout << "Palindrome";
    return 0;
}
