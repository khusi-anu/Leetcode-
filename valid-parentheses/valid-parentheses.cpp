class Solution {
public:
    bool isValid(string s) {
        
        stack<int> sk;
        
        for(int i = 0; s[i] != '\0'; i++)
        {
        
            if(s[i] == '(' || s[i] == '{' || s[i] == '[')
                sk.push(s[i]);
            else
            {
                if(sk.empty())
                    return false;
                int top = sk.top();
                if((top == '(' && s[i] != ')') || (top == '{' && s[i] != '}') || (top == '[' && s[i] != ']'))
                   return false;
                sk.pop();
            }
        }
        return sk.empty();
    }
};
