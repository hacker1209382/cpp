
#include <bits/stdc++.h>
using namespace std;

void subString(string s, int n)
{
	vector<int> v;
	for (int i = 0; i < n; i++){
		for (int len = 1; len <= n - i; len++){
			string sub =(s.substr(i, len));
			int x=stoi(sub);
			v.push_back(x);
			}
	}
	cout<<*min_element(v.begin(),v.end())<<endl;
}

int main()
{
	string s = "4572";
	subString(s, s.length());
	return 0;
}