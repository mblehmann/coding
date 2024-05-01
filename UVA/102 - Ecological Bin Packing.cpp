#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Response
{
    int movements;
    string bins;

    Response(int movements, string bins) : movements(movements), bins(bins) {}
    void print()
    {
        cout << bins << " " << movements << endl;
    }
};

bool compareResponses(const Response& a, const Response& b)
{
    if (a.movements == b.movements) return a.bins < b.bins;
    return a.movements < b.movements;
}

class RecyclingCenter
{
public:
    RecyclingCenter()
    {
        bottles = 0;
    }

    void addBottlesToBin(int bin, int brown, int green, int clear)
    {
        bins[bin][0] = brown;
        bins[bin][1] = green;
        bins[bin][2] = clear;

        bottles += (brown + green + clear);
    }

    Response getMinimumBottleMovements()
    {
        vector<Response> responses = vector<Response>();
        responses.push_back(Response(getBottleMovements(0, 1, 2), "BGC"));
        responses.push_back(Response(getBottleMovements(0, 2, 1), "BCG"));
        responses.push_back(Response(getBottleMovements(1, 0, 2), "GBC"));
        responses.push_back(Response(getBottleMovements(1, 2, 0), "CBG"));
        responses.push_back(Response(getBottleMovements(2, 0, 1), "GCB"));
        responses.push_back(Response(getBottleMovements(2, 1, 0), "CGB"));
        sort(responses.begin(), responses.end(), compareResponses);
        return responses.front();
    }
    
private:
    int bins[3][3];
    int bottles;

    int getBottleMovements(int brownBin, int greenBin, int clearBin)
    {
        return bottles - (bins[brownBin][0] + bins[greenBin][1] + bins[clearBin][2]);
    }
};

int main()
{
    int brown;
    int green;
    int clear;

    while (cin >> brown >> green >> clear)
    {
        RecyclingCenter recyclingCenter = RecyclingCenter();
        recyclingCenter.addBottlesToBin(0, brown, green, clear);

        cin >> brown >> green >> clear;
        recyclingCenter.addBottlesToBin(1, brown, green, clear);

        cin >> brown >> green >> clear;
        recyclingCenter.addBottlesToBin(2, brown, green, clear);

        Response response = recyclingCenter.getMinimumBottleMovements();
        response.print();
    }
}
