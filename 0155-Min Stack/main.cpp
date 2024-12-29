// static int minVal = pow(2,31)-1;

class MinStack
{
public:
    vector<pair<int, int>> stackval; // (stack Value, min Value)

    // static vector<int> stackval;
    int minVal = pow(2, 31) - 1;
    MinStack()
    {
    }

    void push(int val)
    {

        if (stackval.empty())
        {

            stackval.push_back({val, val});
        }
        else
        {
            stackval.push_back({val, min(stackval.back().second, val)});
        }

        return;
    }

    void pop()
    {
        if (stackval.empty())
        {
            return;
        }
        stackval.pop_back();
        return;
    }

    int top()
    {
        return stackval.empty() ? -1 : stackval.back().first;
    }

    int getMin()
    {
        return stackval.empty() ? -1 : stackval.back().second;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */