#include <iostream>
using namespace std;

int main() {

    int R, C;

    cout << "Enter number of rows: ";
    cin >> R;

    cout << "Enter number of columns: ";
    cin >> C;

    // Create dynamic 2D array
    int** grid = new int*[R];

    for (int i = 0; i < R; i++) {
        grid[i] = new int[C];
    }

    // Take input from user
    cout << "\nEnter grid values (0 to 4):\n";

    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            cin >> grid[i][j];
        }
    }

    // Display grid
    cout << "\n===== GAME MAP =====\n";

    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            cout << grid[i][j] << " ";
        }
        cout << endl;
    }

    // Deallocate memory
    for (int i = 0; i < R; i++) {
        delete[] grid[i];
    }

    delete[] grid;

    return 0;
}