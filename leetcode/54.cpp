class Solution
{
public:
  vector<int> spiralOrder(vector<vector<int>> &matrix)
  {

    vector<int> ans;
    int m = matrix.size();
    int n = matrix[0].size();
    int totalElement = m * n;
    int sr = 0;
    int sc = 0;
    int ec = n - 1;
    int er = m - 1;
    int count = 0;

    while (count < totalElement)
    {
      // print starting  row
      for (int i = sc; i <= ec && count < totalElement; i++)
      {
        ans.push_back(matrix[sr][i]);
        count++;
      }
      sr++;
      // print ending col
      for (int i = sr; i <= er && count < totalElement; i++)
      {
        ans.push_back(matrix[i][ec]);
        count++;
      }
      ec--;
      // print ending  row
      for (int i = ec; i >= sc && count < totalElement; i--)
      {
        ans.push_back(matrix[er][i]);
        count++;
      }
      er--;

      // print starting  col
      for (int i = er; i >= sr && count < totalElement; i--)
      {
        ans.push_back(matrix[i][sc]);
        count++;
      }
      sc++;
    }
    return ans;
  }
};