#include <stdio.h>
int A;
int B;
int* a;
int* b;
int main() {
	void exchange(int* a, int* b);
	printf("��������Ҫת����������A,B:\n");
	scanf_s("%d,%d",&A,&B);
	a = &A;
	b = &B;
	exchange(a,b);
	printf("ת����A:%d B:%d\n", A, B);
}

void  exchange(int *a,int *b) {
	int p = *a;
	*a = *b;
	*b = p;

}
