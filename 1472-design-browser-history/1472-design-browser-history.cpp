class BrowserHistory {
public:
    stack<string> forwad,backward;
    BrowserHistory(string homepage) {
       backward.push(homepage);
    }
    
    void visit(string url) {
       backward.push(url);
        while(!forwad.empty()){
            forwad.pop();
        }
    }
    
    string back(int steps) {
        while(backward.size()>1 && steps--){
            forwad.push(backward.top());
            backward.pop();
        }
        return backward.top();
    }
    
    string forward(int steps) {
        while(!forwad.empty() && steps--){
            backward.push(forwad.top());
            forwad.pop();
        }
        return backward.top();
    }
};

/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory* obj = new BrowserHistory(homepage);
 * obj->visit(url);
 * string param_2 = obj->back(steps);
 * string param_3 = obj->forward(steps);
 */