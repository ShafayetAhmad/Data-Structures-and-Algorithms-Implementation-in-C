#include <bits/stdc++.h>
using namespace std;

int comb(int n, int r)
{
    if (r == 0 || n == r)
        return 1;
    else
        return comb(n - 1, r - 1) + comb(n - 1, r);
}

vector<vector<int>> generate(int numRows)
{
    vector<vector<int>> ans;
    for (int i = 0; i < numRows; i++)
    {
        vector<int> temp;
        for (int j = 0; j <= i; j++)
        {
            temp.push_back(comb(i, j));
        }
        ans.push_back(temp);
    }
    return ans;
}

int main()
{
    int num;
    cin >> num;
    vector<vector<int>> vec = generate(num);
    for (int i = 0; i < vec.size(); i++)
    {
        for (int j = 0; j < vec[i].size(); j++)
        {
            cout << vec[i][j] << " ";
        }
        cout << endl;
    }
}