// Copyright 2025 NNTU-CS

int gcd(int a, int b) {
	int arr[100], index = 0;
	while (a != b) {
		int diff = abs(a - b);
		arr[index] = diff;
		index++;
		if (a > b) {
			a = diff;
		}
		else {
			b = diff;
		}

	}
	int min_num = *min_element(arr, arr + index);
	return min_num;
}

