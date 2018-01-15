#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
	int A[100][100],B[100][100],C[100][100],m,n,p;
	for(int i=0;i<100;i++){
		for(int j=0;j<=100;j++){
			A[i][j] = 0;
			B[i][j] = 0;
			C[i][j] = 0;
		}
	}
	cin >> m >> p;
	for(int i=1;i<=m;i++){
		for(int j=1;j<=p;j++){
			int a ; cin >> a; A[i][j] = a;
		}
	}
	cin >> p >> n;
	for(int i=1;i<=p;i++){
		for(int j=1;j<=n;j++){
			int a ; cin >> a; B[i][j] = a;
		}
	}

	for(int i=1;i<=m;i++){
		for(int j=1;j<=n;j++){
			for(int k=1;k<=p;k++) {
				C[i][j] = C[i][j] + A[i][k]*B[k][j];
			}
			//cout << C[i][j] << endl;
		}
	}
	int ans = 0;
	for(int i=1;i<=m;i++){
		for(int j=1;j<=n;j++) {
			ans = ans + C[i][j];
		}
	}
	cout << ans;
	return 0;
}