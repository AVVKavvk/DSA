

//  *                    M 1

class Solution
{
public:
    int expandIndex(string s, int i, int j)
    {
        int count = 0;
        while (i >= 0 && j < s.length() && s[i] == s[j])
        {
            count++;
            i--;
            j++;
        }

        return count;
    }
    int countSubstrings(string s)
    {
        int count = 0;
        int n = s.length();
        for (int i = 0; i < n; i++)
        {
            // odd length
            int oddAns = expandIndex(s, i, i);
            count += oddAns;

            // even

            int evenAns = expandIndex(s, i, i + 1);
            count += evenAns;
        }

        return count;
    }
};

/// *                         M 2

class Solution
{
public:
    bool isPalindroem(string s)
    {
        int i = 0;
        int j = s.length() - 1;
        while (i <= j)
        {
            if (s[i] != s[j])
            {
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
    int countSubstrings(string s)
    {
        vector<string> v;

        for (int i = 0; i < s.length(); i++)
        {
            for (int j = 1; j < s.length() - i + 1; j++)
            {
                v.push_back(s.substr(i, j));
            }
        }

        int n = v.size();
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            if (isPalindroem(v[i]))
            {
                count++;
            }
        }

        return count;
    }
};