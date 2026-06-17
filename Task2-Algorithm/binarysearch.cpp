#include <iostream>
#include <chrono>

using namespace std;
using namespace chrono;

int binarySearch(int arr[], int n, int key)
{
    int left = 0;
    int right = n - 1;

    while(left <= right)
    {
        int mid = left + (right - left) / 2;

        if(arr[mid] == key)
            return mid;

        if(arr[mid] < key)
            left = mid + 1;
        else
            right = mid - 1;
    }

    return -1;
}

int main()
{
    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    int* arr = new int[n];

    cout << "Enter sorted elements:\n";

    for(int i = 0; i < n; i++)
        cin >> arr[i];

    int key;

    cout << "Enter element to search: ";
    cin >> key;

    auto start = high_resolution_clock::now();

    int result = binarySearch(arr, n, key);

    auto stop = high_resolution_clock::now();

    auto duration =
    duration_cast<microseconds>(stop - start);

    if(result != -1)
        cout << "Element found at index "
             << result << endl;
    else
        cout << "Element not found" << endl;

    cout << "Execution Time: "
         << duration.count()
         << " microseconds\n";

    delete[] arr;

    return 0;
}