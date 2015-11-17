/*
OVERVIEW: Given a string, return the Kth index from the end of the string.
E.g.: Input: "qwertyui", 3. Output: 't' (index starting from zero).

INPUTS: A string and value of K.

OUTPUT: Return the Kth index from the end of the string (index starting from zero).

ERROR CASES: Return '\0' for invalid inputs.

NOTES:
*/
int stringlen(char *str)
{
	int i;
	for (i = 0; str[i] != '\0'; i++)
		;
	return i;
}
char KthIndexFromEnd(char *str, int K) {
	if (str ==0||str == ""|| K<0)
	{
		return '\0';
	}
	else
	{
		int len = stringlen(str);
		if (K < len)
		{
			int i,counter=-1;
			for (i = len - 1; i>=0; i--)
			{
				counter++;
				if (K == counter)
				{
					return str[i];
				}
			}
		}
		else
			return '\0';
	}
}