class Solution {
public:
    string interpret(string command) {
        for(int i=0;i<command.length();i++){
            if(command[i]=='('&&command[i+1]=='a'){
                command.replace(i,4,"al");
            }  
             if(command[i]=='('&&command[i+1]==')'){
                command.replace(i,2,"o");   
                
            }
        }
        return command;
        
    }
};