class Solution {
public:
    bool isPalindrome(int x) {
       if(x<0)
       {
        return 0;
       }
       int temp =x;
       long long  rev=0;
        while(temp!=0)
        {
         int n=temp%10;
           rev= rev*10 +n;
           temp=temp/10;
        }
    
            return rev==x;
        
    
    }
};
