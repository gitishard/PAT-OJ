class Solution {
    //参考的答案
public:
    int Fibonacci(int n) {
        int front = 0, back = 1;
        while(n--){
            back += front;
            front = back - front;
        }
        return front;
    }
};
