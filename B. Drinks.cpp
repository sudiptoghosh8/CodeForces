#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t,i,arr;
    double result,ans;
    result=0;

    cin>>n;
    for(i=0;i<n;i++)
    {

        cin>>arr;
        result+=arr;
    }

result /= n;

printf("%0.12lf\n",result);
    return 0;
}
