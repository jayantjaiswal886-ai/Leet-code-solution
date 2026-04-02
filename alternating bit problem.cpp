#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter the number ";
    cin>>n;
    int prev=-1;
    while(n>0)
    {
        int digit=n%2;
        if(digit==prev)
        {
            cout<<" not alternating";
            return 0;
        }
      
        prev=digit;
        n=n/2;
    }

        cout<<"alternating";
    

    return 0;
}
