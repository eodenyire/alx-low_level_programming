#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * is_digit_string - Checks if a string consists only of digits.
 * @str: The string to check.
 *
 * Return: 1 if the string is all digits, 0 otherwise.
 */
int is_digit_string(const char *str)
{
    while (*str)
    {
        if (!isdigit(*str))
            return 0;
        str++;
    }
    return 1;
}

/**
 * multiply - Multiplies two large numbers represented as strings.
 * @num1: The first number.
 * @num2: The second number.
 *
 * Return: The result as a string. Caller is responsible for freeing the memory.
 */
char *multiply(const char *num1, const char *num2)
{
    int len1 = strlen(num1);
    int len2 = strlen(num2);
    int len_result = len1 + len2;
    char *result = calloc(len_result + 1, sizeof(char));
    int i, j, carry, n1, n2, sum;

    if (!result)
    {
        fprintf(stderr, "Error\n");
        exit(98);
    }

    for (i = len1 - 1; i >= 0; i--)
    {
        carry = 0;
        n1 = num1[i] - '0';

        for (j = len2 - 1; j >= 0; j--)
        {
            n2 = num2[j] - '0';
            sum = n1 * n2 + (result[i + j + 1] - '0') + carry;
            carry = sum / 10;
            result[i + j + 1] = (sum % 10) + '0';
        }
        result[i + j + 1] += carry;
    }

    // Remove leading zeros
    for (i = 0; i < len_result; i++)
    {
        if (result[i] != '0')
            break;
    }

    if (i == len_result)
    {
        // Result is zero
        char *zero_result = calloc(2, sizeof(char));
        if (!zero_result)
        {
            free(result);
            fprintf(stderr, "Error\n");
            exit(98);
        }
        zero_result[0] = '0';
        free(result);
        return zero_result;
    }

    char *final_result = strdup(result + i);
    free(result);
    if (!final_result)
    {
        fprintf(stderr, "Error\n");
        exit(98);
    }

    return final_result;
}

int main(int argc, char *argv[])
{
    char *result;

    if (argc != 3)
    {
        fprintf(stderr, "Error\n");
        exit(98);
    }

    if (!is_digit_string(argv[1]) || !is_digit_string(argv[2]))
    {
        fprintf(stderr, "Error\n");
        exit(98);
    }

    result = multiply(argv[1], argv[2]);
    printf("%s\n", result);
    free(result);

    return 0;
}
