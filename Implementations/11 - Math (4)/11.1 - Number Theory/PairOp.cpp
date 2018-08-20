/**
* Description: modular arithmetic with pairs
	* use for hashing
*/

using namespace ModOp; 

namespace PairOp {
	istream& operator>>(istream& is, pi& p) {
        is >> p.f >> p.s;
        return is;
    }
	ostream& operator<<(ostream &strm, const pi& a) {
	    strm << a.f << " " << a.s << " | ";
	    return strm;
	}
    template<class T> T operator+=(T& l, const T& r) { return l = l+r; }
    template<class T> T operator-=(T& l, const T& r) { return l = l-r; }
    template<class T> T operator*=(T& l, const T& r) { return l = l*r; }

	pi operator+(const pi& l, const pi& r) { return {ad(l.f,r.f),ad(l.s,r.s)}; }
	pi operator-(const pi& l, const pi& r) { return {sub(l.f,r.f),sub(l.s,r.s)}; }
	pi operator*(const pi& l, const pi& r) { return {mul(l.f,r.f),mul(l.s,r.s)}; }
	pi operator*(const pi& l, const int& r) { return l*pi(r,r); }
	pi operator*(const int& r, const pi& l) { return l*r; }
	pi operator*=(pi& l, const int& r) { return l = l*r; }
}