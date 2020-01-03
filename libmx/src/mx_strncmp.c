int mx_strncmp(const char *s1, const char *s2, int len) {
	int i = 0;

	while (i < (len - 1) && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}
