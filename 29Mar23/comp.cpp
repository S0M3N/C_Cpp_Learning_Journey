#include <cmath>
int comp_int(const int &p, const float &r, const int &n, const int &t){
	return (p * (pow((1 + r / n), n*t)));
}
