/**
 * _islower - check for lower case
 * @c: c variable
 *
 * Return: 0 if arg is not lowercase
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
