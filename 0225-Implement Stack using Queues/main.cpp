class MyStack
{
public:
    queue<int> queue1;
    queue<int> queue2;
    int retVal;
    MyStack()
    {
    }

    void push(int x)
    {
        queue1.push(x);
    }

    int pop()
    {
        while (queue1.size() != 1)
        {
            queue2.push(queue1.front());
            queue1.pop();
        }
        retVal = queue1.front();
        queue1.pop();
        queue1.swap(queue2);
        while (!queue2.empty())
        {
            queue2.pop();
        }
        return retVal;
    }

    int top()
    {
        return queue1.back();
    }

    bool empty()
    {
        return queue1.empty();
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */