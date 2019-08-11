/**
 * clear_bit - clear bit given index
 * @n: number
 * @index: index modify
 * Return: Success (1) or failed (-1)
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	(index < 64) ? *n &= ~(1UL << index) : 0;
	return ((index >= 64) ? (unsigned int)(-1) : 1);
}
