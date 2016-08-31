#ifndef convert_h_
#define convert_h_

#define MAX_ARABIC 3999
#define MAX_ROMAN_LENGTH 9

typedef char* roman_t;
typedef int arabic_t;

int arabic_to_roman(arabic_t a, roman_t* r);
int roman_to_arabic(roman_t r);

#endif // convert_h_
