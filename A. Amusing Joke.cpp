#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1,s2,s3;
    cin>>s1>>s2>>s3;
    string s4;

    s4=s1+s2;
    sort(s3.begin(),s3.end());
    sort(s4.begin(),s4.end());

    for(int i=0;i<s3.size();i++)
    {
        if(s3==s4)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }

}
