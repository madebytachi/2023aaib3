///week03-1.cpp 考試題目:除惡務盡但無法執行
///因為range-based for 迴圈必須在C++(2011之後)才能用
///如果使用c++98(1988版本) 無法執行

#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s;
	cin >> s;
	for(char c : s){
		if(c != '2')
        cout << c;
	}
	return 0;
}
