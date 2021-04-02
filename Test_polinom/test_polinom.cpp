#include "gtesst.h"
#include <iostream>
#include <locale.h>
#include "gtest.h"
//
//ТЕСТЫ ПО ЛИСТУ
//
TEST(TList, can_create_list)
{
	ASSERT_NO_THROW(TList<int> l);
}

TEST(TList, can_copy_list)
{
	TList<int>l;
	l.InsFirst(5);
	ASSERT_NO_THROW(TList<int> copy(l));
}

TEST(TList, can_add_elem_to_the_start_of_list)
{
	TList<int> l;
	ASSERT_NO_THROW(l.InsFirst(2));
}

TEST(TList, can_add_elem_to_the_end_of_list)
{
	TList<int> l;
	ASSERT_NO_THROW(l.InsLast(3));
}

TEST(TList, can_add_elem_to_the_current_position_of_the_list)
{
	TList<int> l;
	ASSERT_NO_THROW(l.InsCurr(11));
}

TEST(TList, can_delete_a_first_elem_of_empty_list)
{
	TList<int> l;
	l.InsFirst(5);
	ASSERT_NO_THROW(l.DelFirst());
}

TEST(TList, cant_delete_an_elem_from_an_empty_list)
{
	TList<int> l;
	l.InsLast(5);
	l.DelFirst();
	ASSERT_ANY_THROW(l.DelFirst());
}




///
///ТЕСТЫ МОНОМ
/// 

TEST(TMonom, can_create_monom)
{
	ASSERT_NO_THROW(TMonom m);
}

TEST(TMonom, can_compare_the_monoms)
{
	TMonom m1(1, 1, 1, 1), m2(1, 2, 1, 1);
	m2.y = 1;
	EXPECT_EQ(true, m1 == m2);
}

TEST(TMonom, can_multiply_monoms)
{
	TMonom m1(1, 2, 3, 2), m2(1, 2, 2, 1);
	m1 = m1 * m2;
	ASSERT_NO_THROW( m1.coeff = 2, m1.x = 1, m1.y = 4, m1.z = 6 );
}

TEST(TMonom, can_multiply_monom_and_number)
{
	TMonom m(1, 2, 2, 1);
	int i = 5;
	m = m * i;
	ASSERT_NO_THROW(m.x = 5, m.y = 10, m.z = 10,  m.coeff = 5);
}
/// 
/// ПОЛИНОМ
/// 

TEST(TPolinom, can_create_polinom)
{
	ASSERT_NO_THROW(TPolinom p);
}

TEST(TPolinom, can_insert_monom)
{
	TPolinom p;
	TMonom m;
	ASSERT_NO_THROW(p.InsMonom(m));
}

TEST(TPolinom, can_copy_polinom)
{
	TPolinom p;
	TMonom m(2, 3, 1, 1);
	p.InsMonom(m);
	ASSERT_NO_THROW(TPolinom pol(p));
}

TEST(TPolinom, can_compare_empty_polinoms)
{
	TPolinom p1, p2, p3;
	ASSERT_NO_THROW(p1 = p2 = p3);
}

TEST(TPolinom, can_multiply_a_polinom_by_a_number)
{
	TPolinom p, res;
	TMonom m;
	int i = 6;
	p.InsMonom(m);
	ASSERT_NO_THROW(res = p * i);
}

TEST(TPolinom, can_multiply_a_polinom_by_a_zero)
{
	TPolinom p, res;
	TMonom m;
	p.InsMonom(m);
	res.InsMonom(m);
	res = p * 0;
	EXPECT_EQ(0, res.Get_Size());
}

TEST(TPolinom, can_multiply_a_polinom_by_a_monom)
{
	TPolinom p, res;
	TMonom m1(1, 0, 2, 1);
	ASSERT_NO_THROW(res = p * m1);
}

TEST(TPolinom, can_add_emty_polinom_to_no_empty_polinom)
{
	TPolinom p1, p2, res;
	TMonom m;
	p2.InsMonom(m);
	ASSERT_NO_THROW(p1 += p2);
}

TEST(TPolinom, can_add_polinoms)
{
	TPolinom p1, p2;
	TMonom m1(1, 2, 2, 1), m2(1, 2, 3, 6);
	p1.InsMonom(m1);
	p2.InsMonom(m2);
	ASSERT_NO_THROW(p1 += p2);
}

