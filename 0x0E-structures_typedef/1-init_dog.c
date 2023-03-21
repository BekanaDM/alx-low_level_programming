void init_dog(struct dog *d, char *name, float age, char *owner)
{
	struct dog *sar;

	sar = malloc(sizeof(struct dog));
	if (user == NULL)
		return (NULL);
	sar->name = name;
	sar->age = age;
	sar->owner = owner;
	return sar;
}
	
