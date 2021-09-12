#include <ESP8266WiFi.h>              // Gerekli dosyalar programa dahil ediliyor.
#include <ESP8266WebServer.h>
#define led1 D1
#define led2 D2
#define led3 D3
#define led4 D4
#define led5 D5
#define led6 D6
#define led7 D7
#define led8 D8

const char* ssid = "nodemcu";       //Kablosuz ağ SSID'si buraya yazılıyor.
const char* password = "12345678";  

ESP8266WebServer server(80);                // Tarayıcıların kullandığı port olan 80 numaralı 
                                                                    // port kullanılarak "server" isminde sunucu oluşturuluyor.
IPAddress yerelIP(192,168,2,1);              // IP adresi, ağ geçidi ve alt ağ maskesi tanımlanıyor.
IPAddress agGecidi(192,168,2,1);
IPAddress altAgMaskesi(255,255,255,0);

void sayfa_bulunamadi()                              //Eğer hatalı bir istek yapılırsa bu alt program çalışacak.
{  
  server.send(404, "text/html", "<html><h1>HATA</h1></html>");    //Ekrana hata mesajı  
                                                                                                                   //yazdırılıyor.  
}

void anasayfa()
{
  String sayfa = "<!DOCTYPE html>";
         sayfa+="<html>";
         sayfa+="<p><a href=\"/led1yak\">LED1ON</a> <a href=\"/led1son\">LED1OFF</a> </p>";
         sayfa+="<br></br>";
         sayfa+="<p><a href=\"/led2yak\">LED2ON</a> <a href=\"/led2son\">LED2OFF</a> </p>";
         sayfa+="<br></br>";
         sayfa+="<p><a href=\"/led3yak\">LED3ON</a> <a href=\"/led3son\">LED3OFF</a> </p>";
         sayfa+="<br></br>";
         sayfa+="<p><a href=\"/led4yak\">LED4ON</a> <a href=\"/led4son\">LED4OFF</a> </p>";
         sayfa+="<br></br>";
         sayfa+="<p><a href=\"/led5yak\">LED5ON</a> <a href=\"/led5son\">LED5OFF</a> </p>";
         sayfa+="<br></br>";
         sayfa+="<p><a href=\"/led6yak\">LED6ON</a> <a href=\"/led6son\">LED6OFF</a> </p>";
         sayfa+="<br></br>";
         sayfa+="<p><a href=\"/led7yak\">LED7ON</a> <a href=\"/led7son\">LED7OFF</a> </p>";
         sayfa+="<br></br>";
         sayfa+="<p><a href=\"/led8yak\">LED8ON</a> <a href=\"/led8son\">LED8OFF</a> </p>";
         sayfa+="<br></br>";
         sayfa+="<p><a href=\"/allon\">All On</a> <a href=\"/alloff\">All Off</a> </p>";
         sayfa+="<br></br>";
         sayfa+="<p><a href=\"/led1yak\">Refresh Page</a></p>";
         sayfa+="<br></br>";
         sayfa+="</html>";
  server.send(200,"text/html; charset=utf-8",sayfa); 
}

void led1yak() //led1
{
  digitalWrite(led1,HIGH);
  String sayfa = "<!DOCTYPE html>";
         sayfa+="<html>";
         sayfa+="<p><a href=\"/led1yak\">LED1ON</a> <a href=\"/led1son\">LED1OFF</a> </p>";
         sayfa+="<br></br>";
         sayfa+="<p><a href=\"/led2yak\">LED2ON</a> <a href=\"/led2son\">LED2OFF</a> </p>";
         sayfa+="<br></br>";
         sayfa+="<p><a href=\"/led3yak\">LED3ON</a> <a href=\"/led3son\">LED3OFF</a> </p>";
         sayfa+="<br></br>";
         sayfa+="<p><a href=\"/led4yak\">LED4ON</a> <a href=\"/led4son\">LED4OFF</a> </p>";
         sayfa+="<br></br>";
         sayfa+="<p><a href=\"/led5yak\">LED5ON</a> <a href=\"/led5son\">LED5OFF</a> </p>";
         sayfa+="<br></br>";
         sayfa+="<p><a href=\"/led6yak\">LED6ON</a> <a href=\"/led6son\">LED6OFF</a> </p>";
         sayfa+="<br></br>";
         sayfa+="<p><a href=\"/led7yak\">LED7ON</a> <a href=\"/led7son\">LED7OFF</a> </p>";
         sayfa+="<br></br>";
         sayfa+="<p><a href=\"/led8yak\">LED8ON</a> <a href=\"/led8son\">LED8OFF</a> </p>";
         sayfa+="<br></br>";
         sayfa+="<p><a href=\"/led1yak\">Refresh Page</a></p>";
         sayfa+="<br></br>";
         sayfa+="</html>";
  server.send(200,"text/html; charset=utf-8",sayfa); 
}

void led1son()
{
  String sayfa = "<!DOCTYPE html>";
         sayfa+="<html>";
         sayfa+="<p><a href=\"/led1yak\">LED1ON</a> <a href=\"/led1son\">LED1OFF</a> </p>";
         sayfa+="<br></br>";
         sayfa+="<p><a href=\"/led2yak\">LED2ON</a> <a href=\"/led2son\">LED2OFF</a> </p>";
         sayfa+="<br></br>";
         sayfa+="<p><a href=\"/led3yak\">LED3ON</a> <a href=\"/led3son\">LED3OFF</a> </p>";
         sayfa+="<br></br>";
         sayfa+="<p><a href=\"/led4yak\">LED4ON</a> <a href=\"/led4son\">LED4OFF</a> </p>";
         sayfa+="<br></br>";
         sayfa+="<p><a href=\"/led5yak\">LED5ON</a> <a href=\"/led5son\">LED5OFF</a> </p>";
         sayfa+="<br></br>";
         sayfa+="<p><a href=\"/led6yak\">LED6ON</a> <a href=\"/led6son\">LED6OFF</a> </p>";
         sayfa+="<br></br>";
         sayfa+="<p><a href=\"/led7yak\">LED7ON</a> <a href=\"/led7son\">LED7OFF</a> </p>";
         sayfa+="<br></br>";
         sayfa+="<p><a href=\"/led8yak\">LED8ON</a> <a href=\"/led8son\">LED8OFF</a> </p>";
         sayfa+="<br></br>";
         sayfa+="<p><a href=\"/allon\">All On</a> <a href=\"/alloff\">All Off</a> </p>";
         sayfa+="<br></br>";
         sayfa+="<p><a href=\"/led1yak\">Refresh Page</a></p>";
         sayfa+="<br></br>";
         sayfa+="</html>";
  server.send(200,"text/html; charset=utf-8",sayfa);   
}

void led2yak() //led2
{
  digitalWrite(led2,HIGH);
  String sayfa = "<!DOCTYPE html>";
         sayfa+="<html>";
         sayfa+="<p><a href=\"/led1yak\">LED1ON</a> <a href=\"/led1son\">LED1OFF</a> </p>";
         sayfa+="<br></br>";
         sayfa+="<p><a href=\"/led2yak\">LED2ON</a> <a href=\"/led2son\">LED2OFF</a> </p>";
         sayfa+="<br></br>";
         sayfa+="<p><a href=\"/led3yak\">LED3ON</a> <a href=\"/led3son\">LED3OFF</a> </p>";
         sayfa+="<br></br>";
         sayfa+="<p><a href=\"/led4yak\">LED4ON</a> <a href=\"/led4son\">LED4OFF</a> </p>";
         sayfa+="<br></br>";
         sayfa+="<p><a href=\"/led5yak\">LED5ON</a> <a href=\"/led5son\">LED5OFF</a> </p>";
         sayfa+="<br></br>";
         sayfa+="<p><a href=\"/led6yak\">LED6ON</a> <a href=\"/led6son\">LED6OFF</a> </p>";
         sayfa+="<br></br>";
         sayfa+="<p><a href=\"/led7yak\">LED7ON</a> <a href=\"/led7son\">LED7OFF</a> </p>";
         sayfa+="<br></br>";
         sayfa+="<p><a href=\"/led8yak\">LED8ON</a> <a href=\"/led8son\">LED8OFF</a> </p>";
         sayfa+="<br></br>";
         sayfa+="<p><a href=\"/allon\">All On</a> <a href=\"/alloff\">All Off</a> </p>";
         sayfa+="<br></br>";
         sayfa+="<p><a href=\"/led1yak\">Refresh Page</a></p>";
         sayfa+="<br></br>";
         sayfa+="</html>";
  server.send(200,"text/html; charset=utf-8",sayfa); 
}

void led2son()
{
  digitalWrite(led2,LOW);
  String sayfa = "<!DOCTYPE html>";
         sayfa+="<html>";
         sayfa+="<p><a href=\"/led1yak\">LED1ON</a> <a href=\"/led1son\">LED1OFF</a> </p>";
         sayfa+="<br></br>";
         sayfa+="<p><a href=\"/led2yak\">LED2ON</a> <a href=\"/led2son\">LED2OFF</a> </p>";
         sayfa+="<br></br>";
         sayfa+="<p><a href=\"/led3yak\">LED3ON</a> <a href=\"/led3son\">LED3OFF</a> </p>";
         sayfa+="<br></br>";
         sayfa+="<p><a href=\"/led4yak\">LED4ON</a> <a href=\"/led4son\">LED4OFF</a> </p>";
         sayfa+="<br></br>";
         sayfa+="<p><a href=\"/led5yak\">LED5ON</a> <a href=\"/led5son\">LED5OFF</a> </p>";
         sayfa+="<br></br>";
         sayfa+="<p><a href=\"/led6yak\">LED6ON</a> <a href=\"/led6son\">LED6OFF</a> </p>";
         sayfa+="<br></br>";
         sayfa+="<p><a href=\"/led7yak\">LED7ON</a> <a href=\"/led7son\">LED7OFF</a> </p>";
         sayfa+="<br></br>";
         sayfa+="<p><a href=\"/led8yak\">LED8ON</a> <a href=\"/led8son\">LED8OFF</a> </p>";
         sayfa+="<br></br>";
         sayfa+="<p><a href=\"/allon\">All On</a> <a href=\"/alloff\">All Off</a> </p>";
         sayfa+="<br></br>";
         sayfa+="<p><a href=\"/led1yak\">Refresh Page</a></p>";
         sayfa+="<br></br>";
         sayfa+="</html>";
  server.send(200,"text/html; charset=utf-8",sayfa);  
}

void led3yak() //led3
{
  digitalWrite(led3,HIGH);
  String sayfa = "<!DOCTYPE html>";
         sayfa+="<html>";
         sayfa+="<p><a href=\"/led1yak\">LED1ON</a> <a href=\"/led1son\">LED1OFF</a> </p>";
         sayfa+="<br></br>";
         sayfa+="<p><a href=\"/led2yak\">LED2ON</a> <a href=\"/led2son\">LED2OFF</a> </p>";
         sayfa+="<br></br>";
         sayfa+="<p><a href=\"/led3yak\">LED3ON</a> <a href=\"/led3son\">LED3OFF</a> </p>";
         sayfa+="<br></br>";
         sayfa+="<p><a href=\"/led4yak\">LED4ON</a> <a href=\"/led4son\">LED4OFF</a> </p>";
         sayfa+="<br></br>";
         sayfa+="<p><a href=\"/led5yak\">LED5ON</a> <a href=\"/led5son\">LED5OFF</a> </p>";
         sayfa+="<br></br>";
         sayfa+="<p><a href=\"/led6yak\">LED6ON</a> <a href=\"/led6son\">LED6OFF</a> </p>";
         sayfa+="<br></br>";
         sayfa+="<p><a href=\"/led7yak\">LED7ON</a> <a href=\"/led7son\">LED7OFF</a> </p>";
         sayfa+="<br></br>";
         sayfa+="<p><a href=\"/led8yak\">LED8ON</a> <a href=\"/led8son\">LED8OFF</a> </p>";
         sayfa+="<br></br>";
         sayfa+="<p><a href=\"/allon\">All On</a> <a href=\"/alloff\">All Off</a> </p>";
         sayfa+="<br></br>";
         sayfa+="<p><a href=\"/led1yak\">Refresh Page</a></p>";
         sayfa+="<br></br>";
         sayfa+="</html>";
  server.send(200,"text/html; charset=utf-8",sayfa);  
}

void led3son()
{
  digitalWrite(led3,LOW);
  String sayfa = "<!DOCTYPE html>";
         sayfa+="<html>";
         sayfa+="<p><a href=\"/led1yak\">LED1ON</a> <a href=\"/led1son\">LED1OFF</a> </p>";
         sayfa+="<br></br>";
         sayfa+="<p><a href=\"/led2yak\">LED2ON</a> <a href=\"/led2son\">LED2OFF</a> </p>";
         sayfa+="<br></br>";
         sayfa+="<p><a href=\"/led3yak\">LED3ON</a> <a href=\"/led3son\">LED3OFF</a> </p>";
         sayfa+="<br></br>";
         sayfa+="<p><a href=\"/led4yak\">LED4ON</a> <a href=\"/led4son\">LED4OFF</a> </p>";
         sayfa+="<br></br>";
         sayfa+="<p><a href=\"/led5yak\">LED5ON</a> <a href=\"/led5son\">LED5OFF</a> </p>";
         sayfa+="<br></br>";
         sayfa+="<p><a href=\"/led6yak\">LED6ON</a> <a href=\"/led6son\">LED6OFF</a> </p>";
         sayfa+="<br></br>";
         sayfa+="<p><a href=\"/led7yak\">LED7ON</a> <a href=\"/led7son\">LED7OFF</a> </p>";
         sayfa+="<br></br>";
         sayfa+="<p><a href=\"/led8yak\">LED8ON</a> <a href=\"/led8son\">LED8OFF</a> </p>";
         sayfa+="<br></br>";
         sayfa+="<p><a href=\"/allon\">All On</a> <a href=\"/alloff\">All Off</a> </p>";
         sayfa+="<br></br>";
         sayfa+="<p><a href=\"/led1yak\">Refresh Page</a></p>";
         sayfa+="<br></br>";
         sayfa+="</html>";
  server.send(200,"text/html; charset=utf-8",sayfa);   
}

void led4yak() //led4
{
  digitalWrite(led4,HIGH);
  String sayfa = "<!DOCTYPE html>";
         sayfa+="<html>";
         sayfa+="<p><a href=\"/led1yak\">LED1ON</a> <a href=\"/led1son\">LED1OFF</a> </p>";
         sayfa+="<br></br>";
         sayfa+="<p><a href=\"/led2yak\">LED2ON</a> <a href=\"/led2son\">LED2OFF</a> </p>";
         sayfa+="<br></br>";
         sayfa+="<p><a href=\"/led3yak\">LED3ON</a> <a href=\"/led3son\">LED3OFF</a> </p>";
         sayfa+="<br></br>";
         sayfa+="<p><a href=\"/led4yak\">LED4ON</a> <a href=\"/led4son\">LED4OFF</a> </p>";
         sayfa+="<br></br>";
         sayfa+="<p><a href=\"/led5yak\">LED5ON</a> <a href=\"/led5son\">LED5OFF</a> </p>";
         sayfa+="<br></br>";
         sayfa+="<p><a href=\"/led6yak\">LED6ON</a> <a href=\"/led6son\">LED6OFF</a> </p>";
         sayfa+="<br></br>";
         sayfa+="<p><a href=\"/led7yak\">LED7ON</a> <a href=\"/led7son\">LED7OFF</a> </p>";
         sayfa+="<br></br>";
         sayfa+="<p><a href=\"/led8yak\">LED8ON</a> <a href=\"/led8son\">LED8OFF</a> </p>";
         sayfa+="<br></br>";
         sayfa+="<p><a href=\"/allon\">All On</a> <a href=\"/alloff\">All Off</a> </p>";
         sayfa+="<br></br>";
         sayfa+="<p><a href=\"/led1yak\">Refresh Page</a></p>";
         sayfa+="<br></br>";
         sayfa+="</html>";
  server.send(200,"text/html; charset=utf-8",sayfa);   
}

void led4son()
{
  digitalWrite(led2,LOW);
  String sayfa = "<!DOCTYPE html>";
         sayfa+="<html>";
         sayfa+="<p><a href=\"/led1yak\">LED1ON</a> <a href=\"/led1son\">LED1OFF</a> </p>";
         sayfa+="<br></br>";
         sayfa+="<p><a href=\"/led2yak\">LED2ON</a> <a href=\"/led2son\">LED2OFF</a> </p>";
         sayfa+="<br></br>";
         sayfa+="<p><a href=\"/led3yak\">LED3ON</a> <a href=\"/led3son\">LED3OFF</a> </p>";
         sayfa+="<br></br>";
         sayfa+="<p><a href=\"/led4yak\">LED4ON</a> <a href=\"/led4son\">LED4OFF</a> </p>";
         sayfa+="<br></br>";
         sayfa+="<p><a href=\"/led5yak\">LED5ON</a> <a href=\"/led5son\">LED5OFF</a> </p>";
         sayfa+="<br></br>";
         sayfa+="<p><a href=\"/led6yak\">LED6ON</a> <a href=\"/led6son\">LED6OFF</a> </p>";
         sayfa+="<br></br>";
         sayfa+="<p><a href=\"/led7yak\">LED7ON</a> <a href=\"/led7son\">LED7OFF</a> </p>";
         sayfa+="<br></br>";
         sayfa+="<p><a href=\"/led8yak\">LED8ON</a> <a href=\"/led8son\">LED8OFF</a> </p>";
         sayfa+="<br></br>";
         sayfa+="<p><a href=\"/allon\">All On</a> <a href=\"/alloff\">All Off</a> </p>";
         sayfa+="<br></br>";
         sayfa+="<p><a href=\"/led1yak\">Refresh Page</a></p>";
         sayfa+="<br></br>";
         sayfa+="</html>";
  server.send(200,"text/html; charset=utf-8",sayfa);    
}

void led5yak() //led5
{
  digitalWrite(led5,HIGH);
  String sayfa = "<!DOCTYPE html>";
         sayfa+="<html>";
         sayfa+="<p><a href=\"/led1yak\">LED1ON</a> <a href=\"/led1son\">LED1OFF</a> </p>";
         sayfa+="<br></br>";
         sayfa+="<p><a href=\"/led2yak\">LED2ON</a> <a href=\"/led2son\">LED2OFF</a> </p>";
         sayfa+="<br></br>";
         sayfa+="<p><a href=\"/led3yak\">LED3ON</a> <a href=\"/led3son\">LED3OFF</a> </p>";
         sayfa+="<br></br>";
         sayfa+="<p><a href=\"/led4yak\">LED4ON</a> <a href=\"/led4son\">LED4OFF</a> </p>";
         sayfa+="<br></br>";
         sayfa+="<p><a href=\"/led5yak\">LED5ON</a> <a href=\"/led5son\">LED5OFF</a> </p>";
         sayfa+="<br></br>";
         sayfa+="<p><a href=\"/led6yak\">LED6ON</a> <a href=\"/led6son\">LED6OFF</a> </p>";
         sayfa+="<br></br>";
         sayfa+="<p><a href=\"/led7yak\">LED7ON</a> <a href=\"/led7son\">LED7OFF</a> </p>";
         sayfa+="<br></br>";
         sayfa+="<p><a href=\"/led8yak\">LED8ON</a> <a href=\"/led8son\">LED8OFF</a> </p>";
         sayfa+="<br></br>";
         sayfa+="<p><a href=\"/allon\">All On</a> <a href=\"/alloff\">All Off</a> </p>";
         sayfa+="<br></br>";
         sayfa+="<p><a href=\"/led1yak\">Refresh Page</a></p>";
         sayfa+="<br></br>";
         sayfa+="</html>";
  server.send(200,"text/html; charset=utf-8",sayfa);    
}

void led5son()
{
  digitalWrite(led5,LOW);
  String sayfa = "<!DOCTYPE html>";
         sayfa+="<html>";
         sayfa+="<p><a href=\"/led1yak\">LED1ON</a> <a href=\"/led1son\">LED1OFF</a> </p>";
         sayfa+="<br></br>";
         sayfa+="<p><a href=\"/led2yak\">LED2ON</a> <a href=\"/led2son\">LED2OFF</a> </p>";
         sayfa+="<br></br>";
         sayfa+="<p><a href=\"/led3yak\">LED3ON</a> <a href=\"/led3son\">LED3OFF</a> </p>";
         sayfa+="<br></br>";
         sayfa+="<p><a href=\"/led4yak\">LED4ON</a> <a href=\"/led4son\">LED4OFF</a> </p>";
         sayfa+="<br></br>";
         sayfa+="<p><a href=\"/led5yak\">LED5ON</a> <a href=\"/led5son\">LED5OFF</a> </p>";
         sayfa+="<br></br>";
         sayfa+="<p><a href=\"/led6yak\">LED6ON</a> <a href=\"/led6son\">LED6OFF</a> </p>";
         sayfa+="<br></br>";
         sayfa+="<p><a href=\"/led7yak\">LED7ON</a> <a href=\"/led7son\">LED7OFF</a> </p>";
         sayfa+="<br></br>";
         sayfa+="<p><a href=\"/led8yak\">LED8ON</a> <a href=\"/led8son\">LED8OFF</a> </p>";
         sayfa+="<br></br>";
         sayfa+="<p><a href=\"/allon\">All On</a> <a href=\"/alloff\">All Off</a> </p>";
         sayfa+="<br></br>";
         sayfa+="<p><a href=\"/led1yak\">Refresh Page</a></p>";
         sayfa+="<br></br>";
         sayfa+="</html>";
  server.send(200,"text/html; charset=utf-8",sayfa);    
}

void led6yak()  //led6
{
  digitalWrite(led6,HIGH);
  String sayfa = "<!DOCTYPE html>";
         sayfa+="<html>";
         sayfa+="<p><a href=\"/led1yak\">LED1ON</a> <a href=\"/led1son\">LED1OFF</a> </p>";
         sayfa+="<br></br>";
         sayfa+="<p><a href=\"/led2yak\">LED2ON</a> <a href=\"/led2son\">LED2OFF</a> </p>";
         sayfa+="<br></br>";
         sayfa+="<p><a href=\"/led3yak\">LED3ON</a> <a href=\"/led3son\">LED3OFF</a> </p>";
         sayfa+="<br></br>";
         sayfa+="<p><a href=\"/led4yak\">LED4ON</a> <a href=\"/led4son\">LED4OFF</a> </p>";
         sayfa+="<br></br>";
         sayfa+="<p><a href=\"/led5yak\">LED5ON</a> <a href=\"/led5son\">LED5OFF</a> </p>";
         sayfa+="<br></br>";
         sayfa+="<p><a href=\"/led6yak\">LED6ON</a> <a href=\"/led6son\">LED6OFF</a> </p>";
         sayfa+="<br></br>";
         sayfa+="<p><a href=\"/led7yak\">LED7ON</a> <a href=\"/led7son\">LED7OFF</a> </p>";
         sayfa+="<br></br>";
         sayfa+="<p><a href=\"/led8yak\">LED8ON</a> <a href=\"/led8son\">LED8OFF</a> </p>";
         sayfa+="<br></br>";
         sayfa+="<p><a href=\"/allon\">All On</a> <a href=\"/alloff\">All Off</a> </p>";
         sayfa+="<br></br>";
         sayfa+="<p><a href=\"/led1yak\">Refresh Page</a></p>";
         sayfa+="<br></br>";
         sayfa+="</html>";
  server.send(200,"text/html; charset=utf-8",sayfa);  
}

void led6son()
{
  digitalWrite(led6,LOW);
  String sayfa = "<!DOCTYPE html>";
         sayfa+="<html>";
         sayfa+="<p><a href=\"/led1yak\">LED1ON</a> <a href=\"/led1son\">LED1OFF</a> </p>";
         sayfa+="<br></br>";
         sayfa+="<p><a href=\"/led2yak\">LED2ON</a> <a href=\"/led2son\">LED2OFF</a> </p>";
         sayfa+="<br></br>";
         sayfa+="<p><a href=\"/led3yak\">LED3ON</a> <a href=\"/led3son\">LED3OFF</a> </p>";
         sayfa+="<br></br>";
         sayfa+="<p><a href=\"/led4yak\">LED4ON</a> <a href=\"/led4son\">LED4OFF</a> </p>";
         sayfa+="<br></br>";
         sayfa+="<p><a href=\"/led5yak\">LED5ON</a> <a href=\"/led5son\">LED5OFF</a> </p>";
         sayfa+="<br></br>";
         sayfa+="<p><a href=\"/led6yak\">LED6ON</a> <a href=\"/led6son\">LED6OFF</a> </p>";
         sayfa+="<br></br>";
         sayfa+="<p><a href=\"/led7yak\">LED7ON</a> <a href=\"/led7son\">LED7OFF</a> </p>";
         sayfa+="<br></br>";
         sayfa+="<p><a href=\"/led8yak\">LED8ON</a> <a href=\"/led8son\">LED8OFF</a> </p>";
         sayfa+="<br></br>";
         sayfa+="<p><a href=\"/allon\">All On</a> <a href=\"/alloff\">All Off</a> </p>";
         sayfa+="<br></br>";
         sayfa+="<p><a href=\"/led1yak\">Refresh Page</a></p>";
         sayfa+="<br></br>";
         sayfa+="</html>";
  server.send(200,"text/html; charset=utf-8",sayfa);  
}

void led7yak()  //led7
{
  digitalWrite(led7,HIGH);
  String sayfa = "<!DOCTYPE html>";
         sayfa+="<html>";
         sayfa+="<p><a href=\"/led1yak\">LED1ON</a> <a href=\"/led1son\">LED1OFF</a> </p>";
         sayfa+="<br></br>";
         sayfa+="<p><a href=\"/led2yak\">LED2ON</a> <a href=\"/led2son\">LED2OFF</a> </p>";
         sayfa+="<br></br>";
         sayfa+="<p><a href=\"/led3yak\">LED3ON</a> <a href=\"/led3son\">LED3OFF</a> </p>";
         sayfa+="<br></br>";
         sayfa+="<p><a href=\"/led4yak\">LED4ON</a> <a href=\"/led4son\">LED4OFF</a> </p>";
         sayfa+="<br></br>";
         sayfa+="<p><a href=\"/led5yak\">LED5ON</a> <a href=\"/led5son\">LED5OFF</a> </p>";
         sayfa+="<br></br>";
         sayfa+="<p><a href=\"/led6yak\">LED6ON</a> <a href=\"/led6son\">LED6OFF</a> </p>";
         sayfa+="<br></br>";
         sayfa+="<p><a href=\"/led7yak\">LED7ON</a> <a href=\"/led7son\">LED7OFF</a> </p>";
         sayfa+="<br></br>";
         sayfa+="<p><a href=\"/led8yak\">LED8ON</a> <a href=\"/led8son\">LED8OFF</a> </p>";
         sayfa+="<br></br>";
         sayfa+="<p><a href=\"/allon\">All On</a> <a href=\"/alloff\">All Off</a> </p>";
         sayfa+="<br></br>";
         sayfa+="<p><a href=\"/led1yak\">Refresh Page</a></p>";
         sayfa+="<br></br>";
         sayfa+="</html>";
  server.send(200,"text/html; charset=utf-8",sayfa);  
}

void led7son()  
{
  digitalWrite(led7,LOW);
  String sayfa = "<!DOCTYPE html>";
         sayfa+="<html>";
         sayfa+="<p><a href=\"/led1yak\">LED1ON</a> <a href=\"/led1son\">LED1OFF</a> </p>";
         sayfa+="<br></br>";
         sayfa+="<p><a href=\"/led2yak\">LED2ON</a> <a href=\"/led2son\">LED2OFF</a> </p>";
         sayfa+="<br></br>";
         sayfa+="<p><a href=\"/led3yak\">LED3ON</a> <a href=\"/led3son\">LED3OFF</a> </p>";
         sayfa+="<br></br>";
         sayfa+="<p><a href=\"/led4yak\">LED4ON</a> <a href=\"/led4son\">LED4OFF</a> </p>";
         sayfa+="<br></br>";
         sayfa+="<p><a href=\"/led5yak\">LED5ON</a> <a href=\"/led5son\">LED5OFF</a> </p>";
         sayfa+="<br></br>";
         sayfa+="<p><a href=\"/led6yak\">LED6ON</a> <a href=\"/led6son\">LED6OFF</a> </p>";
         sayfa+="<br></br>";
         sayfa+="<p><a href=\"/led7yak\">LED7ON</a> <a href=\"/led7son\">LED7OFF</a> </p>";
         sayfa+="<br></br>";
         sayfa+="<p><a href=\"/led8yak\">LED8ON</a> <a href=\"/led8son\">LED8OFF</a> </p>";
         sayfa+="<br></br>";
         sayfa+="<p><a href=\"/allon\">All On</a> <a href=\"/alloff\">All Off</a> </p>";
         sayfa+="<br></br>";
         sayfa+="<p><a href=\"/led1yak\">Refresh Page</a></p>";
         sayfa+="<br></br>";
         sayfa+="</html>";
  server.send(200,"text/html; charset=utf-8",sayfa);  
}

void led8yak()  //led8
{
  digitalWrite(led8,HIGH);
  String sayfa = "<!DOCTYPE html>";
         sayfa+="<html>";
         sayfa+="<p><a href=\"/led1yak\">LED1ON</a> <a href=\"/led1son\">LED1OFF</a> </p>";
         sayfa+="<br></br>";
         sayfa+="<p><a href=\"/led2yak\">LED2ON</a> <a href=\"/led2son\">LED2OFF</a> </p>";
         sayfa+="<br></br>";
         sayfa+="<p><a href=\"/led3yak\">LED3ON</a> <a href=\"/led3son\">LED3OFF</a> </p>";
         sayfa+="<br></br>";
         sayfa+="<p><a href=\"/led4yak\">LED4ON</a> <a href=\"/led4son\">LED4OFF</a> </p>";
         sayfa+="<br></br>";
         sayfa+="<p><a href=\"/led5yak\">LED5ON</a> <a href=\"/led5son\">LED5OFF</a> </p>";
         sayfa+="<br></br>";
         sayfa+="<p><a href=\"/led6yak\">LED6ON</a> <a href=\"/led6son\">LED6OFF</a> </p>";
         sayfa+="<br></br>";
         sayfa+="<p><a href=\"/led7yak\">LED7ON</a> <a href=\"/led7son\">LED7OFF</a> </p>";
         sayfa+="<br></br>";
         sayfa+="<p><a href=\"/led8yak\">LED8ON</a> <a href=\"/led8son\">LED8OFF</a> </p>";
         sayfa+="<br></br>";
         sayfa+="<p><a href=\"/allon\">All On</a> <a href=\"/alloff\">All Off</a> </p>";
         sayfa+="<br></br>";
         sayfa+="<p><a href=\"/led1yak\">Refresh Page</a></p>";
         sayfa+="<br></br>";
         sayfa+="</html>";
  server.send(200,"text/html; charset=utf-8",sayfa);   
}

void led8son()  
{
  digitalWrite(led8,LOW);
  String sayfa = "<!DOCTYPE html>";
         sayfa+="<html>";
         sayfa+="<p><a href=\"/led1yak\">LED1ON</a> <a href=\"/led1son\">LED1OFF</a> </p>";
         sayfa+="<br></br>";
         sayfa+="<p><a href=\"/led2yak\">LED2ON</a> <a href=\"/led2son\">LED2OFF</a> </p>";
         sayfa+="<br></br>";
         sayfa+="<p><a href=\"/led3yak\">LED3ON</a> <a href=\"/led3son\">LED3OFF</a> </p>";
         sayfa+="<br></br>";
         sayfa+="<p><a href=\"/led4yak\">LED4ON</a> <a href=\"/led4son\">LED4OFF</a> </p>";
         sayfa+="<br></br>";
         sayfa+="<p><a href=\"/led5yak\">LED5ON</a> <a href=\"/led5son\">LED5OFF</a> </p>";
         sayfa+="<br></br>";
         sayfa+="<p><a href=\"/led6yak\">LED6ON</a> <a href=\"/led6son\">LED6OFF</a> </p>";
         sayfa+="<br></br>";
         sayfa+="<p><a href=\"/led7yak\">LED7ON</a> <a href=\"/led7son\">LED7OFF</a> </p>";
         sayfa+="<br></br>";
         sayfa+="<p><a href=\"/led8yak\">LED8ON</a> <a href=\"/led8son\">LED8OFF</a> </p>";
         sayfa+="<br></br>";
         sayfa+="<p><a href=\"/allon\">All On</a> <a href=\"/alloff\">All Off</a> </p>";
         sayfa+="<br></br>";
         sayfa+="<p><a href=\"/led1yak\">Refresh Page</a></p>";
         sayfa+="<br></br>";
         sayfa+="</html>";
  server.send(200,"text/html; charset=utf-8",sayfa);  
}

void allon()  //led8
{
  digitalWrite(led1,HIGH);
  digitalWrite(led2,HIGH);
  digitalWrite(led3,HIGH);
  digitalWrite(led4,HIGH);
  digitalWrite(led5,HIGH);
  digitalWrite(led6,HIGH);
  digitalWrite(led7,HIGH);
  digitalWrite(led8,HIGH);
  String sayfa = "<!DOCTYPE html>";
         sayfa+="<html>";
         sayfa+="<p><a href=\"/led1yak\">LED1ON</a> <a href=\"/led1son\">LED1OFF</a> </p>";
         sayfa+="<br></br>";
         sayfa+="<p><a href=\"/led2yak\">LED2ON</a> <a href=\"/led2son\">LED2OFF</a> </p>";
         sayfa+="<br></br>";
         sayfa+="<p><a href=\"/led3yak\">LED3ON</a> <a href=\"/led3son\">LED3OFF</a> </p>";
         sayfa+="<br></br>";
         sayfa+="<p><a href=\"/led4yak\">LED4ON</a> <a href=\"/led4son\">LED4OFF</a> </p>";
         sayfa+="<br></br>";
         sayfa+="<p><a href=\"/led5yak\">LED5ON</a> <a href=\"/led5son\">LED5OFF</a> </p>";
         sayfa+="<br></br>";
         sayfa+="<p><a href=\"/led6yak\">LED6ON</a> <a href=\"/led6son\">LED6OFF</a> </p>";
         sayfa+="<br></br>";
         sayfa+="<p><a href=\"/led7yak\">LED7ON</a> <a href=\"/led7son\">LED7OFF</a> </p>";
         sayfa+="<br></br>";
         sayfa+="<p><a href=\"/led8yak\">LED8ON</a> <a href=\"/led8son\">LED8OFF</a> </p>";
         sayfa+="<br></br>";
         sayfa+="<p><a href=\"/allon\">All On</a> <a href=\"/alloff\">All Off</a> </p>";
         sayfa+="<br></br>";
         sayfa+="<p><a href=\"/led1yak\">Refresh Page</a></p>";
         sayfa+="<br></br>";
         sayfa+="</html>";
  server.send(200,"text/html; charset=utf-8",sayfa);  
}

void alloff()  
{
  digitalWrite(led1,LOW);
  digitalWrite(led2,LOW);
  digitalWrite(led3,LOW);
  digitalWrite(led4,LOW);
  digitalWrite(led5,LOW);
  digitalWrite(led6,LOW);
  digitalWrite(led7,LOW);
  digitalWrite(led8,LOW);
  String sayfa = "<!DOCTYPE html>";
         sayfa+="<html>";
         sayfa+="<p><a href=\"/led1yak\">LED1ON</a> <a href=\"/led1son\">LED1OFF</a> </p>";
         sayfa+="<br></br>";
         sayfa+="<p><a href=\"/led2yak\">LED2ON</a> <a href=\"/led2son\">LED2OFF</a> </p>";
         sayfa+="<br></br>";
         sayfa+="<p><a href=\"/led3yak\">LED3ON</a> <a href=\"/led3son\">LED3OFF</a> </p>";
         sayfa+="<br></br>";
         sayfa+="<p><a href=\"/led4yak\">LED4ON</a> <a href=\"/led4son\">LED4OFF</a> </p>";
         sayfa+="<br></br>";
         sayfa+="<p><a href=\"/led5yak\">LED5ON</a> <a href=\"/led5son\">LED5OFF</a> </p>";
         sayfa+="<br></br>";
         sayfa+="<p><a href=\"/led6yak\">LED6ON</a> <a href=\"/led6son\">LED6OFF</a> </p>";
         sayfa+="<br></br>";
         sayfa+="<p><a href=\"/led7yak\">LED7ON</a> <a href=\"/led7son\">LED7OFF</a> </p>";
         sayfa+="<br></br>";
         sayfa+="<p><a href=\"/led8yak\">LED8ON</a> <a href=\"/led8son\">LED8OFF</a> </p>";
         sayfa+="<br></br>";
         sayfa+="<p><a href=\"/allon\">All On</a> <a href=\"/alloff\">All Off</a> </p>";
         sayfa+="<br></br>";
         sayfa+="<p><a href=\"/led1yak\">Refresh Page</a></p>";
         sayfa+="<br></br>";
         sayfa+="</html>";
  server.send(200,"text/html; charset=utf-8",sayfa);  
}

void refreshpage()  //led8
{
  
}

















void setup() {
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
  pinMode(led4,OUTPUT);
  pinMode(led5,OUTPUT);
  pinMode(led6,OUTPUT);
  pinMode(led7,OUTPUT);
  pinMode(led8,OUTPUT);
  digitalWrite(led1,LOW);
  digitalWrite(led2,LOW);
  digitalWrite(led3,LOW);
  digitalWrite(led4,LOW);
  digitalWrite(led5,LOW);
  digitalWrite(led6,LOW);
  digitalWrite(led7,LOW);
  digitalWrite(led8,LOW);
  Serial.begin(115200);                
  WiFi.mode(WIFI_AP);                
  WiFi.softAPConfig(yerelIP,agGecidi,altAgMaskesi);            
  WiFi.softAP(ssid, password);  
  
  server.on("/", anasayfa);     
  server.on("/led1yak",led1yak); 
  server.on("/led1son",led1son); 
  server.on("/led2yak",led2yak); 
  server.on("/led2son",led2son); 
  server.on("/led3yak",led1yak); 
  server.on("/led3son",led3son); 
  server.on("/led4yak",led4yak); 
  server.on("/led4son",led4son); 
  server.on("/led5yak",led5yak); 
  server.on("/led5son",led5son);  
  server.on("/led6yak",led6yak); 
  server.on("/led6son",led6son);
  server.on("/led7yak",led7yak); 
  server.on("/led7son",led7son);
  server.on("/led8yak",led8yak); 
  server.on("/led8son",led8son); 
  server.on("/allon",allon); 
  server.on("/alloff",alloff); 
  server.on("/refreshpage",refreshpage);  
  server.onNotFound(sayfa_bulunamadi);  // Eğer bilinmeyen bir istek gelirse sayfa_bulunamadi alt   
         
                                                  
  server.begin();                                       

  

}

void loop() {
  server.handleClient();

}
