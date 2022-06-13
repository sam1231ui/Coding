// ARRAYS

#include<bits/stdc++.h>
using namespace std;


// (Dutch Natinal Flag) DNF algo
void sort012(int *arr, int n){
   int l =0, m=0, h =n-1;
    
    while(m<=h){
        if(arr[m] == 1){
            m++;
             
        }else if(arr[m] == 0){
            swap(arr[m],arr[l]);
            l++;
            m++;
             
        }else if(arr[m] == 2){
            swap(arr[m],arr[h]);
            h--;
             
        }
    }
}



//ARRAYS DIFF PROGRAMS


//sum of 3 elements pairs
void triple(int input[], int size, int val){
	int count=0;
	for(int i=0; i<size; i++){
		for(int j=i+1; j<size; j++){
			
			if( j==i){
				continue;
			}
			for(int k=j+1; k<size; k++){
				if(k==i || k==j){
					continue;
				}else if(input[i]+input[j]+input[k] == val){
					count++;
					 
				}
			}
		}
	}cout<<count<<endl;
}


// Sorting zeroes
void sortZeroesAndOne(int *input, int size){
     for(int i=0; i<size; i++){
     	for(int j=i+1; j<size; j++){
     		
     		if(input[j] == 0){
     			int temp = input[j];
     			input[j] = input[i];
     			input[i] = temp;
     			
			 }
		 } 
	 }
}


// Sum of 2 elemts = input value x
int pairSum(int *input, int size, int x){
	 int count=0;
	 for(int i=0; i<size; i++){
	 	for(int j=0; j<size; j++){
	 		
	 		if(input[i]==input[j]){
	 			continue;
			 }
			if(input[i]+input[j] == x){
				count++;
			}
		 }
	 }return count;
}

// searching common elements in 2 arrays
void intersection(int *arr1, int *arr2, int n, int m){
    for(int i=0; i<n; i++){
         
        
		for(int j=0; j<m; j++){
            
			
			if(arr1[i]==arr2[j]){
				
				cout<<arr1[i]<<" ";
                break;
			}
		
		}
	}
}

// finding the dupe in the array
int dupe(int arr[], int n){
	
	for(int i=0; i<n; i++){
		int count =0;
		for(int j=0; j<n; j++){
			 
			 
			if(arr[i]==arr[j]){
				count++;	 
			}
		}if(count <2){
			cout<<arr[i]<<endl;
			break;
		} 
	} 
	
	
}


// swaping the elements in the array
int swap(int arr[], int n){
	int temp=0,a;
	for(int i=0; i<n; i=i+2){
		int j=i+1;
		if(j<n){
			temp = arr[i];
			arr[i] = arr[j];
			arr[j] = temp;
		}
		 
	}
}


// printing the elements of array
void print(int input[], int size){
	for(int i=0; i<size; i++){
    	cout<<input[i]<<' ';	
	}cout<<endl;
 
}

//Rotating the array by given value
void rotate(int input[], int size, int val){
	 
	 int arr[val];
	 for(int i=0; i<val; i++){
	 	 arr[i] = input[i];
	 	 }
	 for(int j=0; j<size; j++){
	 	input[j] = input[j+val];
	 	 }
	 	 int o=0;
	 for(int k=val+1; k<size; k++){
		input[k] = arr[o];
		o++;
	 }
		
} 


// Main program

int main() {
    int size;
    cout<<"Enter size \n";
    cin>>size;
    
    int input[size];
   
    
    
     // Array input 
    
    for(int i=0; i<size; i++){
    	cin>>input[i];	
	}
	
	 
	
	
     //fun calls
     
     
 
    
    
//    int val;
//    cout<<"Enter the val = ";
//	cin >> val;
//	triple(input, size, val);
	print(input,size);
	//intersection(arr1,arr2,n,m);
}
    
     
	
	 
	 
	
     
    
	
     
     

