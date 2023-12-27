
#include <bits/stdc++.h>
using namespace std;


int countDigit(int n)
{
	int temp = n, count = 0;
int ans = 0;

	for(int i = 2; i<n; i++) {

		
		int d = temp % 10;

		temp = temp/ 10;

	if (d != 0){
        ans = ans + d;
			count++;}
	}
      
	return ans;
}


int main()
{
	int n;
    cin>>n;

	cout << countDigit(n) << endl;
	return 0;
}
