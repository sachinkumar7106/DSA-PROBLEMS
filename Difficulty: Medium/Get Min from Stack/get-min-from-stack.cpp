class SpecialStack {
  public:
    stack<int> st;
    stack<int> minst;

    // constructor
    SpecialStack() {}

    // push x
    void push(int x) {
        st.push(x);
        if (minst.empty())
            minst.push(x);
        else
            minst.push(min(x, minst.top()));
    }

    // pop — MUST return int (GFG requirement)
    int pop() {
        if (st.empty())
            return -1;
        int x = st.top();
        st.pop();
        minst.pop();
        return x;
    }

    // peek / top
    int peek() {
        if (st.empty())
            return -1;
        return st.top();
    }

    // isEmpty
    bool isEmpty() {
        return st.empty();   // driver prints 0/1 → correct
    }

    // getMin
    int getMin() {
        if (st.empty())
            return -1;
        return minst.top();
    }
};
