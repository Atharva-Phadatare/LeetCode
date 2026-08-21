#include<iostream>
using namespace std;
int main()
{
    int arr[]={2,7,11,15};
    int n=4;
    int left=0;
    int right=3;
    int sum=0;
    while(left<=right)
    {
        sum=arr[left]+arr[right];
        if(sum==9)
        {
            cout<<"[ "<<left+1<<" , "<<right+1<<" ]"<<endl;
            break;
        }
        else  if(sum<9)
        {
            left++;
        }
        else{
            right--;
        }
    }
    return 0;
}