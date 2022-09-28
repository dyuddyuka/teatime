#include <iostream>
#include <string>

using namespace std;

struct pipe
{
    int length, diameter;
    bool isWorking;
};

void menu()
{
    cout << "1. Say hello;" << endl;
    cout << "2. Say bye;" << endl;
    cout << "3. Pipe info;" << endl;
    cout << endl;
}

void pipeInfo(pipe obj)
{
    cout << "1. Length " << obj.length << endl;
    cout << "2. Diameter;"<< obj.diameter << endl;
    cout << "3. Working Status;"<< obj.isWorking << endl;
    cout << endl;
}

pipe newPipe()
{
    pipe nPipe;
    cin >> nPipe.length >> nPipe.diameter;
    return nPipe;
}

int main()
{
    //  cout << "Hello Daaaaaaarlin`!\n";

    bool isRunning = true;
    int command;

    pipe mainPipe;
    mainPipe = newPipe();



    while (isRunning)
    {
        menu();
        cin >> command;
        switch (command)
        {
        case 1:
            cout << "Hello, Daaaaaaarlin`!\n";
            break;
        case 2:
            cout << "Bye, Daaaaaaarlin`!\n";
            isRunning = false;
            break;
        case 3:
            pipeInfo(mainPipe);

            break;

        }

    }
}

