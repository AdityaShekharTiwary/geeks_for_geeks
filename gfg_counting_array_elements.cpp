int solve(int arr[],int n,int key)
{
	int res=-1;
	int l=0;
	int r=n-1;
	while(r>=l){
		int mid=l+(r-l)/2;
		if(arr[mid]==key){
			res=mid;
			l=mid+1;
		}
		else if(arr[mid]>key) r=mid-1;
		else l=mid+1;
	}
	if(res==-1) res=r;

	return res;
}


vector<int> countEleLessThanOrEqual(int arr1[], int arr2[], 
                             int m, int n)
{
	sort(arr2,arr2+n);
	vector<int> v;
	for(int i=0;i<m;i++){
		int index=solve(arr2,n,arr1[i]);
		v.push_back(index+1);
	}
	return v;
}