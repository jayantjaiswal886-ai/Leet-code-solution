#include <iostream>
#include <set>
using namespace std;

int main() {
    int n;
    cout << "Enter size: ";
    cin >> n;

    int nums[100];

    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    set<int> s;

    for (int i = 0; i < n; i++) {

        if (s.find(nums[i]) != s.end()) {
            cout << "Duplicate exists";
            return 0;
        }

        s.insert(nums[i]);
    }

    cout << "No duplicate";

    return 0;
}
