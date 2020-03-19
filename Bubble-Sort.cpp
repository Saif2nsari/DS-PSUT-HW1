void BubbleSort(int data[], int size)
{


	for (int i = 0; i < size - 1; i++) {
	
		for (int j = size - 1; j > i; j--) {
			if (data[j] < data[j - 1])
				swap(data[j], data[j - 1]);
		
		}
	
	}



}