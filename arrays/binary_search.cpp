#include <bits/stdc++.h>
using namespace std;

//alternative binary search with time complexity O(log(n))
void binary_search(vector<int> & numbers, int target){
	int k = 0;
	for(int b = n / 2; b >= 1; b = b / 2){
		while(b + k < n && numbers[b + k] <= target){
			k = k + b;
		}
	}	
	if(numbers[k] == target){
		return "target found";
	}
	else{
		return "target not found"
	}
}