void updateThingspeak() {
  String requestString = "?key=" + String(SECRET_WRITE_APIKEY) + "&field1=" + String(temp_c) + "&field2=" + String(humidity);

  Serial.println("Updateing...");

  client.print("GET /update");
  client.print(requestString);
  client.println(" HTTP/1.1");

  client.println("Host: " + String(server));
  client.println("User-Agent: arduino-ethernet");
  client.println("Connection: close");
  client.println();

  Serial.println("Updated!");

  client.stop();
}
