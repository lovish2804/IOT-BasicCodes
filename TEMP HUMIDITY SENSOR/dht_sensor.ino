#include <DHT.h>
#include <DHT_U.h>
int DHTpin =12;
int DHTtype =22;
float temp,humidity;
DHT dht(DHTpin,DHTtype);


void setup()
{
  // put your setup code here, to run once:
Serial.begin(9600);
dht.begin();

}

void loop()
{
temp = dht.readTemperature();
humidity= dht.readHumidity();
Serial.print("DHT11 temp: ");
Serial.print(temp,0);
Serial.print("\humidity: ");
Serial.print(humidity,0);
delay(1000);

}
