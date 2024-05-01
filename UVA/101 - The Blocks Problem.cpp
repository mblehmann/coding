#include <iostream>
#include <vector>

using namespace std;

class Strips
{
public:
    Strips(int n)
    {
        blockRow = vector<int>(n);
        strip = vector<vector<int> >(n);

        for (int block = 0; block < n; block++)
        {
            placeBlockIn(block, block);
        }
    }

    bool blocksAreInTheSameRow(int a, int b)
    {
        return blockRow[a] == blockRow[b];
    }

    void moveOnto(int a, int b)
    {
        returnBlocksOnTopOf(a);
        returnBlocksOnTopOf(b);
        int block = removeBlockAt(blockRow[a]);
        placeBlockIn(block, blockRow[b]);
    }

    void moveOver(int a, int b)
    {
        returnBlocksOnTopOf(a);
        int block = removeBlockAt(blockRow[a]);
        placeBlockIn(block, blockRow[b]);
    }

    void pileOnto(int a, int b)
    {
        returnBlocksOnTopOf(b);
        vector<int> blocks = removeBlocksOnTopOf(a);
        placeBlocksIn(blocks, blockRow[b]);
    }

    void pileOver(int a, int b)
    {
        vector<int> blocks = removeBlocksOnTopOf(a);    
        placeBlocksIn(blocks, blockRow[b]);
    }

    void print()
    {
        for (int row = 0; row < strip.size(); row++)
        {
            cout << row << ":";
            for (int column = 0; column < strip[row].size(); column++)
            {
                cout << " " << strip[row][column];
            }
            cout << endl;
        }
    }

private:
    vector<vector<int> > strip;
    vector<int> blockRow;

    void placeBlockIn(int block, int row)
    {
        strip[row].push_back(block);
        blockRow[block] = row;
    }

    void placeBlocksIn(vector<int> blocks, int row)
    {
        while(!blocks.empty())
        {
            int block = blocks.back();
            placeBlockIn(block, row);
            blocks.pop_back();
        }
    }

    void returnBlocksOnTopOf(int block)
    {
        int row = blockRow[block];

        while(strip[row].back() != block)
        {
            int lastBlock = removeBlockAt(row);
            placeBlockIn(lastBlock, lastBlock);
        }
    }

    vector<int> removeBlocksOnTopOf(int block)
    {
        int row = blockRow[block];
        vector<int> blocks;
        int lastBlock;

        while(strip[row].back() != block)
        {
            lastBlock = removeBlockAt(row);
            blocks.push_back(lastBlock);
        }

        lastBlock = removeBlockAt(row);
        blocks.push_back(lastBlock);

        return blocks;
    }

    int removeBlockAt(int row)
    {
        int block = strip[row].back();
        strip[row].pop_back();
        return block;
    }

};

int main()
{
    int n;
    string command;
    int a;
    string action;
    int b;

    cin >> n;

    Strips strip = Strips(n);

    while (true)
    {
        cin >> command;
        if (command == "quit") break;

        cin >> a >> action >> b;
        if (strip.blocksAreInTheSameRow(a, b)) continue;

        if (command == "move" && action == "onto")      strip.moveOnto(a, b);
        else if (command == "move" && action == "over") strip.moveOver(a, b);
        else if (command == "pile" && action == "onto") strip.pileOnto(a, b);
        else if (command == "pile" && action == "over") strip.pileOver(a, b);
    }

    strip.print();

    return 0;
}
