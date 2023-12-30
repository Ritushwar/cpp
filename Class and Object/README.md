<b>Class And Object<b><br>
Class is the collection of similiar type of object.It is the blueprint for creating object<br>
'class' keyword is used to declare class in c++. <br>

       SYNTAX
        class class_name{  <br>
        private:   <br>
        private member variables;  <br>
        private member function;  <br>
        public:   <br>
          public member variables; <br>
          public member function;   <br>
     };
   <br>
   For creating the object of class class_name inside the main function<br>

     SYNTAX
     class_name object_name;

<b>PRIVATE MEMBER FUNCTION<b> <br>
A private member function can only be called by another function that is the member of<br>
it's class. Even an object cannot invoke a private member function using the dot opeartor

<b>Static data member and Static member function<b><br>
     <b>static data member<b><br>
     static variables are normally used to maintain values common to the entire class.<br>
          SYNTAX  
          static data_type variable_name; <br>

 <b>Static member function<b> <br>
         A static function can have access to the static data member declared in the same class <br>
            SYNATX
              static rtrn_type fn_name(); <br>
               Function can be called using the class name<br>
          SYNTAX <br>
             class_name::function_name(); <br>



