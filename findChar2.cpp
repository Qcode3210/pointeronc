//
//查找一组字符串中的特定值。 版本2
//

#include <assert.h>
#include <stdio.h>

int findChar2(char **strings, int value) {
	assert(strings != NULL);//断言，程序出错时，添加诊断，输出错误信息。

	while (*strings != NULL) {
		while (**strings != '\0') {
			if (*(*strings)++ == value) {//else也行，不用加到判断语句中，
				return 1;
			}
		}
		strings++;
	}
	return 0;
}

