#include <iostream>
#include <string>
using namespace std;

int lengthOfLastWord(string s) {
    int count = 0;
    int i = s.length() - 1;
    while (i >= 0 && s[i] == ' ')
	 {
        i--;
    }
	 while (i >= 0 && s[i] != ' ')
	  {
        count++;
        i--;
    }

    return count;
}

int main() 
{
string s;
cout << "Enter a string: ";
getline(cin, s);   
int result = lengthOfLastWord(s);
cout << "Length of last word: " << result;
return 0;
}
