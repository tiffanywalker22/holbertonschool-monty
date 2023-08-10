#include "monty.h"
/**
 * _strcmp - compares strings
 *
 * Return: 0
 *
 */
int _strcmp(char *opcode, char *list)
{

	
	while (*list != '\0')
	{
		if (*string == *list)
		{
			string++;
			list++;
			if (*string == '\0')
				return (1);
		}
		else
			list++;
	}
	return (0);
}

int pushint(char *list)
{
	char *string = "push";

	while (*list != '\0')
	{
		if (*string == *list)
		{
			string++;
			list++;
			if (*string == '\0')
				while (*list)
				{
					if (*list > '0' && *list < '9')
					{
						return (atoi(list));
					}
					list++;
				}
		}
		else
			list++;
	}
	return (0);
}