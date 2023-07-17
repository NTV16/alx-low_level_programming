#ifndef DOG_H_
#define DOG_H_

/**
  *struct dog -includes variables of the structure
  *@name: first string
  *@age: float
  *@owner: second string
  *Return: nothing
  */
struct dog
{
	char *name;
	float age;
	char *owner;
} my_dog;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
/*dog_t *new_dog(char *name, float age, char *owner);*/
/*void free_dog(dog_t *d);*/
int main(void);

#endif
