#include "pxt.h"
using namespace pxt;
namespace NFC {
    //%
    int RxBufferedSize(){
        return uBit.serial.rxBufferedSize();
    }
}