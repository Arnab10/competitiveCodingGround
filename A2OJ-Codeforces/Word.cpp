#include<bits/stdc++.h>
using namespace std;
int main()
{
    char ss[101];
    int b[100],size = 0,sum=0;
    float uflag;
    cin.getline(ss,101);
    for(int i=0;ss[i]!='\0';i++){
        b[i] = isupper(ss[i]) ? 1 : 0;
        sum += b[i];
        size++;
    }
    //cout<<sum<<size<<endl;
    uflag = float(sum)/float(size);
   // cout<<uflag;
    if(uflag>0.5){       //upper max
        for(int i=0;ss[i]!='\0';i++){
            if(!isupper(ss[i])) ss[i] = ss[i] - 32;
        }
    }
    else{               //lower max
        for(int i=0;ss[i]!='\0';i++){
            if(isupper(ss[i])) ss[i] = ss[i] + 32;
        }
    }
    cout<<ss;
    return 0;
}