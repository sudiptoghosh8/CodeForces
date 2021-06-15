#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,t,b,x,res;
    string c;
    cin>>t;
    b=0;
    x=0;
    while(t--)
    {
        cin>>c;
        if((c=="++X")||(c=="X++"))
        {
            b+=1;
        }
        else if((c=="--X")||(c=="X--"))
        {
            x+=1;
        }

    }
    res=0;
    res=b-x;
    cout<<res<<endl;

    return 0;

}
