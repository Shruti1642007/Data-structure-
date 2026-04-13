#include <iostream>
using namespace std;


void printArray(int arr[], int n) {
    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}


void insertionSort(int arr[], int n) {
    for(int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;

        while(j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}


void merge(int arr[], int left, int mid, int right) {

    int n1 = mid - left + 1;
    int n2 = right - mid;

    int* L = new int[n1];
    int* R = new int[n2];

    for(int i = 0; i < n1; i++)
        L[i] = arr[left + i];

    for(int j = 0; j < n2; j++)
        R[j] = arr[mid + 1 + j];

    int i = 0, j = 0, k = left;

    while(i < n1 && j < n2) {
        if(L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while(i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    while(j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }

    delete[] L;
    delete[] R;
}


void mergeSort(int arr[], int left, int right) {
    if(left < right) {
        int mid = left + (right - left) / 2;

        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);

        merge(arr, left, mid, right);
    }
}

int main() {

    int n, choice;

    cout << "Enter number of elements: ";
    cin >> n;

    int* arr = new int[n];  

    cout << "Enter elements:\n";
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    do {
    cout << "\n1. Insertion Sort\n";
    cout << "2. Merge Sort\n";
    cout << "Enter choice: ";
    cin >> choice;

    switch(choice) {

        case 1:
            insertionSort(arr, n);
            cout << "Sorted Array (Insertion Sort):\n";
            printArray(arr, n);
            break;

        case 2:
            mergeSort(arr, 0, n - 1);
            cout << "Sorted Array (Merge Sort):\n";
            printArray(arr, n);
            break;

        default:
            cout << "Invalid Choice!";
    }
} while (choice!=3);

    delete[] arr;   
    return 0;
}
