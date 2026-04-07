






queue<int> reverseFirstK(queue<int> q, int k) {
       
        int size = q.size();

        if(k > size) return q;

        stack<int> st;

        
        for(int i = 0; i < k; i++) {
            st.push(q.front());
            q.pop();
        }

        
        while(!st.empty()) {
            q.push(st.top());
            st.pop();
        }

      
        int remaining = size - k;
        while(remaining--) {
            q.push(q.front());
            q.pop();
        }

        return q;
    }