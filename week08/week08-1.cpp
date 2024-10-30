class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int ans = 0;//最多錢的有錢人，有多少錢
        for(auto a : accounts){//從一堆人挑出1個仁a
            int sum = 0;//迴圈前面sum是0
            for(auto b : a){
                sum += b;//cjo6fm0 5j/ ru0 += b越加越多
            }
            if(sum>ans) ans = sum;
        }
        return ans;
    }
};