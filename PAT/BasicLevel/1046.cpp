#include <cstdio>
int main(int argc, char* argv[]){
	int N, JiaPose, JiaSay, YiPose, YiSay;
	int Yi = 0, Jia = 0;
	scanf("%d", &N);
	while(N--){
		scanf("%d%d%d%d", &JiaSay, &JiaPose, &YiSay, &YiPose);
		int sum = JiaSay + YiSay;
		if(sum == JiaPose && sum != YiPose)
			Yi++;
		else if(sum == YiPose && sum != JiaPose)
			Jia++;
	}//endwhile
	printf("%d %d\n", Jia, Yi);
	return 0;
}
