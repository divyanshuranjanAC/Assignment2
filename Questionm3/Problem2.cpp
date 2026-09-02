#include <iostream>
using namespace std;

namespace Physics
{
    double clamp(double value, double min, double max)
    {
        if (value < min)
            return min;

        if (value > max)
            return max;

        return value;
    }

    double lerp(double a, double b, double t)
    {
        return a + (b - a) * t;
    }
}


namespace GameMath
{
    int clamp(int value, int min, int max)
    {
        if (value < min)
            return min;

        if (value > max)
            return max;

        return value;
    }

    double lerp(double a, double b, double t)
    {
        return a + (b - a) * t;
    }
}


int main()
{
    double velocity = 120.5;

    cout <<"Physics clamp: "<< Physics::clamp(velocity, 0, 100)<< endl;

    int health = 120;

    cout << "GameMath clamp: "<< GameMath::clamp(health, 0, 100) << endl;


    cout << "Physics lerp: "<< Physics::lerp(0, 100, 0.5)<< endl;

    cout << "GameMath lerp: "<< GameMath::lerp(0, 100, 0.25)<< endl;


    // Limited scope
    {
        using namespace Physics;

        cout << "Inside block: "<< clamp(150.0, 0.0, 100.0)<< endl;
    }

    return 0;
}