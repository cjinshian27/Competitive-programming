#include <bits/stdc++.h>
using namespace std;

/*
smallest value x that is solution (i.e., true) for a function

time complexity: O(log(n))
*/
int smallest_solution(vector<int> true_or_false){
	int x = -1; 
	int size = true_or_false.size();
	for (int b = size; b >= 1; b /= 2) {
		while (!true_or_false[x+b]) x += b;
	}
	return x+1;
}		
