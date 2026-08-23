#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s="A man, a plan, a canal: Panama";
    bool isFound=true;
        int left=0;
        int right=s.size()-1;
        while(left<right)
        {
            s[left]=tolower(s[left]);
            s[right]=tolower(s[right]);
            if(!isalnum(s[left]))
            {
                left++;
                continue;
            }
            if(!isalnum(s[right]))
            {
                right--;
                continue;
            }
            if(s[left]!=s[right])
            {
                isFound=false;
                break;
            }
            else{
                left++;
                right--;
            }
        }
       cout<<isFound<<endl;
       return 0;
}