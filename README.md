# Waldbrandwarnstufen-Anzeige
Arduino Projekt zur digitalen Anzeige der Waldbrandwarnstufe.

Waldbrandwarnstufen sind ein probates Mittel, um die Bevölkerung für den Umgang mit Feuer im Freien und vor dem Risiko eines
Waldbrandes zu warnen. Es gibt insgesamt 5 Stufen, wobei 1 die geringste Gefahr und 5 die höchste Gefahr kennzeichnet.
Herausgeber der Waldbrandwarnstufen sind die Umweltministerien der Länder. Diese geben pro Tag und Landkreis (oder
Waldbrandvorhersageregion) die Waldbrandwarnstufe heraus.
Die Ordnungsbehörden der Kommunen können Auflagen bezüglich des Abbrennens von Brauchtumsfeuern von der Waldbrandwarnstufe
abhängig machen oder die Waldeigentümer ein Betretungsverbot an die Waldbrandwarnstufe koppeln. Die Waldbrandwarnstufe soll die
Bevölkerung für die Gefahr sensibilisieren und ist als Empfehlung zum Schutz von Wald, Mensch und Umwelt zu verstehen. Im Land
Brandenburg gilt Folgendes:


Waldbrandstufe 1: Sehr geringe Gefahr
•Der Wald kann ohne Einschränkungen betreten werden.

Waldbrandstufe 2: Geringe Gefahr
•Um Zündquellen zu vermeiden, ist erhöhte Vorsicht geboten.
•Fahrzeuge nicht auf Waldparkplätzen mit trockener Bodenvegetation abstellen.
•Waldarbeiten wie etwa Reisig verbrennen oder Sprengungen durchführen sind untersagt.

Waldbrandstufe 3: Mittlere Gefahr
•Die Waldbrandgefahr ist erhöht.
•Die zuständige Behörde darf den Wald sperren.
•Das Betreten des Waldes ist erlaubt, bei der Nutzung von Waldparkplätzen ist erhöhte Vorsicht geboten.
•Gefährdungsträchtige Waldarbeiten (siehe Warnstufe 2) sind grundsätzlich verboten. 
•Öffentliche Feuerstellen und Grillplätze im und am Wald dürfen nicht genutzt werden.

Waldbrandstufe 4: Hohe Gefahr
•Die zuständige Behörde darf den Wald sperren.
•Öffentliche Straßen und Wege sowie Waldwege aller Arten sollten nicht verlassen werden.
•Die Forstbehörde darf Parkplätze und touristische Einrichtungen im Wald sperren sowie weitere Schutzmaßnahmen einleiten.

Waldbrandstufe 5: Sehr hohe Gefahr
•Forstbehörde und Waldeigentümer dürfen den Wald sperren.
•Der Wald sollte weder betreten noch befahren werden.
•Ausnahmen gelten nur zu Kontrolltätigkeiten durch die Forstbehörde sowie für Kräfte des Brandschutzes, Rettungsdienstes und
Katastrophenschutzes.

Grundlegende Verbote wie etwa im Wald zu rauchen, ein Feuer zu entfachen oder Waldwege mit dem Auto zu befahren bestehen
unabhängig von der geltenden Waldbrandstufe.

(Quelle: Landesbetrieb Forst Brandenburg/Berlin.de)

Die Forstbehörden der Länder leiten die Waldbrandwarnstufen aus dem Waldbrandbrandgefahrenindex Vorhersagemodell des Deutschen
Wetterdienstes ab. 

# Waldbrandgefahrenindex WBI (Quelle: DWD):

Während der Waldbrandsaison in Deutschland, welche in der Regel von März bis Ok-
tober andauert, stellt der DWD täglich aktualisierte Waldbrandgefahrenprognosen in 
Form von Indizes bereit. Der Zeitraum kann im Jahr in Abhängigkeit von der aktuellen 
Witterung unter- oder überschritten werden. Der WBI dient den verantwortlichen Lan-
desbehörden zur Einschätzung der Waldbrandgefahr sowie zur Ausgabe von Warnun-
gen. Waldbrandwarnungen fallen nicht in den Zuständigkeitsbereich des DWD. 

Die Berechnung des WBI erfolgt auf der Grundlage stündlicher Werte. Als Eingangsda-
ten in das Berechnungsmodell werden Lufttemperatur, relative Luftfeuchtigkeit, Wind-
geschwindigkeit, Niederschlagsmenge bzw. Schneemenge, sowie die kurz- und lang-
wellige Strahlung der Atmosphäre verwendet. Die Modellausgabe des WBI erfolgt in 
den Stufen 1 bis 5 (sehr geringe bis sehr hohe Gefahr), wobei auf den Maximalwert 
des Zeitraums von 12:00 bis 18:00 UTC (14:00 bis 20:00 MESZ) zurückgegriffen wird. 
Dabei werden die Daten einmal am Tag gegen 05:00 UTC (07:00 MESZ bzw. 06:00 
MEZ) aktualisiert. 

Die forstliche Einschätzung der Waldbrandgefahr kann vom DWD-Produkt abweichen. 

Die ausführliche Beschreibung des Waldbrandgefahrenindexes (WBI) des Deutschen 
Wetterdienstes stellen wir hier als PDF-Datei bereit. 
 
Ausführliche Beschreibung des Waldbrandgefahrenindexes WBI 
(Quelle DWD)

# Hintergründe zum Modell 

# Motivation 

Mit der Einführung seines neuen Waldbrandgefahrenindexes (WBI) ist der Deutsche 
Wetterdienst den Bestrebungen einer Reihe von europäischen Nachbarstaaten gefolgt, 
ältere bzw. empirisch-betonte Modelle zu erneuern. Die hier vorgestellte Modellversion 
orientiert sich an der Struktur des kanadischen Fire Weather Index (FWI) und über-
nimmt einzelne Ideen des deutschen Baumgartner- und des M68-Indexes.

# Modellstruktur 

Das Modell basiert auf Byram’s Gleichung der Feuerintensität I 

I = Hc w uf

mit Hc als Verbrennungswärme, w als Gewicht brennbarer Biomasse, und uf als Lauf-
geschwindigkeit des Bodenfeuers. Die Größe w ist eine Funktion der Streufeuchte, der 
Bodenfeuchte und des Blattflächenindexes, während uf eine Funktion der Windge-
schwindigkeit und der Streufeuchte ist. 

Wasseraufnahme und Verdunstung werden – in Erweiterung des Baumgartner-Indexes 
– mittels der Wasserhaushaltsgleichungen für den Kronenbereich, die Streuschicht und 
den Boden beschrieben. Kronenbelaubung und Streuschicht dienen als zwei Interzep-
tionsspeicher, die den Wassereintrag in den Erdboden verringern. Zudem wird die ein-
fallende Sonnenstrahlung durch den Kronenraum reduziert, was sich auf das Verduns-
tungs- bzw. Benetzungsverhalten der Streuschicht auswirkt. 

Bezüglich der oben angegebenen Grundgleichung und der zugrunde gelegten Be-
standsstruktur (Boden – Streuauflage – Kronenbereich) folgt der WBI dem kanadi-
schen FWI. Gemäß der M68-Philosophie werden drei unterschiedliche Waldbrand-
Gefährdungsregionen berücksichtigt. 

a) Bodenauflage 

Die Bodenauflage als Ort der Initialzündung besteht aus einer Streuschicht, die in An-
lehnung an den kanadischen FWI 12 mm hoch ist. Die Streu kann nach ausreichenden 
Niederschlägen einen Feuchtegehalt von 250 % (bezogen auf das Trockengewicht) 
annehmen. 

Geringe Luftfeuchte (trockene Luftmassen) und Strahlung führen zur Verringerung des 
Wassergehaltes, hohe Luftfeuchte (feuchte Luftmassen) und Niederschlag zur Erhö-
hung. Oberhalb einer Streufeuchte von 35 % wird ein Zünderfolg als sehr unwahr-
scheinlich angenommen, während unterhalb einer Streufeuchte von 9 % das Material 
als extrem zündfähig eingeschätzt wird. 

b) Laufgeschwindigkeit der Feuerfront 

Die Laufgeschwindigkeit der Feuerfront wird aus dem Streuwassergehalt und der 
Windgeschwindigkeit errechnet. Als vorläufige Grundlage dient ein Algorithmus, der 
dem kanadischen Fire Behavior Prediction System entnommen wurde. 

c) Bodenfeuchte 

Die Bodenfeuchte wird für drei Bodenarten abgeschätzt, die sich an den drei zugrunde 
gelegten Waldbrandregionen des M68-Indexes orientieren. Zündanfälligen Nadelwäl-
dern wird ein grobkörniger Boden und zündresistenteren Laubwäldern ein feinkörniger 
Boden zugewiesen. Mischwald besitzt eine mittlere Körnungsstruktur, so dass alle drei 
Modellböden ein unterschiedliches Wasserspeichervermögen aufweisen. Der Boden-
wassergehalt dient – der Philosophie des FWI folgend – als Indikator für das zur Verfü-
gung stehende Brennmaterialangebot: Bei Wasserstressbedingungen wird davon aus-
gegangen, dass mehr zündanfällige Vegetation vorhanden ist als bei guter Wasserver-
sorgung. 

# Datenversorgung und Datenausgabe 

Die Berechnung erfolgt auf der Grundlage stündlicher Zeitreihen; verwendet werden 
Lufttemperatur, relative Luftfeuchte, Windgeschwindigkeit, Niederschlagsrate bzw. 
Schneemenge, sowie die kurz- und langwellige Strahlung der Atmosphäre. Die Mo-
dellausgabe des WBI erfolgt in den Stufen 1 – 5 (sehr geringe bis sehr hohe Gefahr), 
wobei auf den Maximalwert des Zeitraums 12:00 bis 18:00 UTC (14:00 bis 
20:00 MESZ) zurückgegriffen wird. 

# Modellverhalten 

Aufgrund des Tagesgangs der meteorologischen Eingangsparameter und des berech-
neten Streuwassergehaltes besitzt die Feuerintensität ebenfalls eine 24-stündige Peri-
ode mit geringen nächtlichen und höheren nachmittäglichen Werten. Insofern reagiert 
der Index rascher auf Trocken- und Feuchtigkeit als die älteren Baumgartner- und 
M68-Verfahren. Trotz ausbleibender Niederschläge kann eine Gefahrenabsenkung bei 
feuchten (westlichen) Luftmassen eintreten, da diese in der Regel weniger zündunter-
stützend wirken als trockene (Ost-)Strömungen. 

Zunehmende Windgeschwindigkeit kann zur raschen Feuerausbreitung und damit zur 
Erhöhung des WBI führen, während unter windschwachen Bedingungen und der dann 
langsamen Feuerbewegung der Index herabgestuft wird. 

Der WBI ist so justiert, dass sein nachmittäglicher Ausgabewert grob innerhalb der 
Ergebnismenge der (häufig voneinander differierenden) Tagesausgaben des Baum-
gartner-Indexes, des M68 und des FWI liegt. 

Stand: April 2018 (Ende Zitat DWD)

# Stand der Technik:

Wenngleich es möglich ist, die Waldbrandwarnstufen tagesaktuell im Internet in Erfahrung zu bringen; oder diese per Smartphone
Apps abzurufen, ist die öffentliche Information auf großen Displays erforderlich und noch immer Handarbeit:

Häufig werden die manuell bedienbaren Displays vernachlässigt, so dass die angezeigten Stufen nicht stimmen und in dessen Folge
verlieren diese Displays insgesamt bei der Bevölkerung an Glaubwürdigkeit. Dennoch kann man auf solche Displays nicht
verzichten, denn das Abrufen der aktuellen Stufe aus dem Internet setzt beim Benutzer einen gezielten Informationswillen voraus. 
Ein Display, welches die Stufen direkt von den Forstbehörden oder dem DWD bezieht und anzeigt, 
wird eine höhere Glaubwürdigkeit genießen.

Die Projektaufgabe besteht darin, ein entsprechendes Display zu entwickeln. Als Randbedingung wird angenommen, dass Strom und
WLAN am Einsatzort des Displays vorhanden ist. Dies ist in der Regel an Ausflugsgaststätten oder Feuerwehrgerätehäusern 
der Fall.

Das Display bezieht bei Einsatz im Land Brandenburg die Daten von

https://mlul.brandenburg.de/wgs/wgs_bb.xml
https://mlul.brandenburg.de/wgs/text
Bei einem Aufstellort außerhalb des Landes Brandenburg empfiehlt sich der Abruf des Waldbrandgefahrenindex vom DWD.
Dieser ist Grundlage der Waldbrandwarnstufe und wird meist von den Forstbehörden unverändert übernommen.

https://www.dwd.de/DE/leistungen/waldbrandgef_bl/waldbrandgefbl.html

Als Hardware eignet sich ein ESP32 Mikroprozessor, der WLAN mit integriert hat. Die Anzeige kann über ein LED Raster aus LED
Streifen mit WS2812 Controller erfolgen.

# Hardware

Als Basis des Projektes dienen ein ESP32 DEVKIT, dieser wird mit der Arduino IDE (Integrated Development Environment)
programmiert, und WS2812 SMD-LED‘s.
Der ESP32 ist ein preiswerter und energieeffizienter sog. System-on-a-Chip (SoC) mit integrierten Wi-Fi und dual-mode Bluetooth.
An dem DEVKIT sind GPIO-Pins (General-purpose input/output) angebracht über diese werden die WS2812 LED’s gesteuert.

# Einrichten der Entwicklungsumgebung

Bevor man den ESP32 mit der Arduino DIE programmieren kann, muss diese erst eingerichtet werden um mit der Hardware sprechen zu
können. Alle benötigten Bibliotheken werden bei der Einrichtung mit installiert. Hier gibt es die entsprechenden Anleitungen für
verschiedene Systeme:
https://github.com/espressif/arduino-esp32#installation-instructions
Wird die Anleitung genauestens befolgt sollten keine Probleme auftreten.
Wenn die Hardware in der IDE eingerichtet wurde, kann sich um die Bibliothek zur Ansteuerung der LED‘s gekümmert werden, die für
die Umsetzung des Projektes notwendig sind. Dafür habe ich die NeoPixelBus Bibliothek von Makuna genutzt:
https://github.com/Makuna/NeoPixelBus
 
# Umsetzung

# Vermarktung

Das Projekt eignet sich als Opensource. Man kann es im Internet an geeigneter Stelle (www.github.com) platzieren. Weitere
Absatzmittler (im Sinne von bekannt machen des Projektes) können der Landesfeuerwehrverband, die Landwirtschafts- und
Umweltministerien der Länder oder die Forstbehörden sein.
Das Programmskript ist offen und kann vom Benutzer verändert werden. Falls sich ein Benutzer nicht an die Anpassung des
Programmskriptes herantraut, wird ihm diese Leistung vom Erfinder angeboten.

Alternativer Lösungsansatz – geeignet für Batteriebetrieb (?) – mit e-ink Display

https://www.exp-tech.de/new/8804/universal-e-paper-raw-panel-driver-board-esp8266-wifi-wireless


https://www.exp-tech.de/new/8697/640x384-7.5inch-e-ink-raw-display?c=1424


https://www.waveshare.com/wiki/E-Paper_ESP32_Driver_Board

https://www.waveshare.com/wiki/7.5inch_e-Paper_HAT
