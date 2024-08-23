class Solution {
public:
    string fractionAddition(string expression) {
        int numerator = 0;
        int denominator = 1;
        int i = 0;
        while( i < expression.length()){
            int num = 0;
            int denom = 0;
            int sign = 1;
            if( expression[i] == '+' || expression[i] == '-')
            {
                if(expression[i] == '-'){
                    sign = -1;
                }
                i++;
            }
            while( isdigit(expression[i]) && i < expression.length()){
                num = num*10 +  (expression[i]-'0');
                i++;
            }
            num *= sign;
            i++;
            while(isdigit(expression[i]) && i < expression.length()){
                denom = denom*10 + (expression[i]-'0');
                i++;
            }
            numerator = numerator*denom + num*denominator;
            denominator *= denom;
        }
        int gcd = abs(__gcd(numerator, denominator));
        numerator /= gcd;
        denominator /= gcd;

        return to_string(numerator) + '/' + to_string(denominator);
    }
};
