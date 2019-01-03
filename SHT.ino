#include <SHT1x.h>

SHT1x sht1x(shtDataPin, shtClockPin);

void tempCalc()
{
  temp_c = sht1x.readTemperatureC();
}

void humidityCalc()
{
  humidity = sht1x.readHumidity();
}
