isEmpty(QMAKE_TEMPLATE_PRI) {
QMAKE_TEMPLATE_PRI = used

$$type(OUT_PWD)

DESTDIR = $${OUT_PWD}/out
$$type(DESTDIR)

OBJECTS_DIR = $${OUT_PWD}/.obj
MOC_DIR = $${OUT_PWD}/.moc
RCC_DIR = $${OUT_PWD}/.rcc
UI_DIR = $${OUT_PWD}/.ui

}
