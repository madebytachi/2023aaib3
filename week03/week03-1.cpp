///week03-1.cpp �Ҹ��D��:���c�Ⱥɦ��L�k����
///�]��range-based for �j�饲���bC++(2011����)�~���
///�p�G�ϥ�c++98(1988����) �L�k����

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
