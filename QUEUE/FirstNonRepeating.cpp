class Solution
{
public:
    string FirstNonRepeating(string A)
    {
        unordered_map<char, int> count;
        queue<int> q;
        string ans = "";
        for (int i = 0; i < A.length(); i++)
        {
            char ch = A[i];
            // INCREASE COUNT
            count[ch]++;
            // PUSH IN QUEUE
            q.push(ch);
            while (!q.empty())
            {
                if (count[q.front()] > 1)
                {
                    // REPEATING CHARACTER
                    q.pop();
                }
                else
                {
                    // NON REPEATING CHARACTER
                    ans.push_back(q.front());
                    break;
                }
            }
            if (q.empty())
            {
                ans.push_back('#');
            }
        }
        return ans;
    }
}