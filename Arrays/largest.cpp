class Solution
{
public:
    int largest(vector<int> &arr, int n)
    {
        int l=arr[0];
        for(int i=1;i<arr.size();i++){
            if(arr[i]>l){
                l=arr[i];
            }
        }
        return l;
    }
};


//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int>arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        Solution ob;
        cout << ob.largest(arr, n) << "\n";
    }
    return 0;
}