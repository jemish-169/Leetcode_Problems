class KthLargest
{
    public:
        priority_queue<int, vector < int>, greater < int>> st;
    int x;
    KthLargest(int k, vector<int> &nums)
    {
        x = k;
        for (auto i: nums)
        {
            st.push(i);
            if (st.size() > x)
                st.pop();
        }
    }

    int add(int val)
    {
        st.push(val);
        if (st.size() > x)
            st.pop();
        return st.top();
    }
};

/**
 *Your KthLargest object will be instantiated and called as such:
 *KthLargest* obj = new KthLargest(k, nums);
 *int param_1 = obj->add(val);
 */