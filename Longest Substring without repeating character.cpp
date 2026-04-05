#include<iostream>
using namespace std;
    int lengthOfLongestSubstring(string s) {
        
        int left=0;
        int maxlength=0;
        for(int right=0;right<s.length();right++)
        {
          for(int i=left;i<right;i++)
          {
            if(s[i] == s[right])
            {
                left=i+1;
                break;
            }
          }
            int currentlength=right-left+1;
            if(currentlength>maxlength)
            {
                maxlength=currentlength;
            }
        }
        return maxlength;
    }

int main()
{
	string str;
	cout<<"enter the string ";
	cin>>str;
	cout<<"Longest substring length = "<<lengthOfLongestSubstring(str);
	return 0;
	
}
