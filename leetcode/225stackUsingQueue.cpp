class MyStack {
public:
    queue<int> queue_main;
    queue<int> tmp;
    /** Initialize your data structure here. */
    MyStack() {
        
    }
    
    /** Push element x onto stack. */
    void push(int x) {
        queue_main.push(x);
    }
    
    /** Removes the element on top of the stack and returns that element. */
    int pop() {
        int times = queue_main.size() - 1;
        while(times--){
            tmp.push(queue_main.front());
            queue_main.pop();
        }
        int rst = queue_main.front();
        queue_main.pop();
        while(!tmp.empty()){
            queue_main.push(tmp.front());
            tmp.pop();
        }
        return rst;
    }
    
    /** Get the top element. */
    int top() {
        return queue_main.back();
    }
    
    /** Returns whether the stack is empty. */
    bool empty() {
        return queue_main.empty();
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */
