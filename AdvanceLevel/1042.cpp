#include <cstdio>
class Card{
	public:
		char symbl;
		int val;
		Card operator=(Card obj){
			this->symbl = obj.symbl;
			this->val = obj.val;
			return *this;
		}
};
void shuffling(Card card[], int order[]){
	Card *newcard = new Card[54];
	for(int i = 0;i < 54; ++i){
		newcard[order[i]-1] = card[i];
	}//endfor
	for(int i = 0;i < 54; ++i){
		card[i] = newcard[i];
	}//endfor
	delete newcard;
}

int main(int argc, char* argv[]){
	int rep, order[54];
	Card card[54];
	int val = 1, j = 0;
	char S[5] = {'S','H','C','D','J'};
	for(int i = 0;i < 54; ++i){
		card[i].symbl = S[j];
		card[i].val = val;
		val++;
		if(val > 13){
			val = 1;
			j++;
		}
	}//endfor
	scanf("%d", &rep);
	for(int i = 0;i < 54; ++i){
		scanf("%d", &order[i]);
	}//endfor
	for(int i = 0;i < rep; ++i){
		shuffling(card, order);
	}//endfor
	for(int i = 0;i < 53; ++i){
		printf("%c%d ",card[i].symbl, card[i].val);
	}//endfor
	printf("%c%d",card[53].symbl, card[53].val);
	return 0;
}
