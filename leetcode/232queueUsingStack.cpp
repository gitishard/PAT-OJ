class MyQueue {
public:
    stack<int> stack_main;
    stack<int> tmp;
    /** Initialize your data structure here. */
    MyQueue() {
    }
    
    /** Push element x to the back of queue. */
    void push(int x) {
        stack_main.push(x);
    }
    
    /** Removes the element from in front of queue and returns that element. */
    int pop() {
        while(!stack_main.empty()){ 
            tmp.push(stack_main.top());
            stack_main.pop();
        }
        int rst = tmp.top();
        tmp.pop();
        while(!tmp.empty()){
            stack_main.push(tmp.top());
            tmp.pop();
        }
        return rst;
    }
    
    /** Get the front element. */
    int peek() {
        while(!stack_main.empty()){ 
            tmp.push(stack_main.top());
            stack_main.pop();
        }
        int rst = tmp.top();
        while(!tmp.empty()){
            stack_main.push(tmp.top());
            tmp.pop();
        }
        return rst;
    }
    
    /** Returns whether the queue is empty. */
    bool empty() {
        return stack_main.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */
