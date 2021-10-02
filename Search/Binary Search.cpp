#include <bits/stdc++.h>

using namespace std;

int binarySearch(vector<int> &nums, int target, int start, int end)
{
    //Base Case
    if (start > end)
        return -1;
    int mid = (start + end) / 2;
    //If target is greater, means search on the right half of the array
    if (nums[mid] < target)
        return binarySearch(nums, target, mid + 1, end);
    //If target is lesser, means search on the left half of the array
    if (nums[mid] > target)
        return binarySearch(nums, target, start, mid - 1);
    //Otherwise, nums[mid] == target
    return mid;
}

int main()
{
    vector<int> nums;
    //No of elements
    int n;
    cin >> n;
    //Target to be found
    int target;
    cin >> target;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        nums.push_back(temp);
    }
    cout << binarySearch(nums, target, 0, nums.size() - 1);
    return 0;
}