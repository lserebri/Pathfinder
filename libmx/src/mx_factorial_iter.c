int mx_factorial_iter(int n) {
	int i = 1;
	int factorial = 1;

	if (n == 0)
		return 1;
	if (n < 0 || n > 12)
		return 0;
	for (;i <= n; factorial *= i, i++);
	return factorial;
}
