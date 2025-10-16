#include "thermostat.cpp"

int main()
{
  // Create a Thermostat object
  Thermostat livingRoomThermostat(22.5, 1, "Living Room");

  // Display the status of the thermostat
  livingRoomThermostat.displayStatus();

  return 0;
}