###############################################################
Thư viện điều khiển ngõ ra digital cho Arduino, ESP8266, ESP32
###############################################################

:Info: Github <https://github.com/thiminhnhut/control-digital-output>
:Author: Thi Minh Nhựt <thiminhnhut@gmail.com>
:Date: $Date: 25/10/2018 $
:Revision: $Revision: 1.0.0 $
:Description: Thư viện điều khiển ngõ ra digital cho Arduino, ESP8266, ESP32

=============================================================================

.. sectnum::

.. contents:: Nội dung

=============================================================================

Nội dung thực hiện
******************

Thư viện ControlDigitalOutput
=============================

* Thư mục source: `src <https://github.com/thiminhnhut/control-digital-output/blob/master/src>`_.

  * File `ControlDigitalOutput.h <https://github.com/thiminhnhut/control-digital-output/blob/master/src/ControlDigitalOutput.h>`_:

  .. code::

    ControlDigitalOutput(uint8_t pin, uint8_t active);

    void on();

    void off();

  * File `ControlDigitalOutput.cpp <https://github.com/thiminhnhut/control-digital-output/blob/master/src/ControlDigitalOutput.cpp>`_.

* Ví dụ: `demo.ino <https://github.com/thiminhnhut/control-digital-output/blob/master/examples/demo/demo.ino>`_

Chức năng của thư viện ControlDigitalOutput
===========================================

* Điều khiển ngõ ra digital của Arduino, ESP8266 và ESP32.
