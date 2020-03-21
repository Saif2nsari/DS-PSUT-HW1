int LinearSearch(int data[], int n,int key)
{
	for (int i = 0; i < n; i++) 
		if (data[i] == key)return i;
	
	
	return -1;
}
