import java.util.Stack;

public class MinStack {
    Stack<Integer> data = new Stack<Integer>();
    public void push(int node) {
        data.push(node);
    }
        
    public void pop() {
        data.pop();
    }
    
    public int top() {
        return (int) data.peek();
    }
    
    public int min() {
        int min = data.peek();
        for(Integer e : data){
            if(e < min)
                min = e;
        }
        return min;
    }
}