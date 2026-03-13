#include <iostream>
using namespace std;
int main()
{
    int matrix[4][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 12}};
    int x;
    cout << "Enter x";
    cin >> x;
    bool flag = false;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (x == matrix[i][j])
            {
                flag = true;
                cout << x << "is present"; // how to return cell of x??
                break;
            }
            // else
            // {
            //     cout << x << "is not present"<<endl;
            //     break;
            // }
        }
    }
}