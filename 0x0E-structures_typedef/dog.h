#ifndef _DOG_H
#define _DOG_H

/**
 * struct dog - Dog atttribute.
 * @name: Name of the dog.
 * @age: how old is the dog.
 * @owner: The master of the dog.
 *
 * Description: struct dog is the attribute of a dog.
 */

struct dog
{
char *name;
float age;
char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
int _strlen(char *s);
#endif
