/**
 * flip_bits - flips bits
 * @n: number 1
 * @m: number 2
 * Return: number of bytes
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int y = n ^ m;
	int count = 0;

	while (y)
		count += y & 0x01, y >>= 0x01;

	return (count);
}
