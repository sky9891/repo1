#include<bits/stdc++.h>
using namespace std;

int findSecondLargest(const vector<int>& arr) {
    set<int> uniqueElements(arr.begin(), arr.end()); // Store unique elements

    if (uniqueElements.size() < 2) {
        return -1; // If there are less than 2 unique elements
    }

    auto it = uniqueElements.rbegin(); // Reverse iterator pointing to the largest element
    ++it;                              // Move to the second largest element
    return *it;
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    if (n < 2) {
        cout << "The second largest element is: -1" << endl;
        return 0;
    }

    vector<int> arr(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    int result = findSecondLargest(arr);
    cout << "The second largest element is: " << result << endl;

    return 0;
}
