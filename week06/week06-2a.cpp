///week06-2.cpp
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> a;
    int now;
    while( cin >> now ){
        a.push_back(now);
        cout << now << "/n"; ///先這樣寫
    }///你在小黑裡輸入時，結束全部輸入 Ctrl-z 加 Enter
}
