#include <iostream>
#include <sstream>
#include <map>
#include <set>
#include <vector>
#include <algorithm>

using namespace std;

class ConquestList
{
public:
    ConquestList() {}

    void addConquest(string country, string name)
    {
        if (conquestMap.count(country) == 0)
        {
            countries.push_back(country);
            conquestMap[country] = set<string>();
        }
        conquestMap[country].insert(name);
    }

    void printList()
    {
        sort(countries.begin(), countries.end());
        for (auto country : countries)
        {
            cout << country << " " << conquestMap[country].size() << endl;
        }
    }

private:
    vector<string> countries;
    map<string, set<string> > conquestMap;
};

int main()
{
    int n;
    string line;
    string country;
    string name;
    ConquestList conquestList;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        getline(cin, line);
        istringstream iss(line);
        cin >> country;
        getline(iss, name);

        conquestList.addConquest(country, name);
    }

    conquestList.printList();

    return 0;
}
