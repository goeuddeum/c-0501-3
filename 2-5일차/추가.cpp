#include <stdio.h>
int main() {
	printf("%zd, %zd\n", sizeof(3),sizeof(int));
	printf("%zd, %zd\n", sizeof(3.14), sizeof(double));
	printf("%zd, %zd\n", sizeof("3.14"), sizeof(char[5]));
	printf("%zd, %zd\n", sizeof('3'), sizeof (char));
	printf("%zd\n", sizeof(long long));
	printf("%zd\n", sizeof(long double));
	printf("%zd\n", sizeof(float));

}