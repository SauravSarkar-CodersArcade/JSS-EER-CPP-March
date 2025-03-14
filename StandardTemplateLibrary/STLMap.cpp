#include <bits/stdc++.h>
using namespace std;
int main() {
    map<string, string> stateLanguages; // Alphabetical, Ascending
    stateLanguages.insert(pair<string,string>("Karnataka", "Kannada"));
    stateLanguages.insert(pair<string,string>("Maharashtra", "Marathi"));
    stateLanguages.insert(pair<string,string>("Goa", "Konkani"));
    stateLanguages.insert(pair<string,string>("Kerala", "Malayalam"));
    stateLanguages.insert(pair<string,string>("Bihar", "Bhojpuri"));
    stateLanguages["West Bengal"] = "Bengali";
    stateLanguages.erase("Goa");
    // stateLanguages.clear(); // Deletes everything
    // How to traverse:
    // pair<first, second>
    for (auto data : stateLanguages){
        cout << "State: " << data.first << ", Language: " << data.second << endl;
    }
    return 0;
}
