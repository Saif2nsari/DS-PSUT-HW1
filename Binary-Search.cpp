
int BinarySearch(int data[], int n, int key)
{
	int lo = 0;
	int hi = n - 1;
	int mid;

	while (lo <= hi) {
	
		mid = (lo + hi) / 2;

		if (data[mid] == key)
			return mid;
		else if (data[mid] < key)
			lo = mid + 1;
		else
			hi = mid - 1;
	
	}
	return -1;

}