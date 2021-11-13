#include <iostream>
using namespace std;
int main() {
    
      int a,b,c,d;
    cin>>d;
    while (d--){
    cin>>a>>b>>c;
    if((a+b+c)%3==0)
    {
    cout<<1<<endl;
    }
    else{
    cout<<0<<endl;
    }


}
    return 0;
}
