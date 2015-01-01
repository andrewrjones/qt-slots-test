import QtQuick 2.3
import QtQuick.Controls 1.2

ApplicationWindow {
    visible: true
    width: 360
    height: 360

    signal signalClickedMe()

    Button {
        id: buttonTest
        x: 91
        y: 142
        width: 178
        height: 76
        text: qsTr("Click me")
        onClicked: signalClickedMe()
    }
}
