#include <stdio.h>

main() {
	int i, j, k;
	int temp[2];
	int niz[6][2] = {
						{4,4},
						{3,3},
						{5,5},
						{2,2},
						{1,1},
						{99,99}
	};

	//Selection Sort - Let Us C, chapter 8-Arrays, vezba D-c
	for (j = 0; j < 5; j++) {
		for (i = 0; i < 5; i++) {
			if (niz[i][0] > niz[i + 1][0]) {
				temp[0] = niz[i][0];
				temp[1] = niz[i][1];
				niz[i][0] = niz[i + 1][0];
				niz[i][1] = niz[i + 1][1];
				niz[i + 1][0] = temp[0];
				niz[i + 1][1] = temp[1];
			}
		}
	}

	for (k = 0; k < 5; k++)
		printf("%d%d\n", niz[k][0], niz[k][1]);
}