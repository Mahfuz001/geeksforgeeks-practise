#include<iostream>
#include<math.h>
using namespace std;

typedef long long ll;

void printLargestFactor(ll x){
	int large = 1;
	
	while(x % 2 == 0){
		large = 2;
		x /= 2;
	}
	
	for(ll i=3; i<=sqrt(x); i++){
		
		while(x % i == 0){
			large = i;
			x /= i;
		}
	}
	
	if(x > 2){
		large = x;
	}
	
	cout << large << "\n";
	
}

int main(){
	int t; cin >> t;
	while(t--){
		ll n; cin >> n;
		printLargestFactor(n);
	}
	return 0;	
}
