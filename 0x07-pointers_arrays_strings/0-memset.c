
/**
 * _memset -  fills a memory area with bytes
 * Description: fills the first n bytes of the memory area pointed by s with
 * with the constant byte
 * @n: number of bytes to fill
 * Return: a pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
char *filled = s;
for (i = 0; i < n; i++)
filled[i] = b;

return (filled);
}
