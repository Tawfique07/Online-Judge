#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int part, budget, hotel, weekend;
    while (cin >> part >> budget >> hotel >> weekend)
    {
        int expd = budget * 2;
        for (int i = 0; i < hotel; i++)
        {

            int cost, total_cost, seat = 0, x;
            cin >> cost;
            for (int j = 0; j < weekend; j++)
            {
                cin >> x;
                if (x > seat)
                {
                    seat = x;
                }
            }

            total_cost = cost * part;
            if (total_cost <= budget)
            {
                if (part <= seat)
                {
                    if (total_cost < expd)
                    {
                        expd = total_cost;
                    }
                }
            }
        }
        if (expd <= budget)
        {
            cout << expd << endl;
        }
        else
        {
            cout << "stay home" << endl;
        }
    }

    return 0;
}