#include <iostream>
using namespace std;

string addTask(){
    string task;
    cout << "Enter the task: ";
    getline(cin, task);
    return task;
}

int main() {
    string task = addTask();
    cout << "Task added: " << task << endl;
    return 0;
}


