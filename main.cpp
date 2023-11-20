#include "findChar2.h"
#include <iostream>
using namespace std;

int main() {
	char a[][4] = { "abc", "def" };//C++中字符串最后一位默认/0，包含在长度里！
	char *p[3];
	p[0] = &a[0][0];
	p[1] = &a[1][0];
	p[2] = NULL;				   //

	char value = 'w';
	cout << findChar2(p, value) << endl;

}