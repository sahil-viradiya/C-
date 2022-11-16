#include <iostream>

using namespace std;
void stopwatch(void call())
{
    call();
}
void stopwatch_start()
{
    cout << "StopWatch IS Start ..";
}

void stopwathc_pushed()
{

    cout << "StopWatch Pushed";
}

void stopwatch_end()
{

    cout << "StopWatch End";
}

int main()
{

    int n;

    cout << "1.Start StopWathc \n 2.StopWatch Paushed \n 3. StopWathc End \n";
    cin >> n;

    switch (n)
    {
    case 1:
        stopwatch(stopwatch_start);
        break;

    case 2:
        stopwatch(stopwathc_pushed);
        break;

    case 3:
        stopwatch(stopwatch_end);
        break;

    default:
        break;
    }

    return 0;
}