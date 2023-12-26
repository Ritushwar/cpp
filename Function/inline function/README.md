    SYNTAX
    inline return_type function_name(parameters){
         //code to be executed
    }
It is function that is expanded in line when it is called. When the inline function called whole code of the inline function gets inserted or substituted at the point of the inline function call.
The compiler will not implement inline in situation like this:
1)If a function contains a loop
2)If a function has static variable.
3)If a function is recursive
4)If a function uses the a goto or switch statements