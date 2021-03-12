#include "../Polinom/Polinom.h"

#include "gtest.h"

TEST(List, can_create_list_with_positive_size)
{
	ASSERT_NO_THROW(TList <int> l);
}
TEST(Polinom, can_create_polinom)
{
	ASSERT_NO_THROW(TPolinom p);
}
/*TEST(TStack, check_IsEmpty_with_empty_stack)
{
	Stack<int> st;
	EXPECT_EQ(true, st.Empty());
}
TEST(TStack, check_IsEmpty_with_not_empty_stack)
{
	Stack<int> st;
	st.Push(2);
	EXPECT_EQ(false, st.Empty());
}
TEST(TStack, check_IsFull_with_full_stack)
{
	Stack<int> st;
	st.Push(1);
	st.Push(2);
	EXPECT_EQ(true, st.Full());
}
TEST(TStack, throws_when_Pop_stack_IsEmty)
{
	Stack<int> st;
	ASSERT_ANY_THROW(st.Pop());
}
*/
