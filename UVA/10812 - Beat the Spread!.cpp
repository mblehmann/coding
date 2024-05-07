#include <iostream>

using namespace std;

class BetResults
{
public:
    BetResults(int scoreSum, int scoreDifference) : scoreSum(scoreSum), scoreDifference(scoreDifference) {}

    void calculateScores()
    {
        if (scoreSum < scoreDifference)
        {
            isPossible = false;
            return;
        }

        winningScore = (scoreSum + scoreDifference) / 2;
        losingScore = (scoreSum - scoreDifference) / 2;

        isPossible = winningScore + losingScore == scoreSum && winningScore - losingScore == scoreDifference;
    }

    string getScore()
    {
        return isPossible ? to_string(winningScore) + " " + to_string(losingScore) : "impossible";
    }

private:
    int scoreSum;
    int scoreDifference;

    int winningScore;
    int losingScore;
    bool isPossible;
};

int main()
{   
    int n;
    int scoreSum;
    int scoreDifference;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> scoreSum >> scoreDifference;
        
        BetResults result(scoreSum, scoreDifference);
        result.calculateScores();
        cout << result.getScore() << endl;
    }

    return 0;
}
