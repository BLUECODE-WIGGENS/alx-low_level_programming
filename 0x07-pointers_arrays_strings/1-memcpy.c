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
 int x;
 x = 0;
 while(x < n)
 {
 dest[x] = src[x];
 x++;    
 }
 return(dest);
 }
