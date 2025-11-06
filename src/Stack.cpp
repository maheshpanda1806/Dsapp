#include "../include/dsapp.h"
using namespace std;

void Stack::push(long long val) { st.push_back(val); }

long long Stack::pop() {
    if (st.empty()) throw out_of_range("Stack underflow");
    long long val = st.back();
    st.pop_back();
    return val;
}

long long Stack::top() const {
    if (st.empty()) throw out_of_range("Stack empty");
    return st.back();
}

bool Stack::empty() const { return st.empty(); }

size_t Stack::size() const { return st.size(); }
