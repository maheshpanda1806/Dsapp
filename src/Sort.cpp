#include "../include/dsapp.h"
using namespace std;

int partition(vector<long long> &arr, int low, int high) {
    long long pivot = arr[high];
    int i = low - 1;
    for (int j = low; j < high; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return i + 1;
}

void quick_sort_helper(vector<long long> &arr, int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);
        quick_sort_helper(arr, low, pi - 1);
        quick_sort_helper(arr, pi + 1, high);
    }
}

void quick_sort(vector<long long> &arr) {
    if (!arr.empty()) quick_sort_helper(arr, 0, arr.size() - 1);
}
