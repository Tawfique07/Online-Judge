#include <iostream>

using namespace std;

int main()
{
    int H, U, D, F;
    while (cin >> H >> U >> D >> F)
    {
        if (H == 0)
        {
            break;
        }
        double fatigue, initial_height = 0.0, distance_climbed = 0.0, height_after_climb, height_after_slide;
        int day = 1;
        fatigue = (double)(U * F) / 100.00;
        distance_climbed = U;
        height_after_climb = initial_height + distance_climbed;
        height_after_slide = height_after_climb - D;

        while (height_after_climb <= H)
        {
            if (height_after_slide < 0)
            {
                break;
            }
            day++;
            initial_height = height_after_slide;
            distance_climbed -= fatigue;

            if (0 <= distance_climbed)
            {
                height_after_climb = initial_height + distance_climbed;
            }
            else
            {
                height_after_climb = initial_height;
            }
            height_after_slide = height_after_climb - D;
        }
        if (H < height_after_climb)
        {
            cout << "success on day " << day << endl;
        }
        else
        {
            cout << "failure on day " << day << endl;
        }
    }
}