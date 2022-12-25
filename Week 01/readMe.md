# Week-01 (Module-1)
- Introduction 
        Basic Syntax 
        #include<iostream>
        using namesapce std; 
        int main()
        {
            cout << "Hello World!" <<endl; 
            return 0; 
        }

    - Basic IO 
        >> - Extraction Operator (Output)
        << - Insertion Operator (input)
        cin - input 
        cout - output.
        endl - New line print. 

        - Data Types 
            int, float, double, char, string. 

            String input 
            getline(cin, str);

        - File input, output and close
            ofstream, ifstream, ifclose. 

        - Header FIle 
            #include<bits/stdc++.h>

    - Namespace 
        A namespace is a declarative region that provides a scope to the identifiers (the names of types, functions, variables, etc) inside it. Namespaces are used to organize code into logical groups and to prevent name collisions that can occur especially when your code base includes multiple libraries.

    - if-else
        if(conditon)
        {
            //code
        }
        else 
        {
            //code
        }
        condition usags: 
        - True -= 0;
        - flase == 0;
        bool x = true; 
        bool y = false; 
        if(y && x)
        if(x || y)

        - Nested If-Else
            int z = 5; 
            if(z<10)
            {
                cout<<"True";
                if(x)
                {
                    cout<<"I am nested if";

                }
                else
                {
                    cout<<"I am nested else\n";
                }
            }
            else
            {
                cout<<"false";
            }

            swicth Syntax: 

            int day = 5;
            switch(day) // expression
            {
                case 3:
                    cout<<"Day 3\n";
                    break;

                case 5:
                    cout<<"Day 5\n";
                    break;

                default:
                    cout<<"Default\n";
                    break;
            }
    - Loop 
        - for loop
            for(exp_init; condition; exp_Update)
            {
                //statement
            }
        [initiaze and condition and update then execute]
        - while loop 
            while(condition)
            {
                statement;
                update;
            }
        [initiaze codition code and update]
        -do while loop
            do{
                code;
                update;

            }while(condition)
        [initilized code, update and condtion]

        break and Continue 
        [Break use when condtion match]
        