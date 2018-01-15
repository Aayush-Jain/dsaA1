#include <stdio.h>
#include <iostream>
#include <string.h>
#include <math.h>
using namespace std;

bool length(char str[]){
	int l = strlen(str);
	int a = sqrt(l);
	if(l==a*a) return true;
	else return false;
}

bool palindrome(char str[]){
	int l = strlen(str);
	int k = 0;
	for(int i=0;i<l/2;i++){
		if(str[i]!=str[l-i-1]){
			k=1;
			break;
		}
	}
	if(k==0) return true;
	else return false;
}

bool transpose(char str[]){
	char A[100][100];
	int l = sqrt(strlen(str));int k=0;
	for(int i=0;i<l;i++){
		for(int j=0;j<l;j++){
			A[i][j] = str[k];k++;
		}
	}
	int flag=0;
	for(int i=0;i<l;i++){
		for(int j=0;j<l;j++){
			if(A[i][j]!=A[j][i]) flag++;
		}
	}
	if(flag==0) return true;
	else return false;
}

int main(){
	char str[10000]; char A[100][100];
	cin >> str;
	int l = strlen(str);
	//int a = sqrt(l);
	if(length(str)){
		if(palindrome(str)){
			if(transpose(str))cout << "YES";
			else cout << "NO";
		}
		else cout << "NO";	
	}
	else cout << "NO";
	return 0;
}