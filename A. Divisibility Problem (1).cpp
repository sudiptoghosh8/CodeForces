#include <iostream>
using namespace std;
int main() {

    long long int a,b,c,d,cnt,ans, tem;
    cin>>d;

    while (d--) {
        cnt=0;
        cin>>a>>b;
        if(a>=b)
        {
            tem=a%b;
            if(tem!=0)
            {
                ans=b-tem;
                cout<<ans<<endl;
            }
            else {
                cout<<0<<endl;
            }
        }
        
        else{
        cout<<b-a<<endl;
        }

    }
    return 0;
}