// 5. Pascal's triangle 
#include <iostream>

using namespace std;

int main() {

    int pascal[30][30];

    int height;

    cout << "input height: ";

    cin >> height;

    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            if (j == 0 || i == j)
            {
                pascal[i][j] = 1;
                continue;
            }
            pascal[i][j] = pascal[i - 1][j - 1] + pascal[i - 1][j];
        }
    }
    for (int i = 0; i < height; i++) {
        for (int j = 1; j < height - i; j++) {
            cout << " ";
        }
        for (int j = 0; j <= i; j++) {

            cout << pascal[i][j] << " ";
        }
        cout << endl;
    }
    return 0;

}