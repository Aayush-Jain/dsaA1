#include <stdio.h>
#include <iostream>
using namespace std;

int main(){
	char str[100];
	scanf("%[^\n]%*c", str);
    for(int i=98;i>=0;i--) str[i+1] = str[i];
    str[0] = ' ';
	int count=0;
    for(int i=0;i<100;i++){
    	if(str[i]==' '&&str[i+1]=='t'&&str[i+2]=='h'&&str[i+3]=='e'&&str[i+4]==' ') count++;
    	else if(str[i]==' '&&str[i+1]=='t'&&str[i+2]=='h'&&str[i+3]=='e'&&str[i+4]=='\0') count++;
    }	
    cout << count;
    return 0;
}