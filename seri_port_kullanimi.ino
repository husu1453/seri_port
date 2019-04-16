void setup() { 
Serial.begin(9600);//Su an Arduino ve bilgisayar arsaında bir haberleşme başlattık.
}//Void setup kisminda ledimizin pini gibi şeyler belirtiriz.Bu kısmdaki kodlar sadece bir kere okunur tekrarlanmaz.
void loop() {
Serial.println("Arduino Kafası");//Serial.println yazdık çünkü böyle daha okunabilir bir halde oluyor.Siz isterseniz (Serial.print) yazabilsiniz.

}//Void loop kIsmI her seferinde tekrarlanır.Loop = Dongu
