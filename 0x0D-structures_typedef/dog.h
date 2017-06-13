#ifndef _DOG_H_
#define _DOG_H_

/*
 * struct dog -  defines elements associated with dogs
 * @name: the dog's name
 * @age: the age of the dog
 * @owner: the owner of the dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/*
 * dog_t - typedef for struct dog
 */
typedef struct dog dog_t;

int _putchar(char c);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif /* _DOG_H_ */
