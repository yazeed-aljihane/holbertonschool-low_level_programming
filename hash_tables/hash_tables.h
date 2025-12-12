#ifndef HASH_TABLES_H
#define HASH_TABLES_H

/**
 * struct hash_node_s - Node of a hash table
 *
 * @key: The key, string
 * The key is unique in the HashTable
 * @value: The value corresponding to a key
 * @next: A pointer to the next node of the List
 */
typedef struct hash_node_s
{
	char *key;
	char *value;
	struct hash_node_s *next;
} hash_node_t;

/**
 * struct hash_table_s - Hash table data structure
 *
 * @size: The size of the array
 * @array: An array of size @size
 * Each cell of this array is a pointer to the first node of a linked list,
 * because we want our HashTable to use a Chaining collision handling
 */
typedef struct hash_table_s
{
	unsigned long int size;
	hash_node_t **array;
} hash_table_t;

/**
* hash_table_create - function that creates a hash table.
* @size: the size of array
* Return: pointer to hash table or NULL if fails
*/
hash_table_t *hash_table_create(unsigned long int size);

/**
* hash_djb2 - a hash function implementing the djb2 algorithm.
* @str: the key
* Return: hash number
*/
unsigned long int hash_djb2(const unsigned char *str);



/**
* key_index - function that gives you the index of a key.
* @key: the key
* @size: the size of array
* Return: the index
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size);


/**
* hash_table_set -  function that adds an element to the hash table.
* @ht: hash table
* @key: key
* @value: value
* Return: 1 if success or 0 if fail
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value);

/**
* hash_table_get - function that retrieves a value associated with a key.
* @ht: hash table
* @key: the key of value
* Return: value if success or NULL otherwaise
*/
char *hash_table_get(const hash_table_t *ht, const char *key);

/**
* hash_table_print - function that prints a hash table.
* @ht: hash table
*/
void hash_table_print(const hash_table_t *ht);

/**
* hash_table_delete -  function that deletes a hash table.
* @ht:  is the hash table
*/
void hash_table_delete(hash_table_t *ht);


/**
 * struct shash_node_s - Node of a sorted hash table
 *
 * @key: The key, string
 * The key is unique in the HashTable
 * @value: The value corresponding to a key
 * @next: A pointer to the next node of the List
 * @sprev: A pointer to the previous element of the sorted linked list
 * @snext: A pointer to the next element of the sorted linked list
 */
typedef struct shash_node_s
{
char *key;
char *value;
struct shash_node_s *next;
struct shash_node_s *sprev;
struct shash_node_s *snext;
} shash_node_t;

/**
 * struct shash_table_s - Sorted hash table data structure
 *
 * @size: The size of the array
 * @array: An array of size @size
 * Each cell of this array is a pointer to the first node of a linked list,
 * because we want our HashTable to use a Chaining collision handling
 * @shead: A pointer to the first element of the sorted linked list
 * @stail: A pointer to the last element of the sorted linked list
 */
typedef struct shash_table_s
{
unsigned long int size;
shash_node_t **array;
shash_node_t *shead;
shash_node_t *stail;
} shash_table_t;

/**
 * shash_table_create - Creates a sorted hash table.
 * @size: The size of the hash table array.
 *
 * Return: A pointer to the newly created sorted hash table,
 * or NULL if an error occurs.
 */
shash_table_t *shash_table_create(unsigned long int size);
/**
 * shash_table_set - Adds an element to the sorted hash table.
 * @ht: A pointer to the sorted hash table.
 * @key: The key to add (cannot be an empty string).
 * @value: The value associated with the key.
 *
 * Return: 1 if it succeeded, 0 otherwise.
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value);
/**
 * shash_table_get - Retrieves a value associated with a key.
 * @ht: A pointer to the sorted hash table.
 * @key: The key to look for.
 *
 * Return: The value associated with the element,
 * or NULL if the key couldn't be found.
 */
char *shash_table_get(const shash_table_t *ht, const char *key);
/**
 * shash_table_print - Prints a sorted hash table.
 * @ht: A pointer to the sorted hash table.
 *
 * Description: Prints the hash table using the sorted linked list.
 */
void shash_table_print(const shash_table_t *ht);
/**
 * shash_table_print_rev - Prints a sorted hash table in reverse order.
 * @ht: A pointer to the sorted hash table.
 *
 * Description: Prints the hash table using the sorted linked list in reverse.
 */
void shash_table_print_rev(const shash_table_t *ht);
/**
 * shash_table_delete - Deletes a sorted hash table.
 * @ht: A pointer to the sorted hash table.
 */
void shash_table_delete(shash_table_t *ht);















#endif /*HASH_TABLES_H*/
