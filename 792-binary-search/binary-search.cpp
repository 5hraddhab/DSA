class Solution {
public:
int binarySearch(vector<int>&a,int low,int high,int x)
{
    if (low > high)
        return -1;
     int mid = low + (high - low) / 2;
      if (a[mid] == x)
        return mid;

    if (x > a[mid])
        return binarySearch(a, mid + 1, high, x);

    return binarySearch(a, low, mid - 1, x);
    


   
}
    int search(vector<int>& nums, int target) {
        return binarySearch(nums,0,nums.size()-1,target);
    }
};