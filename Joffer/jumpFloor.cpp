/*
 f(n) = 1, n=1
	  = 2, n=2
	  = f(n-1)+f(n-2)
 */
class Solution{
	public:
		int jumpFloor(int number){
			if(number == 1 || number == 2)
				return number;
			return jumpFloor(number-1)+jumpFloor(number-2);
		}
}
