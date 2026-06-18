class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        for(int i = 0 ; i < tokens.size() ; i++){
            if(tokens[i]=="+" || tokens[i]=="*" || tokens[i]=="/" || tokens[i]=="-"){
                int opd2 = st.top();
                st.pop();
                int opd1 = st.top();
                st.pop();
                if(tokens[i]=="*") st.push(opd1*opd2);
                else if(tokens[i]=="/") st.push(opd1/opd2);
                else if(tokens[i]=="+") st.push(opd1+opd2);
                else st.push(opd1-opd2);
            }
            else{
                int num = stoi(tokens[i]);
                st.push(num);
            }
        }
        return st.top();
    }
};
