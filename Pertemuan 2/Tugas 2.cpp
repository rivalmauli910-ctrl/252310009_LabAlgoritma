#include <iostream>
using namespace std;

void merge(string arr[], int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;

    string L[100], R[100]; 

    for (int i = 0; i < n1; i++)
        L[i] = arr[left + i];
    for (int j = 0; j < n2; j++)
        R[j] = arr[mid + 1 + j];

    int i = 0, j = 0, k = left;

    while (i < n1 && j < n2) {
        if (L[i] < R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(string arr[], int left, int right) {
    if (left < right) {
        int mid = (left + right) / 2;
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);
        merge(arr, left, mid, right);
    }
}

int main() {
    string data_barang[] = {"Pallet", "Kardus", "Forklift", "Rak", "Meja", "Troli", "Helm"};
    int n = sizeof(data_barang) / sizeof(data_barang[0]);

    mergeSort(data_barang, 0, n - 1);

    for (int i = 0; i < n; i++) {
        cout << data_barang[i] << " ";
    }

    return 0;
}
