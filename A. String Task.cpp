#include<bits/stdc++.h>
using namespace std;

int main()
{
    char ch;
    while(1)
    {
        scanf("%c",&ch);
        if(ch=='\n')
        {
            break;

        }
        if(ch>=65&&ch<=90)
        {
            ch=ch+32;
        }
        if(ch=='a' || ch=='e' || ch =='i' || ch=='o' || ch=='u' || ch=='y')
        {
            continue;
        }
        else
        {
            cout<<"."<<ch;
        }
    }
    cout<<endl;
    return 0;
}
