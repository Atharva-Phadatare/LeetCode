#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<vector<int>> matrix={{1,3,5,7},{10,11,16,20},{23,30,34,60}};
    int target=13;
        int row=matrix.size();
        int column=matrix[0].size();
        int n=row*column;
        int low=0;
        int high=n-1;
        int mid,r,c;
        while(low<=high)
        {
            mid=low+(high-low)/2;
            r=mid/column;
            c=mid%column;
            if(matrix[r][c]==target)
            {
                cout<<"exists"<<endl;
                return 0;
            }
            else if(matrix[r][c]<target)
            {
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        cout<<"Does not exist"<<endl;
        return 0;
}        