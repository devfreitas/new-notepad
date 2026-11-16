import QtQuick
import QtQuick.Controls

Button {
    id: control

    property bool primary: false
    property bool darkMode: true
    property color activeColor: "#666666"
    property color activeLabelColor: "#ffffff"
    property color labelColor: primary ? activeLabelColor : "#d0d0d0"
    property real textScale: 1
    // A label that marks its access key with "&", as Qt writes them ("&Save",
    // "&&" for an ampersand), so each translation picks its own. The dialog
    // binds the key; the button underlines it.
    property string mnemonicLabel: ""
    readonly property string mnemonic: {
        var match = /&([^&\s])/.exec(mnemonicLabel.replace(/&&/g, ""));
        return match ? match[1].toUpperCase() : "";
    }

    text: mnemonicLabel.replace(/&(&?)/g, "$1")
    // The label as rich text, its access key underlined.
    property string formattedText: {
        var escape = function(c) {
            return c === "&" ? "&amp;" : c === "<" ? "&lt;" : c === ">" ? "&gt;" : c;
        };
        var out = "", marked = false;
        for (var i = 0; i < mnemonicLabel.length; ++i) {
            var c = mnemonicLabel[i];
            if (c === "&" && i + 1 < mnemonicLabel.length) {
                c = mnemonicLabel[++i];
                if (c !== "&" && !marked) {
                    out += "<u>" + escape(c) + "</u>";
                    marked = true;
                    continue;
                }
            }
            out += escape(c);
        }
        return out;
    }

    leftPadding: 16
    rightPadding: 16
    topPadding: 7
    bottomPadding: 7

    Keys.onReturnPressed: clicked()
    Keys.onEnterPressed: clicked()

    contentItem: Label {
        text: control.formattedText.length > 0 ? control.formattedText : control.text
        textFormat: control.formattedText.length > 0 ? Text.StyledText : Text.PlainText
        color: control.labelColor
        horizontalAlignment: Text.AlignHCenter
        verticalAlignment: Text.AlignVCenter
        font.family: "IBM Plex Mono"
        font.pixelSize: Math.round(12 * control.textScale)
    }

    background: Rectangle {
        implicitWidth: 88
        implicitHeight: 34
        radius: 0
        color: control.primary
            ? (control.down ? Qt.darker(control.activeColor, 1.15)
                            : control.hovered ? Qt.lighter(control.activeColor, 1.1) : control.activeColor)
            : control.down
                ? "#555555"
                : control.hovered
                    ? "#4d4d4d"
                    : "#444444"
        border.color: control.activeFocus
            ? "#ffffff"
            : control.primary
                ? Qt.darker(control.activeColor, 1.1)
                : "#666666"
    }
}
