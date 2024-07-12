#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cout << "Enter the number of rows and columns: ";
    cin >> n >> m;

    int arr[n][m];

    // input the array
    cout << "Enter the array values: ";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }

    // print the array
    cout << "The array is: ";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // search an element such that the rows and columns are sorted in ascending order
    bool flag = false;
    int toSearch;
    cout << "Enter the element you want to search: ";
    cin >> toSearch;

    int r = 0, c = m - 1;
    while (r < n && c >= 0)
    {
        if (arr[r][c] == toSearch)
        {
            flag = true;
        }
        if (arr[r][c] > toSearch)
        {
            c--;
        }
        else
        {
            r++;
        }
    }

    if (flag)
    {
        cout << "The element is found." << endl;
    }
    else
    {
        cout << "The element is not found." << endl;
    }

    return 0;
}