#include <stdlib.h>
#include <check.h>
#include "../src/convert.h"

/* ******************************************** */
/* Test arabic_to_roman function */
START_TEST(a2r_1)
{
	roman_t r;
	int ret;
	ret = arabic_to_roman(1, &r);
	ck_assert_str_eq(r, "I");
	ck_assert_int_eq(ret, 0);
	if (0 == ret) free(r);
}
END_TEST

START_TEST(a2r_2)
{
	roman_t r;
	int ret;
	ret = arabic_to_roman(2, &r);
	ck_assert_str_eq(r, "II");
	ck_assert_int_eq(ret, 0);
	if (0 == ret) free(r);
}
END_TEST

START_TEST(a2r_3)
{
	roman_t r;
	int ret;
	ret = arabic_to_roman(3, &r);
	ck_assert_str_eq(r, "III");
	ck_assert_int_eq(ret, 0);
	if (0 == ret) free(r);
}
END_TEST

START_TEST(a2r_4)
{
	roman_t r;
	int ret;
	ret = arabic_to_roman(4, &r);
	ck_assert_str_eq(r, "IV");
	ck_assert_int_eq(ret, 0);
	if (0 == ret) free(r);
}
END_TEST

START_TEST(a2r_5)
{
	roman_t r;
	int ret;
	ret = arabic_to_roman(5, &r);
	ck_assert_str_eq(r, "V");
	ck_assert_int_eq(ret, 0);
	if (0 == ret) free(r);
}
END_TEST

START_TEST(a2r_6)
{
	roman_t r;
	int ret;
	ret = arabic_to_roman(6, &r);
	ck_assert_str_eq(r, "VI");
	ck_assert_int_eq(ret, 0);
	if (0 == ret) free(r);
}
END_TEST

START_TEST(a2r_7)
{
	roman_t r;
	int ret;
	ret = arabic_to_roman(7, &r);
	ck_assert_str_eq(r, "VII");
	ck_assert_int_eq(ret, 0);
	if (0 == ret) free(r);
}
END_TEST

START_TEST(a2r_8)
{
	roman_t r;
	int ret;
	ret = arabic_to_roman(8, &r);
	ck_assert_str_eq(r, "VIII");
	ck_assert_int_eq(ret, 0);
	if (0 == ret) free(r);
}
END_TEST

START_TEST(a2r_9)
{
	roman_t r;
	int ret;
	ret = arabic_to_roman(9, &r);
	ck_assert_str_eq(r, "IX");
	ck_assert_int_eq(ret, 0);
	if (0 == ret) free(r);
}
END_TEST

START_TEST(a2r_10)
{
	roman_t r;
	int ret;
	ret = arabic_to_roman(10, &r);
	ck_assert_str_eq(r, "X");
	ck_assert_int_eq(ret, 0);
	if (0 == ret) free(r);
}
	END_TEST
START_TEST(a2r_11)
{
	roman_t r;
	int ret;
	ret = arabic_to_roman(11, &r);
	ck_assert_str_eq(r, "XI");
	ck_assert_int_eq(ret, 0);
	if (0 == ret) free(r);
}
END_TEST

START_TEST(a2r_12)
{
	roman_t r;
	int ret;
	ret = arabic_to_roman(12, &r);
	ck_assert_str_eq(r, "XII");
	ck_assert_int_eq(ret, 0);
	if (0 == ret) free(r);
}
END_TEST

START_TEST(a2r_13)
{
	roman_t r;
	int ret;
	ret = arabic_to_roman(13, &r);
	ck_assert_str_eq(r, "XIII");
	ck_assert_int_eq(ret, 0);
	if (0 == ret) free(r);
}
END_TEST

START_TEST(a2r_14)
{
	roman_t r;
	int ret;
	ret = arabic_to_roman(14, &r);
	ck_assert_str_eq(r, "XIV");
	ck_assert_int_eq(ret, 0);
	if (0 == ret) free(r);
}
END_TEST

START_TEST(a2r_15)
{
	roman_t r;
	int ret;
	ret = arabic_to_roman(15, &r);
	ck_assert_str_eq(r, "XV");
	ck_assert_int_eq(ret, 0);
	if (0 == ret) free(r);
}
END_TEST

START_TEST(a2r_19)
{
	roman_t r;
	int ret;
	ret = arabic_to_roman(19, &r);
	ck_assert_str_eq(r, "XIX");
	ck_assert_int_eq(ret, 0);
	if (0 == ret) free(r);
}
END_TEST

START_TEST(a2r_20)
{
	roman_t r;
	int ret;
	ret = arabic_to_roman(20, &r);
	ck_assert_str_eq(r, "XX");
	ck_assert_int_eq(ret, 0);
	if (0 == ret) free(r);
}
END_TEST

START_TEST(a2r_24)
{
	roman_t r;
	int ret;
	ret = arabic_to_roman(24, &r);
	ck_assert_str_eq(r, "XXIV");
	ck_assert_int_eq(ret, 0);
	if (0 == ret) free(r);
}
END_TEST

START_TEST(a2r_25)
{
	roman_t r;
	int ret;
	ret = arabic_to_roman(25, &r);
	ck_assert_str_eq(r, "XXV");
	ck_assert_int_eq(ret, 0);
	if (0 == ret) free(r);
}
END_TEST

START_TEST(a2r_29)
{
	roman_t r;
	int ret;
	ret = arabic_to_roman(29, &r);
	ck_assert_str_eq(r, "XXIX");
	ck_assert_int_eq(ret, 0);
	if (0 == ret) free(r);
}
END_TEST

START_TEST(a2r_30)
{
	roman_t r;
	int ret;
	ret = arabic_to_roman(30, &r);
	ck_assert_str_eq(r, "XXX");
	ck_assert_int_eq(ret, 0);
	if (0 == ret) free(r);
}
END_TEST

START_TEST(a2r_39)
{
	roman_t r;
	int ret;
	ret = arabic_to_roman(39, &r);
	ck_assert_str_eq(r, "XXXIX");
	ck_assert_int_eq(ret, 0);
	if (0 == ret) free(r);
}
END_TEST

START_TEST(a2r_40)
{
	roman_t r;
	int ret;
	ret = arabic_to_roman(40, &r);
	ck_assert_str_eq(r, "XL");
	ck_assert_int_eq(ret, 0);
	if (0 == ret) free(r);
}
END_TEST

START_TEST(a2r_49)
{
	roman_t r;
	int ret;
	ret = arabic_to_roman(49, &r);
	ck_assert_str_eq(r, "XLIX");
	ck_assert_int_eq(ret, 0);
	if (0 == ret) free(r);
}
END_TEST

START_TEST(a2r_50)
{
	roman_t r;
	int ret;
	ret = arabic_to_roman(50, &r);
	ck_assert_str_eq(r, "L");
	ck_assert_int_eq(ret, 0);
	if (0 == ret) free(r);
}
END_TEST

START_TEST(a2r_90)
{
	roman_t r;
	int ret;
	ret = arabic_to_roman(90, &r);
	ck_assert_str_eq(r, "XC");
	ck_assert_int_eq(ret, 0);
	if (0 == ret) free(r);
}
END_TEST

START_TEST(a2r_100)
{
	roman_t r;
	int ret;
	ret = arabic_to_roman(100, &r);
	ck_assert_str_eq(r, "C");
	ck_assert_int_eq(ret, 0);
	if (0 == ret) free(r);
}
END_TEST

START_TEST(a2r_400)
{
	roman_t r;
	int ret;
	ret = arabic_to_roman(400, &r);
	ck_assert_str_eq(r, "CD");
	ck_assert_int_eq(ret, 0);
	if (0 == ret) free(r);
}
END_TEST

START_TEST(a2r_500)
{
	roman_t r;
	int ret;
	ret = arabic_to_roman(500, &r);
	ck_assert_str_eq(r, "D");
	ck_assert_int_eq(ret, 0);
	if (0 == ret) free(r);
}
END_TEST

START_TEST(a2r_900)
{
	roman_t r;
	int ret;
	ret = arabic_to_roman(900, &r);
	ck_assert_str_eq(r, "CM");
	ck_assert_int_eq(ret, 0);
	if (0 == ret) free(r);
}
END_TEST

START_TEST(a2r_1000)
{
	roman_t r;
	int ret;
	ret = arabic_to_roman(1000, &r);
	ck_assert_str_eq(r, "M");
	ck_assert_int_eq(ret, 0);
	if (0 == ret) free(r);
}
END_TEST

START_TEST(a2r_3999)
{
	roman_t r;
	int ret;
	ret = arabic_to_roman(3999, &r);
	ck_assert_str_eq(r, "MMMCMXCIX");
	ck_assert_int_eq(ret, 0);
	if (0 == ret) free(r);
}
END_TEST


/* ****************************** */
/* roman_to_arabic function */

START_TEST(r2a_1)
{
	roman_t r = "I";
	int ret;
	ret = roman_to_arabic(r);
	ck_assert_int_eq(ret, 1);
}
END_TEST

START_TEST(r2a_2)
{
	roman_t r = "II";
	int ret;
	ret = roman_to_arabic(r);
	ck_assert_int_eq(ret, 2);
}
END_TEST

START_TEST(r2a_3)
{
	roman_t r = "III";
	int ret;
	ret = roman_to_arabic(r);
	ck_assert_int_eq(ret, 3);
}
END_TEST

START_TEST(r2a_4)
{
	roman_t r = "IV";
	int ret;
	ret = roman_to_arabic(r);
	ck_assert_int_eq(ret, 4);
}
END_TEST

START_TEST(r2a_5)
{
	roman_t r = "V";
	int ret;
	ret = roman_to_arabic(r);
	ck_assert_int_eq(ret, 5);
}
END_TEST

START_TEST(r2a_6)
{
	roman_t r = "VI";
	int ret;
	ret = roman_to_arabic(r);
	ck_assert_int_eq(ret, 6);
}
END_TEST

START_TEST(r2a_7)
{
	roman_t r = "VII";
	int ret;
	ret = roman_to_arabic(r);
	ck_assert_int_eq(ret, 7);
}
END_TEST

START_TEST(r2a_8)
{
	roman_t r = "VIII";
	int ret;
	ret = roman_to_arabic(r);
	ck_assert_int_eq(ret, 8);
}
END_TEST

START_TEST(r2a_9)
{
	roman_t r = "IX";
	int ret;
	ret = roman_to_arabic(r);
	ck_assert_int_eq(ret, 9);
}
END_TEST

START_TEST(r2a_10)
{
	roman_t r = "X";
	int ret;
	ret = roman_to_arabic(r);
	ck_assert_int_eq(ret, 10);
}
END_TEST

START_TEST(r2a_11)
{
	roman_t r = "XI";
	int ret;
	ret = roman_to_arabic(r);
	ck_assert_int_eq(ret, 11);
}
END_TEST

START_TEST(r2a_12)
{
	roman_t r = "XII";
	int ret;
	ret = roman_to_arabic(r);
	ck_assert_int_eq(ret, 12);
}
END_TEST

START_TEST(r2a_13)
{
	roman_t r = "XIII";
	int ret;
	ret = roman_to_arabic(r);
	ck_assert_int_eq(ret, 13);
}
END_TEST

START_TEST(r2a_14)
{
	roman_t r = "XIV";
	int ret;
	ret = roman_to_arabic(r);
	ck_assert_int_eq(ret, 14);
}
END_TEST

START_TEST(r2a_15)
{
	roman_t r = "XV";
	int ret;
	ret = roman_to_arabic(r);
	ck_assert_int_eq(ret, 15);
}
END_TEST

START_TEST(r2a_19)
{
	roman_t r = "XIX";
	int ret;
	ret = roman_to_arabic(r);
	ck_assert_int_eq(ret, 19);
}
END_TEST

START_TEST(r2a_20)
{
	roman_t r = "XX";
	int ret;
	ret = roman_to_arabic(r);
	ck_assert_int_eq(ret, 20);
}
END_TEST

START_TEST(r2a_24)
{
	roman_t r = "XXIV";
	int ret;
	ret = roman_to_arabic(r);
	ck_assert_int_eq(ret, 24);
}
END_TEST

START_TEST(r2a_25)
{
	roman_t r = "XXV";
	int ret;
	ret = roman_to_arabic(r);
	ck_assert_int_eq(ret, 25);
}
END_TEST

START_TEST(r2a_30)
{
	roman_t r = "XXX";
	int ret;
	ret = roman_to_arabic(r);
	ck_assert_int_eq(ret, 30);
}
END_TEST

START_TEST(r2a_40)
{
	roman_t r = "XL";
	int ret;
	ret = roman_to_arabic(r);
	ck_assert_int_eq(ret, 40);
}
END_TEST

START_TEST(r2a_49)
{
	roman_t r = "XLIX";
	int ret;
	ret = roman_to_arabic(r);
	ck_assert_int_eq(ret, 49);
}
END_TEST

START_TEST(r2a_50)
{
	roman_t r = "L";
	int ret;
	ret = roman_to_arabic(r);
	ck_assert_int_eq(ret, 50);
}
END_TEST

START_TEST(r2a_90)
{
	roman_t r = "XC";
	int ret;
	ret = roman_to_arabic(r);
	ck_assert_int_eq(ret, 90);
}
END_TEST

START_TEST(r2a_100)
{
	roman_t r = "C";
	int ret;
	ret = roman_to_arabic(r);
	ck_assert_int_eq(ret, 100);
}
END_TEST

START_TEST(r2a_400)
{
	roman_t r = "CD";
	int ret;
	ret = roman_to_arabic(r);
	ck_assert_int_eq(ret, 400);
}
END_TEST

START_TEST(r2a_500)
{
	roman_t r = "D";
	int ret;
	ret = roman_to_arabic(r);
	ck_assert_int_eq(ret, 500);
}
END_TEST

START_TEST(r2a_900)
{
	roman_t r = "CM";
	int ret;
	ret = roman_to_arabic(r);
	ck_assert_int_eq(ret, 900);
}
END_TEST

START_TEST(r2a_1000)
{
	roman_t r = "M";
	int ret;
	ret = roman_to_arabic(r);
	ck_assert_int_eq(ret, 1000);
}
END_TEST

START_TEST(r2a_3999)
{
	roman_t r = "MMMCMXCIX";
	int ret;
	ret = roman_to_arabic(r);
	ck_assert_int_eq(ret, 3999);
}
END_TEST


/* Add tests for arabic_to_roman to suite */
Suite* convert_a2r(void)
{
	Suite* s;
	TCase* tc_a2r;
	s = suite_create("arabic_to_roman");
	tc_a2r = tcase_create("a2r");
	tcase_add_test(tc_a2r, a2r_1);
	tcase_add_test(tc_a2r, a2r_2);
	tcase_add_test(tc_a2r, a2r_3);
	tcase_add_test(tc_a2r, a2r_4);
	tcase_add_test(tc_a2r, a2r_5);
	tcase_add_test(tc_a2r, a2r_6);
	tcase_add_test(tc_a2r, a2r_7);
	tcase_add_test(tc_a2r, a2r_8);
	tcase_add_test(tc_a2r, a2r_9);
	tcase_add_test(tc_a2r, a2r_10);
	tcase_add_test(tc_a2r, a2r_11);
	tcase_add_test(tc_a2r, a2r_12);
	tcase_add_test(tc_a2r, a2r_13);
	tcase_add_test(tc_a2r, a2r_14);
	tcase_add_test(tc_a2r, a2r_15);
	tcase_add_test(tc_a2r, a2r_19);
	tcase_add_test(tc_a2r, a2r_20);
	tcase_add_test(tc_a2r, a2r_24);
	tcase_add_test(tc_a2r, a2r_25);
	tcase_add_test(tc_a2r, a2r_29);
	tcase_add_test(tc_a2r, a2r_30);
	tcase_add_test(tc_a2r, a2r_39);
	tcase_add_test(tc_a2r, a2r_40);
	tcase_add_test(tc_a2r, a2r_49);
	tcase_add_test(tc_a2r, a2r_50);
	tcase_add_test(tc_a2r, a2r_90);
	tcase_add_test(tc_a2r, a2r_100);
	tcase_add_test(tc_a2r, a2r_400);
	tcase_add_test(tc_a2r, a2r_500);
	tcase_add_test(tc_a2r, a2r_900);
	tcase_add_test(tc_a2r, a2r_1000);
	tcase_add_test(tc_a2r, a2r_3999);

	suite_add_tcase(s, tc_a2r);
	return s;
}

/* Add tests for roman_to_arabic to suite */
Suite* convert_r2a(void)
{
	Suite* s;
	TCase* tc_r2a;
	s = suite_create("roman_to_arabic");
	tc_r2a = tcase_create("r2a");
	tcase_add_test(tc_r2a, r2a_1);
	tcase_add_test(tc_r2a, r2a_2);
	tcase_add_test(tc_r2a, r2a_3);
	tcase_add_test(tc_r2a, r2a_4);
	tcase_add_test(tc_r2a, r2a_5);
	tcase_add_test(tc_r2a, r2a_6);
	tcase_add_test(tc_r2a, r2a_7);
	tcase_add_test(tc_r2a, r2a_8);
	tcase_add_test(tc_r2a, r2a_9);
	tcase_add_test(tc_r2a, r2a_10);
	tcase_add_test(tc_r2a, r2a_11);
	tcase_add_test(tc_r2a, r2a_12);
	tcase_add_test(tc_r2a, r2a_13);
	tcase_add_test(tc_r2a, r2a_14);
	tcase_add_test(tc_r2a, r2a_15);
	tcase_add_test(tc_r2a, r2a_19);
	tcase_add_test(tc_r2a, r2a_20);
	tcase_add_test(tc_r2a, r2a_24);
	tcase_add_test(tc_r2a, r2a_25);
	tcase_add_test(tc_r2a, r2a_30);
	tcase_add_test(tc_r2a, r2a_40);
	tcase_add_test(tc_r2a, r2a_49);
	tcase_add_test(tc_r2a, r2a_50);
	tcase_add_test(tc_r2a, r2a_90);
	tcase_add_test(tc_r2a, r2a_100);
	tcase_add_test(tc_r2a, r2a_400);
	tcase_add_test(tc_r2a, r2a_500);
	tcase_add_test(tc_r2a, r2a_900);
	tcase_add_test(tc_r2a, r2a_1000);
	tcase_add_test(tc_r2a, r2a_3999);

	suite_add_tcase(s, tc_r2a);
	return s;
}

int main(void)
{
	int number_failed;
	SRunner* sr;

	Suite* s_a2r = convert_a2r();
	Suite* s_r2a = convert_r2a();

	sr = srunner_create(s_a2r);
	srunner_add_suite(sr, s_r2a);

	srunner_run_all(sr, CK_NORMAL);
	number_failed = srunner_ntests_failed(sr);
	srunner_free(sr);
	return (number_failed == 0) ? EXIT_SUCCESS : EXIT_FAILURE;
}
