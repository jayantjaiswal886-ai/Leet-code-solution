#include <iostream>
using namespace std;

int singleNumber(int nums[], int n) {
    int result = 0;

    for (int i = 0; i < n; i++) 
	{
        result = result ^ nums[i];
    }

    return result;
}

int main() {
    int n;
    cout << "Enter size: ";
    cin >> n;

    int nums[100];

    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++) 
	{
        cin >> nums[i];
    }

    cout << "Single number: " << singleNumber(nums, n);

    return 0;
}
