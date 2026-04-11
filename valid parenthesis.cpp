#include <iostream>
#include <stack>
using namespace std;

bool isValid(string s) {
    stack<char> st;

    for (int i = 0; i < s.length(); i++) {
        char ch = s[i];

    
        if (ch == '(' || ch == '{' || ch == '[') {
            st.push(ch);
        }
        else {
            
            if (st.empty()) {
                return false;
            }

            char top = st.top();
            st.pop();

            
            if (ch == ')' && top != '(') return false;
            if (ch == '}' && top != '{') return false;
            if (ch == ']' && top != '[') return false;
        }
    }

    return st.empty();
}

int main() {
    string s;

    cout << "Enter string: ";
    cin >> s;

    if (isValid(s)) {
        cout << "Valid";
    } else {
        cout << "Invalid";
    }

    return 0;
}
