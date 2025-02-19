#include<iostream>
#include<vector>
using namespace std;
int findStart(vector<int> &arr, int n)
{
    int start = 0, end = n - 1;
    while (start < end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] >= arr[0])
        {
            start = mid + 1;
        }
        else
        {
            end = mid;
        }
    }
    return start;
}
int binarySearch(vector<int> &arr, int target, int start, int end)
{
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] == target)
        {
            return mid;
        }
        else if (arr[mid] > target)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return -1;
}
int search(vector<int> &nums, int target)
{
    int n = nums.size();
    int start1 = findStart(nums, n);
    int end1 = n - 1;
    int start2 = 0;
    int end2 = start1 - 1;
    if (target >= nums[start1] && target <= nums[end1])
    {
        return binarySearch(nums, target, start1, end1);
    }
    else
    {
        return binarySearch(nums, target, start2, end2);
    }
}
int main() {
    vector<int> arr = {4, 5, 6, 7, 0, 1, 2};
    cout << search(arr, 0) << endl;
    // nums = [4,5,6,7,0,1,2], target = 3
    // Output: -1
    vector<int> arr2 = {4, 5, 6, 7, 0, 1, 2};
    cout << search(arr2, 3) << endl;

}