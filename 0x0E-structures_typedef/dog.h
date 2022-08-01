#ifndef dog_h
#define dog_h

/**
 * struct dog - A struct type on dogs
 * @name: the dog's name
 * @age: dog's age
 * @owner: Dog's owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
