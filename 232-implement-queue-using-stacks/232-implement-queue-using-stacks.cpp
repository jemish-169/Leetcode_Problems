class MyQueue {
public:
    stack<int> st1,st2;
    MyQueue() {
        //null
    }
    
    void push(int x) {
        st1.push(x);
    }
    
    int pop() {
       int x = peek();
       st2.pop();
        return x;
    }
    
    int peek() {
        if(st2.empty())
        {
            while(!st1.empty()){
                st2.push(st1.top());
                st1.pop();
            }
        }
        int c = st2.top();
        return c;
    }
    
    bool empty() {
        return st1.empty()&&st2.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */