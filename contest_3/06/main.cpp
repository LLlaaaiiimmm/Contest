#include <iostream>
#include <unordered_map>
#include <vector>
#include <string>
#include <sstream>

using namespace std;

int main() {
   

    int n, m;
    cin >> n;
    unordered_map<string, int> users;
    string login, balance;
    getline(cin, login);
    for (int i = 0; i < n; ++i) {
        getline(cin, login);
        stringstream ss(login);
        getline(ss, login, ';');
        ss >> balance;
        users[login] = stoi(balance);
    }
    cin >> m;
    vector<string> logins(m);
    for (int i = 0; i < m; ++i) {
        cin >> logins[i];
    }
    for (auto &login : logins) {
        if (users.find(login) != users.end()) {
            cout << users[login] << " ";
        }
    }
}