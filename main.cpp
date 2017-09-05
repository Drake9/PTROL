#include <iostream>

using namespace std;

void rollLeft(int table[], int sizeOfTable)
{
    for(int i=1; i<sizeOfTable; i++)
            cout << table[i] << " ";
    cout << table[0];
}

int main()
{
    int numberOfTables;
    int sizeOfTable;
    int *table;

    cin >> numberOfTables;

    for(int i=0; i<numberOfTables; i++)
    {
        cin >> sizeOfTable;
        table = new int[sizeOfTable];
        for(int j=0; j<sizeOfTable; j++)
            cin >> table[j];

        rollLeft(table, sizeOfTable);
        cout << endl;
        delete [] table;
    }

    return 0;
}



