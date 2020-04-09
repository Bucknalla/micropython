    { {&machine_pin_type}, gpioPortD, 14, 0,  PWM(0,0) }, 
    { {&machine_pin_type}, gpioPortB, 13, 1,  PWM(1,0) },  // SPI CS
    { {&machine_pin_type}, gpioPortC, 8,  2,  PWM(2,5) }, 
    { {&machine_pin_type}, gpioPortA, 3,  3,  PWM(3,5) },  // SPI CLK
    { {&machine_pin_type}, gpioPortC, 6,  4,  NO_PWM },
    { {&machine_pin_type}, gpioPortA, 4,  5,  NO_PWM },    // SPI MOSI
    { {&machine_pin_type}, gpioPortC, 7,  6,  NO_PWM }, 
    { {&machine_pin_type}, gpioPortA, 5,  7,  NO_PWM },    // SPI MISO
    { {&machine_pin_type}, gpioPortA, 1,  8,  NO_PWM }, 
    { {&machine_pin_type}, gpioPortB, 11, 9,  NO_PWM }, 
    { {&machine_pin_type}, gpioPortA, 0,  10, NO_PWM }, 
    { {&machine_pin_type}, gpioPortF, 6,  11, NO_PWM }, 
    { {&machine_pin_type}, gpioPortD, 15, 12, NO_PWM }, 
    { {&machine_pin_type}, gpioPortF, 7,  13, NO_PWM }, 
    { {&machine_pin_type}, gpioPortD, 13, 14, NO_PWM }, 
    { {&machine_pin_type}, gpioPortF, 5,  15, NO_PWM },  // PW_ON_3V3 (Maybe these shouldn't be exposed?)
    { {&machine_pin_type}, gpioPortC, 9,  16, NO_PWM },   // PW_ON_5V (Maybe these shouldn't be exposed?)
    { {&machine_pin_type}, gpioPortC, 10, 17, NO_PWM },   // I2C SDA
    { {&machine_pin_type}, gpioPortC, 11, 18, NO_PWM }, // I2C SCL
