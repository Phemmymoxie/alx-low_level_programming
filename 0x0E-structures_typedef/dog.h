#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - a dog struct craeting some attribute for dog
 * @name: First member
 * @age: the second member
 * @owner: third member
 *
 * Discription: A (dog) struct that creates
 * an attribute name the dog, age and owner
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
