#include "iostream"

struct CNode {
	int data;
	CNode* next;

	CNode(int a) {
		data = a;
		next = 0;
	}
};
int reverse(int x);
int** SumPairs(int *a, int n, int sum);
void InvertPairs(CNode* list);
char *MaxPref(char **a, int size);