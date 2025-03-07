//divide and conquer rule
//divide problem into subproblem
//conquer (solve)the subproblem
//combine soln of subproblem
//choosing the pivot element 
//last element ; first element ; median; random
//i - insert ele<pivot at the beginning
//j- final ele < pivot

#include <bits/stdc++.h>
using namespace std;

int partition(int arr[], int first, int last) { // Change void to int
    int pivot = arr[last];
    int i = first - 1; // for inserting ele < pivot
    int j = first;
    for (; j < last; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    // now i is pointing to last ele < pivot
    // correct position for pivot will be - i+1
    swap(arr[i + 1], arr[last]);
    return i + 1; // Return the partition index
}

void quickSort(int arr[], int first, int last) {
    // base case
    if (first >= last) {
        return;
    }
    int pi = partition(arr, first, last);
    quickSort(arr, first, pi - 1);
    quickSort(arr, pi + 1, last);
}

int main() {
    int arr[] = {34, 56, 78, 33, 23};
    int n = sizeof(arr) / sizeof(arr[0]);
    quickSort(arr, 0, n - 1);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}



//unstable algorithm  best case - O(nlogn);worstcase - O(n^2)
