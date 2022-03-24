#include "main.h"

/**
 * *cap_string - function to capitalize word
 * @str: pointer
 * Description: convert string into uppercase
 * Return: capitalized string
 */
char *cap_sting(char *str)
{
	int count = 0, i;
	int sep_words[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	if (*(str + count) >= 97 && *(str + count) <= 122)
	{
		*(str + count) = *(str + count) - 32;
		count++;
	}
	while (*(str + count) != '\0')
	{
		for (i = 0; i < 13; i++)
		{
			if (*(str + count) == sep_words[i])
			{
				if ((*(str + (count + 1)) >= 97) && (*(str + (count + 1)) <= 122))
					*(str + (count + 1)) = *(str + (count + 1)) - 32;
				break;
			}
		}
		count++;
	}
	return (str);
}
