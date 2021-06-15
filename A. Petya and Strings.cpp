#include<bits/stdc++.h>
using namespace std;
 int main()
{
    string a, b;
    cin>>a>>b;
    int ilgis = a.length();
    for(int i=0; i<ilgis; i++)
    {
        if(a[i]>='A' && a[i]<='Z')
        {
            a[i]=a[i]-'A'+'a';
        }
    if(b[i]>='A' && b[i]<='Z')
        {
            b[i]=b[i]-'A'+'a';
        }
    }
    for(int i=0; i<ilgis; i++)
    {
        if(a[i]!=b[i])
        {
            if(a[i]>b[i])
            {
                cout<<"1"<<endl;
                return 0;
            }
            if(a[i]<b[i])
            {
                cout<<"-1"<<endl;
                return 0;
            }
        }
    }
    cout<<"0"<<endl;
    return 0;
}
