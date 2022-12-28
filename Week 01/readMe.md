## Week-01 
### (Module-1)
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

### (Module-2)
    - Array 
        - Initiazling, 
        - Array input from users using for loop 
        - Sum of Array using loop
        - Product of Array using loop 
        - Overall Example: 
            #include<bits/stdc++.h>
            using namespace std;
            int main()
            {
                int n;
                cin>>n;
                int a[n];
                for(int i=0; i<n; i++)
                    cin>>a[i];
                int sum = 0;
                for(int i=0; i<n; i++)
                    sum= sum + a[i];
                cout<<sum<<endl;

                int mul = 1;
                for(int i=0; i<n; i++)
                    mul= mul * a[i];
                cout<<mul<<endl;
                return 0;
            }

    - String (Daynamic in CPP)
        - String Concatanation 
        - String Length using build in function 
        - String Shift
        - Delate String first and Last Character using function erase.(s.begin() and pop_back();
        - Overall Example: 
            #include<bits/stdc++.h>
            using namespace std;
            int main()
            {
                //Concatination
                string s = "I am eating rice.";
                string s2 = " I am also eating dal.";
                string s3 = s+s2;
                cout<<s3<<endl;

                //String Length
                cout<<s.size()<<endl;
                // String shift
                for(int i =0; i<s.size(); i++)
                {
                    s[i] = s[i] + 1;
                }
                cout<<s<<endl;

                //Delate String first and Last Character using function erase.(s.begin() and pop_back();
                s.erase(s.begin()+1);
                cout<<s<<"\n";
                s.pop_back();
                cout<<s<<"\n";
                return 0;
            }

    - Function
        -A function is a block of code which only runs when it is called. You can pass data, known as parameters, into a function. Functions are used to perform certain actions, and they are important for reusing code: Define the code once, and use it many times.
        - String First and Last Character delate using user defined function with erase(s.begin()) and pop_back() function 
        - Swapping a and b using function with ambersinged &. 
        - Overall Best Example: 
        String Function: 
            #include<bits/stdc++.h>
            using namespace std;
            string erase_first_last(string s)
            {
                s.erase(s.begin());
                s.pop_back();

                return s;
            }
            void erase_first_last2(string &s)
            {
                s.erase(s.begin());
                s.pop_back();

                cout<<"In function s="<<s<<endl;

            }
            int main()
            {
                string s;
                cin>>s;
            //    string ans = erase_first_last(s);
            //
            //    cout<<s<<endl;
            //    cout<<ans<<endl;
                erase_first_last2(s);
                cout<<s<<endl;
                return 0;
            }

            Swapping with Function: 
            
                #include<bits/stdc++.h>
                using namespace std;
                void Swap(int &x, int &y)
                {
                    int z;
                    z = x;
                    x = y;
                    y = z;
                    cout<<x<<endl<<y<<endl;
                }
                int main()
                {
                    int a, b;
                    cin>>a>>b;
                    Swap(a,b);

                    return 0;
                }

    - Pointer 
        -Overall Example: 
        int x = 10;
        int *y = &x;
        cout<<x<<endl;
        cout<<y<<endl;
        cout<<*y<<endl;

        x = 100;
        cout<<x<<endl;
        cout<<y<<endl;
        cout<<*y<<endl;

    -Dynamic Allocation 
        - Static Memory takes space from stack. 
        - Dynamic Memory takes space from heap.
        - New int (from heap) [Run Time]
        - Delate Function. [Free]

    - Vector 
        -Vectors in C++ are sequence containers representing arrays that can change their size during runtime. They use contiguous storage locations for their elements just as efficiently as in arrays, which means that their elements can also be accessed using offsets on regular pointers to its elements.

        - Vector initializing 
            vector<int> a; 
            vector<data_type> variable_name; 
        - Access 
            a[ith]
        - Size of Vector 
            variable_name.size()
        - Element Delating and Insertion
            a.insertion(a.begin()+1, 100);
        - Resize

    -swap min max 
        -swap 
        -min
        -max
        -sort
    

    

    
        