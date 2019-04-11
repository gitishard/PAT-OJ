public class Comb {
	public void printNum(int num) {
		if(num <= 0){
			System.out.print("Illegal");
		}
		int i = 1, sum = 0;
		int start = i, end = 0, k;
		while(start < num){
			k = start;
			while(sum < num){
				sum += k;
				k += 1;
			}//endwhile
			end = k;
			if(sum == num){
				printSquence(start, end);
			}
			start += 1;
			sum = 0;
		}//endwhile
	}
	public void printSquence(int start, int end){
		for(int i = start; i < end; ++i){
			System.out.print(i);
		}//endfor
		System.out.print(",");
	}
	
	public static void main(String[] args){
		Comb c = new Comb();
		c.printNum(25);
	}
}
