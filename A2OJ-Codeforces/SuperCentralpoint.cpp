#include<bits/stdc++.h>
//using namespace std;
#define degree(x) (x)*180/M_PI
#define isTop(x,y) (imag(x) > imag(y)) && (real(x) == real(y))
#define isRight(x,y) (imag(x) == imag(y)) && (real(x)>real(y))
#define isLeft(x,y) (imag(x) == imag(y)) && (real(x)<real(y))
#define isButtom(x,y) (imag(x) < imag(y)) && (real(x) == real(y))

using namespace std;

int main()
{
    int n,count = 0;
    int x,y;
    int left ,right , top , buttom;
    int f = 100;
    complex <int> points;
    complex <int> reference;
    vector <complex<int>> plane;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x;
        cin>>y;
        points = {x,y};
        plane.push_back(points);
    }   
    for(int i=0;i<n;i++){
        top = right = left = buttom = 0;
        reference = plane[i];
        for(int j=0;j<n;j++){
            if(j!=i){
                if(isTop(plane[j],reference)) top++;
                if(isRight(plane[j],reference)) right++;
                if(isLeft(plane[j],reference)) left++;
                if(isButtom(plane[j],reference)) buttom++;
            }
        }
        if((top > 0) && (right > 0) && (left > 0) && (buttom > 0))
            count++;
    }
    cout<<count; 
    return 0;
}