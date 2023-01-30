#include <iostream>

using namespace std;

double result = 0;
char op;
double a, b;

template <typename T, typename U>
T calculator(T a, U b) 
{
    cout << "Select an operator:";
    cin >> op;
    
    if (op == 'Q')
    {
        cout << "Quit" << endl;
        return 0;
    }

    if (op == '+')
    {
        cout << "Input two number:";
        cin >> a;
        cin >> b;
        
        result = a + b;
        cout << "Answer:" << result << "\n";
    }

    else if (op == '-')
    {
        cout << "Input two number:";
        cin >> a;
        cin >> b;

        result = a - b;
        cout << "Answer:" << result << "\n";
    }

    else if (op == '*')
    {
        cout << "Input two number:";
        cin >> a;
        cin >> b;

        result = a * b;
        cout << "Answer:" << result << "\n";
      
    }

    else if (op == '/')
    {
        cout << "Input two number:";
        cin >> a;
        cin >> b;

        if (b == 0)
        {
            cout << "Answer:" << "cannot divide by 0." << endl;
        }
        else
        {
            result = a / (float)b;
            cout << "Answer:" << result << "\n";
        }
    }
}


int main()

{
    cout << "--------------" << "\n";
    cout << "+ : add" << "\n";
    cout << "- : subtract" << "\n";
    cout << "* : multiply" << "\n";
    cout << "/ : divide" << "\n";
    cout << "Q : quit" << "\n";
    cout << "--------------" << "\n";

    calculator(a, b);
}




