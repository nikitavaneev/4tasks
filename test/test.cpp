#include <gtest/gtest.h>
#include "hometask.h"

TEST(reverse, 123) {
	ASSERT_EQ(reverse(123), 321);
}

TEST(reverse, 0) {
	ASSERT_EQ(reverse(0), 0);
}

TEST(reverse, 10) {
	ASSERT_EQ(reverse(10), 1);
}

TEST(reverse, _456) {
	ASSERT_EQ(reverse(-456), -654);
}
//-------------------------------------
TEST(MaxPref, 0prefix) {
	char *strs[] = { "7bcd", "ab6d", "ab78" };

	char *ans = MaxPref(strs, 3);

	EXPECT_EQ(0, *ans);
}
TEST(MaxPref, dPrefix) {
	char *strs[] = { "ab", "ac", "abc" };

	char a[] = "a";

	char *ans = MaxPref(strs, 3);

	for (int i = 0; a[i] != 0; i++)
		EXPECT_EQ(a[i], ans[i]);
}
//------------------------------
TEST(InvertPairs, InvertPairs) {
	CNode List[] = { 1, 2, 3, 4 };
	CNode newList[] = { 2, 1, 4, 3 };

	for (int i = 0; i < 3; i++) {
		List[i].next = &List[i + 1];
		newList[i].next = &newList[i + 1];
	}


	InvertPairs(List);

	for (int i = 0; i < 4; i++) {
		EXPECT_EQ(List[i].data, newList[i].data);
	}
}
TEST(InvertPairs, Oneinvert) {
	CNode *List = new CNode(1);

	InvertPairs(List);

	EXPECT_EQ(1, List->data);
}
TEST(SearchPairs, can_find_pairs) {
	int a[5] = { 0, 1, 2, 3, 4 };
	int** e;
	e = new int*[2];
	e[0] = new int[2];
	e[1] = new int[2];
	e[0][0] = 0;
	e[0][1] = 4;
	e[1][0] = 1;
	e[1][1] = 3;
	int** res = SumPairs(a, 5, 4);
	for (int i = 0; i < 2; i++)
		for (int j = 0; j < 2; j++)
			EXPECT_EQ(e[i][j], res[i][j]);
}
int main(int ac, char* av[])
{
	testing::InitGoogleTest(&ac, av);
	return RUN_ALL_TESTS();
}

