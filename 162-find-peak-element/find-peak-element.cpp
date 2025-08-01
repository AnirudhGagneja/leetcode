class Solution {
public:
    int findPeakElement(vector<int>& arr) {
        if(arr.size()==1)return 0;
        if(arr[0]>arr[1])return 0;
       
        int n=arr.size();
         if(arr[n-1]>arr[n-2])return n-1;
        int st=1,end=n-2;
    while (st<=end)
    {
        int mid = st + (end-st)/2;
        if (arr[mid-1]<arr[mid] && arr[mid]>arr[mid+1])
        {
            return mid;
        }
        else if (arr[mid]<arr[mid+1])
        {
            st=mid+1;
        }
        else if(arr[mid]<arr[mid-1]){
            end=mid-1;
        }
    }
    return -1;
    }
};