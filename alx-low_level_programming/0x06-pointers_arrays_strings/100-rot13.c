#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * rot13 - encodes a string using rot13
 * Description: function encodes a string using rot13
 * encoding
 * @s: string to be encoded
 * Return: encoded string
 */

char *rot13(char *s)
{
int i, currentL, encod_len = 13;
int len = strlen(s);
char cipher;
for (i = 0; i < len; i++)
{
currentL = s[i];
cipher = currentL + encod_len;
if ((currentL - 'a') + encod_len > 26)
{
encod_len = ((currentL - 'a') + encod_len) % 26;
cipher = 'a' + encod_len;
}
printf("%c", cipher);
encod_len = 13;
}}
printf("\n");
}
