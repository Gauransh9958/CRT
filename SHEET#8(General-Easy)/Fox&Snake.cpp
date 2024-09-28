
#include <iostream>
#include <algorithm>
#include <iomanip>
#include <string>
#include <cmath>
#include <cstring>
using namespace std;

void solution2()
{
    int lines, width;
    cin >> lines >> width;
    int counter = 0;
    for (int i = 0; i < lines; i++)
    {
        if (i % 2 == 0)
        {
            for (int x = 0; x < width; x++)
            {
                cout << "#";
            }
        }
        else
        {
            counter++;
            for (int z = 0; z < width; z++)
            {
                if ((counter % 2 == 1 && z == width - 1) || (counter % 2 == 0 && z == 0))
                {
                
                    cout << "#";
                }
                else
                {
                    cout << ".";
                }
            }
        }
        cout << endl;
    } 
}
int main()
{
    int lines, width;
    cin >> lines >> width;
    bool end = true;
    for (int i = 0; i < lines; i++)
    {
        if (i % 2 == 0)
            for (int j = 0; j < width; j++)
            {
                cout << '#';
            }
        else if (end)
            for (int j = 0; j < width; j++)
            {
                if (j == width - 1)
                {
                    cout << '#';
                    end = !end;
                }
                else
                    cout << '.';
            }
        else if (!end)
            for (int j = 0; j < width; j++)
            {
                if (j == 0)
                {
                    cout << '#';

                    end = !end;
                }
                else
                    cout << '.';
            }

        cout << endl;
    }
}
