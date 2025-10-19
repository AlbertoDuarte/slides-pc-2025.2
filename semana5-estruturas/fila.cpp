    queue<int> st;
    st.push(1);
    st.push(2);
    cout << st.front() << endl; // imprime o 1
    st.pop(); // apaga o 1
    st.push(3);
    cout << st.top() << endl; // imprime o 2