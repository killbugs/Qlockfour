/*
   LedDriver
*/

#ifndef LEDDRIVER_H
#define LEDDRIVER_H

#include "Arduino.h"
#include "Settings.h"
#include "MyRTC.h"
#include "Transitions.h"
#include "Modes.h"
#include "Configuration.h"
#include "Colors.h"

extern volatile byte helperSeconds;
extern Mode mode;
extern Settings settings;
extern MyRTC rtc;
extern bool evtActive;

/* Treiberkonfiguration */
#if defined(LED_DRIVER_LPD8806)
#define FADINGCOUNTERLOAD 25
#define SLIDINGCOUNTERLOAD 350
#define MATRIXCOUNTERLOAD 950
#elif defined(LED_DRIVER_NEOPIXEL)
#define FADINGCOUNTERLOAD 100
#define SLIDINGCOUNTERLOAD 525
#define MATRIXCOUNTERLOAD 1400
#elif defined(LED_DRIVER_DOTSTAR)
#define FADINGCOUNTERLOAD 70
#define SLIDINGCOUNTERLOAD 350
#define MATRIXCOUNTERLOAD 1100
#else
#define FADINGCOUNTERLOAD 70
#define SLIDINGCOUNTERLOAD 7
#define MATRIXCOUNTERLOAD 1100
#endif

#define FADINGDURATION 5

#define NORMALCOUNTERLOAD 1000

class LedDriver {
  public:
    virtual void init();

    virtual void printSignature();

    virtual void writeScreenBufferToMatrix(word matrix[16], boolean onChange, eColors a_color);

    virtual void setBrightness(byte brightnessInPercent);
    virtual byte getBrightness();

    virtual void setLinesToWrite(byte linesToWrite);

    virtual void shutDown();
    virtual void wakeUp();

    virtual void clearData();

    void setPixelInScreenBuffer(byte x, byte y, word matrix[16]);
    boolean getPixelFromScreenBuffer(byte x, byte y, word matrix[16]);
    void resetWheelPos(void);

    void demoTransition();

  protected:
    word _matrixOld[11];
    word _matrixNew[11];
    word _matrixOverlay[11];
    byte _wheelPos;
    unsigned long _lastColorUpdate;
    boolean _transitionCompleted;
    uint16_t _transitionCounter;
    boolean _demoTransition;
};

#endif
