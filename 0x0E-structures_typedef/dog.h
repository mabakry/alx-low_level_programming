#ifndef DOG_H
#define DOG_H
/**
 * struct dog - structure
 * @name: first member
 * @age: secomd member
 * @owner: third member
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
/**
 * dog_t - typedef of struct dog
 */
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
