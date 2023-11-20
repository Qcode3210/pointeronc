//
//查找一组字符串中的特定值。 版本2
//

#include <assert.h>
#include <stdio.h>

int findChar(char **strings, int value) {
	assert(strings != NULL);

	while (*strings != NULL) {
		while (**strings != '\0') {
			if (*(*strings)++ == value) {
				return 1;
			}
		}
		strings++;
	}
	return 0;
}

