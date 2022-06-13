#include<bits/stdc++.h>
using namespace std;

//RECURSION with Char arrays

void pairStar(char input[]) {
     
    static int i=0;
    
    if(input[i] == '\0' || input[i+1] == '\0'){
        return;
    }
    
   if(input[i] == input[i+1]){
        
        for(int j = strlen(input); j>=i+1; j--){
            
            input[j+1] = input[j];
        
        }input[i+1] = '*';
        
    }i++;
    pairStar(input);

}


void replacePi(char input[]) {
    
    static int i =0;
 	if(input[i] == '\0' || input[i+1] == '\0'){
        return;
    }
    //replacePi(input);
    
    if(input[i] =='p' && input[i+1] == 'i'){
        
        for(int j = strlen(input); j>=i+2; j--){
            input[j+2] = input[j];
        }
        input[i] = '3';
        input[i + 1] = '.';
        input[i + 2] = '1';
        input[i + 3] = '4';
    }i++;
    replacePi(input);
    

}


int stringToNumber(char input[]) {
     
    static int size = strlen(input)-1, sum=0;
	 
	
    if(input[0] == '\0')
        return 0;
	
	sum = sum + (input[0] -'0')*pow(10,size);
	
	size--;
	stringToNumber(input+1);
	return sum;
	
}





int main() {
    char input[50];
    cin >> input;
    cout << stringToNumber(input) << endl;
     
}
