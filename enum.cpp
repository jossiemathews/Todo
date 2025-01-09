#include <iostream>

enum class Color
{
    red,
    green,
    orange
};

Color &traffic_light(Color &light)
{
    switch (light)
    {
    case Color::red:
        return light = Color::green;
    case Color::orange:
        return light = Color::red;
    default:
        return light = Color::orange;
    }
}

int main()
{
    Color light = static_cast<Color>(1);
    std::cout << "The light is " << static_cast<int>(light) << std::endl;
    light = traffic_light(light);
    std::cout << "The light is " << static_cast<int>(light) << std::endl;
    light = traffic_light(light);
    std::cout << "The light is " << static_cast<int>(light) << std::endl;
    light = traffic_light(light);
    std::cout << "The light is " << static_cast<int>(light) << std::endl;
    return 0;
}