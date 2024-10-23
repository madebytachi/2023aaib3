class Solution {
public:
    bool judgeCircle(string moves) {
        int x = 0, y = 0;
        for(char c: moves){
            if(c=='U') y--;
            if(c=='D') y++;
            if(c=='R') y++;
            if(c=='L') y--;
        }
        if(x==0 && y==0) return true;
        else return false;
    }
};