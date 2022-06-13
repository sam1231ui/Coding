#include<bits/stdc++.h>
using namespace std;

//void wave(int *arr[][10],int m, int n){
//
//	for(int i=0; i<n; i++){
//		if(i%2 ==0){
//			for(int j=0; j<m; j++){
//				cout<<arr[j][i]<<' ';
//			}
//	    }else{
//	    	for(int j=m-1; j>=0; j--){
//				cout<<arr[j][i]<<' ';
//			}
//		}  	
//	}
////}
//
//void largest(int arr[][10], int m, int n){
//	int max1=0, sum =0;
//	
//	for(int i=0; i<m; i++){
//		sum=0;
//		for(int j=0; j<n; j++){
//			
//			sum = sum + arr[i][j];		
//			}if(sum > max1){
//				max1 = sum;
//			}
//	}cout<<sum;
//	
//} 







int main(){
	int m,n;
	cin>>m>>n;
	int arr[m][n];
	arr[m][n];
	
	for(int i=0; i<m; i++){
		for(int j=0; j<n ; j++){
			cin>>arr[i][j];
		}
	}
	int max1=0, sum =0;
	
	for(int i=0; i<m; i++){
		sum=0;
		for(int j=0; j<n; j++){
			
			sum = sum + arr[i][j];		
			}if(sum > max1){
				max1 = sum;
			}
	}
	
	int max2=0, sum1 =0;
	
	for(int i=0; i<n; i++){
		sum1=0;
		for(int j=0; j<m; j++){
			
			sum1 = sum1 + arr[j][i];		
			}if(sum1 > max2){
				max2 = sum1;
			}
	}
	
	if(max1 > max2){
		cout<<"rows "<<sum;
	}else
		cout<<"column "<<sum1;
	
	
	
	 
	cout<<endl;
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			cout<<arr[i][j]<<" ";
		}
	}
}
