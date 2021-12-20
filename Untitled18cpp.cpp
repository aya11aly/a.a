#include <iostream>
using namespace std;
int main(){
	int x, y;
	char s;
	cin>>x>> s>> y;
	if(s=='+')
	   cout<< " is summation\n "<<x<<'+'<<y<< '='<<x + y<<endl;
	 else if(s=='-')
	    cout<< " is subtraction \n "<<x<<'-'<<y<<'='<<x-y<<endl;
	  else if(s=='*')
	     cout<<" is multiplication \n "<<x<<'*'<<y<<'='<<x*y<<endl;
	     else if(s=='/')
	      cout<< " is division\n "<<x<<'/'<<y<<'='<<x/y<<endl;

	  
	return 0;
}
