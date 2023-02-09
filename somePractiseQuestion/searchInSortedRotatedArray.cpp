#include <bits/stdc++.h>
using namespace std;

int search(int* arr, int n, int key) {
    int low = 0, high = n- 1;
        while (low <= high)
        {
            int mid = (low + high) / 2;
            if (arr[mid] == key)
                return mid;

            if (arr[low] <= arr[mid])
            {
                if (arr[low] <= key && arr[mid] > key)
                {
                    high = mid - 1;
                }
                else{
                    low=mid+1;
                }

            }
            else
            {
                if (key > arr[mid] && key <= arr[high])
                {
                    low = mid + 1;
                }
                else
                {
                    high = mid - 1;
                }
            }
        }return -1;

}