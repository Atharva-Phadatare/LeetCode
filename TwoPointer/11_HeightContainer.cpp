#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,8,6,2,5,4,8,3,7};
    int n=9;
    int left=0;
    int right=n-1;
    int MaxArea=0;
    while(left<right)
    {
        int Area=min(arr[left],arr[right])*(right-left);
        if(Area>MaxArea)
        {
            MaxArea=Area;
        }
        if(arr[left]<arr[right])
            {
                left++;
            }
            else{
                right--;
            }
    }
    cout<<MaxArea<<endl;
    return 0;     
}