class Solution {
public:
    int minBitFlips(int start, int goal) {
        int ans = 0; //�j��e�� ans =0
        while(start>0){//�u�n�٬��۴N���
            cout << start%2;//�@�����X�N++
            start /= 2;///���
        }
        return ans;//�j��᭱return ans
    }
};
