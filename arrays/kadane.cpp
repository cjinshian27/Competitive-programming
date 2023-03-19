#include <bits/stdc++.h>
using namespace std;

//kadane's algorithm for finding maximum subarray sum with time complexity O(n)
int kadane(vector<int> & numbers){
	int bestSum = 0, sum = 0, n = numbers.size();
	for(int i = 0; i < n; i++){
		sum = max(numbers[i], numbers[i] + sum);
		bestSum = max(sum, bestSum);
	}
	return bestSum;
}	
