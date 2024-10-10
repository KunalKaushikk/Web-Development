#include <iostream>
#include <vector>
#include <set>

using namespace std;

vector<int> slidingSubarrayBeauty(const vector<int> &arr, int k, int n)
{
    vector<int> result;

    multiset<int> window;

    for (int i = 0; i < k; ++i)
    {
        window.insert(arr[i]);
    }

    for (int i = k; i <= arr.size(); ++i)
    {
        result.push_back(*next(window.begin(), n - 1));

        if (i < arr.size())
        {
            window.erase(window.find(arr[i - k]));
            window.insert(arr[i]);
        }
    }

    return result;
}

int main()
{
    // Input array
    vector<int> arr;
    int val;
    while (cin >> val)
    {
        arr.push_back(val);
    }

    // Subarray size
    int k;
    cin >> k;

    // Nth position of the smallest integer
    int n;
    cin >> n;

    // Call the function and display the result
    vector<int> result = slidingSubarrayBeauty(arr, k, n);

    for (int val : result)
    {
        cout << val << " ";
    }

    return 0;
}
