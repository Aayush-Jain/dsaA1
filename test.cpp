 #include <stdio.h>
#include <iostream>
using namespace std;

int multiply(int res[],int x,int res_size){
	int carry = 0;
	//int result;
	for(int i=0;i<res_size;i++){
		int result = res[i] * x + carry;
		res[i] = result % 10;
		carry = result/10;
	}
	while(carry){
		res[res_size] = carry%10;
		carry = carry/10;
		res_size++;
	}
	return res_size;
}
void factorial(int n){
	int res[500];
	for(int i=0;i<500;i++) res[i] = 0;
	res[0] = 1;
	int res_size = 1;
	for(int x=2;x<=n;x++){
		res_size = multiply(res,x,res_size);
	}
	for(int i=res_size-1;i>=0;i--) cout << res[i];
}
int main(){
	//int res[1000];
	factorial(5);
}
