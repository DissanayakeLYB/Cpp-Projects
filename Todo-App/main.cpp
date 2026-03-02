#include <iostream>
using namespace std;

string tasks[100];
int taskCount = 0;

string addTask(){
    string task;
    cout << "Enter the task: ";
    getline(cin, task);
    if (taskCount >= 100) {
        cout << "Task list is full" << endl;
    } else {
        tasks[taskCount] = task;
        taskCount++;
    }
    tasks[taskCount] = task;
    return task;
}

int main() {
    string task = addTask();
    cout << "Task added: " << task << endl;
    return 0;
}


