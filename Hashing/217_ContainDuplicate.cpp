#include<iostream>
#include<set>
using namespace std;
int main()
{
    int nums[]={1,2,3,1};
        set<int> s;
        bool isDup=false;
        for(int x: nums)
        {
            if(s.find(x)!=s.end())
            {
                isDup=true;
                break;
            }
            else{
                s.insert(x);
            }
        }
        cout<< isDup;
}