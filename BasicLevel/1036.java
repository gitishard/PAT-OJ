import java.util.Scanner;

class MGraph {
	public static void main(String[] args){
		Scanner inObj = new Scanner(System.in);
		int col = inObj.nextInt();
		char C = inObj.next().charAt(0);
		int row = col % 2 == 0 ? col / 2 : col / 2 + 1;

		for(int i = 0;i < row; ++i){
			for(int j = 0;j < col; ++j){
				if(i == 0 || i == row - 1)
					System.out.print(C);
				else if(j == 0 || j == col - 1)
					System.out.print(C);
				else
					System.out.print(" ");
			}//endfor
			System.out.println();
		}//endfor
	}
}
