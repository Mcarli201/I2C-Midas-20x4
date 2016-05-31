# I2C-Midas-20x4
MIDAS MCCOG42005A6W-BNMLWI  Alphanumeric LCD, 20 x 4, White on Blue, 3 V to 5 V, I2C, English, Japanese, Transmissive.

The original library is from
F. Malpartida - fmalpartida@gmail.com

I changed DDRAM addresses and initialisation for this specific model.

In the data sheet is not listed but you should add two pull-up resistors. 
One is Vout and one in V0.

If you use an i2c scanner is going to find address 0x3C. 
Real address is actually 0x78.
An example file is included.

Limitations:
For some reason the second line and fourth line are printing just 12 characters. 
