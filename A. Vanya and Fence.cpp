#include<bits/stdc++.h>
using namespace std;
int main()
{

    int a, b ;
    int total = 0 ;
    int temp ;
    scanf("%d%d", &a, &b) ;

    total = a ;
    for(int i = 0 ; i < a ; i++)
    {
        scanf("%d", &temp) ;
        if(temp > b)
        {
            total++ ;
        }
    }

    printf("%d\n", total) ;

    return 0 ;
}
