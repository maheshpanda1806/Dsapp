#pragma once
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>
#include <string>
#include <vector>
#include <unordered_map>
#include <stack>
#include <queue>

namespace py = pybind11;

// ---------- HashMap ----------
class HashMap {
private:
    std::unordered_map<std::string, long long> mp;
public:
    HashMap() {}
    void put(const std::string &key, long long value);
    long long get(const std::string &key) const;
    bool contains(const std::string &key) const;
    void remove(const std::string &key);
    size_t size() const;
    std::vector<std::string> keys() const;
    void clear();
};

// ---------- Stack ----------
class Stack {
private:
    std::vector<long long> st;
public:
    Stack() {}
    void push(long long val);
    long long pop();
    long long top() const;
    bool empty() const;
    size_t size() const;
};

// ---------- Queue ----------
class Queue {
private:
    std::queue<long long> q;
public:
    Queue() {}
    void push(long long val);
    long long pop();
    long long front() const;
    bool empty() const;
    size_t size() const;
};

// ---------- Sort ----------
void quick_sort(std::vector<long long> &arr);
