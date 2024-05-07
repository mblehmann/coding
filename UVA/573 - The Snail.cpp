#include <iostream>

using namespace std;


class SnailSimulator
{
public:
    SnailSimulator(int wellHeight, int climbDistance, int slideDistance, int fatigueFactor)
    : wellHeight(wellHeight), climbDistance(climbDistance), slideDistance(slideDistance), fatigueFactor(fatigueFactor)
    {
        day = 0;
        location = 0;
        success = false;

        fatiguePenalty = climbDistance * (fatigueFactor / 100.0);
        currentClimbDistance = climbDistance;
    }

    void simulate()
    {
        while(true)
        {
            day++;
            
            if (currentClimbDistance > 0)
            {
                location += currentClimbDistance;
            }
            if (location > wellHeight)
            {
                success = true;
                return;
            }

            location -= slideDistance;
            if (location < 0)
            {
                success = false;
                return;
            }

            currentClimbDistance -= fatiguePenalty;
        }
    }

    string getResult()
    {
        return success ? "success on day " + to_string(day) : "failure on day " + to_string(day);
    }

private:
    int wellHeight;
    int climbDistance;
    int slideDistance;
    int fatigueFactor;

    float fatiguePenalty;
    float currentClimbDistance;

    int day;
    float location;
    bool success;
};

int main()
{
    int wellHeight;
    int climbDistance;
    int slideDistance;
    int fatigueFactor;

    while (true)
    {
        cin >> wellHeight >> climbDistance >> slideDistance >> fatigueFactor;

        if (wellHeight == 0) break;

        SnailSimulator simulator(wellHeight, climbDistance, slideDistance, fatigueFactor);
        simulator.simulate();
        cout << simulator.getResult() << endl;
    }    

    return 0;
}
