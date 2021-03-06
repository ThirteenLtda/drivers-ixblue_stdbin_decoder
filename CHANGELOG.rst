^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
Changelog for package ixblue_stdbin_decoder
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

0.2.0 (2020-11-13)
------------------
* Fix strict aliasing warning by using memcpy
* Fix the protocol version test condition
* Do not force SHARED library to use static lib on Windows
* Add checksum checking on frame reception
  Allow to use on unreliable communication like serial ports
* Breaking change: Allow the decoder to parse partial frames by reconstructing
  the frames internally using a circular buffer
  This allows to work properly on TCP and moreover, serial ports.
  This change changes the API as reflected in README minimal example.
* Add usage examples
* Add bits enums for INSAlgorithmStatus and INSSystemStatus
* Contributors: BARRAL Adrien, Romain Reignier

0.1.3 (2020-09-21)
------------------
* Add ins algorithm status and ins system status bits description in emums
* Add clang format file
* Set CMake project version from package.xml
* Contributors: Romain Reignier

0.1.2 (2020-08-31)
------------------
* Fix CMake config file for older CMake
  In order to do a Kinetic release.
* Contributors: Romain Reignier

0.1.1 (2020-08-27)
------------------
* Reduce minimum required CMake version to allow build on Debian Stretch for ROS Melodic
* Contributors: Romain Reignier

0.1.0 (2020-08-26)
------------------
* Add package.xml to build with catkin
* Rework cmake installation
* Rename to ixblue_stdbin_decoder in lower case to stay consistent
* Allow the parser to read other header types (Answer and command)
* Use boost::asio::const_buffer instead of boost::asio::mutable_buffer
  Frame data is not modified while parsed.
* Change namespace to ixblue_stdbin_decoder to avoid naming conflict with StdBinDecoder class
  Causes issues in IDEs and adds confusion
* Contributors: Adrien BARRAL, Romain Reignier
