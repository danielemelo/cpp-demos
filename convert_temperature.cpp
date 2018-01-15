#include <iostream>
using namespace std;
int main() {
  float temperature;
  cout<<"Report temperature in Celsius (°C): ";
  cin>>temperature;
  temperature = ((9 * temperature) + 160) / 5; // formula
  cout<<"The temperature in Fahrenheit (°F): "<<temperature;
  return 0;
}
