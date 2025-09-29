#ifndef SimpleButton_ButtonGPIOExpander_h
#define SimpleButton_ButtonGPIOExpander_h

#include "Button.h"
#include "GPIOExpander.h"
#include "PCF8574.h"
#include "PCF8575.h"
#include "MCP23017.h"

namespace simplebutton {
    class ButtonGPIOExpander : public Button {
        public:
            ButtonGPIOExpander();
            ButtonGPIOExpander(GPIOExpander* pcf, uint8_t pin);
            ButtonGPIOExpander(GPIOExpander* pcf, uint8_t pin, bool inverted);

            virtual ~ButtonGPIOExpander();

            void setup(GPIOExpander* pcf, uint8_t pin, bool inverted);

            virtual void enable();

            virtual int read();
            virtual void update();
            virtual void update(int state);

        protected:
            GPIOExpander* pcf = NULL;
    };
}

#endif // ifndef SimpleButton_ButtonGPIOExpander_h