#include "../include/dsapp.h"
using namespace std;

void Queue::push(long long val) { q.push(val); }

long long Queue::pop() {
    if (q.empty()) throw out_of_range("Queue underflow");
    long long val = q.front();
    q.pop();
    return val;
}

long long Queue::front() const {
    if (q.empty()) throw out_of_range("Queue empty");
    return q.front();
}

bool Queue::empty() const { return q.empty(); }

size_t Queue::size() const { return q.size(); }
