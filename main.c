#include <stdio.h>
#include<assert.h>
#include "Day_practice_header.h"

int main()
{
    assert(UpperCase_to_LowerCase('A')=='a');
    assert(UpperCase_to_LowerCase('B')=='b');

    float area;
    area=area_of_circle(5);
    printf("%f",area);

    /*assert(area_of_circle(4)==50);
    assert(area_of_circle(0)==-1);*/

    assert(find_characters_between_two_inputs('A','E')==3);
    assert(find_characters_between_two_inputs('A','c')==33);
    assert(find_characters_between_two_inputs('a','z')==24);

    convert_celsius_to_fahrenheit(26);

    assert(number_is_even_or_odd(24)==1);
    assert(number_is_even_or_odd(37)==0);

    assert(number_is_leapYear(2000)==1);
    assert(number_is_leapYear(2010)==0);

    Check_input_is_character_or_digit('1');
    Check_input_is_character_or_digit('A');

    assert(find_power_using_leftbit_operator(10,2)==40);

    sum_of_randam_numbers();

    return 0;
}
