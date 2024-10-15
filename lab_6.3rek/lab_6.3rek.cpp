#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;

template <typename T>
void generateArrayTemplate(T arr[], int n, int index = 0) {
    if (index >= n) return;
    arr[index] = 1 + rand() % 15;
    generateArrayTemplate(arr, n, index + 1);
}

template <typename T>
void PrintTemplate(T* a, const int size, int index = 0) {
    if (index == size) {
        cout << endl;
        return;
    }
    cout << a[index] << setw(4);
    PrintTemplate(a, size, index + 1);
}

template <typename T>
bool isNonIncreasingTemplate(T arr[], int n, int index = 1) {
    if (index == n) {
        return true;
    }
    if (arr[index] > arr[index - 1]) {
        return false;
    }
    return isNonIncreasingTemplate(arr, n, index + 1);
}

void Print(int* a, const int size, int index = 0) {
    if (index == size) {
        cout << endl;
        return;
    }
    cout << a[index] << setw(4);
    Print(a, size, index + 1);
}

bool isNonIncreasing(int arr[], int n, int index = 1) {
    if (index == n) {
        return true;
    }
    if (arr[index] > arr[index - 1]) {
        return false;
    }
    return isNonIncreasing(arr, n, index + 1);
}

void generateArray(int arr[], int n, int index = 0) {
    if (index >= n) return;
    arr[index] = 1 + rand() % 15;
    generateArray(arr, n, index + 1);
}

int main() {
    srand((unsigned)time(NULL));

    int a[5];
    generateArray(a, 5);
    Print(a, 5);
    cout << "Is non-increasing (it): " << (isNonIncreasing(a, 5) ? "yes" : "no") << endl << endl;

    int b[5];
    generateArrayTemplate(b, 5);
    PrintTemplate(b, 5);
    cout << "Is non-increasing (template): " << (isNonIncreasingTemplate(b, 5) ? "yes" : "no") << endl << endl;

    int s[5] = { 5, 4, 3, 2, 1 };
    Print(s, 5);
    cout << "Is non-increasing (it): " << (isNonIncreasing(s, 5) ? "yes" : "no") << endl;
    cout << "Is non-increasing (template): " << (isNonIncreasingTemplate(s, 5) ? "yes" : "no") << endl;

    return 0;
}