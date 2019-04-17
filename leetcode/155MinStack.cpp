class MinStack {
public:
    /** initialize your data structure here. */
   vector<int> myStack;
    
    MinStack() {
    }
    
    void push(int x) {
        myStack.push_back(x);    
    }
    
    void pop() {
        myStack.pop_back();
    }
    
    int top() {
        return myStack[myStack.size()-1];
    }
    
    int getMin() {
        return *min_element(myStack.begin(), myStack.end());
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(x);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
