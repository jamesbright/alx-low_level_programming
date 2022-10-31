
/**
 * _memcpy -  copies n bytes memory area
 * Description: copies n bytes of memory from source to destination
 * @dest: destination 
 * @src: source area to copy from
 * @n: number of bytes to fill
 * Return: a pointer to the memory area s
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
char *dest_pointer = dest;
for (i = 0; i < n; i++)
dest_pointer[i] = src[i];

return (dest_pointer);
}

