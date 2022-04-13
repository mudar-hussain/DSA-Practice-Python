
class MyQueue {
public:
    stack<int> stack1,stack2;
    MyQueue() {
        
        
    }
    
    void push(int x) {
        while(true){
            
            
            if(stack2.empty()){
                break;
            } else{
                stack1.push(stack2.top());
                stack2.pop();
            }
        }
        stack1.push(x);
        while(true){
           
                if(stack1.empty()){
                break;
            } else{
                stack2.push(stack1.top());
                stack1.pop();
            }
        }
        
            
    }
    
    int pop() {
        int ans =0;
        if(!stack2.empty()){
            ans = stack2.top();
            stack2.pop();
        }
        
        return ans;
    }
    
    int peek() {
        return stack2.top();
    }
    
    bool empty() {
        return stack2.empty();
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