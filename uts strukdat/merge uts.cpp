#include <iostream>
using namespace std;

void merge(int arr1[], int arr2[], int n, int m) {
    int i = 0, j = 0, k = 0;
    int merged[n + m];

    while (i < n && j < m) {
        if (arr1[i] <= arr2[j]) {
            merged[k++] = arr1[i++];
        } else {
            merged[k++] = arr2[j++];
        }
    }

    while (i < n) {
        merged[k++] = arr1[i++];
    }

    while (j < m) {
        merged[k++] = arr2[j++];
    }

    for (int i = 0; i < n + m; i++) {
        cout << merged[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr1[] = {1, 3, 5, 7};
    int arr2[] = {2, 4, 6, 8};
    int n = sizeof(arr1) / sizeof(arr1[0]);
    int m = sizeof(arr2) / sizeof(arr2[0]);

    merge(arr1, arr2, n, m);

    return 0;
}
