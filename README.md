# QT boilerplate
A simple qt app with qmake and cmake build systems

## Installing tools
```bash
$ wget http://download.qt.io/official_releases/online_installers/qt-unified-linux-x64-online.run
$ chmod +x qt-unified-linux-x64-online.run        # select latest version, install to /opt/qt/
$ qtchooser -install -local 5.11.0 /opt/qt/5.11.0/gcc_64/bin/qmake
$ apt install mesa-common-dev libgl1-mesa-dev libglu1-mesa-dev
```
## qmake build
```bash
$ export QT_SELECT=5.11.0
$ qmake                    # creates Makefile
$ make                     # builds target
```

## cmake build
```bash
$ mkdir build && cd build
$ cmake ..                 # creates Makefile
$ make                     # builds target
```

## Running
```bash
$ export QT_QPA_PLATFORM_PLUGIN_PATH=/opt/qt/5.11.0/gcc_64/plugins
$ ./simpleQt
```
