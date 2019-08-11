/**
 * set_bit - set bit given index
 * @n: number
 * @index: index modify
 * Return: Success (1) or failed (-1)
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	(index < 64) ? *n |= (1 << index) : 0;
	return ((index >= 64) ? (unsigned int)(-1) : 1);
}
