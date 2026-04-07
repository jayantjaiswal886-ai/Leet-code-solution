
#include<iostream>
using namespace std;

int squareroot(int n)
{
    int low = 0, high = n, mid;
    int ans = 0;

    while(low <= high)
    {
        mid = low + (high - low) / 2;
        long long square = (long long)mid * mid;

        if(square == n)
        {
            return mid;
        }
        else if(square < n)
        {
            ans = mid;
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return ans;
}

int main()
{
    int number;
    cout << "Enter the number: ";
    cin >> number;

    cout << "Square root of number is: " << squareroot(number);
    return 0;
}
