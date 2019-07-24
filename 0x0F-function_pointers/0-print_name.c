/**
 * print_name - print name callback function
 * @name: name
 * @f: function
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
