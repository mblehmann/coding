#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;


class Box
{
public:
    Box(int index) : index(index)
    {
        longestChainSize = -1;
        nextElementLongestChain = NULL;
    }

    void addMeasurement(int measurement)
    {
        measurements.push_back(measurement);
    }

    void sortBySize()
    {
        sort(measurements.begin(), measurements.end());
    }

    void addNestingBox(Box* box)
    {
        for (int dimension = 0; dimension < measurements.size(); dimension++)
        {
            if (box->getMeasurmentAt(dimension) >= getMeasurmentAt(dimension))
            {
                return;
            }
        }
        nestingBoxes.push_back(box);
    }

    vector<Box*> getNestingBoxes()
    {
        return nestingBoxes;
    }

    int getIndex() const
    {
        return index;
    }

    int calculateLongestChain()
    {
        if (longestChainSize > 0) return longestChainSize;

        longestChainSize = 1;
        nextElementLongestChain = NULL;
        for (auto box : nestingBoxes)
        {
            int result = 1 + box->calculateLongestChain();
            if (result > longestChainSize)
            {
                nextElementLongestChain = box;
                longestChainSize = result;
            }
        }

        return longestChainSize;
    }

    Box* getNextElementLongestChain()
    {
        return nextElementLongestChain;
    }

    int getDimension() const
    {
        return measurements.size();
    }

    int getMeasurmentAt(int dimension) const
    {
        return measurements[dimension];
    }

    static bool compareBoxes(const Box* a, const Box* b)
    {
        for (int dimension = 0; dimension < a->getDimension(); dimension++)
        {
            if (a->getMeasurmentAt(dimension) < b->getMeasurmentAt(dimension)) return true;
            if (a->getMeasurmentAt(dimension) > b->getMeasurmentAt(dimension)) return false;
        }
        return false;
    }

private:
    int index;
    vector<int> measurements;
    vector<Box*> nestingBoxes;
    Box* nextElementLongestChain;
    int longestChainSize;
};


class Storage
{
public:
    Storage() {}

    void addBox(Box* box)
    {
        box->sortBySize();
        boxes.push_back(box);
    }
    
    void sortBoxes()
    {
        sort(boxes.begin(), boxes.end(), Box::compareBoxes);
    }

    void calculateNestingBoxes()
    {
        for (auto box1 : boxes)
        {
            for (auto box2 : boxes)
            {
                box1->addNestingBox(box2);
            }
        }
    }

    vector<int> calculateLongestNestingChain()
    {
        vector<int> longestNestingChain;
        for (auto box : boxes)
        {
            int result = box->calculateLongestChain();
            if (result > longestNestingChain.size())
            {
                longestNestingChain.clear();
                Box* current = box;
                while(true)
                {
                    longestNestingChain.push_back(current->getIndex() + 1);
                    if (current->getNextElementLongestChain() == NULL) break;
                    current = current->getNextElementLongestChain();
                }
            }
        }
        return longestNestingChain;
    }

private:
    vector<Box*> boxes;
};


int main()
{
    int k;
    int n;
    int value;

    while (cin >> k >> n)
    {
        Storage* storage = new Storage();
        for (int boxIndex = 0; boxIndex < k; boxIndex++)
        {
            Box* box = new Box(boxIndex);
            for (int measurement = 0; measurement < n; measurement++)
            {
                cin >> value;
                box->addMeasurement(value);
            }
            storage->addBox(box);
        }

        storage->sortBoxes();
        storage->calculateNestingBoxes();

        vector<int> longestNestingChain = storage->calculateLongestNestingChain();
        cout << longestNestingChain.size() << endl;
        for (auto box = longestNestingChain.rbegin(); box != longestNestingChain.rend(); ++box)
        {
            cout << *box << " ";
        }
        cout << endl;

    }

    return 0;
}
