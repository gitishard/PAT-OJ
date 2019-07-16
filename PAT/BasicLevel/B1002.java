package pat;

import java.util.Scanner;

public class B1002 {
	static String[] names = {"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
	public static void main(String[] args) throws Exception{
		Scanner in = new Scanner(System.in);
		System.out.println("Input:");
		while (in.hasNext()) {
			String num = in.next();
			int sum = 0;
			for (int i = 0; i < num.length(); i++) {
				sum += Integer.parseInt(String.valueOf(num.charAt(i)));
			}
			String strSum = String.valueOf(sum);
			for (int i = 0; i < strSum.length(); i++) {
				System.out.print(names[Integer.parseInt(String.valueOf(strSum.charAt(i)))]);
				if (i < strSum.length()-1) {
					System.out.print(" ");
				}
			}
		}
		in.close();
	}
}
