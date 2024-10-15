#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"ENTER N THE LENGTH OF STRING ==>>"<<endl;
    cin >> n;
    string s;
    cout<<"ENTER THE STRING ==>>"<<endl;
    for(int i=0;i<n;i++)cin >> s[i];
    char key;
    cout<<"ENTER KEY ==>>"<<endl;
    cin >> key;
    int start=0;
    int end=n-1;
    int mid;
    while(start<=end){
        mid=(start+end)/2;
        if(key==s[mid]){
            cout<<"PRESENT AT PLACE ==>> "<<mid+1<<endl;
            break;
        }
        if(s[mid]<key){
            start = mid+1;
        }
        else if(s[mid]>key){
            end = mid -1;
        }
    }
}
// #include <iostream>
// #include <vector>
// #include <string>

// int linearSearch(std::vector<std::string> strings, std::string target) {
//     /**
//      * Searches for the target string in the list of strings using linear search.
//      *
//      * Args:
//      *     strings (std::vector<std::string>): A list of strings to search in.
//      *     target (std::string): The string to search for.
//      *
//      * Returns:
//      *     int: The index of the target string if found, -1 otherwise.
//      */
//     for (int i = 0; i < strings.size(); i++) {
//         if (strings[i] == target) {
//             return i; // Return the index of the target string
//         }
//     }
//     return -1; // Return -1 if the target string is not found
// }

// int main() {
//     std::vector<std::string> strings = {"apple", "banana", "cherry", "date", "elderberry"};
//     std::string target = "cherry";
//     int result = linearSearch(strings, target);

//     if (result != -1) {
//         std::cout << "Target string \"" << target << "\" found at index " << result << std::endl;
//     } else {
//         std::cout << "Target string \"" << target << "\" not found" << std::endl;
//     }

//     return 0;
// }