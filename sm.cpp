class Solution{
public:	
	void immediateSmaller(int *arr, int n) {
	    int i;
	    for(i=0;i<n-1;i++)
	    {
	        if(arr[i]<=arr[i+1])
	        {
	            arr[i]=-1;
	        }
	        else if(arr[i]>arr[i+1])
	        {
	            arr[i]=arr[i+1];
	        }
	    }
	    arr[i]=-1;
	}// function end
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, l, r;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        ob.immediateSmaller(arr, n);
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
  // } Driver Code Ends
