#include <iostream>
using namespace std;

int strStr(string haystack, string needle) {
    int n = haystack.length();
    int m = needle.length();

    for(int i = 0; i <= n - m; i++) {
        int j = 0;

        while(j < m && haystack[i + j] == needle[j]) {
            j++;
        }

        if(j == m) {
            return i;
        }
    }

    return -1;
}
int main()
{
	string haystack;
	string needle;
	cout<<"enter the String "<<endl;
	cin>>haystack;
	cout<<"enter  the string to find their first occurenece"<<endl;
	cin>>needle;
	cout<<" The position whwre  given string occured is :"<<strStr(haystack,needle);
	return 0;
}
