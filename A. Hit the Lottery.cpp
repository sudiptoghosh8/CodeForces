///.................***SUDIPTO GHOSH***.........................///
///......BANGLADESH UNIVERSITY OF BUSINESS AND TECHONOLOGY......///
///...................DEPT OF CSE(DAY).........................///
///.....................INTAKE-44,12...........................///
#include<bits/stdc++.h>
using namespace std;
typedef       long long int   ll;
typedef      long double   ld;
typedef     vector<ll>      vll;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using    namespace __gnu_pbds;
typedef tree<ll, null_type, less<ll>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;
#define     fi              first
#define     se              second
#define     pb              push_back
#define Fin          freopen("input.txt","r",stdin)
#define Fout         freopen("output.txt","w",stdout)
#define     nn              "\n"
#define     all(p)          p.begin(),p.end()
#define     zz(v)           (ll)v.size()
#define     ss              ' '
#define     pii            pair<ll,ll>
#define     gcd(a,b)        __gcd(a,b)
#define     lcm(a,b)        (a*b)/gcd(a,b)
#define pi 3.1415926535897932384626



int main()
{

//    ios::sync_with_stdio(0);
//    cin.tie(0);

    ll n,cnt,a,b,c,d,e;
    ll c1=0,c2=0,c3=0,c4=0,c5=0;
    a=0;
    b=0;
    c=0;
    d=0;
    e=0;
    ll flag =0;
    cin>>n;
    if(n>=100)
    {
        c1=n/100;
        a=n%100;
        if(a>=20 && a<100)
        {
            c2=a/20;
            b=a%20;

            if(b>=10 && b<20)
            {
                c3=b/10;
                c=b%10;
                if(c>=5 && c<10)
                {
                    c4=c/5;
                    d=c%5;
                    if(d>=1 && d<5)
                    {
                        c5=d;
                    }
                }
                else if(c>=1 && c<5)
                    {
                        c4=c;
                    }
            }

             else if(b>=5 && b<10)
                {
                    c3=b/5;
                    c=b%5;
                    if(c>=1 && c<5)
                    {
                        c4=c;
                    }
                }

               else if(b>=1 && b<5)
                    {
                        c3=b;
                    }



            // cout<<c1+c2+c3+c4+c5<<endl;
        }

        else if(a>=10 && a<20)
        {
            c2=a/10;
            b=a%10;
            if(b>=5 && b<10)
            {
                c3=b/5;
                c=b%5;
                if(c>=1 && c<5)
                {
                    c4=c;
                }
            }

            else if(b>=1 && b<5)
                {
                    c3=b;
                }


            //cout<<c1+c2+c3+c4<<endl;
        }

        else if(a>=5 && b<10)
        {
            c2=a/5;
            b=a%5;
            if(b>=1 && b<5)
            {
                c3=b;
            }
            //cout<<c1+c2+c3<<endl;
        }

        else if(a>=1 && a<5)
        {
            c2=a;
            //cout<<c1+c2<<endl;
        }
        cout<<c1+c2+c3+c4+c5;

    }

    else if(n>=20 && n<100)
    {
        c1=n/20;
        a=n%20;

        if(a>=10 && a<20)
        {
            c2=a/10;
            b=a%10;
            if(b>=5 && b<10)
            {
                c3=b/5;
                c=b%5;
                if(c>=1 && c<5)
                {
                    c4=c;
                }
            }
            else if(b>=1 && b<5)
                {
                    c3=b;
                }
        }

        else if(a>=5 && a<10)
        {
            c2=a/5;
            b=a%5;
            if(b>=1 && b<5)
            {
                c3=b;
            }
        }

        else if(a>=1 && a<5)
        {
            c2=a;
        }
        cout<<c1+c2+c3+c4<<endl;
    }


    else if(n>=10 && n<20)
    {
        c1=n/10;
        a=n%10;
        if(a>=5 && a<10)
        {
            c2=a/5;
            b=a%5;
            if(b>=1 && b<5)
            {
                c3=b;
            }
        }

        else if(a>=1 && a<5)
        {
            c2=a;
        }
        cout<<c1+c2+c3<<endl;
    }
    else if(n>=5 && n<10)
    {
        c1=n/5;
        a=n%5;
        if(a>=1 && a<5)
        {
            c2=a;
        }
        cout<<c1+c2<<endl;
    }
    else if(n>=1 && n<5)
    {
        cout<<n<<endl;
    }

    else
    {
        cout<<0<<endl;
    }

    /* you should actually read the stuff at the bottom  */

}




/*

    * do something instead of nothing and stay organized
	* WRITE STUFF DOWN
	* DON'T GET STUCK ON ONE APPROACH
*/


/* Final check before submit :

1. array size or integer overflow,like uninitialised 0 index.

2. Think twice,code once.check all possible counter test case.

3. Be careful about corner case! n=1?k=1? something about 0?

4. avoid stupid mistake!complexity(t/m)?precision error?submit same code twice?

5. if got WA than remember that you are missing something common.
   *** Be confident!!! who knows? may be your one step back to AC ***
4. minus mod ans=(ans-k+mod)%mod;



*/


/* IF WA???

1. corner case! n=1?k=1? something about 0?

2. check code(avoid stupid mistake)

3. read the statement again(if there any missing point???)

4. check the idea(check all possible counter test case again!!!)

5. be calm,don't be panic!!!.(***this problem not going to decide your future***)

6. don't waste too much time. move to next problem

*/
