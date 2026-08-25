#include<iostream>
using namespace std;
int main()
{
    int nums[]={-1,0,3,5,9,12};
    int target=9;
    int low=0;
        int high=5;
        int mid;
        while(low<=high)
        {
            mid=high-(high-low)/2;
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
            return -1;
}