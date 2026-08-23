#include<iostream>
using namespace std;
int main()
{
    int nums[]={1,2,3,4,5,6,7};
    int k=3;
     int n=7;
        k=k%n;
        int left=n-k;
        int right=n-1;
        while(left<right)
        {
            swap(nums[left],nums[right]);
            left++;
            right--;
        }
        left=0;
        right=n-k-1;
         while(left<right)
        {
            swap(nums[left],nums[right]);
            left++;
            right--;
        }
        left=0;
        right=n-1;
         while(left<right)
        {
            swap(nums[left],nums[right]);
            left++;
            right--;
        }
        for(int i=0;i<n;i++)
        {
            cout<<nums[i]<<" ";
        }
    return 0;
}