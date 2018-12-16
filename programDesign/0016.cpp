#include <stdio.h>
char get(int x){
	char c;
	switch(x){
		case 0:c='0';break;
		case 1:c='1';break;
		case 2:c='2';break;
		case 3:c='3';break;
		case 4:c='4';break;
		case 5:c='5';break;
		case 6:c='6';break;
		case 7:c='7';break;
		case 8:c='8';break;
		case 9:c='9';break;
		case 10:c='A';break;
		case 11:c='B';break;
		case 12:c='C';break;
		case 13:c='D';break;
		case 14:c='E';break;
		case 15:c='F';break;
	}//endswitch
	return c;
}
void turn(int x){
	int bin[100],blen=0;//二进制
	int otc[100],olen=0;//八进制
	char hit[100],hlen=0;//十六进制
	for(int i = 0;i < 100; ++i){
		bin[i] = 0;
		otc[i] = 0;
		hit[i] = '';
	}//endfor
	//计算二进制
	while(1){
		if(x==1){
			bin[blen] =1;
			break;
		}
		a[al++] = x%2;
		x = x/2;
	}//endwhile
	//打印二进制
	for(int i = blen;i>=0;i--)
		printf("%d",bin[i]);
	printf("\n");
	//二进制改八进制
	int j=0;
	while(1){
		if(j+2<=blen){//二进制长度大于等于三位
			if(bin[j] != 0)
				otc[olen] +=(int)pow(2,0);
			if(bin[j+1] != 0)
				otc[olen] +=(int)pow(2,1);
			if(bin[j+2] != 0)
				otc[olen] +=(int)pow(2,2);
			j = j+2;
		} else if(j+1 <= blen){//长度不足三位
			if(bin[j] != 0)
				otc[olen] +=(int)pow(2,0);
			if(bin[j+1] != 0)
				otc[olen] +=(int)pow(2,1);
			j = j+1;
		} else if(j <= blen){//处理一位
			otc[olen] = bin[j];
		}
		olen++;
		j++;
		if(j > blen)
			break;
	}//endwhile
	//二进制化十六进制
	j=0;
	int t=0;
	while(1){
		if(j+3<=blen){//处理四位
			if(bin[j] != 0)//不为0的位数累加
				t+=(int)pow(2,0);
			if(bin[j+1] != 0)//不为0的位数累加
				t+=(int)pow(2,1);
			if(bin[j+2] != 0)//不为0的位数累加
				t+=(int)pow(2,2);
			if(bin[j+3] != 0)//不为0的位数累加
				t+=(int)pow(2,3);
			j+=3;
		} else if(j+2<=blen){//处理三位
			if(bin[j] != 0)//不为0的位数累加
				t+=(int)pow(2,0);
			if(bin[j+1] != 0)//不为0的位数累加
				t+=(int)pow(2,1);
			if(bin[j+2] != 0)//不为0的位数累加
				t+=(int)pow(2,2);
		} else if(j+1<=blen){
			if(bin[j] != 0)//不为0的位数累加
				t+=(int)pow(2,0);
			if(bin[j+1] != 0)//不为0的位数累加
				t+=(int)pow(2,1);
			j+=1;
		} else if(j <= blen)
			t = bin[j];
		hit[hlen] = get(t);
		t = 0;
		hlen++;
		j++;
		if(j>blen)
			break;
	}//endwhile
}
int main(int argc, char* argv[]){
	int x;
	scanf("%d",&x);
	turn(x);
	return 0;
}
