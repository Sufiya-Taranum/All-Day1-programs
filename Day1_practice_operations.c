#include "Day_practice_header.h"

char UpperCase_to_LowerCase(char n)
{
    int asciival;
    char LowerCase;
    asciival=(int)n;
    LowerCase=(char)asciival+32;
    return LowerCase;
}

float area_of_circle(int radius)
{
    if (radius!=0)
         return (PI*radius*radius);
    return FAILURE;
}

int find_characters_between_two_inputs(char first_char,char second_char)
{
    int first,second;
    first=(int)first_char;
    second=(int)second_char;
    if(second>=first)
        return (second-first)-1;
    return 0;
}

float convert_celsius_to_fahrenheit(float c)
{
    float f;
    printf("\n");
    f=(c*1.8)+32;
    printf("Fahrenheit=%f",f);
    return f;
}

int number_is_even_or_odd(int num)
{
    if(num%2==0)
        return 1;
    return 0;
}

int number_is_leapYear(int year)
{
    if(year%400==0)
        return 1;
    else if(year%100==0)
        return 0;
    else if(year%4==0)
        return 1;
    else
        return 0;

}

void Check_input_is_character_or_digit(char input)
{
    int ascii=(int)input;
    if(ascii>=48 && ascii<=57)
    {
        printf("\n");
        printf("input is integer");
    }
    else if(ascii>=65 && ascii<=90)
    {
        printf("\n");
        printf("input is upper case character");
    }
    else if(ascii>=97 && ascii<=122)
    {
        printf("\n");
        printf("input is lower case character");
    }
    else
    {
        printf("\n");
        printf("invalid input");
    }

}

int find_power_using_leftbit_operator(int a,int b)
{
    return a<<b; //a=a*2^b;
}

void sum_of_randam_numbers()
{
    int sum,r1=0,r2=0;
    r1=rand();
    r2=rand();
    sum=r1+r2;
    printf("\n");
    printf("sum of two random numbers =%d",sum);
}
