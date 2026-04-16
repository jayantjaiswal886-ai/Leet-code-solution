#include <iostream>
using namespace std;

int majorityElement(int nums[], int n)
 {
    int candidate = nums[0];
    int count = 1;

    for (int i = 1; i < n; i++) 
	{

        if (nums[i] == candidate)
		 {
            count++;
        } else {
            count--;
        }

        if (count == 0) 
		{
            candidate = nums[i];
            count = 1;
        }
    }

    return candidate;
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

    int ans = majorityElement(nums, n);

    cout << "Majority Element: " << ans;

    return 0;
}
