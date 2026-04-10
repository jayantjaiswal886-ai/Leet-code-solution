#include <iostream>
using namespace std;

int removeElement(int nums[], int n, int val) 
{
    int k = 0;  

    for (int i = 0; i < n; i++)
	 {
        if (nums[i] != val)
		 {
            nums[k] = nums[i];  
            k++;
        }
    }

    return k;
}

int main() {
    int nums[] = {3, 2, 2, 3};
    int n = 4;
    int val = 3;

    int k = removeElement(nums, n, val);
    cout << "Updated array: ";

    for (int i = 0; i < k; i++) {
        cout << nums[i] << " ";
    }

    return 0;
}
