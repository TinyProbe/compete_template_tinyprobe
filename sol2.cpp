#include <bits/stdc++.h>
using namespace std;

class FastIO {
	static constexpr int MAX_SIZE = 1e5;
	char i_buffer[MAX_SIZE], *pb, *pe;
	string o_buffer, word;
	bool state;
private:
	inline bool isspace2(int c) { return (c >= 9 && c <= 13) || c == 32; }
	inline bool isdigit2(int c) { return c >= '0' && c <= '9'; }
	inline int lowercmp(const char* s1, const char* s2) {
		while (*s1 && *s2 && tolower(*s1) == tolower(*s2)) ++s1, ++s2;
		return *s1 - *s2;
	}
	inline char sys_getchar() { return pb == pe && (pe = (pb = i_buffer) + fread(i_buffer, 1, MAX_SIZE, stdin), pb == pe) ? (state = false) : *pb++; }
	inline bool next_bool() {
		const char* s = next_word().c_str();
		return !lowercmp(s, "true") ? true : (!lowercmp(s, "false") ? false : atoll(s));
	}
	inline char next_char(char c) {
		char c2;
		while (isspace2(c2 = sys_getchar())) {}
		return c2 ? c2 : c;
	}
	inline const string& next_word() {
		char c; word.clear();
		while (isspace2(c = sys_getchar())) {}
		while (!isspace2(c) && c) { word += c, c = sys_getchar(); }
		return word;
	}
	inline long long next_llong() {
		long long ll = 0, sign = 1; char c;
		while ((c = sys_getchar()) && isspace2(c)) {}
		if (c && (c == '+' || c == '-')) { sign = -(c - ','), c = sys_getchar(); }
		while (c && isdigit2(c)) { ll = (ll << 1) + (ll << 3) + (c ^ 48), c = sys_getchar(); }
		while (c && !isspace2(c)) { c = sys_getchar(); }
		return ll * sign;
	}
	inline unsigned long long next_ullong() {
		unsigned long long ull = 0; char c;
		while ((c = sys_getchar()) && isspace2(c)) {}
		while (c && isdigit2(c)) { ull = (ull << 1) + (ull << 3) + (c ^ 48), c = sys_getchar(); }
		while (c && !isspace2(c)) { c = sys_getchar(); }
		return ull;
	}
public:
	FastIO() : pb(), pe(), state(true) {}
	~FastIO() { assert(o_buffer.size() == fwrite(o_buffer.c_str(), 1, o_buffer.size(), stdout)); }
	FastIO& operator>>(bool& b)       { b = next_bool();                return *this; }
	FastIO& operator>>(char& c)       { c = next_char(c);               return *this; }
	FastIO& operator>>(char* s)       { strcpy(s, next_word().c_str()); return *this; }
	FastIO& operator>>(string& s)     { s = next_word();                return *this; }
	FastIO& operator>>(double& d)     { d = atof(next_word().c_str());  return *this; }
	FastIO& operator>>(float& f)      { f = atof(next_word().c_str());  return *this; }
	FastIO& operator>>(long long& ll) { ll = next_llong(); return *this; }
	FastIO& operator>>(long& l)       { l = next_llong();  return *this; }
	FastIO& operator>>(int& i)        { i = next_llong();  return *this; }
	FastIO& operator>>(short& sh)     { sh = next_llong(); return *this; }
	FastIO& operator>>(unsigned long long& ull) { ull = next_ullong(); return *this; }
	FastIO& operator>>(unsigned long& ul)       { ul = next_ullong();  return *this; }
	FastIO& operator>>(unsigned int& ui)        { ui = next_ullong();  return *this; }
	FastIO& operator>>(unsigned short& ush)     { ush = next_ullong(); return *this; }

	FastIO& operator<<(bool b)          { return (b ? *this << "true" : *this << "false"); }
	FastIO& operator<<(char c)          { o_buffer += c; return *this; }
	FastIO& operator<<(const char* s)   { o_buffer += s; return *this; }
	FastIO& operator<<(const string& s) { o_buffer += s; return *this; }
	FastIO& operator<<(double d)        { return *this << to_string(d);  }
	FastIO& operator<<(float f)         { return *this << to_string(f);  }
	FastIO& operator<<(long long ll)    { return *this << to_string(ll); }
	FastIO& operator<<(long l)          { return *this << to_string(l);  }
	FastIO& operator<<(int i)           { return *this << to_string(i);  }
	FastIO& operator<<(short sh)        { return *this << to_string(sh); }
	FastIO& operator<<(unsigned long long ull) { return *this << to_string(ull); }
	FastIO& operator<<(unsigned long ul)       { return *this << to_string(ul);  }
	FastIO& operator<<(unsigned int ui)        { return *this << to_string(ui);  }
	FastIO& operator<<(unsigned short ush)     { return *this << to_string(ush); }
	operator bool() { return state; }
};
FastIO fio;
#define int long long
#define F first
#define S second
#define untie cin.tie(0)->sync_with_stdio(0)
#define testcase(N) int t; for (N?t=N:bool(fio>>t); t>0; --t) solve()
#define solution(N)\
	void solve();\
	signed main() { untie; testcase(N); assert(fio && !(fio>>t)); }\
	void solve()

solution(1) {

}
