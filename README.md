# arduinompr

### FEATURES TO ADD

1. make communication work
2. token transfer system [token is random string of letters]
3. token generating 
    - take the current time as input [for now use manual time input from user]
    - encrypt it [probably just reverse the bits using bitwise operations]
4. decryption [again bit reversal] on reciving side
5. rtc circuit inclusion for actual real time using
6. application as door lock for cars...


### IDEAS FOR IMPROVEMENTS

1. we saw that reciever outputes a sine wave perhaps of 433mhz 
but we need a digital signal
add a sample n hold circuit. something like capacitor and discharge network.
  - cap current doesnt kill uno
  - also it's voltage shouldn't exceed 5v
  - discharge netwok should be quick to maintain the form of pulse signal
  - but faster discharge means pulse will be wavy...
2. 
