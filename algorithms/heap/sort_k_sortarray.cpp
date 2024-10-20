#include <bits/stdc++.h>
using namespace std;

// Sorts a nearly sorted array where every element is at most
// k positions away from its target position.
void sortK(vector<int>& arr, int k) {
    int n = arr.size();

    // Size of priority queue or min heap
    int pqSz = (n == k) ? k : k + 1;

    // Min-heap to store the first k+1 elements
    priority_queue<int, vector<int>, greater<int>> pq(arr.begin(),
                                                      arr.begin() + pqSz);

    int idx = 0;

    // Process remaining elements
    for (int i = k + 1; i < n; i++) {
        arr[idx++] = pq.top();
        pq.pop();
        pq.push(arr[i]);
    }

    // Place remaining elements from the heap into
    // the array
    while (!pq.empty()) {
        arr[idx++] = pq.top();
        pq.pop();
    }
}

int main() {
    int k = 3;
    vector<int> arr = {2, 6, 3, 12, 56, 8};
    sortK(arr, k);
    for (int& x : arr) cout << x << ' ';
    return 0;
}
