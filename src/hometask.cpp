#include"hometask.h"

int reverse(int x) 
{
	int res = 0;
	while (x != 0) {
		res = res * 10 + x % 10;
		x = x / 10;
	}
	return res;
}
//-----------------------------------
char *MaxPref(char **a, int size) 
{
	int n = -2;
	for (int i = 0; a[0][i] != 0; i++) 
	{
		char c = a[0][i];
		for (int j = 0; j < size; j++)
			if (a[j][i] != c) 
			{
				n = i - 1;
				break;
			}
		if (n != -2)
			break;
	}
	char* b;
	b = new char[n + 1];
	for (int i = 0; i <= n; i++)
	{
		b[i] = a[0][i];
	}
		b[n + 1] = 0;
	return b;
}
//-----------------------
void InvertPairs(CNode* list)
{
	if (list == 0)
		throw std::logic_error(" empty");
	else
		while ((list != 0) && (list->next != 0)) 
		{
			int a = list->data;
			list->data = list->next->data;
			list->next->data = a;
			list = list->next->next;
		}
}
//--------------------------------
int** SumPairs(int *a, int n, int sum)
{
	if ((a == 0) || (n < 0))
		throw 1;
	int** res = 0;
	int b = 0;
	for (int i = 0; i < n; i++)
		for (int j = i + 1; j < n; j++)
			if (a[i] + a[j] == sum)
			{
				b++;
				res = (int**)realloc(res, b * sizeof(int*));
				res[b - 1] = new int[2];
				res[b - 1][0] = a[i];
				res[b - 1][1] = a[j];
			}
	return res;
}