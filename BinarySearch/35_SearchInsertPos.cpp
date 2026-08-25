#include<iostream>
using namespace std;
int main()
{
    int nums[]={1,3,5,6};
    int target=7;
        int low=0;
        int high=4-1;
        int mid;
        while(low<=high)
        {
            mid=low+(high-low)/2;
             if(nums[mid]==target)
             {
                return mid;
             }
             else if(nums[mid]<target)
             {
                low=mid+1;
             }
             else if(nums[mid]>target)
             {
                high=mid-1;
             }
        }
            return high+1;
}