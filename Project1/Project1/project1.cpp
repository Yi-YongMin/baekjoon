#include<cstdio>
#define MAX 100
void sub(int x, int arr[]) {
	x = 10;
	arr[0] = 10;
}
void main() {
	int var;
	int list[MAX];
	var = 0;
	list[0] = 0;
	sub(var, list);
	printf("var= %d, list[0]= %d", var, list[0]);
}