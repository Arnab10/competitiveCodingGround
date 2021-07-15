#include<bits/stdc++.h>
using namespace std;
bool isprime(int n)
{
    // Corner case
    if (n <= 1)
        return false;
  
    // Check from 2 to n-1
    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return false;
  
    return true;
}
int main()
{
    int a,b;
    cin>>a;
    cin>>b;
    while(true)
    {
        a++;
        if(isprime(a)) 
        {
            break;
        }  
    }
    if(a==b) cout<<"YES";
    else cout<<"NO";
    //cout<<isprime(a);
    //cout<<isprime(b);
    return 0;
}