/*
 * C++ Program to illustrate usage of vector container
 */
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>
 
int main()
{
    std::vector< std::string > StringVector;
    std::vector< std::string >::const_iterator i;
 
    // Pushing string elements in Container
    StringVector.push_back("Python");
    StringVector.push_back("Java");
    StringVector.push_back("Haskell");
    StringVector.push_back("C++");
    StringVector.push_back("Ruby");
    StringVector.push_back("JavaScript");
    // Sorting container strings lexicographically
    sort(StringVector.begin(), StringVector.end());
    std::cout << "Sorted List of Programming Languages"
        << std::endl;
    // Printing sorted container elements
    for (i = StringVector.begin(); i != StringVector.end(); i++)
        std::cout << *i << "  ";
    std::cout << std::endl;
    return 0;
}



//  * C++ Program to Implement Vector in Stl
//  */
// #include <iostream>
// #include <vector>
// #include <string>
// #include <cstdlib>
// using namespace std;
// int main()
// {
//     vector<int> ss;
//     vector<int>::iterator it;
//     int choice, item;
//     while (1)
//     {
//         cout<<"\n---------------------"<<endl;
//         cout<<"Vector Implementation in Stl"<<endl;
//         cout<<"\n---------------------"<<endl;
//         cout<<"1.Insert Element into the Vector"<<endl;
//         cout<<"2.Delete Last Element of the Vector"<<endl;
//         cout<<"3.Size of the Vector"<<endl;
//         cout<<"4.Display by Index"<<endl;
//         cout<<"5.Dislplay by Iterator"<<endl;
//         cout<<"6.Clear the Vector"<<endl;
//         cout<<"7.Exit"<<endl;
//         cout<<"Enter your Choice: ";
//         cin>>choice;
//         switch(choice)
//         {
//         case 1:
//             cout<<"Enter value to be inserted: ";
//             cin>>item;
//             ss.push_back(item);
//             break;
//         case 2:
//             cout<<"Delete Last Element Inserted:"<<endl;
//             ss.pop_back();
//             break;
//         case 3:
//             cout<<"Size of Vector: ";
//             cout<<ss.size()<<endl;
//             break;
//         case 4:
//             cout<<"Displaying Vector by Index: ";
//             for (int i = 0; i < ss.size(); i++)
//             {
//                 cout<<ss[i]<<" ";
//             }
//             cout<<endl;
//             break;
//         case 5:
//             cout<<"Displaying Vector by Iterator: ";
//             for (it = ss.begin(); it != ss.end(); it++)
//             {
//                 cout<<*it<<" ";
//             }
//             cout<<endl;e
//             break;
//         case 6:
//             ss.clear();
//             cout<<"Vector Cleared"<<endl;
//             break;
//         case 7:
//             exit(1);
//             break;
//         default:
//             cout<<"Wrong Choice"<<endl;
//         }
//     }
//     return 0;
// }