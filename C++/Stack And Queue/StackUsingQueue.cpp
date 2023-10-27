#include<bits/stdc++.h>
using namespace std;
class StackUsingQueue {
public:
    queue<int> ans;
    queue<int> tem;
    StackUsingQueue() {

    }
    
    void push(int x) {
        ans.push(x);
    }
    
    int pop() {
        int k;
        while(!ans.empty()){
            if(ans.size()==1){
                k = ans.front();
                ans.pop();
            }else{
                tem.push(ans.front());
                ans.pop();
            }
        }
        while(!tem.empty()){
            ans.push(tem.front());
            tem.pop();
        }
        return k;
    }
    
    int top() {
        int k;
        while(!ans.empty()){
            if(ans.size()==1){
                k=ans.front();
            }
                tem.push(ans.front());
                ans.pop();
            
            
        } 
        while(!tem.empty()){
            ans.push(tem.front());
            tem.pop();
        }
        return k;
    }
    
    bool empty() {
        return ans.empty();
    }
};