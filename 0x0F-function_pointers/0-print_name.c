/**
 * print_name - Print name using the function f
 * @name: name to print
 * @f: function used to print name
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		(*f)(name);
}
