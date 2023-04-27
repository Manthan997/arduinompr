#include <VirtualWire.h>

int data=0;
void setup() {
  // put your setup code here, to run once:
  vw_set_tx_pin(12);
  vw_setup(2000);
}

void loop() {
  // put your main code here, to run repeatedly:
  
    vw_send((uint8_t *)data, strlen(data));
    vw_wait_tx();
    delay(1000);
    data=data+1;
 
}
