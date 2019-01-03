void calcSensors()
{
  tempCalc();
  humidityCalc();
}

void sensorReport()
{
  calcSensors();

  Serial.print("$");
  Serial.print(",temperature=");
  Serial.print(temp_c);
  Serial.print(",humidity=");
  Serial.print(humidity);
  Serial.println(",#");

  // String outputString = String(DEV_ID) + ",";
  // outputString += String(temp_c) + ',' + String(humidity);
  //Serial.println(outputString);
}
