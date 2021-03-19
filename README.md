# Polinom
////////
/
/
/
/
/

/
/
/
/
/
/
/
/
/
//

/
/
/
/
/
/
/
/
/
/
/
/
/
/*#include "../List/tlist.h"
#include "../List/theadlist.h"
#include "../List/tpolinom.h"
#include "gtest.h"
TEST(TList, can_create_list)
{
	ASSERT_NO_THROW(TList<int> l);
}
TEST(TList, can_add_an_elem_to_the_top_of_the_empty_list)
{
	TList<int> l;
	ASSERT_NO_THROW(l.InsFirst(5));
}
TEST(TList, can_add_an_elem_to_the_top_of_the_no_empty_list)
{
	TList<int> l;
	l.InsFirst(5);
	ASSERT_NO_THROW(l.InsFirst(5));
}
TEST(TList, can_add_an_elem_to_the_end_of_the_empty_list)
{
	TList<int> l;
	ASSERT_NO_THROW(l.InsLast(5));
}
TEST(TList, can_add_an_elem_to_the_end_of_the_no_empty_list)
{
	TList<int> l;
	l.InsFirst(5);
	ASSERT_NO_THROW(l.InsLast(5));
}
TEST(TList, can_remove_the_top_element_of_a_nonempty_list)
{
	TList<int> l;
	l.InsFirst(5);
	ASSERT_NO_THROW(l.DelFirst());
}
TEST(TList, can_copy_empty_list)
{
	TList<int> l;
	ASSERT_NO_THROW(TList<int> copy(l));
}
//////////////polinom
TEST(TPolinom, can_create_polinom)
{
	ASSERT_NO_THROW(TPolinom p);
}
TEST(TPolinom, can_compare_empty_polinom)
{
	TPolinom p1, p2, p3;
	EXPECT_EQ(p1,p2, p3);
}
TEST(TPolinom, can_create_monom) 
{
	ASSERT_NO_THROW(TMonom m);
}
TEST(TPolinom, can_multiply_a_polinom_by_a_const)
{
	TPolinom p;
	int a;
	a = 3;
	ASSERT_NO_THROW(p *= 3);
}
TEST(TPolinom, can_multiply_monom_and_polinom)
{
	int sizem = 2;
	int column = 2;
	int** arr;
	arr = new int* [sizem];
	for (int i = 0; i < sizem; i++)
		arr[i] = new int[column];
	arr[0][0] = 1;
	arr[0][1] = 111;
	arr[1][0] = 2;
	arr[1][1] = 222;
	TPolinom pol(arr, sizem);
	int arrm[1][2];
	arrm[0][0] = 3;
	arrm[0][1] = 333;
	TMonom monom(arrm);
	ASSERT_NO_THROW(pol *= monom);
	
}

*/
