/* Dieses Programm ist Freie Software: Sie können es unter den Bedingungen
 * der GNU General Public License, wie von der Free Software Foundation,
 * Version 3 der Lizenz oder (nach Ihrer Wahl) jeder neueren
 * veröffentlichten Version, weiter verteilen und/oder modifizieren.
 * 
 * Dieses Programm wird in der Hoffnung bereitgestellt, dass es nützlich sein wird, jedoch
 * OHNE JEDE GEWÄHR,; sogar ohne die implizite
 * Gewähr der MARKTFÄHIGKEIT oder EIGNUNG FÜR EINEN BESTIMMTEN ZWECK.
 * Siehe die GNU General Public License für weitere Einzelheiten.
 *
 * Sie sollten eine Kopie der GNU General Public License zusammen mit diesem
 * Programm erhalten haben. Wenn nicht, siehe <https://www.gnu.org/licenses/>.
 */

//#====== Einbinden der zu nutzenden Bibliotheken (Libraries) ===================#

#include <WiFiScan.h>
#include <WiFiGeneric.h>
#include <WiFiType.h>
#include <WiFi.h>
#include <WiFiServer.h>
#include <WiFiAP.h>
#include <ETH.h>
#include <WiFiMulti.h>
#include <WiFiUdp.h>
#include <WiFiSTA.h>
#include <WiFiClient.h>
#include <HTTPClient.h>
#include <WiFiClientSecure.h>
#include <NeoPixelBus.h>

//#====== Definition des Netzwerknamens und -schlüssels ======================#

const char* ssid = "Lokal_zum_Parsen";
const char* password = "Arduino&ESP32";
WiFiClientSecure client;

//#====== Definition der genutzen LED Menge und des LED Datenpins ============#

const uint16_t PixelCount = 15;
const uint8_t PixelPin = 12;
NeoPixelBus<NeoGrbFeature, Neo800KbpsMethod> strip(PixelCount, PixelPin);

//#====== Definition der Farben für die LEDs (rot, grün, blau) ===============#

RgbColor green  (0, 32, 0);
RgbColor yellow (32, 32, 0);
RgbColor orange (64, 32, 0);
RgbColor red    (64, 0, 0);
RgbColor purple (64, 0, 128);
RgbColor black  (0, 0, 0);
RgbColor blue   (0, 0, 128);

//#====== Definition der Variable gefahr für die Waldbrandgefahrenstufe ======# 
int gefahr = 0;

//#====== Setup (einrichtung) des Programms ==================================#

void setup() {
  

  Serial.begin(115200);
  Serial.println("Warte auf Verbindung");
  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED)
  {
    delay(500);
    Serial.print(".");
  }
  Serial.println("");
  Serial.print("Verbunden mit: ");
  Serial.println(ssid);
  Serial.print("IP Addresse: ");
  Serial.println(WiFi.localIP());
  
  strip.Begin();
  strip.Show();
}

//#====== Loop (schleife) des Programms ======================================#
void loop() {
  HTTPClient http;
  
  /*Bezugsquelle der Waldbrandgefahrenstufe, anpassen auf Bundesland*/
  http.begin("https://mlul.brandenburg.de/wgs/wgs_bb.xml/");   /*"*/
  
  if (http.GET() == HTTP_CODE_OK)
  {
    /*Auslesen des Seitenquelltextes*/
    String xml = http.getString();
    /*Quelltext wird in Konsole geschrieben*/
    Serial.println(xml);
    /*Landkreis und Waldbrandgefahrenstufe wird aus Quelltext gelesen (parsing)*/
    String landkreis = xml.substring(227, 236);
    /*Waldbrandgefahrenstufe wird von String zum Integer konvertiert*/
    int gefahr = xml.substring(238, 239).toInt();
    /*Informationen werden als Satz in Konsole bereitgestellt*/
    Serial.print("[");
    Serial.print("Die Waldbrandgefahrenstufe für den Landkreis " + landkreis + " beträgt " + gefahr);
    Serial.println("]");
    /*Wenn die Waldbrandgefahrenstufe gleich null ist, leuchtet keine LED*/
    if (gefahr == 0) {
      strip.SetPixelColor(0, blue);
      strip.SetPixelColor(1, blue);
      strip.SetPixelColor(2, blue);
      
      strip.SetPixelColor(3, blue);
      strip.SetPixelColor(4, blue);
      strip.SetPixelColor(5, blue);
      
      strip.SetPixelColor(6, blue);
      strip.SetPixelColor(7, blue);
      strip.SetPixelColor(8, blue);
      
      strip.SetPixelColor(9, blue);
      strip.SetPixelColor(10, blue);
      strip.SetPixelColor(11, blue);
      
      strip.SetPixelColor(12, blue);
      strip.SetPixelColor(13, blue);
      strip.SetPixelColor(14, blue);
      
      strip.Show();
    }
    else {

    }
    /*Wenn die Waldbrandgefahrenstufe gleich eins ist, leuchtet die erste LED in grün*/
    if (gefahr == 1) {
      strip.SetPixelColor(0, green);
      strip.SetPixelColor(1, green);
      strip.SetPixelColor(2, green);
      
      strip.SetPixelColor(3, black);
      strip.SetPixelColor(4, black);
      strip.SetPixelColor(5, black);
      
      strip.SetPixelColor(6, black);
      strip.SetPixelColor(7, black);
      strip.SetPixelColor(8, black);
      
      strip.SetPixelColor(9, black);
      strip.SetPixelColor(10, black);
      strip.SetPixelColor(11, black);
      
      strip.SetPixelColor(12, black);
      strip.SetPixelColor(13, black);
      strip.SetPixelColor(14, black);
      
      strip.Show();
    }
    else {
      
    }
    /*Wenn die Waldbrandgefahrenstufe gleich zwei ist, leuchten die erste und zweite LED in gelb*/
    if (gefahr == 2) {
      strip.SetPixelColor(0, yellow);
      strip.SetPixelColor(1, yellow);
      strip.SetPixelColor(2, yellow);
      
      strip.SetPixelColor(3, yellow);
      strip.SetPixelColor(4, yellow);
      strip.SetPixelColor(5, yellow);
      
      strip.SetPixelColor(6, black);
      strip.SetPixelColor(7, black);
      strip.SetPixelColor(8, black);
      
      strip.SetPixelColor(9, black);
      strip.SetPixelColor(10, black);
      strip.SetPixelColor(11, black);
      
      strip.SetPixelColor(12, black);
      strip.SetPixelColor(13, black);
      strip.SetPixelColor(14, black);
      
      strip.Show();
    }
    else {

    }
    /*Wenn die Waldbrandgefahrenstufe gleich drei ist, leuchten die erste, zweite und dritte LED in orange*/
    if (gefahr == 3) {
      strip.SetPixelColor(0, orange);
      strip.SetPixelColor(1, orange);
      strip.SetPixelColor(2, orange);
      
      strip.SetPixelColor(3, orange);
      strip.SetPixelColor(4, orange);
      strip.SetPixelColor(5, orange);
      
      strip.SetPixelColor(6, orange);
      strip.SetPixelColor(7, orange);
      strip.SetPixelColor(8, orange);
      
      strip.SetPixelColor(9, black);
      strip.SetPixelColor(10, black);
      strip.SetPixelColor(11, black);
      
      strip.SetPixelColor(12, black);
      strip.SetPixelColor(13, black);
      strip.SetPixelColor(14, black);
      
      strip.Show();
    }
    else {

    }
    /*Wenn die Waldbrandgefahrenstufe gleich vier ist, leuchten die erste, zweite, dritte und vierte LED in rot*/
    if (gefahr == 4) {
      strip.SetPixelColor(0, red);
      strip.SetPixelColor(1, red);
      strip.SetPixelColor(2, red);
      
      strip.SetPixelColor(3, red);
      strip.SetPixelColor(4, red);
      strip.SetPixelColor(5, red);
      
      strip.SetPixelColor(6, red);
      strip.SetPixelColor(7, red);
      strip.SetPixelColor(8, red);
      
      strip.SetPixelColor(9, red);
      strip.SetPixelColor(10, red);
      strip.SetPixelColor(11, red);
      
      strip.SetPixelColor(12, black);
      strip.SetPixelColor(13, black);
      strip.SetPixelColor(14, black);
      
      strip.Show();
    }
    else {

    }
    /*Wenn die Waldbrandgefahrenstufe gleich fünf ist, leuchten alle fünf LEDs in Lila*/
    if (gefahr == 5) {
      strip.SetPixelColor(0, purple);
      strip.SetPixelColor(1, purple);
      strip.SetPixelColor(2, purple);
      
      strip.SetPixelColor(3, purple);
      strip.SetPixelColor(4, purple);
      strip.SetPixelColor(5, purple);
      
      strip.SetPixelColor(6, purple);
      strip.SetPixelColor(7, purple);
      strip.SetPixelColor(8, purple);
      
      strip.SetPixelColor(9, purple);
      strip.SetPixelColor(10, purple);
      strip.SetPixelColor(11, purple);
      
      strip.SetPixelColor(12, purple);
      strip.SetPixelColor(13, purple);
      strip.SetPixelColor(14, purple);
      
      strip.Show();
    }
    else {

    }

  }
  /*Kann der ESP32 keine verbindung mit dem Internet oder Bezugsquelle herstellen, wird eine Fehlermeldung in der Konsole ausgegeben*/ 
  else Serial.println("Verbindung mit \"MLUL Brandenburg\" nicht möglich!");
  http.end();
  /*Im Zeitraum von einer Stunde werden die Daten aktualisiert*/
  delay(3600000);
}
