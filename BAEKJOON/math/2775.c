int main(void) {
	int cnt;
	int k, n;
	int array[15][15] = { 0 };
	for (int i = 0; i < 15; i++) {
		array[0][i] = i;
	}
	for (int i = 0; i < 15; i++) {
		array[i][1] = 1;
	}
	scanf("%d", &cnt);
	for (int i = 0; i < cnt; i++) {
		scanf("%d", &k);
		scanf("%d", &n);
		for (int x = 1; x <= k; x++) {
			for (int y = 1; y <= n; y++) {
				array[x][y] = array[x][y-1] + array[x - 1][y];
			}
		}
		printf("%d \n", array[k][n]);
	}
	return 0;
}
