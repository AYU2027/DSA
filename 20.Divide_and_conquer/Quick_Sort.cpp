#include <bits/stdc++.h>
using namespace std;


int partition(std::vector<int>& arr, int low, int high) {
    int pivot = arr[high];   // Pick last element as pivot
    int i = (low - 1);      // i tracks where the "smaller zone" ends
    for (int j = low; j <= high - 1; j++) {
        if (arr[j] <= pivot) {
            i++;
            std::swap(arr[i], arr[j]);
        }
    }
    std::swap(arr[i + 1], arr[high]);  // Place pivot in its correct spot
    return (i + 1);                    // Return pivot's final index
}
void quickSort(std::vector<int>& arr, int low, int high) {
    if (low < high) {                        // Base case: 1 element = already sorted
        int pi = partition(arr, low, high);  // Partition and get pivot index
        quickSort(arr, low, pi - 1);         // Sort left half
        quickSort(arr, pi + 1, high);        // Sort right half
    }
}
int main() {
    std::vector<int> data = {8, 7, 2, 1, 0, 9, 6};
    int n = data.size();
    quickSort(data, 0, n - 1);   // Sort from index 0 to last index 6
    return 0;
}