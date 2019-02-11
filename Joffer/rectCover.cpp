class Solution {
public:
    int rectCover(int number) {
    /*
        类似于跳台阶，对于大矩形，竖着放为一种方式，所以只需要考虑一行中小矩形横放还是竖放
        即一次跳一步还是跳两步
        f(1) = 1
        f(2) = 2
        f(3) = f(3-1)+f(3-2)
        ...
        f(n) = f(n-1)+f(n-2)
        此题与跳台阶的区别在于台阶数大于等于１而此处n大于等于０
    */
        if(number == 1 || number == 2)
            return number;
        else if (number <= 0)
            return 0;
        return rectCover(number-1)+rectCover(number-2);
    }
};
