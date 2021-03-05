/* You can find my template at github.com/andreaemonti/SWERC-Template */
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
#define rng(i,a,b) for(int i=int(a);i<int(b);++i)
#define forn(i,b) rng(i,0,b)
#define rrng(i,a,b) for(int i=int(b)-1;i>=int(a);--i)
#define rforn(i,b) rrng(i,0,b)
#define pb push_back
#define fi first
#define se second
#define bg begin()
#define ed end()
#define all(x) x.bg,x.ed
#define rall(x) x.rbegin(),x.end()
#define si(x) int(x.size())
#define mp make_pair
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
void yesno(bool a) {if (a){ yes;} else {no;}}
/*------------------ OUTPUT PAIRS AND ITERABLES ------------------*/
// outstream operator for pair
template <typename type_first, typename type_second>
ostream &operator << (ostream &out, const pair<type_first, type_second> P) {
	out << '(' << P.fi << ',' << P.se << ')';
	return out;
}
// convert an iterable to a string that can be printed
template <typename type_iterator>
string ite2str(type_iterator begin, type_iterator end, string sep = " ") {
	stringstream out;
	if (begin != end) out << *(begin++);
	for (;begin != end; ++begin) out << sep << *begin;
	return out.str();
}
/*----------------------- DEBUG UTILITIES -----------------------*/
#define DEBUG true	//			<--- COMMENT TO SUPPRESS DEBUGGING
#if DEBUG
	#define dbg_var(x) clog << #x << ": " << x << endl;
	#define dbg_arr(x, len) clog << #x << ": [" << ite2str(x, x+len, ", ") << "]\n";
	#define dbg_ite(x) clog << #x << ": {" << ite2str(all(x), ", ") << "}\n";
	#define dbg_msg(x) clog << x << endl;
#else
	#define dbg_var(x)
	#define dbg_arr(x, len)
	#define dbg_ite(x)
	#define dbg_msg(x)
	#define endl '\n'
#endif
/*-------------------------- BEGIN CODE --------------------------*/

int N;

void solve() {
	cin >> N;
	
	
	return;
}

/*--------------------------- END CODE ---------------------------*/
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0);	//COMMENT IF INTERACTIVE
	int t;
	cin >> t;
	while (t--)
		solve();
	return 0;
}
