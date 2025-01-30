#include <iostream>
#include <cmath>
using namespace std;

#define ll long long

int main(){
	unsigned ll ans = 1;
	unsigned ll n;
	cin >> n;
	unsigned ll modulo = pow(10,9) + 7;
	for(unsigned ll i=1; i<=n; i++){
		ans = 2*ans%(modulo);
	}
	cout << ans;
	return 0;
}
