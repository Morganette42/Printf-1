#include "includes/lib_printf.h"

int main()
{
    char    char1;
    char    char2;
    char    char3;
    char    char4;

    int int1;
    int int2;
    int int3;
    int int4;

    char    *str1;
    char    *str2;
    char    *str3;
    char    *str4;

    unsigned int uint1;
    unsigned int uint2;
    unsigned int uint3;
    unsigned int uint4;

    char1 = 'c';
    char2 = 's';
    char3 = 'E';
    char4 = '0';

    int1 = 12;
    int2 = -12;
    int3 = 0;
    int4 = -13401345;

    str1 = "lolilol";
    str2 = "Prout";
    str3 = "Pas drole !";
    str4 = "MDR";

    uint1 = 0;
    uint2 = 1234;
    uint3 = 12;
    uint4 = 23122;

    printf("\n-------------- TEST CHAR ---------------\n\n");

    printf("ORIGINAL TEST   : %c : %c : %c : %c \n", char1, char2, char3, char4);
    ft_printf("MY TEST         : %c : %c : %c : %c \n", char1, char2, char3, char4);

    printf("\n-------------- TEST STRING ---------------\n\n");

    printf("ORIGINAL TEST   : %s : %s : %s : %s \n", str1, str2, str3, str4);
    ft_printf("MY TEST         : %s : %s : %s : %s \n", str1, str2, str3, str4);

    printf("\n-------------- TEST POINTEUR ---------------\n\n");

    printf("ORIGINAL TEST   : %p : %p : %p : %p \n", &int1, &int2, &int3, &int4);
    ft_printf("MY TEST         : %p : %p : %p : %p \n", &int1, &int2, &int3, &int4);

    printf("\n-------------- TEST DECIMAL ---------------\n\n");

    printf("ORIGINAL TEST   : %d : %d : %d : %d \n", int1, int2, int3, int4);
    ft_printf("MY TEST         : %d : %d : %d : %d \n", int1, int2, int3, int4);

    printf("\n-------------- TEST INT ---------------\n\n");

    printf("ORIGINAL TEST   : %i : %i : %i : %i \n", int1, int2, int3, int4);
    ft_printf("MY TEST         : %i : %i : %i : %i \n", int1, int2, int3, int4);

    printf("\n-------------- TEST UNSIGNED INT ---------------\n\n");

    printf("ORIGINAL TEST   : %u : %u : %u : %u \n", uint1, uint2, uint3, uint4);
    ft_printf("MY TEST         : %u : %u : %u : %u \n", uint1, uint2, uint3, uint4);

    printf("\n-------------- TEST HEXADECIMAL INT (lower case) ---------------\n\n");

    printf("ORIGINAL TEST   : %x : %x : %x : %x \n", uint1, uint2, uint3, uint4);
    ft_printf("MY TEST         : %x : %x : %x : %x \n", uint1, uint2, uint3, uint4);

    printf("\n-------------- TEST HEXADECIMAL INT (upper case) ---------------\n\n");

    printf("ORIGINAL TEST   : %X : %X : %X : %X \n", uint1, uint2, uint3, uint4);
    ft_printf("MY TEST         : %X : %X : %X : %X \n", uint1, uint2, uint3, uint4);

    printf("\n-------------- TEST NO %% (upper case) ---------------\n\n");

    printf("ORIGINAL TEST : blableo iwealiuhfaloihfbal.fiq\n");
    ft_printf("MY TEST       : blableo iwealiuhfaloihfbal.fiq\n");

    return (0);

}