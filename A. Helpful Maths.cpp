#include<bits/stdc++.h>
using namespace std;
int main()
{
    string input;
    cin >> input;
    int i = 0, j = 0;
    char output[100];
    while (i<input.length())
    {
        if (input[i] != ' ' && input[i] != '+')
        {

            output[j] = input[i];
            j++;
        }
        i++;
    }
    sort(output, output + j);



    for (int i = 0; i < j; i++)
    {
        cout << output[i];
        if (i == (j - 1))
        {
            break;
        }
        else cout << '+';
    }
    return 0;

}
