class Solution {
public:
    bool isValid(string s) {
        int l=s.length();
        stack<char>st;
        
        if(l%2!=0)  return false;
        
        for(int i=0;i<l;i++){
            if(s[i]=='[' || s[i]=='(' || s[i]=='{')
                st.push(s[i]);
            else{
                if(st.empty() ||
                 s[i]==')' && st.top()!='(' ||
                 s[i]==']' && st.top()!='['||
                 s[i]=='}' && st.top()!='{'  )
                    return false;
                st.pop();
            } 
            
            // if(s[i]==')' && !st.empty() && st.top()=='(')
            //     st.pop();
            // else if(s[i]==']' && (!st.empty() && st.top()=='['))
            //     st.pop();
            // else if(s[i]=='}' && (!st.empty() && st.top()=='{'))
            //     st.pop();
        }
        cout<<st.size();
        
        return st.empty();
    }
};
