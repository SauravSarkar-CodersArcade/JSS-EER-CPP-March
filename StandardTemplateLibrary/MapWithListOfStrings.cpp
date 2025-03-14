#include <bits/stdc++.h>
using namespace std;
int main() {
    map<string, list<string>> studentFavFood;
    list<string> Aryan {"Pizza", "Pasta", "Paneer Masala"};
    list<string> Supraj {"Idli", "Dosa", "Mushroom Biryani"};
    list<string> Tushar {"Chicken Biryani", "Mudde", "Biscuit"};
    studentFavFood.insert(pair<string, list<string>>("Aryan", Aryan));
    studentFavFood.insert(pair<string, list<string>>("Supraj", Supraj));
    studentFavFood.insert(pair<string, list<string>>("Tushar", Tushar));
    for (auto data : studentFavFood) {
        cout << "Name: " << data.first << ", -> Food ";
        for (auto food : data.second){
            cout << food << ",";
        }
        cout << endl;
    }
    return 0;
}
