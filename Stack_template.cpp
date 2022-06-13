#include<bits/stdc++.h>
using namespace std;
// TEMPLATE use
template <typename T, typename U>

class sample{
	T x;
	U y;
	
	public:
		
		void setx(T x){
			this -> x = x;
		}
		void sety(U y){
			this -> y = y;
		}
		T getx(){
			return x;
		}
		U gety(){
			return y;
		}
};

int main(){
	
	  sample<int,int> s1;
	  
	  s1.setx(10);
	  s1.sety(20);
	  
	  sample<sample<int, int>, char> s2;
	  
	  s2.sety('s');
	  
	  sample<int,int> s;
	  
	  s.setx(10);
	  s.sety(20);
	  
	  s2.setx(s);
}
