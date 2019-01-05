#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    bool Find(int target, vector<vector<int> > array) {
        /*
            1.每次判断每行第一个元素是否大于target,若大于则退出
            2.在每行中用折半查找
        */
        int i = 0, low = 0, high, mid;
        int row = array.size() - 1;
        int col = array[0].size() - 1;
        while(i <= row && array[i][0] <= target) {
            low = 0;
            if(col >= 0)//如果数组是空的，此时不能访问
                high = col;
            else
                return false;
            //在一行中查找
            if(array[i][low] == target)
                return true;
            if(array[i][high] == target)
                return true;
            while(low <= high){
                 mid = (low + high) / 2;
                 if(array[i][mid] == target)
                    return true;
                 else if(array[i][mid] > target){
                    high = mid - 1;
                 } else if(array[i][mid] < target){
                    low = mid + 1;
                 }
            }
            i++;//下一行
        }
        return false;
    }
};
int main(){
	Solution sl = Solution();
	vector<vector<int> > ary;
	vector<int> t;
	for(int i = 0;i < 10; ++i){
		for(int j = 0;j < 10;++j)
			t.push_back(j);
	ary.push_back(t);	
	}
	if(sl.Find(12,ary))
		cout << "find";
	else
		cout << "not find";
	return 0;
}
