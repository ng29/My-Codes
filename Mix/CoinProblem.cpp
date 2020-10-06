/*Given many stacks of coins which are arranged adjacently. We need to collect 
all these coins in the minimum number of steps where in one step we 
can collect one horizontal line of coins or vertical line of 
coins and collected coins should be continuous*/ 

#include <bits/stdc++.h> 
using namespace std; 

int minStepsRecur(int height[], int l, int r, int h) 
{ 
	// if l is more than r, no steps needed 
	if (l >= r) 
		return 0; 

	// loop over heights to get minimum height 
	// index 
	int m = l; 
	for (int i = l; i < r; i++) 
		if (height[i] < height[m]) 
			m = i; 

	return min(r - l, 
			minStepsRecur(height, l, m, height[m]) + 
			minStepsRecur(height, m + 1, r, height[m]) + 
			height[m] - h); 
} 

int minSteps(int height[], int N) 
{ 
	return minStepsRecur(height, 0, N, 0); 
} 

int main() 
{ 
	int height[] = { 2, 1, 2, 5, 1 }; 
	int N = sizeof(height) / sizeof(int); 

	cout << minSteps(height, N) << endl; 
	return 0; 
} 
