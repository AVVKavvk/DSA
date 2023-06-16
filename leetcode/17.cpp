class Solution
{
public:
    void slove(string digits, int index, string output, vector<string> &ans, vector<string> &mapping)
    {

        if (index >= digits.length())
        {
            ans.push_back(output);
            return;
        }

        int valueIndex = digits[index] - '0';
        string value = mapping[valueIndex];

        for (int i = 0; i < value.length(); i++)
        {

            output.push_back(value[i]);
            slove(digits, index + 1, output, ans, mapping);
            output.pop_back();
        }
    }
    vector<string> letterCombinations(string digits)
    {
        vector<string> ans;

        if (digits.length() == 0)
        {
            return ans;
        }
        int index = 0;
        string output = "";
        vector<string> mapping(10);
        mapping[2] = "abc";
        mapping[3] = "def";
        mapping[4] = "ghi";

        mapping[5] = "jkl";
        mapping[6] = "mno";
        mapping[7] = "pqrs";
        mapping[8] = "tuv";
        mapping[9] = "wxyz";

        slove(digits, index, output, ans, mapping);
        return ans;
    }
};