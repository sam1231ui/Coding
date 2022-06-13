#include <bits/stdc++.h>
using namespace std;

//bool triplet(int arr[], int n, int x) {
//	sort(A, A+n);
//    	for(int i=0; i<n-1; ++i) {
//    	    int j=i+1, k=n-1;
//    		while(j<k) {
//    			int sum = A[i]+A[j]+A[k];
//    			if(sum==X) {
//    				return true;
//    			}
//    			else if(sum < X)
//    				j++;
//    			else
//    	 			k--;
//    	    }
//    	}
//    	return false;
//        }
//}

int integer(int input[], int size){
	int temp = 0, n = size-1;
	for(int i=0; i<size; i++){
		
	    temp = temp + input[i] * pow(10,n);
		n--;
	}return temp;
	
}

void sum(int input1[], int input2[], int size1, int size2){
	
	
	
	int n,s=0;
	
	s = integer(input1,size1) + integer(input2,size2);
	
	 
	if(size1>size2){
		n = size1;
	}else 
		n = size2;
	
	int arr[n];	
	for(int i=n; i>=0; i--){
		
		arr[i] = s%10;
		 
		s = s/10; 
	}
	
	for(int j=0; j<=n; j++){
		cout<<arr[j];
	}
}

void print(int input[], int size){
	for(int i=0; i<size; i++){
    	cout<<input[i]<<' ';	
	}cout<<endl;
 
}

int main() {
	
	int input1[] = {1,2,3};
	int input2[] ={1,2};
	
	sum(input1,input2,3,2);
	
//	int size;
//	cin >> size;
//	int input[size];
//	
//	for(int i=0; i<size; i++){
//		cin >> input[i];
//	}
//	integer(input,size);
//	
	
	 
	
}



 

