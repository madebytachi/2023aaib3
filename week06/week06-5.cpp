///week06-5.cpp
class Solution {
public:
    vector<string> findOcurrences(string text, string first, string second) {
        vector<string> ans; ///放答案(伸縮自如的陣列)

        stringstream ss(text);

        string word1, word2, word3;
        ss >> word1; //像 cin >> word1 的作法，獨到資料
        ss >> word2;
        while(ss >> word3){
            if(word1==first && word2==second) ans.push_back(word3); //放答案
            word1 = word2;
            word2 = word3;
        }

        return ans;
    }
};
