#include <iostream>
using namespace std;

int main()
{

    int low = 1;
    int high = 100;
    string ls = to_string(low);
    string hs = to_string(high);
    int a;
    string as;
    int sumLeft = 0;
    int sumRight = 0;

    for (int i = low; i <= high; i++)
    {
        as = to_string(i);
        int size = as.size();

        if (size % 2 == 0)
        {
            for (int j = 0; j < size / 2; j++)
            {
                int digitInt = stoi(string(1, as[j]));
                sumLeft += digitInt;
            }
            for (int j = size / 2; j < size; j++)
            {
                int digitInt = stoi(string(1, as[j]));
                sumRight += digitInt;
            }

            if (sumLeft == sumRight)
            {
                cout << as << endl;
            }
        }
    }

    return 0;
}