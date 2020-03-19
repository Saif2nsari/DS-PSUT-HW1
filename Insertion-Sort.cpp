void InsertionSort(int data[], int n)
{
	

	int temp, i, j;
	for (i = 1; i < n; i++) {

		temp = data[i];

		for (j = i - 1; j >= 0; j--) {
			if (temp < data[j]) data[j + 1] = data[j];
			else
				break;
		}
		if (i != (j + 1)) {
			data[j + 1] = temp;
		}



	}






}