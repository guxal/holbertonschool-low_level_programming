/**
 * get_bit - get bit given index
 * @n: number
 * @index: index
 * Return: bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	return ((index >= 64) ? -1 : (n >> index) & 0x01);
}
