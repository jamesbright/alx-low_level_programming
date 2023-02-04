#include "hash_tables.h"

/**
 * check_collision - checks for collision of values in a hash table
 * @temp: hashnode to check
 * @key: key of value
 * @value: value of key
 * @temp_val: temporary value
 * Return: 1 or temp
 */

int check_collision(hash_node_t *temp, const char *key,
const char *value, char *temp_val)
{
while (temp)
{
if (strcmp(temp->key, key) == 0)
{
free(temp->value);
temp->value = temp_val;
temp->value = strdup(value);
free(temp_val);
return (1);
}
temp = temp->next;
}
return (0);
}


/**
 * hash_table_set - adds an element to hash table
 * @ht: hash table to update
 * @key: key
 * @value: value of key
 * Return: updated table
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
unsigned long int idx = 0;
int collision = 0;
char *temp_val = NULL;
hash_node_t *temp = NULL;
hash_node_t *new = NULL;
if (ht == NULL || ht->array == NULL || value == NULL)
return (0);
if (strlen(key) == 0 || key == NULL)
return (0);
temp_val = strdup(value);
if (temp_val == NULL)
return (0);
idx = key_index((unsigned char *)key, ht->size);
/* Check for collision */
temp = ht->array[idx];
collision = check_collision(temp, key, value, temp_val);
if (collision == 1)
return (1);
/* If no collision, insert node */
new = malloc(sizeof(hash_node_t));
if (new == NULL)
{
free(new);
return (0);
}
new->key = strdup(key);
new->value = temp_val;
new->next = ht->array[idx];
ht->array[idx] = new;
return (1);
}
