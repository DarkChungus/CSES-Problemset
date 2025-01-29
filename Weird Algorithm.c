#include <stdio.h>

#define ll long long

int main(){
	unsigned ll n;
	fflush(stdout);
	scanf("%llu", &n);
	printf("%llu ", n);
	while(n!=1){
		if(n%2==0){
			n/=2;
			printf("%llu ", n);
		}
		else{
			n = 3 * n + 1;
			printf("%llu ", n);
		}
	}
	return 0;
}
