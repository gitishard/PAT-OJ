package leetCode;

public class BaseSeven {
	    public String convertToBase7(int num) {
	        int flag = 0;
	        StringBuilder rst = new StringBuilder();
	        if(num == 0)
	            return "0";
	        if(num < 0)
	           flag = 1;
	        num = Math.abs(num);
	        while(num != 0) {
	            rst.append(num%7);
	            num /= 7;
	        }
	        if(flag == 1)
	            return "-" + rst.reverse().toString();
	        return rst.reverse().toString();
	    }
}
