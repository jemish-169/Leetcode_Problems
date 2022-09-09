class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        // int mini = 0,maxi = arr.size()-1,mid = (mini+maxi)/2;
        // while(true)
        // {
        //     if(arr[mid]>arr[mid-1]&&arr[mid]>arr[mid+1])
        //         return mid;
        //     else if(arr[mid]>arr[mid-1]&&arr[mid]<arr[mid+1])
        //         mini = mid;
        //     else if(arr[mid]<arr[mid-1]&&arr[mid]>arr[mid+1])
        //         maxi = mid;
        //     mid = (mini+maxi)/2;
        // }
        // return 0;
        return max_element(arr.begin(),arr.end())-arr.begin();
    }
};