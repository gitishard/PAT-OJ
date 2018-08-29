#include <cstdio>
int main(int argc, char* argv[]){
	long long int a, da, b, db;
	long long int pa = 0, pb = 0;
	scanf("%lld%lld%lld%lld", &a, &da, &b, &db);
	while(a != 0){
		if(a % 10 == da){
			pa = pa * 10 + da;
		}
		a /= 10;
	}//endwhile

	while(b != 0){
		if(b % 10 == db){
			pb = pb * 10 + db;
		}
		b /= 10;
	}//endwhile
	printf("%lld\n", pa + pb);
	return 0;
}
