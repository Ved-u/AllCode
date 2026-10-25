#include <iostream>
#include <bits/stdc++.h>
//#include <vector>
using namespace std;
int main() {
    // Sorting an array
    int arr[] = {5, 2, 9, 1, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]); 
    sort(arr, arr + n); // Sort in ascending order

    cout << "Sorted Array: ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << std::endl;

    // Sorting a vector
    vector<int> vec = {3, 8, 4, 1, 9};
    sort(vec.begin(), vec.end()); // Sort in ascending order

    cout << "Sorted Vector: ";
    for (int num : vec) std::cout << num << " ";
    cout << endl;

    return 0;
}