#include <iostream>
using namespace std;

void plusOne(int digits[], int &n) {

    for (int i = n - 1; i >= 0; i--)
	 {
        if (digits[i] < 9)
		 {
            digits[i]++;   
            return ;      
        }
        digits[i] = 0;    
    }

    for (int i = n; i > 0; i--)
	 {
        digits[i] = digits[i - 1];
    }

    digits[0] = 1;  
    n = n + 1;      
}

int main() 
{
    int digits[100];
    int n;

    cout << "Enter number of digits: ";
    cin >> n;

    cout << "Enter digits:\n";
    for (int i = 0; i < n; i++)
	 {
        cin >> digits[i];
    }

    plusOne(digits, n);

    cout << "Result: ";
    for (int i = 0; i < n; i++) 
	{
        cout << digits[i] << " ";
    }

    return 0;
}
