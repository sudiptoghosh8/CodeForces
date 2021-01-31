#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int m,n,i,total;
    char g='G',b='B';
    cin>>m>>n;
   total=n+m;

    if(m>n)
    {
        b='B';
        g='G';
    }

    for(i=0; i<total; i++)
    {
        if(m)
        {
            cout<<g;
            m--;
        }
        if(n)
        {
            cout<<b;
            n--;
        }
    }
    cout<<endl;

    return 0;
}
