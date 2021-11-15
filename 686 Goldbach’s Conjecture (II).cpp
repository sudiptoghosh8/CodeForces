#include<bits/stdc++.h>
using namespace std;
#define mx 1000

bool prime[mx+1];
int cp[mx+1];

void sieve();

int main()
{
    sieve();
    int i,n,c,cnt,num,ulm,llm,j;


    return 0;
}
void sieve()
{
    int sq,i,j;
    sq=sqrt(mx);

    for(i=2; i<=sq; i++)
    {
        if(prime[i]==0)
        {
            for(j=i*i; j<=mx; j+=i)
            {
                prime[j]=1;
            }
        }
    }
}
