import java.util.Stack;

public class StackOrder {
    public boolean IsPopOrder(int[] pushA,int[] popA) {
        Stack<Integer> data = new Stack<Integer>();
        int top = 0;
        for(int i = 0; i < pushA.length; i++){
            data.push(pushA[i]);
            while(!data.empty() && popA[top] == data.peek()){
                top++;
                data.pop();
            }
        }
        return data.empty();
    }
}