#include <string>
#include <regex>

using namespace std;

string replace(const string &s) {
    return regex_replace(s,regex("[aeiouAEIOU]"),"!");
}