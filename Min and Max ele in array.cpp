#include <iostream>
#include <algorithm> 
#include <climits>   
using namespace std;
void findMinMax(const int arr[], int size, int &minVal, int &maxVal) 
{
    if (size == 0) 
    {
        minVal = INT_MAX;
        maxVal = INT_MIN;
        return;
    }
    minVal = *min_element(arr, arr + size);
    maxVal = *max_element(arr, arr + size);
}
int main() 
{
    const int size = 5;
    int arr[size] = {1,2,3,4,5};
    int minVal, maxVal;
    findMinMax(arr, size, minVal, maxVal);
    cout << "Minimum element: " << minVal << endl;
    cout << "Maximum element: " << maxVal << endl;
    return 0;
}
