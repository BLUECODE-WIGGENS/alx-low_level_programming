#include "main.h"

/**
 *_memcpy - copies memory area.
 *@src: source memory area. 
 *@dest: destination area .
 *@n: data to be copied
 *Return: destination. 
 */

 char *_memcpy(char *dest, char *src, unsigned int n)
 {
 unsigned int x;
 
 for(x = 0; x < n; x++)
 {
 *(dest + x) = *(src + x);
 }
 return(dest);
 }
