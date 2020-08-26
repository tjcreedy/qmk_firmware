#!/usr/bin/env bash

sudo cat > /etc/udev/rules.d/50-atmel-dfu.rules <<- EOF
# Atmel ATMega32U4
SUBSYSTEMS=="usb", ATTRS{idVendor}=="03eb", ATTRS{idProduct}=="2ff4", TAG+="uaccess", RUN{builtin}+="uaccess"
# Atmel USBKEY AT90USB1287
SUBSYSTEMS=="usb", ATTRS{idVendor}=="03eb", ATTRS{idProduct}=="2ffb", TAG+="uaccess", RUN{builtin}+="uaccess"
# Atmel ATMega32U2
SUBSYSTEMS=="usb", ATTRS{idVendor}=="03eb", ATTRS{idProduct}=="2ff0", TAG+="uaccess", RUN{builtin}+="uaccess"
EOF

sudo cat > /etc/udev/rules.d/54-input-club-keyboard.rules <<- EOF
# Input Club keyboard bootloader
SUBSYSTEMS=="usb", ATTRS{idVendor}=="1c11", ATTRS{idProduct}=="b007", TAG+="uaccess", RUN{builtin}+="uaccess"
EOF

sudo cat > /etc/udev/rules.d/55-caterina.rules <<- EOF
# ModemManager should ignore the following devices
SUBSYSTEMS=="usb", ATTRS{idVendor}=="2a03", ATTRS{idProduct}=="0036", TAG+="uaccess", RUN{builtin}+="uaccess", ENV{ID_MM_DEVICE_IGNORE}="1"
SUBSYSTEMS=="usb", ATTRS{idVendor}=="2341", ATTRS{idProduct}=="0036", TAG+="uaccess", RUN{builtin}+="uaccess", ENV{ID_MM_DEVICE_IGNORE}="1"
SUBSYSTEMS=="usb", ATTRS{idVendor}=="1b4f", ATTRS{idProduct}=="9205", TAG+="uaccess", RUN{builtin}+="uaccess", ENV{ID_MM_DEVICE_IGNORE}="1"
SUBSYSTEMS=="usb", ATTRS{idVendor}=="1b4f", ATTRS{idProduct}=="9203", TAG+="uaccess", RUN{builtin}+="uaccess", ENV{ID_MM_DEVICE_IGNORE}="1"
EOF

sudo cat > /etc/udev/rules.d/56-dfu-util.rules <<- EOF
# stm32duino
SUBSYSTEMS=="usb", ATTRS{idVendor}=="1eaf", ATTRS{idProduct}=="0003", TAG+="uaccess", RUN{builtin}+="uaccess"
# Generic stm32
SUBSYSTEMS=="usb", ATTRS{idVendor}=="0483", ATTRS{idProduct}=="df11", TAG+="uaccess", RUN{builtin}+="uaccess"
EOF

sudo cat > /etc/udev/rules.d/57-bootloadhid.rules <<- EOF
# bootloadHID
SUBSYSTEMS=="usb", ATTRS{idVendor}=="16c0", ATTRS{idProduct}=="05df", TAG+="uaccess", RUN{builtin}+="uaccess"
EOF

sudo udevadm control --reload-rules
sudo udevadm trigger
