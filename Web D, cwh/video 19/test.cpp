// #include <iostream>
// #include <string>
// #include <stack>

// int main()
// {

//     std::string text, arg;
//     int cmd;
//     std::stack<std::string> history;

//     // std::cin >> cmd;
//     while (std::cin >> cmd)
//     {
//         switch (cmd)
//         {
//         case 1: // Append
//             std::cin >> arg;
//             history.push(text);
//             text.append(arg);
//             break;
//         case 2: // Erase
//             std::cin >> cmd;
//             history.push(text);
//             text.erase(text.length() - cmd);
//             break;
//         case 3: // Get
//             std::cin >> cmd;
//             std::cout << text[cmd - 1] << '\n';
//             break;
//         case 4: // Undo
//             text = std::move(history.top());
//             history.pop();
//             break;
//         }
//     }
//     return 0;
// }
#include <iostream>
#include <stack>

using namespace std;

struct Queue
{
    stack<int> s1, s2;

    void enqueue(int x)
    {
        s1.push(x);
    }

    void dequeue()
    {
        if (s2.empty())
        {
            while (!s1.empty())
            {
                s2.push(s1.top());
                s1.pop();
            }
        }
        if (!s2.empty())
        {
            s2.pop();
        }
    }

    void printFront()
    {
        if (s2.empty())
        {
            while (!s1.empty())
            {
                s2.push(s1.top());
                s1.pop();
            }
        }
        if (!s2.empty())
        {
            cout << s2.top() << endl;
        }
    }
};

int main()
{
    Queue q;
    int queryType, x;

    while (cin >> queryType)
    {
        switch (queryType)
        {
        case 1:
            cin >> x;
            q.enqueue(x);
            break;
        case 2:
            q.dequeue();
            break;
        case 3:
            q.printFront();
            break;
        default:
            cout << "Invalid query type\n";
            break;
        }
    }

    return 0;
}
