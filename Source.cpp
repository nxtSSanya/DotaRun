#pragma comment(linker, "/STACK:10000000000")
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <sstream>
#include <math.h>
#include <map>
#include <set>
#include <stack>
#include <vector>
#include <random>
#include <algorithm>
#include <string>
#include <queue>
#include <deque>
#include <functional>
#include <Windows.h>
#include <list>
#include <bitset>
#include <dos.h>
#include <ctime>
#define rt return
#define rt0 return 0
#define rt1 return 1
#define mp make_pair
#define ll long long
#define endl "\n"
#define cen cout << "\n"
#define all(x) begin(x), end(x)
#define godorgaphX w*k 
#define godographY w
using namespace std;

int main(){
	string tmp;
	cout << "Vvedite vremya v 24 chasovom formate" << endl;
	cout << "Example: 12:12" << endl;
	cin >> tmp;
	while (true) {
		time_t now = time(0);
		string s = ctime(&now);
		s.erase(s.begin(), s.end() - 14);
		s.erase(s.begin() + 5, s.end());
		if (s == tmp) {
			system("start steam://rungameid/570");
			break;
		}
	}
	rt 0;
}