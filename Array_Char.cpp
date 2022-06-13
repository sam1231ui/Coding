#include<bits/stdc++.h>
using namespace std;

//Arrays in char


void consecutive(char str[]){
	char input[strlen(str)];
	int j=0;
	
	for(int i=0; i<strlen(str); i++){
		
		if(str[i] == str[i+1]){
			continue;
		}else input[j] = str[i];
			  str[i] = ' ';
			  j++;
	}strcpy(str,input);
	cout<<str;
}

void reverse(char str[]){
	
	char res[strlen(str)];
	int t=0;
	for(int i=0;i<strlen(str)/2;i++)
{
    char temp=str[i];
    str[i]=str[strlen(str)-i-1];
    str[strlen(str)-i-1]=temp;
}cout<<str<<endl;
	 
	int start=0,end=0;
	for(int i=0; i<strlen(str); i++){
	
		while(i<strlen(str) && str[i] == ' '){
			i++;
		}start = i;
		
		while(i<strlen(str) && str[i] != ' '){
			i++;
		}end = i-1;
		while(end>start){
			swap(str[start],str[end]);
			start++;
			end--;
		}
	}cout<<str;
}

bool checkPalindrome(char str[]) {
    
   for (int i = 0; i < strlen(str) / 2; i++) {
 
        if (str[i] != str[strlen(str) - i - 1]) {
            // Return No
            return false;
        }
    }
    // Return "Yes"
    return true;

}

void shape(char str[]){
	int num = 0;
	while(num < strlen(str)){
	
	
		for(int i=num; i<=strlen(str); i++){
			for(int j=num; j<i; j++){
				cout<<str[j];
			}cout<<endl;
		}num++;
	}
}

void highest(char str[]){
	int count =0, max= 0;
	char ans = str[0];
	for(int i=0; i<strlen(str); i++){
		count = 0 ;
		for(int j=0; j<strlen(str); j++){
 
			if(str[i] == str[j]){
				count++;
			}
		}if(count > max){
			max = count;
			ans = str[i];
		}
	}cout<<ans;
}

void wordreverse(char str[]){
	char input[strlen(str)];
	
	int start=0,end=0;
	for(int i=0; i<strlen(str); i++){
	
		while(i<strlen(str) && str[i] == ' '){
			i++;
		}start = i;
		int s=start;
		
		while(i<strlen(str) && str[i] != ' '){
			i++;
		}end = i-1;
		int t=end;
		int count =0, min=100;
		while(end>start){
//			swap(str[start],str[end]);
			count++;
			start++;
			end--;
		}if(count<min){
			min = count;
			int k=0;
			while(t>s){
			
				input[k] = str[s];
				s++;
				t--;
			}
			
		}
	}cout<<input; 
 
}


int main(){
	
	char str[25];
	cin.getline(str,25);
	 
	 
      //reverse(str);
 	 //highest(str);
	 //shape(str);
	 //consecutive(str);
     //wordreverse(str);
 	//reverse(str);
	//cout<<checkPalindrome(str)<<endl<<strlen(str);
	//cout<<input<<endl<<strlen(input);
}
