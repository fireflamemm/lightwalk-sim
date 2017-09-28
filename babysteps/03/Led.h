#ifndef Led_h
#define Led_h
// Led.h
// (c) Brent Neal Reeves
// lightwalk test harness
// needs: fromHex
#include <sstream>

class Led {
public:
  Led(int r, int g, int b, int brightness) {
    setColor( r, g, b);
    setBrightness( brightness );
  };

  Led() {
    setColor(0,0,0);
    setBrightness(0);
  };

  int r() {return _r;};
  int g() {return _g;};
  int b() {return _b;};
  int brightness() {return _brightness;};

  void setColor(int r, int g, int b) {
    _r = r;
    _g = g;
    _b = b;
  };

  void setBrightness (int b) {
    _brightness = b;
  }

  string pp() {
    std::stringstream ss;
    ss << "r: " << _r << " g: " << _g << " b: " << _b << " brightness: " << _brightness;
    string str = ss.str();
    return str;
  }

  string hex() {
    char hexcol[16];
    snprintf(hexcol, sizeof hexcol, "%02x%02x%02x", _r, _g, _b);
    return hexcol;
  }

private:
  int _r;
  int _g;
  int _b;
  int _brightness;  
};

#endif