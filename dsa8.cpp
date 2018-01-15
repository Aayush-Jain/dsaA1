#include <stdio.h>
#include <iostream>
using namespace std;

int length(char str[]){
	int length = 0;
	for(int i=0;i<100;i++){
		if(str[i]=='\t'){
			length = i;
			break;
		}
	}
	return length-1;
}
int main(){
	char str[100];
	for(int i=0;i<100;i++) str[i] = '\t';
	cin >> str;
	int l = length(str);
	char S[] = {'g','o','d','b','y','e'};
	int count[6];int ans=0;
	for (int i=0;i<6;i++) count[i] = 0;
	
	for(int i=0;i<l;i++){
		if(str[i]=='g') count[0]++;
		if(str[i]=='o') count[1]++;
		if(str[i]=='d') count[2]++;
		if(str[i]=='b') count[3]++;
		if(str[i]=='y') count[4]++;
		if(str[i]=='e') count[5]++;
	}
	for(int i=0;i<6;i++){
		if(count[i]>0) ans++;
	}
	if(ans==6 && count[1]>=2) cout << "yes";
	else cout << "no";
	
	return 0;
}