class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for(auto ch: s){
           if(ch == '(' || ch == '{' || ch== '[') 
            st.push(ch);
            else{
                if(!st.empty()){
                    char top = st.top();
                    if((ch ==  ')' && top == '(') 
                    ||(ch == '}' && top == '{')
                    ||(ch == ']'  && top == '[')) 
                    st.pop();
                    else return false;
                }

                else{
                    return false;
                }
            }
        }
        if(st.empty())return true;
        return false;
       
    }
};
