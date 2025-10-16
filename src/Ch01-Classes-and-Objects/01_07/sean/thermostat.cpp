#include <iostream>

class Thermostat
{
public:
  // Constructor to initialize the thermostat
  Thermostat(float temp, unsigned int m, const std::string &loc)
  {
    temperature = temp;
    mode = m;
    location = loc;
  }
  // Destructor
  ~Thermostat()
  {
    std::cout << "Thermostat in " << location << " is being destroyed." << std::endl;
  } 
  // Member function to display current status of the thermostat
  void displayStatus()
  {
    std::cout << "Location: " << location << " Temperature: " << temperature << "°C Mode: " << (mode == 0 ? "OFF " : (mode == 1 ? "HEAT " : "COOL ")) << std::endl;   
  }
private:
  float temperature;    // Temperature in degrees Celsius
  unsigned int mode;    // Mode (0 for OFF, 1 for HEAT, 2 for COOL)
  std::string location; // Location of the thermostat
};  