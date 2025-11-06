#include <pybind11/pybind11.h>
using namespace std;

long long compute_sum(int n) {
    long long s = 0;
    for (long long i = 0; i < n; i++)
        s += i;
    return s;
}

PYBIND11_MODULE(sum_module, m) {
    m.def("compute_sum", &compute_sum, "Compute sum from 0 to 100000000");
}
