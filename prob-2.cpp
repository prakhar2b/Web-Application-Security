// Even Fibonacci numbers
/*
 Each new term in the Fibonacci sequence is generated by adding the previous 
 two terms. By starting with 1 and 2, the first 10 terms will be:

 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...

 By considering the terms in the Fibonacci sequence whose values do not exceed 
 four million, find the sum of the even-valued terms.

*/

/*
 f(0) = 1
 f(1) = 2
 f(n) = f(n-1) + f(n-2)     value <= 4,000,000

*/

#include <iostream>

using namespace std;

typedef long long ll;
#define MAX 10000
#define VAL 4000000

ll f[MAX];

int main(){
	std::ios::sync_with_stdio(false);

	f[0] = 1;
	f[1] = 2;

	ll sum = 2; //even-valued

	ll i = 1;
	while(f[i] <= VAL){
		f[i+1] = f[i] + f[i-1];

		if(f[i+1]%2 == 0) sum+=f[i+1];

		i++;

	}

	cout<<sum<<endl;

	return 0;
}

//------------------------Editorial------------------------------
/*
 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...

 Observation -- Every 3rd number is even now

 2, 8, 34, 144

 34 = 2 + 4* 8
 144= 8 + 4* 34

 f(n) = f(n-2) + 4*f(n-1)

*/