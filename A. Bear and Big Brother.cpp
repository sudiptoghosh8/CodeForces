#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,i,n;
    c=0;
    cin>>a>>b;
    while(true)
    {
        if(a<=b)
        {
            a=a*3;
            b=b*2;
            c++;
        }
        else
        {
            cout<<c<<endl;
            break;
        }

    }


    return 0;
}
