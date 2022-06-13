#include<bits/stdc++.h>
using namespace std;

// SORTING IN ARRAYS

// Insertion sort
void insertsort(int input[], int size){
	for(int i=1; i<size; i++){
		int j, key = input[i];
		for(j=i-1; j>=0; j--){
			if(key < input[j]){
				input[j+1] = input[j];	
			} 
		}input[j+1] = key;
	}
}

// Selection sort
void selectsort(int input[], int size){
	for(int i=0; i<size; i++){
		for(int j=i+1; j<size; j++){
			
			if(input[i] > input[j]){
				
				int temp = input[i];
				input[i] = input[j];
				input[j] = temp;
			}
			
		} 
	}
}


//Bubble sort
void bsort(int input[], int size){
	for(int i=0; i<size; i++){
		for(int j=0; j<size-i-1; j++){
			
			if(input[j] > input[j+1]){
				swap(input[j],input[j+1]);
			}
		}
	}
}



// SEARCH IN ARRAYS

// linaer search
int linearSearch(int *input, int size, int val){    

for(int i=0; i<size-1; i++){
        if(input[i]==val){
            return i;
        }
    }
    return -1;
}


//Binary Searching in arrays
int binarySearch(int *input, int size, int val){
      	int start=0, end=size-1;
	 
		
		
		while(start<=end){
            int mid = (start+end)/2;
			
			if(input[mid] == val){
				return mid;
				
			}else if(input[mid] < val){
				start = mid +1;
				
			}else 
                end = mid-1;
			
		}return -1;
		
	
}





int main(){
	
	int size;
    cout<<"Enter size \n";
    cin>>size;
    
    int input[size];
   
     // Array input 
    
    for(int i=0; i<size; i++){
    	cin>>input[i];	
	}
	
	 
	
	
     //fun calls
     
     
     
    insertsort(input,size);
    selectsort(input, size);
    bsort(input, size);
    
    print()
	 
	
}
