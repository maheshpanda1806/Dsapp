#include "../include/dsapp.h"
using namespace std;

void HashMap::put(const string &key, long long value) { mp[key] = value; }

long long HashMap::get(const string &key) const {
    auto it = mp.find(key);
    if (it == mp.end()) throw out_of_range("Key not found");
    return it->second;
}

bool HashMap::contains(const string &key) const { return mp.find(key) != mp.end(); }

void HashMap::remove(const string &key) { mp.erase(key); }

size_t HashMap::size() const { return mp.size(); }

vector<string> HashMap::keys() const {
    vector<string> res;
    for (auto &p : mp) res.push_back(p.first);
    return res;
}

void HashMap::clear() { mp.clear(); }
