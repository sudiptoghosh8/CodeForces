#include <iostream>
#include <cstring>
#include <cstdio>
#include <algorithm>
#include <cmath>

using namespace std;

int main()
{
    int x;
    cin>>x;
    while(x--)
    {
        int maze[5];
        cin>>maze[0]>>maze[1]>>maze[2]>>maze[3];
        int ans1,ans2;
        if(maze[0]>maze[1])
            ans1=maze[0];
        else
            ans1=maze[1];
        if(maze[2]>maze[3])
            ans2=maze[2];
        else
            ans2=maze[3];

        if(ans1==maze[0]&&ans2==maze[2])
        {
            if(ans1<maze[3]||ans2<maze[1])
                cout<<"NO"<<endl;
            else
                cout<<"YES"<<endl;
        }
        else if(ans1==maze[1]&&ans2==maze[2])
        {
            if(ans1<maze[3]||ans2<maze[0])
                cout<<"NO"<<endl;
            else
                cout<<"YES"<<endl;
        }
        else if(ans1==maze[0]&&ans2==maze[3])
        {
            if(ans1<maze[2]||ans2<maze[1])
                cout<<"NO"<<endl;
            else
                cout<<"YES"<<endl;
        }
        else if(ans1<maze[2]||ans2<maze[0])
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }
}
