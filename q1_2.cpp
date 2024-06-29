int get_row_sum(vector<vector<int>> &a, int i)
{
    int row_sum = 0;
    int m = a[0].size();
    for (int x = 0; x<m; x++) row_sum += a[i][x];
    return row_sum;
}
int get_col_sum(vector<vector<int>> &a, int i)
{
    int col_sum = 0;
    int n = a.size();
    for (int x = 0; x<n; x++) col_sum += a[x][i];
    return col_sum;
}
int sumOfRowCol(int n, int m, vector<vector<int>> a) {
    for (int i = 0; i<min(n,m); i++)
    {
        int row_sum = get_row_sum(a,i);
        int col_sum = get_col_sum(a,i);
        if (row_sum != col_sum) return 0;
    }
    return 1;
}
