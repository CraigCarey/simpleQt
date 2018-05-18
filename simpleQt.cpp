// Installing tools:
// $ wget http://download.qt.io/official_releases/online_installers/qt-unified-linux-x64-online.run
// $ chmod +x qt-unified-linux-x64-online.run        # select latest version, install to /opt/qt/
// $ qtchooser -install -local 5.10.1 /opt/qt/5.10.1/gcc_64/bin/qmake 

// Build using qmake:
// $ export QT_SELECT=5.10.1
// $ export QT_QPA_PLATFORM_PLUGIN_PATH=/opt/qt/5.10.1/gcc_64/plugins
// $ qmake -project           # creates .pro file
// $ qmake                    # creates Makefile
// $ make                     # builds target

#include <QApplication>
#include <QPushButton>

int main(int argc, char **argv)
{
    // QApplication handles the event loop for us
    QApplication app (argc, argv);

    QPushButton button;
    button.setText("My text");
    button.setToolTip("A tooltip");

    QFont font("courier");
    button.setFont(font);

    QIcon icon("/tmp/icon.png");
    button.setIcon(icon);

    button.show();

    return app.exec();
}
