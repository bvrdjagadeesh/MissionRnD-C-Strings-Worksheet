/*
OVERVIEW: Given a string, remove all spaces in it.
E.g.: Input: "abd scd". Output: "abdscd"

INPUTS: A string.

OUTPUT: Return string after removing spaces.

ERROR CASES: Return '\0' for invalid inputs.

NOTES: Don't create new string.
*/
int strinlen(char *str)
{
	int i;
	for (i = 0; str[i] != '\0'; i++)
		;
	return i;
}


char * removeSpaces(char *str) {
	if (str == "" || str == 0)
	{
		return '\0';
	}
	else
	{
		int i, j;
		int len = strinlen(str);
		for (i = 0; i < len;)
		{
			if (str[i] == ' ')
			{
				for (j = i; j < len - 1; j++)
				{
					str[j] = str[j + 1];
				}
				len--;
			}
			else
				i++;
		}
		str[len] = '\0';
		return str;
	}
}