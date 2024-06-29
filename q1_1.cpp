// https://www.geeksforgeeks.org/problems/sums-of-i-th-row-and-i-th-column3054/1
bool isSum(vector<vector<int>> &a, int i)
{
    int row_sum = 0;
    int col_sum = 0;
    int n = a.size(), m = a[0].size();
    for (int x = 0; x<m; x++) row_sum += a[i][x];
    for (int x = 0; x<n; x++) col_sum += a[x][i];
    return row_sum == col_sum;
}
int sumOfRowCol(int n, int m, vector<vector<int>> a) {
    // code here
    for (int i = 0; i<min(n,m); i++)
    {
        if (!isSum(a,i)) return 0;
    }
    return 1;
}
