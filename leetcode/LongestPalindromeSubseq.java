package leetCode;

import java.util.Stack;
import java.util.Vector;

public class LongestPalindromeSubseq {
	 public String convertToBase7(int num) {
	        StringBuilder rst = new StringBuilder();
	        if(num < 0)
	            rst.append('-');
	        num = Math.abs(num);
	        while(num != 0) {
	            rst.append(num%7);
	            num /= 7;
	        }
	        return rst.reverse().toString();
	    }
	public static void main(String[] args) {
		LongestPalindromeSubseq l = new LongestPalindromeSubseq();
		System.out.println(l.convertToBase7(-100));
	}
}
