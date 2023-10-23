#include <string.h>
/**
 * _strstr -finds the first occurrence of the substring.
 * @haystack:The null-terminated string to be searched.
 * @needle:The null-terminated string to be found within 'haystack'.
 * Return:returns a pointer to the first occurrence.
 */
char *_strstr(char *haystack, char *needle)
{
	return (strstr(haystack, needle));
}
