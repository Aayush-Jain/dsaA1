#include <stdio.h>
#include <iostream>
using namespace std;

long long int modulo(int x,int n,int M){
	if(n==0) return 1;
	else if(n%2==0){
		long long int y = modulo(x,n/2,M);
		return (y*y)%M;
	}
	else if(n%2==1){
		return (x%M)*modulo(x,n-1,M);
	}
}
int main(){
	int c,n,p;
	cin >> c >> n >> p;
	long long int answer = modulo(c,n,p);
	cout << answer;
	return 0;
}