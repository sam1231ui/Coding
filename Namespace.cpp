#include<bits/stdc++.h>
using namespace std;


void reverse(char str[]){
	char res[10];
	for(int i=0; i<strlen(str); i++){
		int j=0;
		
		if(str[i] == ' '){
			for(j=i;j<i; j++){
				res[j] = str[j];
			}
		}
	}cout<<res;
} 


void shape(cha str[]){
	
	for(int i=0; i<strlen(str)){
		for(int j=i; j<j+1; j++){
			cout<<str[i];
		}cout<<endl;
	}
}








int main(){
	int m,n;
	cin>>m>>n;
	int arr[m][n];
	
	for(int i=0; i<m; i++){
		for(int j=0; j<n ; j++){
			cin>>arr[i][j];
		}
	}
	
	
	for(int i=0; i<n; i++){
		int sum =0;
		for(int j=0; j<m; j++){
			sum = sum + arr[j][i];
		}cout<<sum<<endl;
	}
	
	
	
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			cout<<arr[i][j];
		}
	}
}
