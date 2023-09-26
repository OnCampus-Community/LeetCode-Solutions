class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string x)
    {
        // Your code here
        string res;
        char temp;
        for(int i=0; i<x.size(); i++){
            if(res.size() == 0){
                temp = x[i];
                res.append(1, temp);
            }
            else if(x[i] == '(' || x[i] == '[' || x[i] == '{'){
                temp = x[i];
                res.append(1, temp);
            } 
            else if(x[i] == ')'){
                if(res[res.size()-1] == '('){
                    res.pop_back();
                }
                else{
                    temp = x[i];
                    res.append(1, temp);
                }
            }
            else if(x[i] == ']'){
                if(res[res.size()-1] == '['){
                    res.pop_back();
                }
                else{
                    temp = x[i];
                    res.append(1, temp);
                }
            }
            else if(x[i] == '}'){
                if(res[res.size()-1] == '{'){
                    res.pop_back();
                }
                else{
                    temp = x[i];
                    res.append(1, temp);
                }
            }
        }
        if(res.size() == 0){
            return 1;
        }
        else{
            return 0;
        }
    }

};