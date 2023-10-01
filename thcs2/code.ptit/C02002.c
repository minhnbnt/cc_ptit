/*
Viết chương trình nhập vào N (không quá 100) là độ dài cạnh hình bình hành. Thực
hiện in ra hình bình hành tương ứng theo mẫu trong ví dụ.

Input
Chỉ có một số nguyên dương N không quá 100.

Output
Ghi ra kết quả theo mẫu.

Ví dụ:
Input:
5

Output:
~~~~*****
~~~*****
~~*****
~*****
*****

*/

#include <stdio.h>

int main() {
	unsigned n, i, j;
	scanf("%u", &n);
	for (i = n; i > 0; i--) {
		for (j = 1; j < i; j++) putchar('~');
		for (j = 1; j <= n; j++) putchar('*');
		printf("\n");
	}
	return 0;
}
