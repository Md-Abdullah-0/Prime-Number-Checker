#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter A Number: ";
    cin>>n;
    if(n<2)
    {
        cout << n << " is not a prime number.";
        return 0;
    }
    for(int i=2;i*i<=n;i++) 
    {
        if(n%i==0)
        {
            cout << n << " is not a prime number.";
            return 0;
        }
    }
    cout << n << " is a prime number.";

}