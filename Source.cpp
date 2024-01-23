
lude <iostream>

int main()
{
	int a, b, c;
	a = 2;
	b = 3;
	c = 5;
	for (int i = 0; i < 10; i++)
	{
		a++;
		b *= 2;
		c = a + b;
	}
	return 0;
}