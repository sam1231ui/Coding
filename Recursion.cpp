// RECURSION

#include <iostream>
using namespace std;
 
 
 
 
void print(int n){
 	
	 if(n == 0){
 		return ;
	}
	
	cout << n << endl;
	print(n-1);
 }


bool checkPalindrome(char input[]) {
    
    static int size=(strlen(input)/2)-1,i=0,j=strlen(input)-1;
    
    
    if(i>size){
        return true ;
	}
    if(input[i]!=input[j]){
        return false;
	}
    i++;
    j--;
     
    return checkPalindrome(input);
     
}


int sumOfDigits(int n) {
    
    static int ans = 0;
    
    if(n == 0){
        return 0;
    }int reminder = n%10;
    ans = ans + reminder;
    sumOfDigits(n/10);
    return ans;

}


int firstIndex(int input[], int size, int x) {
  if(size == 0){
      return -1;
  }
  if( input[0] == x){
      return 0; 
  }int ans = firstIndex(input+1, size-1, x);

   if(ans == -1){
       return -1;
   }else return ans+1;
}



 

int main() {
		 
	int size;
	cin>>size;
	int input[size];
	
	for(int i=0; i<size; i++){
		cin>>input[i];
	}
	int x;
	cin>>x;
	
	cout<<firstIndex(input,size,x);
}

