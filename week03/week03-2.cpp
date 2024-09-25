///week03-2想了解字串string字元char的差別
#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;
int main()
{
    printf("%d\n", 'a');
    printf("%d\n", "a");

    if('a'==97) printf("其實'a'是數值 97\n");
}
