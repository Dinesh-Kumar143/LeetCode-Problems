class Solution
{
public:
    bool validateStackSequences(vector<int> &pushed, vector<int> &popped)
    {
        vector<int> stacks;
        int j = 0;
        for (int i : pushed)
        {
            stacks.push_back(i);

            while (!stacks.empty() && stacks.back() == popped[j])
            {
                stacks.pop_back();
                j++;
            }
        }
        return stacks.empty();
    }
};