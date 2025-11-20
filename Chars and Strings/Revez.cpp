
#include <iostream>
using namespace std;
int main()
{

	string str;

  cin >> str;

	int n = str.length();
	
	string rev = str;
	
	for (int i = n - 1; i >= 0; i--){
		rev.push_back(str[i]);
	}
	
	cout << rev << endl;
	return 0;
}
