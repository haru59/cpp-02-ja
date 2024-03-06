// コードを入力してください
#include <iostream>
#include "traffic_light.h"

int main(){
    TrafficLight light = TrafficLight::red;
    std::cout << get_action(light) << std::endl;
    return 0;
}