void    ft_swap(int *a, int *b)
{
	int swappy;
	swappy=&b;
	b=&a;
	a=swappy;
}
