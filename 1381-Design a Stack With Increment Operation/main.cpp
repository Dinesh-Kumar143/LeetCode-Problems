class CustomStack
{
public:
    vector<int> st;
    int maxsize;
    CustomStack(int maxSize)
    {
        maxsize = maxSize;
    }

    void push(int x)
    {
        if (st.size() < maxsize)
        {
            st.push_back(x);
        }
        return;
    }
    int ret;
    int pop()
    {
        if (st.empty())
        {
            return -1;
        }
        ret = st.back();
        st.pop_back();
        return ret;
    }

    void increment(int k, int val)
    {
        if (st.size() <= k)
        {
            for (int i = 0; i < st.size(); i++)
            {
                st[i] += val;
            }
        }
        else
        {
            for (int i = 0; i < k; i++)
            {
                st[i] += val;
            }
        }
        return;
    }
};

/**
 * Your CustomStack object will be instantiated and called as such:
 * CustomStack* obj = new CustomStack(maxSize);
 * obj->push(x);
 * int param_2 = obj->pop();
 * obj->increment(k,val);
 */