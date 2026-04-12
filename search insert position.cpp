#include <iostream>
using namespace std;

int searchInsert(int nums[], int n, int target) {
    int low = 0;
    int high = n - 1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (nums[mid] == target) {
            return mid;  
        }
        else if (nums[mid] < target) {
            low = mid + 1;  
        }
        else {
            high = mid - 1; 
        }
    }

    return low;  
}

int main() {
    int n, target;

    cout << "Enter size of array: ";
    cin >> n;

    int nums[100]; 

    cout << "Enter sorted array elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    cout << "Enter target: ";
    cin >> target;

    int result = searchInsert(nums, n, target);

    cout << "Position: " << result;

    return 0;
}
