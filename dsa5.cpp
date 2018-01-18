#include <stdio.h>
#include <iostream>
#include <math.h>
using namespace std;

long long int modulo(int x,int n, int M){
	if(n==0) return 1;
	else if(n%2==0){
		long long int y = modulo(x,n/2,M);
		return (y*y)%M;
	}
	else if(n%2==1){
		return ((x%M)*modulo(x,n-1,M))%M;
	} 
}

int main(){
	long long int M = pow(10,10);
	int n; cin >> n;
	long long int result = modulo(2,n,M);
	cout << result;
	return 0; 
}