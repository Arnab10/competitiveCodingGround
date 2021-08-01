#include<bits/stdc++.h>
using namespace std;



int main(){
	int n;
	cin>>n;
	int A[n][3];
	int B[n][3];
	int Awin = 0;
	int Bwin = 0;
	for(int i=0;i<n;i++){
		for(int j=0;j<3;j++){
			cin>>A[i][j];
		}	
		for(int j=0;j<3;j++){
			cin>>B[i][j];
		}
	}	
	for(int i=0;i<n;i++){
		Awin = 0;
		Bwin = 0;
		
		for(int j=0;j<3;j++){
			if(A[i][j]>B[i][j])
				Awin++;
			else if(A[i][j]<B[i][j]) Bwin++;
		}
		if(Awin>Bwin)
				cout<<"A"<<"\n";
			if(Awin<Bwin)
				cout<<"B"<<"\n";
	}
    return 0;
}