#include <iostream>
#include <fstream>
#include "FlowNetwork.h"

using namespace std;

int main()
{
    string filename;
    cin >> filename;
    ifstream file(filename);
    FlowNetwork* network = new FlowNetwork();
    char from, to;
    int cap;
    while (file >> from >> to >> cap) {
        network->add_arc(from, to, cap);
    }

    cout << network->maximize_flow();
}