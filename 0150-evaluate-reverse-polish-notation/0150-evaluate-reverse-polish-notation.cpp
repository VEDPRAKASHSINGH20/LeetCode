class Solution {
public:
    int evalRPN(vector<string>& exp) {

        stack<int> s;
        int i = 0;

        while (i < exp.size()) {

            
            if (exp[i] != "+" && exp[i] != "-" &&
                exp[i] != "*" && exp[i] != "/") {

                int num = stoi(exp[i]);
                s.push(num);
            }

            
            else {

                int n1 = s.top();
                s.pop();

                int n2 = s.top();
                s.pop();

                switch (exp[i][0]) {

                    case '+':
                        s.push(n2 + n1);
                        break;

                    case '-':
                        s.push(n2 - n1);
                        break;

                    case '*':
                        s.push(n2 * n1);
                        break;

                    case '/':
                        s.push(n2 / n1);
                        break;
                }
            }

            i++;
        }

        return s.top();
    }
};