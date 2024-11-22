#include <iostream>

using namespace std;

void heapify(int A[], int n, int i) {
    int largest = i;
    int l = 2 * i + 1;
    int r = 2 * i + 2;
    if (l < n && A[l] > A[largest]) largest = l;
    if (r < n && A[r] > A[largest]) largest = r;

    if (largest != i) {
        swap(A[i], A[largest]);
        heapify(A, n, largest);
    }

}

void heap_sort(int A[], int size) {
    for (int i = size / 2 - 1; i >= 0; i--)
        heapify(A, size, i);
    for (int i = size - 1; i > 0; i--) {
        swap(A[0], A[i]);
        heapify(A, i, 0);
    }
}

int main() {
    int arr[] = {
            11, 3, 14, 5, 32, 9, 0
    };
    int size = sizeof(arr) / sizeof(arr[0]);
    heap_sort(arr, size);

    for (int a: arr) {
        cout << a << " ";
    }
    return 0;
}
