import QtQuick
import QtQuick.Window

import d230404b_project_test

Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("Hello World")

    TestValue { id: tv }

    Text {
        anchors {
            verticalCenter: parent.verticalCenter
            horizontalCenter: parent.horizontalCenter
        }
        text: tv.value
    }


}
