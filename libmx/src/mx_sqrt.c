int mx_sqrt(int x) {
	int i = 0;

	while (i <= x / 2)
	{
		if ((i * i) == x)
			return i;
		i++;
	}
	return 0;
}
