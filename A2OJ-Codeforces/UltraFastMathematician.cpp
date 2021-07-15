#include <cstring>
#include <iostream>
#include<bitset>
using namespace std;
int main()
{
    int len;
    string str1,str2;
    cin>>str1;
    cin>>str2;
    len = str1.length();
    bitset<128> bit1(str1);
    bitset<128> bit2(str2);

    cout<<(bit1^bit2).to_string().substr(128-len);

    return 0;
}