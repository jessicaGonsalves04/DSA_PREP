
#include<bits/stdc++.h>
using namespace std; 

class Solution{
    public:
    //Function to count the frequency of all elements from 1 to N in the array.
    void frequencyCount(vector<int>& arr, int N, int P) { 
    unordered_map<int, int> freqMap;
    // Count freq of each element 
    for(int i = 0; i < N; i++) {
        if (arr[i] <= P && arr[i] > 0) {
            freqMap[arr[i]]++;
        }
    }

    // Update the array with the frequencies of numbers from 1 to P
    for(int j = 1; j <= P; j++) {
        if (j <= N) {
            arr[j - 1] = freqMap[j];
        } else {
            arr.push_back(freqMap[j]); // If P > N, we need to push_back the element
        }
    }

    // extra elements i.e n>p then fill those with 0
    for(int j = P; j < N; j++) {
        arr[j] = 0;
    }
}
};




int main() 
{ 
	long long t;
	
	//testcases
	cin >> t;
	
	while(t--){
	    
	    int N, P;
	    //size of array
	    cin >> N; 
	    
	    vector<int> arr(N);
	    
	    //adding elements to the vector
	    for(int i = 0; i < N ; i++){
	        cin >> arr[i]; 
	    }
        cin >> P;
        Solution ob;
		ob.frequencyCount(arr, N, P); 
		
		
	    for (int i = 0; i < N ; i++) 
			cout << arr[i] << " ";
	    cout << endl;
	}	
	return 0; 
}





