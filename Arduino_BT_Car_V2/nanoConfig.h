/*

void author(){
  Embedded CTG
  Facebook:https://web.facebook.com/p/Embedded-CTG-61558436573900/?mibextid=ZbWKwL&_rdc=1&_rdr
  Youtube: https://www.youtube.com/@EmbeddedCTG 
}

void license(){
  MIT License

  Copyright (c) 2025 AdharTechnologies

  Permission is hereby granted, free of charge, to any person obtaining a copy
  of this software and associated documentation files (the "Software"), to deal
  in the Software without restriction, including without limitation the rights
  to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
  copies of the Software, and to permit persons to whom the Software is
  furnished to do so, subject to the following conditions:

  The above copyright notice and this permission notice shall be included in all
  copies or substantial portions of the Software.

  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
  SOFTWARE.
}
*/


// Include library

#include <SoftwareSerial.h>

//Create software serial object to communicate with HC-05
SoftwareSerial mySerial(2, 3); //HC-05 Tx = D2 Rx = D3 
//nano 3 == hc05 tx
//nano 2 == hc05 rx

String version = "Bluetooth Car | version 2.0";
String changelog = "";

