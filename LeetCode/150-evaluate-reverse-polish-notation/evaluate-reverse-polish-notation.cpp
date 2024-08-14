class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> stack;
        std::vector<char> operators = {'+', '-', '/', '*'};

        for(auto &i : tokens){
            if (find(operators.begin(), operators.end(), i[0]) != operators.end()  && i.size() == 1){
                int b = stack.top();
                stack.pop();
                int a = stack.top();
                stack.pop();
                int c ;
                switch(i[0]){
                    case '+':{
                        c = (a + b);
                        break;
                    }

                    case '-':{
                        c = (a - b);
                        break;

                    }
                    case '/':{
                        c = (a / b);
                        break;

                    }
                    case '*':{
                        c = (a * b);
                        break;

                    }
                }
                stack.push(c);
            }else{
                stack.push(stoi(i));
            }
        }
        return stack.top();
    }
};