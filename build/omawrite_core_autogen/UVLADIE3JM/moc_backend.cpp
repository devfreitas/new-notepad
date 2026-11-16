/****************************************************************************
** Meta object code from reading C++ file 'backend.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.12.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/backend.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'backend.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 69
#error "This file was generated using the moc from 6.12.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {
struct qt_meta_tag_ZN7BackendE_t {};
} // unnamed namespace

template <> constexpr inline auto Backend::qt_create_metaobjectdata<qt_meta_tag_ZN7BackendE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "Backend",
        "fileUrlChanged",
        "",
        "modifiedChanged",
        "statusChanged",
        "wordCountChanged",
        "darkModeChanged",
        "textScaleChanged",
        "themeColorsChanged",
        "editorFontChanged",
        "saveFailed",
        "openDialogRequested",
        "saveDialogRequested",
        "QUrl",
        "suggestedUrl",
        "saveSucceeded",
        "externalChangeDetected",
        "deleted",
        "locallyModified",
        "retranslate",
        "attachDocument",
        "textDocument",
        "openDialog",
        "open",
        "url",
        "save",
        "saveAsDialog",
        "saveAs",
        "discardRecovery",
        "reloadFromDisk",
        "keepExternalVersion",
        "increaseTextSize",
        "decreaseTextSize",
        "resetTextSize",
        "holdAutoSave",
        "held",
        "printDocument",
        "copyAsHtml",
        "newWindow",
        "clipboardUrl",
        "clipboardText",
        "documentText",
        "editorTextChanged",
        "setCaretPosition",
        "position",
        "linkUrlAt",
        "emphasisSpanAt",
        "QVariantMap",
        "marker",
        "cursorPositionStep",
        "direction",
        "setSearchHighlight",
        "query",
        "currentMatchStart",
        "searchMatches",
        "QVariantList",
        "replaceRange",
        "start",
        "end",
        "text",
        "insideFence",
        "windowGeometry",
        "saveWindowGeometry",
        "x",
        "y",
        "width",
        "height",
        "maximized",
        "documentFontChanged",
        "fileUrl",
        "fileName",
        "modified",
        "status",
        "wordCount",
        "darkMode",
        "textScale",
        "themeBackground",
        "themeForeground",
        "themeAccent",
        "themeAccentForeground",
        "themeSelection",
        "themeSelectionForeground",
        "themePanelBackground",
        "editorFont",
        "availableFonts"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'fileUrlChanged'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'modifiedChanged'
        QtMocHelpers::SignalData<void()>(3, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'statusChanged'
        QtMocHelpers::SignalData<void()>(4, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'wordCountChanged'
        QtMocHelpers::SignalData<void()>(5, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'darkModeChanged'
        QtMocHelpers::SignalData<void()>(6, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'textScaleChanged'
        QtMocHelpers::SignalData<void()>(7, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'themeColorsChanged'
        QtMocHelpers::SignalData<void()>(8, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'editorFontChanged'
        QtMocHelpers::SignalData<void()>(9, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'saveFailed'
        QtMocHelpers::SignalData<void()>(10, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'openDialogRequested'
        QtMocHelpers::SignalData<void()>(11, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'saveDialogRequested'
        QtMocHelpers::SignalData<void(const QUrl &)>(12, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 13, 14 },
        }}),
        // Signal 'saveSucceeded'
        QtMocHelpers::SignalData<void()>(15, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'externalChangeDetected'
        QtMocHelpers::SignalData<void(bool, bool)>(16, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 17 }, { QMetaType::Bool, 18 },
        }}),
        // Slot 'retranslate'
        QtMocHelpers::SlotData<void()>(19, 2, QMC::AccessPublic, QMetaType::Void),
        // Method 'attachDocument'
        QtMocHelpers::MethodData<void(QObject *)>(20, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QObjectStar, 21 },
        }}),
        // Method 'openDialog'
        QtMocHelpers::MethodData<void()>(22, 2, QMC::AccessPublic, QMetaType::Void),
        // Method 'open'
        QtMocHelpers::MethodData<void(const QUrl &)>(23, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 13, 24 },
        }}),
        // Method 'save'
        QtMocHelpers::MethodData<void()>(25, 2, QMC::AccessPublic, QMetaType::Void),
        // Method 'saveAsDialog'
        QtMocHelpers::MethodData<void()>(26, 2, QMC::AccessPublic, QMetaType::Void),
        // Method 'saveAs'
        QtMocHelpers::MethodData<void(const QUrl &)>(27, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 13, 24 },
        }}),
        // Method 'discardRecovery'
        QtMocHelpers::MethodData<void()>(28, 2, QMC::AccessPublic, QMetaType::Void),
        // Method 'reloadFromDisk'
        QtMocHelpers::MethodData<void()>(29, 2, QMC::AccessPublic, QMetaType::Void),
        // Method 'keepExternalVersion'
        QtMocHelpers::MethodData<void()>(30, 2, QMC::AccessPublic, QMetaType::Void),
        // Method 'increaseTextSize'
        QtMocHelpers::MethodData<void()>(31, 2, QMC::AccessPublic, QMetaType::Void),
        // Method 'decreaseTextSize'
        QtMocHelpers::MethodData<void()>(32, 2, QMC::AccessPublic, QMetaType::Void),
        // Method 'resetTextSize'
        QtMocHelpers::MethodData<void()>(33, 2, QMC::AccessPublic, QMetaType::Void),
        // Method 'holdAutoSave'
        QtMocHelpers::MethodData<void(bool)>(34, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 35 },
        }}),
        // Method 'printDocument'
        QtMocHelpers::MethodData<void()>(36, 2, QMC::AccessPublic, QMetaType::Void),
        // Method 'copyAsHtml'
        QtMocHelpers::MethodData<void()>(37, 2, QMC::AccessPublic, QMetaType::Void),
        // Method 'newWindow'
        QtMocHelpers::MethodData<void()>(38, 2, QMC::AccessPublic, QMetaType::Void),
        // Method 'clipboardUrl'
        QtMocHelpers::MethodData<QString() const>(39, 2, QMC::AccessPublic, QMetaType::QString),
        // Method 'clipboardText'
        QtMocHelpers::MethodData<QString() const>(40, 2, QMC::AccessPublic, QMetaType::QString),
        // Method 'documentText'
        QtMocHelpers::MethodData<QString() const>(41, 2, QMC::AccessPublic, QMetaType::QString),
        // Method 'editorTextChanged'
        QtMocHelpers::MethodData<bool()>(42, 2, QMC::AccessPublic, QMetaType::Bool),
        // Method 'setCaretPosition'
        QtMocHelpers::MethodData<void(int)>(43, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 44 },
        }}),
        // Method 'linkUrlAt'
        QtMocHelpers::MethodData<QString(int) const>(45, 2, QMC::AccessPublic, QMetaType::QString, {{
            { QMetaType::Int, 44 },
        }}),
        // Method 'emphasisSpanAt'
        QtMocHelpers::MethodData<QVariantMap(int, const QString &) const>(46, 2, QMC::AccessPublic, 0x80000000 | 47, {{
            { QMetaType::Int, 44 }, { QMetaType::QString, 48 },
        }}),
        // Method 'cursorPositionStep'
        QtMocHelpers::MethodData<int(int, int) const>(49, 2, QMC::AccessPublic, QMetaType::Int, {{
            { QMetaType::Int, 44 }, { QMetaType::Int, 50 },
        }}),
        // Method 'setSearchHighlight'
        QtMocHelpers::MethodData<void(const QString &, int)>(51, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 52 }, { QMetaType::Int, 53 },
        }}),
        // Method 'searchMatches'
        QtMocHelpers::MethodData<QVariantList(const QString &) const>(54, 2, QMC::AccessPublic, 0x80000000 | 55, {{
            { QMetaType::QString, 52 },
        }}),
        // Method 'replaceRange'
        QtMocHelpers::MethodData<void(int, int, const QString &)>(56, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 57 }, { QMetaType::Int, 58 }, { QMetaType::QString, 59 },
        }}),
        // Method 'insideFence'
        QtMocHelpers::MethodData<bool(int) const>(60, 2, QMC::AccessPublic, QMetaType::Bool, {{
            { QMetaType::Int, 44 },
        }}),
        // Method 'windowGeometry'
        QtMocHelpers::MethodData<QVariantMap() const>(61, 2, QMC::AccessPublic, 0x80000000 | 47),
        // Method 'saveWindowGeometry'
        QtMocHelpers::MethodData<void(int, int, int, int, bool)>(62, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 63 }, { QMetaType::Int, 64 }, { QMetaType::Int, 65 }, { QMetaType::Int, 66 },
            { QMetaType::Bool, 67 },
        }}),
        // Method 'documentFontChanged'
        QtMocHelpers::MethodData<void()>(68, 2, QMC::AccessPublic, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'fileUrl'
        QtMocHelpers::PropertyData<QUrl>(69, 0x80000000 | 13, QMC::DefaultPropertyFlags | QMC::EnumOrFlag, 0),
        // property 'fileName'
        QtMocHelpers::PropertyData<QString>(70, QMetaType::QString, QMC::DefaultPropertyFlags, 0),
        // property 'modified'
        QtMocHelpers::PropertyData<bool>(71, QMetaType::Bool, QMC::DefaultPropertyFlags, 1),
        // property 'status'
        QtMocHelpers::PropertyData<QString>(72, QMetaType::QString, QMC::DefaultPropertyFlags, 2),
        // property 'wordCount'
        QtMocHelpers::PropertyData<int>(73, QMetaType::Int, QMC::DefaultPropertyFlags, 3),
        // property 'darkMode'
        QtMocHelpers::PropertyData<bool>(74, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 4),
        // property 'textScale'
        QtMocHelpers::PropertyData<qreal>(75, QMetaType::QReal, QMC::DefaultPropertyFlags, 5),
        // property 'themeBackground'
        QtMocHelpers::PropertyData<QString>(76, QMetaType::QString, QMC::DefaultPropertyFlags, 6),
        // property 'themeForeground'
        QtMocHelpers::PropertyData<QString>(77, QMetaType::QString, QMC::DefaultPropertyFlags, 6),
        // property 'themeAccent'
        QtMocHelpers::PropertyData<QString>(78, QMetaType::QString, QMC::DefaultPropertyFlags, 6),
        // property 'themeAccentForeground'
        QtMocHelpers::PropertyData<QString>(79, QMetaType::QString, QMC::DefaultPropertyFlags, 6),
        // property 'themeSelection'
        QtMocHelpers::PropertyData<QString>(80, QMetaType::QString, QMC::DefaultPropertyFlags, 6),
        // property 'themeSelectionForeground'
        QtMocHelpers::PropertyData<QString>(81, QMetaType::QString, QMC::DefaultPropertyFlags, 6),
        // property 'themePanelBackground'
        QtMocHelpers::PropertyData<QString>(82, QMetaType::QString, QMC::DefaultPropertyFlags, 6),
        // property 'editorFont'
        QtMocHelpers::PropertyData<QString>(83, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 7),
        // property 'availableFonts'
        QtMocHelpers::PropertyData<QStringList>(84, QMetaType::QStringList, QMC::DefaultPropertyFlags | QMC::Constant),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<Backend, qt_meta_tag_ZN7BackendE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject Backend::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN7BackendE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN7BackendE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN7BackendE_t>.metaTypes,
    nullptr
} };

void Backend::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<Backend *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->fileUrlChanged(); break;
        case 1: _t->modifiedChanged(); break;
        case 2: _t->statusChanged(); break;
        case 3: _t->wordCountChanged(); break;
        case 4: _t->darkModeChanged(); break;
        case 5: _t->textScaleChanged(); break;
        case 6: _t->themeColorsChanged(); break;
        case 7: _t->editorFontChanged(); break;
        case 8: _t->saveFailed(); break;
        case 9: _t->openDialogRequested(); break;
        case 10: _t->saveDialogRequested((*reinterpret_cast<std::add_pointer_t<QUrl>>(_a[1]))); break;
        case 11: _t->saveSucceeded(); break;
        case 12: _t->externalChangeDetected((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<bool>>(_a[2]))); break;
        case 13: _t->retranslate(); break;
        case 14: _t->attachDocument((*reinterpret_cast<std::add_pointer_t<QObject*>>(_a[1]))); break;
        case 15: _t->openDialog(); break;
        case 16: _t->open((*reinterpret_cast<std::add_pointer_t<QUrl>>(_a[1]))); break;
        case 17: _t->save(); break;
        case 18: _t->saveAsDialog(); break;
        case 19: _t->saveAs((*reinterpret_cast<std::add_pointer_t<QUrl>>(_a[1]))); break;
        case 20: _t->discardRecovery(); break;
        case 21: _t->reloadFromDisk(); break;
        case 22: _t->keepExternalVersion(); break;
        case 23: _t->increaseTextSize(); break;
        case 24: _t->decreaseTextSize(); break;
        case 25: _t->resetTextSize(); break;
        case 26: _t->holdAutoSave((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 27: _t->printDocument(); break;
        case 28: _t->copyAsHtml(); break;
        case 29: _t->newWindow(); break;
        case 30: { QString _r = _t->clipboardUrl();
            if (_a[0]) *reinterpret_cast<QString*>(_a[0]) = std::move(_r); }  break;
        case 31: { QString _r = _t->clipboardText();
            if (_a[0]) *reinterpret_cast<QString*>(_a[0]) = std::move(_r); }  break;
        case 32: { QString _r = _t->documentText();
            if (_a[0]) *reinterpret_cast<QString*>(_a[0]) = std::move(_r); }  break;
        case 33: { bool _r = _t->editorTextChanged();
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 34: _t->setCaretPosition((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 35: { QString _r = _t->linkUrlAt((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])));
            if (_a[0]) *reinterpret_cast<QString*>(_a[0]) = std::move(_r); }  break;
        case 36: { QVariantMap _r = _t->emphasisSpanAt((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2])));
            if (_a[0]) *reinterpret_cast<QVariantMap*>(_a[0]) = std::move(_r); }  break;
        case 37: { int _r = _t->cursorPositionStep((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2])));
            if (_a[0]) *reinterpret_cast<int*>(_a[0]) = std::move(_r); }  break;
        case 38: _t->setSearchHighlight((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2]))); break;
        case 39: { QVariantList _r = _t->searchMatches((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast<QVariantList*>(_a[0]) = std::move(_r); }  break;
        case 40: _t->replaceRange((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[3]))); break;
        case 41: { bool _r = _t->insideFence((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])));
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 42: { QVariantMap _r = _t->windowGeometry();
            if (_a[0]) *reinterpret_cast<QVariantMap*>(_a[0]) = std::move(_r); }  break;
        case 43: _t->saveWindowGeometry((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[4])),(*reinterpret_cast<std::add_pointer_t<bool>>(_a[5]))); break;
        case 44: _t->documentFontChanged(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (Backend::*)()>(_a, &Backend::fileUrlChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (Backend::*)()>(_a, &Backend::modifiedChanged, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (Backend::*)()>(_a, &Backend::statusChanged, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (Backend::*)()>(_a, &Backend::wordCountChanged, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (Backend::*)()>(_a, &Backend::darkModeChanged, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (Backend::*)()>(_a, &Backend::textScaleChanged, 5))
            return;
        if (QtMocHelpers::indexOfMethod<void (Backend::*)()>(_a, &Backend::themeColorsChanged, 6))
            return;
        if (QtMocHelpers::indexOfMethod<void (Backend::*)()>(_a, &Backend::editorFontChanged, 7))
            return;
        if (QtMocHelpers::indexOfMethod<void (Backend::*)()>(_a, &Backend::saveFailed, 8))
            return;
        if (QtMocHelpers::indexOfMethod<void (Backend::*)()>(_a, &Backend::openDialogRequested, 9))
            return;
        if (QtMocHelpers::indexOfMethod<void (Backend::*)(const QUrl & )>(_a, &Backend::saveDialogRequested, 10))
            return;
        if (QtMocHelpers::indexOfMethod<void (Backend::*)()>(_a, &Backend::saveSucceeded, 11))
            return;
        if (QtMocHelpers::indexOfMethod<void (Backend::*)(bool , bool )>(_a, &Backend::externalChangeDetected, 12))
            return;
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<QUrl*>(_v) = _t->fileUrl(); break;
        case 1: *reinterpret_cast<QString*>(_v) = _t->fileName(); break;
        case 2: *reinterpret_cast<bool*>(_v) = _t->modified(); break;
        case 3: *reinterpret_cast<QString*>(_v) = _t->status(); break;
        case 4: *reinterpret_cast<int*>(_v) = _t->wordCount(); break;
        case 5: *reinterpret_cast<bool*>(_v) = _t->darkMode(); break;
        case 6: *reinterpret_cast<qreal*>(_v) = _t->textScale(); break;
        case 7: *reinterpret_cast<QString*>(_v) = _t->themeBackground(); break;
        case 8: *reinterpret_cast<QString*>(_v) = _t->themeForeground(); break;
        case 9: *reinterpret_cast<QString*>(_v) = _t->themeAccent(); break;
        case 10: *reinterpret_cast<QString*>(_v) = _t->themeAccentForeground(); break;
        case 11: *reinterpret_cast<QString*>(_v) = _t->themeSelection(); break;
        case 12: *reinterpret_cast<QString*>(_v) = _t->themeSelectionForeground(); break;
        case 13: *reinterpret_cast<QString*>(_v) = _t->themePanelBackground(); break;
        case 14: *reinterpret_cast<QString*>(_v) = _t->editorFont(); break;
        case 15: *reinterpret_cast<QStringList*>(_v) = _t->availableFonts(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 5: _t->setDarkMode(*reinterpret_cast<bool*>(_v)); break;
        case 14: _t->setEditorFont(*reinterpret_cast<QString*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *Backend::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Backend::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN7BackendE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Backend::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 45)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 45;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 45)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 45;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    }
    return _id;
}

// SIGNAL 0
void Backend::fileUrlChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Backend::modifiedChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void Backend::statusChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void Backend::wordCountChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void Backend::darkModeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void Backend::textScaleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void Backend::themeColorsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void Backend::editorFontChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void Backend::saveFailed()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void Backend::openDialogRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}

// SIGNAL 10
void Backend::saveDialogRequested(const QUrl & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 10, nullptr, _t1);
}

// SIGNAL 11
void Backend::saveSucceeded()
{
    QMetaObject::activate(this, &staticMetaObject, 11, nullptr);
}

// SIGNAL 12
void Backend::externalChangeDetected(bool _t1, bool _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 12, nullptr, _t1, _t2);
}
QT_WARNING_POP
