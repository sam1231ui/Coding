////FUNCTIONS

#include <bits/stdc++.h>
using namespace std;

double avg(int num, ...){
	va_list args;
	double sum = 0;
	
	(arg,num);
	for (int i=0; i<num; i++)
		sum+=va_args(args,double);
	(args);
	return sum/num;
}

int main(){
	cout<<avg(3,4,5,6);
}
