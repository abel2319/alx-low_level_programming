/**
 *set_string - function that sets the value of a pointer to a char
 *@s: source
 *@to: target
 */
void set_string(char **s, char *to)
{
	if (*s)
		to = *s;
}
