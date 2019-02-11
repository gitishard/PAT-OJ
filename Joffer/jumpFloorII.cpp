class Solution {
public:
    int jumpFloorII(int number) {
        /*
            f(0) = 1
            f(1) = 1
            f(2) = f(2-1) + f(2-2) = f(1) + f(0) = 2
            f(3) = f(3-1)+f(3-2)+f(3-3) = f(2) + f(1) + f(0) = 2*f(1) + 2*f(0) = 4
            f(4) = f(4-1)+F(4-2)+F(4-3)+F(4-4)=4*f(1)+4*f(0)
            f(5) = f(5-1)+...+f(5-5) = 8*f(1) + 8*f(0)
            ....
            xishu:1, 2 = 1+1, 4 = 1+2+1+1, 8 = 1+2+4+1, 16=1+2+4+8+1,....
                  2^0,  2^1,  2^2,  2^3,  2^4,.....
            f(n) = 2^(n-2) * (f(1) + f(0))
        */
        if(number == 0 || number == 1)
            return number;
        return pow(2, number-1);
    }
};
