



/**
* print_name - function print the string you enter using  the function you want
* @name: the name user enter
* @f: the function you use
*/
void print_name(char *name, void (*f)(char *))
{
void (*d)(char *);
d = f;

d(name);
}
