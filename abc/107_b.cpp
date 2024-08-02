#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

constexpr ll INF = 1<<30;


vector<char> readGrid(int height, int width) {
    vector<char> grid(height * width);
    for (int row = 0; row < height; ++row) {
        for (int col = 0; col < width; ++col) {
            cin >> grid[row * width + col];
        }
    }
    return grid;
}

vector<int> searchRowsWithObstacles(const vector<char>& grid, int height, int width) {
    vector<int> rowIndices;

    for (int row = 0; row < height; ++row) {
        bool hasObstacle = false;

        for (int column = 0; column < width; ++column) {
            if (grid[row * width + column] == '#') {
                hasObstacle = true;
                break;
            }
        }

        if (hasObstacle) {
            rowIndices.push_back(row);
        }
    }

    return rowIndices;
}

vector<int> searchColumns(const vector<char>& grid, int height, int width) {
    vector<int> columnIndices;

    for (int column = 0; column < width; ++column) {
        bool hasObstacle = false;

        for (int row = 0; row < height; ++row) {
            if (grid[row * width + column] == '#') {
                hasObstacle = true;
                break;
            }
        }

        if (hasObstacle) {
            columnIndices.push_back(column);
        }
    }

    return columnIndices;
}

void displayRowAndColumnIndices(const vector<int>& rowIndices, const vector<int>& columnIndices)
{
    for (const auto& rowIndex : rowIndices) {
        cout << "H = " << rowIndex + 1 << endl;
    }

    for (const auto& columnIndex : columnIndices) {
        cout << "W = " << columnIndex + 1 << endl;
    }
}

void outputGrid(const vector<char>& grid, int height, int width, const vector<int>& rowIndices, const vector<int>& columnIndices)
{
    for (const auto& rowIndex : rowIndices) {
        for (const auto& columnIndex : columnIndices) {
            cout << grid[rowIndex * width + columnIndex];
        }
        cout << '\n';
    }
}

int main()
{
    int height, width;
    cin >> height >> width;

    vector<char> grid = readGrid(height, width);
    vector<int> rowIndices = searchRowsWithObstacles(grid, height, width);
    vector<int> columnIndices = searchColumns(grid, height, width);

    //displayRowAndColumnIndices(rowIndices, columnIndices);
    outputGrid(grid, height, width, rowIndices, columnIndices);

    return 0;
}
