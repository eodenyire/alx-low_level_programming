#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define ERR_MSG "Error"

/**
 * is_digit - Checks if a string contains only digits.
 * @s: The string to check.
 * Return: 1 if the string contains only digits, 0 otherwise.
 */
int is_digit(char *s)
{
    for (int i = 0; s[i] != '\0'; i++)
    {
        if (!isdigit(s[i]))
            return 0;
    }
    return 1;
}

/**
 * _strlen - Calculates the length of a string.
 * @s: The string to measure.
 * Return: The length of the string.
 */
int _strlen(char *s)
{
    int length = 0;
    while (s[length] != '\0')
        length++;
    return length;
}

/**
 * errors - Prints an error message and exits with status 98.
 */
void errors(void)
{
    printf("%s\n", ERR_MSG);
    exit(98);
}

/**
 * multiply - Multiplies two large numbers represented as strings.
 * @num1: The first number as a string.
 * @num2: The second number as a string.
 * Return: A string representing the product of num1 and num2.
 */
char *multiply(char *num1, char *num2)
{
    int len1 = _strlen(num1);
    int len2 = _strlen(num2);
    int len_result = len1 + len2;
    int *result = (int *)calloc(len_result, sizeof(int));
    if (!result)
        return NULL;

    for (int i = len1 - 1; i >= 0; i--)
    {
        for (int j = len2 - 1; j >= 0; j--)
        {
            int mul = (num1[i] - '0') * (num2[j] - '0');
            int sum = mul + result[i + j + 1];
            result[i + j + 1] = sum % 10;
            result[i + j] += sum / 10;
        }
    }

    char *product = (char *)malloc(len_result + 1);
    if (!product)
    {
        free(result);
        return NULL;
    }

    int index = 0;
    while (index < len_result && result[index] == 0)
        index++;

    if (index == len_result)
    {
        product[0] = '0';
        product[1] = '\0';
    }
    else
    {
        int i = 0;
        while (index < len_result)
            product[i++] = result[index++] + '0';
        product[i] = '\0';
    }

    free(result);
    return product;
}

/**
 * main - Entry point of the program.
 * @argc: The number of command-line arguments.
 * @argv: The command-line arguments.
 * Return: 0 on success, 98 on error.
 */
int main(int argc, char *argv[])
{
    if (argc != 3 || !is_digit(argv[1]) || !is_digit(argv[2]))
        errors();

    char *result = multiply(argv[1], argv[2]);
    if (!result)
    {
        errors();
    }

    printf("%s\n", result);
    free(result);
    return 0;
}
