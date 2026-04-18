#include <iostream>
using namespace std;

int main() 
{
    int n;
    cout<<"enter the size :"<<endl;
    cin>>n;
    int nums[n];
    cout<<"enter the array element :"<<endl;
    for(int i=0; i<n;i++)
    {  cout<<"enter the "<<i<< " index element :"<<endl;
    	cin>>nums[i];
	}
    int max = nums[0];
    int index = 0;

    for(int i = 0; i < n; i++) 
	{
        if(nums[i] >max) 
		{
            max = nums[i];
            index = i;
        }
    }

    cout << "Peak element index: " << index << endl;

    return 0;
}
