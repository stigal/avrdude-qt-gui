#include "avrpart.h"
#include <QDir>



AvrPart::AvrPart(Settings *sa, QString name, QObject *parent)
    : QObject(parent), settings(sa)
{
    dudePartNos["AT90S1200"]		=		"1200";
    dudePartNos["AT90S2313"]		=		"2313";
    dudePartNos["AT90S2333"]		=		"2333";
    dudePartNos["AT90S2343"]		=		"2343";
    dudePartNos["Attiny22"]		=		"2343";
    dudePartNos["AT90S4414"]		=		"4414";
    dudePartNos["AT90S4433"]		=		"4433";
    dudePartNos["AT90S4434"]		=		"4434";
    dudePartNos["AT90S8515"]		=		"8515";
    dudePartNos["AT90S8535"]		=		"8535";
    dudePartNos["AT90CAN128"]		=		"c128";
    dudePartNos["AT90CAN32"]		=		"c32";
    dudePartNos["AT90CAN64"]		=		"c64";
    dudePartNos["ATMEGA103"]		=		"m103";
    dudePartNos["ATMEGA128"]		=		"m128";
    dudePartNos["ATMEGA1280"]		=		"m1280";
    dudePartNos["ATMEGA1281"]		=		"m1281";
    dudePartNos["ATMEGA1284P"]		=		"m1284p";
    dudePartNos["ATMEGA128RFA1"]	=		"m128rfa1";
    dudePartNos["ATMEGA16"]		=		"m16";
    dudePartNos["ATMEGA161"]		=		"m161";
    dudePartNos["ATMEGA162"]		=		"m162";
    dudePartNos["ATMEGA163"]		=		"m163";
    dudePartNos["ATMEGA164"]		=		"m164";
    dudePartNos["ATMEGA164P"]		=		"m164p";
    dudePartNos["ATMEGA168"]		=		"m168";
    dudePartNos["ATMEGA169"]		=		"m169";
    dudePartNos["ATMEGA2560"]		=		"m2560";
    dudePartNos["ATMEGA2561"]		=		"m2561";
    dudePartNos["ATMEGA32"]		=		"m32";
    dudePartNos["ATMEGA324P"]		=		"m324p";
    dudePartNos["ATMEGA325"]		=		"m325";
    dudePartNos["ATMEGA3250"]		=		"m3250";
    dudePartNos["ATMEGA328P"]		=		"m328p";
    dudePartNos["ATMEGA329"]		=		"m329";
    dudePartNos["ATMEGA3290"]		=		"m3290";
    dudePartNos["ATMEGA329P"]		=		"m329p";
    dudePartNos["ATMEGA3290P"]		=		"m3290p";
    dudePartNos["ATMEGA32U4"]		=		"m32u4";
    dudePartNos["ATMEGA48"]		=		"m48";
    dudePartNos["ATMEGA64"]		=		"m64";
    dudePartNos["ATMEGA640"]		=		"m640";
    dudePartNos["ATMEGA644P"]		=		"m644p";
    dudePartNos["ATMEGA644"]		=		"m644";
    dudePartNos["ATMEGA645"]		=		"m645";
    dudePartNos["ATMEGA6450"]		=		"m6450";
    dudePartNos["ATMEGA649"]		=		"m649";
    dudePartNos["ATMEGA6490"]		=		"m6490";
    dudePartNos["ATMEGA8"]		=		"m8";
    dudePartNos["ATMEGA8515"]		=		"m8515";
    dudePartNos["ATMEGA8535"]		=		"m8535";
    dudePartNos["ATMEGA88"]		=		"m88";
    dudePartNos["AT90PWM2"]		=		"pwm2";
    dudePartNos["AT90PWM2B"]		=		"pwm2b";
    dudePartNos["AT90PWM3"]		=		"pwm3";
    dudePartNos["AT90PWM3B"]		=		"pwm3b";
    dudePartNos["ATTINY10"]		=		"t10";
    dudePartNos["ATTINY11"]		=		"t12";
    dudePartNos["ATTINY12"]		=		"t12";
    dudePartNos["ATTINY13"]		=		"t13";
    dudePartNos["ATTINY15"]		=		"t15";
    dudePartNos["ATTINY2313"]		=		"t2313";
    dudePartNos["ATTINY25"]		=		"t25";
    dudePartNos["ATTINY26"]		=		"t26";
    dudePartNos["ATTINY261"]		=		"t261";
    dudePartNos["ATTINY4"]		=		"t4";
    dudePartNos["ATTINY44"]		=		"t44";
    dudePartNos["ATTINY45"]		=		"t45";
    dudePartNos["ATTINY461"]		=		"t461";
    dudePartNos["ATTINY5"]		=		"t5";
    dudePartNos["ATTINY84"]		=		"t84";
    dudePartNos["ATTINY85"]		=		"t85";
    dudePartNos["ATTINY861"]		=		"t861";
    dudePartNos["ATTINY88"]		=		"t88";
    dudePartNos["ATTINY9"]		=		"t9";
    dudePartNos["AT32uca0512"]		=		"ucr2";
    dudePartNos["ATMEGA1286"]		=		"usb1286";
    dudePartNos["ATMEGA1287"]		=		"usb1287";
    dudePartNos["ATMEGA162"]		=		"usb162";
    dudePartNos["ATMEGA647"]		=		"usb646";
    dudePartNos["ATMEGA647"]		=		"usb647";
    dudePartNos["ATMEGA82"]		=		"usb82";
    dudePartNos["ATXMEGA128A1"]		=		"x128a1";
    dudePartNos["ATXMEGA128A1revD"]	=		"x128a1d";
    dudePartNos["ATXMEGA128A3"]		=		"x128a3";
    dudePartNos["ATXMEGA128A4"]		=		"x128a4";
    dudePartNos["ATXMEGA16A4"]		=		"x16a4";
    dudePartNos["ATXMEGA192A1"]		=		"x192a1";
    dudePartNos["ATXMEGA192A3"]		=		"x192a3";
    dudePartNos["ATXMEGA256A1"]		=		"x256a1";
    dudePartNos["ATXMEGA256A3"]		=		"x256a3";
    dudePartNos["ATXMEGA256A3B"]	=		"x256a3b";
    dudePartNos["ATXMEGA32A4"]		=		"x32a4";
    dudePartNos["ATXMEGA64A1"]		=		"x64a1";
    dudePartNos["ATXMEGA64A3"]		=		"x64a3";
    dudePartNos["ATXMEGA64A4"]		=		"x64a4";

    m_fusesModel = new RegistersModel(this);
    m_fuseFieldsModel = new RegisterFieldsModel(this);

    m_lockBytesModel = new RegistersModel(this);
    m_lockByteFieldsModel = new RegisterFieldsModel(this);

    // set the backend data structures
    m_fusesModel->setRegisters(&fuseRegs);
    m_fuseFieldsModel->setRegisters(&fuseRegs);
    m_lockByteFieldsModel->setRegisters(&lockBytes);

    db = QSqlDatabase::addDatabase("QSQLITE");
    if (settings->deviceData == Settings::DeviceDb_SQLite) {
        db.setDatabaseName(settings->sqlitePath);
        if (!db.open()) {
        }
    }

    setPartName(name); // do it only after the creating of the model objects
}


QString AvrPart::getSignature() const
{
    return QString("0x%1:0x%2:0x%3")
                .arg(QString::number(sign0, 16).rightJustified(2, '0').toUpper())
                .arg(QString::number(sign1, 16).rightJustified(2, '0').toUpper())
                .arg(QString::number(sign2, 16).rightJustified(2, '0').toUpper());
}

bool AvrPart::setPartName(QString name)
{
    switch (settings->deviceData) {
    case Settings::DeviceDb_SQLite:
        return setPartNameFromSqlite(name);
        break;
    case Settings::DeviceDb_XML:
        return setPartNameFromXML(name);
        break;
    }
    return false;
}

bool AvrPart::setPartNameFromSqlite(QString name)
{
    QSqlQuery signatureQuery(db);
    signatureQuery.prepare("SELECT S0, S1, S2 FROM devices WHERE name = :name");
    signatureQuery.bindValue(":name", name);
    if (signatureQuery.exec()) {
        if (signatureQuery.next()) {
            sign0 = signatureQuery.value(0).toInt();
            sign1 = signatureQuery.value(1).toInt();
            sign2 = signatureQuery.value(2).toInt();
            m_partNameStr = name;
            return fillFuseAndLockData();
        }
    } else {
        qWarning() << signatureQuery.lastError() << signatureQuery.lastQuery();
    }
    return false;
}

bool AvrPart::setPartNameFromXML(QString name)
{
    try {
        domFile.setFileName(settings->xmlsPath+"/"+name+".xml");
        if (!domFile.open(QFile::ReadOnly))  {
            throw QString(tr("Could not open the %1 xml file")).arg(name+".xml");
        }

        if (!domDoc.setContent(&domFile)) {
            domFile.close();
            return false;
        }
        domFile.close();

        QDomNode signatureNode = domDoc.elementsByTagName("SIGNATURE").item(0);
        if (!signatureNode.isNull()) {
            QDomNode byte = signatureNode.firstChild();
            QDomElement currentElement;

            while(!byte.isNull()) {
                bool ok = false;
                currentElement = byte.toElement();
                if (currentElement.tagName() == "ADDR000") {
                    sign0 = currentElement.text().right(2).toInt(&ok, 16);
                } else if (currentElement.tagName() == "ADDR001") {
                    sign1 = currentElement.text().right(2).toInt(&ok, 16);
                } else if (currentElement.tagName() == "ADDR002") {
                    sign2 = currentElement.text().right(2).toInt(&ok, 16);
                    if (ok)
                        break;
                }

                if (!ok) {
                    throw QString(tr("Could not read signature byte"));
                    return false;
                }
                byte = byte.nextSibling();
            }
        } else {
            throw QString(tr("Could not find the <SIGNATURE> key in the %1.xml file")).arg(name);
        }

        m_avrdudePartNo = getAvrDudePartNo(name);
        if (m_avrdudePartNo.isNull()) {
            throw (QString(tr("Unsupported part")));
        } else {
            m_partNameStr = name;
            if (!fillFuseAndLockData()) {
                throw QString(tr("Unable to read fuse information"));
            }
            return true;
        }
    } catch (QString ex) {
        errorString = ex;
        m_partNameStr = tr("Invalid xml file");
        return false;
    }
}

QString AvrPart::getAvrDudePartNo(QString name) const
{
    if (dudePartNos.contains(name.toUpper())) {
        return dudePartNos.value(name.toUpper());
    } else {
        return QString();
    }
}

bool AvrPart::fillFuseAndLockData()
{
    bool ret = false;
    fuseFieldsModel()->clear();
    lockByteFieldsModel()->clear();

    while (fuseRegs.size()) {
        delete fuseRegs.takeFirst();
    }

    while (lockBytes.size()) {
        delete lockBytes.takeFirst();
    }

    switch (settings->deviceData) {
    case Settings::DeviceDb_SQLite:
        ret = fillFuseAndLockDataFromSQLite();
        break;
    case Settings::DeviceDb_XML:
        ret = fillFuseAndLockDataFromXML();
        break;
    }

    if (ret)  {
        // set the backend data structures
        m_fusesModel->setRegisters(&fuseRegs);
        m_fuseFieldsModel->setRegisters(&fuseRegs);
        m_lockByteFieldsModel->setRegisters(&lockBytes);
    }

    return ret;
}

bool AvrPart::fillFuseAndLockDataFromSQLite()
{

    if (db.isOpen()) {
        QSqlQuery deviceIdQuery(db);
        deviceIdQuery.prepare("SELECT id from devices where name = :name");
        deviceIdQuery.bindValue(":name", m_partNameStr);
        if (!deviceIdQuery.exec()) {
            return false;
        }
        deviceIdQuery.next();

        QSqlQuery registersQuery(db);
        registersQuery.prepare("SELECT dr.id,  dt.name from devices_registers dr, device_register_types dt  "
                               "where device_id=:device_id and dt.id = dr.type_id");
        registersQuery.bindValue(":device_id", deviceIdQuery.value(0).toInt());
        if (!registersQuery.exec()) {
            return false;
        }

        while (registersQuery.next()) {
            Register *currentRegister = new Register(registersQuery.value(1).toString(), 0, 0); // FIXME offset, size
            QSqlQuery bitFieldQuery(db);
            bitFieldQuery.prepare("SELECT name, short_name, mask, id FROM bitfields WHERE register_id=:id");
            bitFieldQuery.bindValue(":id", registersQuery.value(0).toInt());
            if (!bitFieldQuery.exec()) {
                return false;
            }
            while (bitFieldQuery.next()) {
                BitField currentBitField(bitFieldQuery.value(0).toString(),
                                         bitFieldQuery.value(1).toString(),
                                         bitFieldQuery.value(2).toInt(),
                                         0,
                                         false);

                QSqlQuery enumQuery(db);
                enumQuery.prepare("SELECT name, mask, value, text FROM bitfields_enums WHERE bitfield_id=:id");
                enumQuery.bindValue(":id", bitFieldQuery.value(3).toInt());
                if (!enumQuery.exec()) {
                    return false;
                }
                if (enumQuery.size()) {
                    currentBitField.setEnum(true);
                    while (enumQuery.next()) {
                        currentBitField.addEnumValue(enumQuery.value(2).toInt(), enumQuery.value(3).toString());
                    }
                }
                currentRegister->addBitField(currentBitField);
            }

            if (registersQuery.value(1).toString().startsWith("LOCK")) {
                lockBytes.append(currentRegister);
            } else {
                fuseRegs.append(currentRegister);
            }
        }
        return true;
    }

    return false;
}

bool AvrPart::fillFuseAndLockDataFromXML()
{
    try {
        domFile.setFileName(settings->xmlsPath+"/"+m_partNameStr+".xml");
        if (!domFile.open(QFile::ReadOnly))  {
            throw QString(tr("Could not open the %1 xml file")).arg(m_partNameStr+".xml");
        }

        if (!domDoc.setContent(&domFile)) {
            domFile.close();
            return false;
        }
        domFile.close();

        QDomNode registersFuseNode;
        QDomNode lockBitsNode;
        bool regFuseFound = false;
        bool regLockBitFound = false;

        QDomNodeList v2List = domDoc.elementsByTagName("V2");
        if (v2List.size() == 0) {
            throw (tr("Could not find the V2 tag in the xml file. Maybe you should update it to a newer one."));
        }

        QDomNodeList list =  v2List.at(0).toElement().elementsByTagName("registers");
        for (int i = 0; i<list.size() ;i++){
            if (list.item(i).toElement().attribute("memspace") == "FUSE"){
                regFuseFound = true;
                registersFuseNode = list.item(i);
            } else if (list.item(i).toElement().attribute("memspace") == "LOCKBIT") {
                regLockBitFound = true;
                lockBitsNode = list.item(i);
            }

            if (regFuseFound && regLockBitFound)
                break;
        }

        if (!regFuseFound) {
            throw QString(tr("Cannot found the FUSE key"));
        } else {
            // this will iterate on the High low, extended fuses or on fuse[N] keys at xmega devices
            for(int i = 0; i<registersFuseNode.childNodes().count(); i++) {
                QDomElement fuseRegElement = registersFuseNode.childNodes().item(i).toElement();
                if (fuseRegElement.attribute("name") == "")
                    break; // ignore the offset only fuseregs

                Register *currentFuseRegister = new Register(
                        fuseRegElement.attribute("name"),
                        fuseRegElement.attribute("offset").toInt(),
                        fuseRegElement.attribute("size").toInt());

                for(int j = 0; j<registersFuseNode.childNodes().item(i).childNodes().count(); j++) { // loop trough the current fuseregister's bitfields
                    QDomElement fuseBitfieldElement = registersFuseNode.childNodes().item(i).childNodes().item(j).toElement();
                    bool ok = false;
                    BitField currentBitField(fuseBitfieldElement.attribute("text"),
                                             fuseBitfieldElement.attribute("name"),
                                             fuseBitfieldElement.attribute("mask").toInt(&ok, 16),
                                             0,
                                             fuseBitfieldElement.attribute("enum", "") != "");
                    //FIXME check ok
                    if (currentBitField.isEnum()) {
                        QDomNodeList enumNodesList = registersFuseNode.parentNode().childNodes();
                        for (int k = 0; k<enumNodesList.count(); k++) {
                            QDomElement enumElement = enumNodesList.item(k).toElement();
                            if ((enumElement.tagName() == "enumerator") &&
                                (enumElement.attribute("name") == fuseBitfieldElement.attribute("enum", ""))) {
                                for (int l = 0; l<enumElement.childNodes().count(); l++) {
                                    QDomElement enumItemElement = enumElement.childNodes().item(l).toElement();
                                    bool ok = false;
                                    int val = enumItemElement.attribute("val").remove("0x").toInt(&ok,16);
                                    if (ok) {
                                        currentBitField.addEnumValue(val, enumItemElement.attribute("text"));
                                    } else {
                                        qWarning() << tr("%1 is not a hexadecimal number").arg(enumItemElement.attribute("val"));
                                    }
                                }
                                break;
                            }
                        }
                    }
                    currentFuseRegister->addBitField(currentBitField);
                }
                qWarning() << currentFuseRegister->name();
                fuseRegs.append(currentFuseRegister);
            } // fuse for loo
        } // fuse key found or not

        if (!regLockBitFound) {
            throw QString(tr("Cannot found the LOCKBITS key"));
        } else {
            for(int i = 0; i<lockBitsNode.childNodes().count(); i++) {
                QDomElement lockBitElement = lockBitsNode.childNodes().item(i).toElement();
                if (lockBitElement.attribute("name") == "")
                    break; // ignore the offset only lockbits
                Register *currentLockByte = new Register(lockBitElement.attribute("name", tr("Name field empty")),
                                        lockBitElement.attribute("offset").toInt(),
                                        lockBitElement.attribute("size").toInt());
                //FIXME check ok
                for(int j = 0; j<lockBitsNode.childNodes().item(i).childNodes().count(); j++) {
                    QDomElement lockBitBitfieldElement = lockBitsNode.childNodes().item(i).childNodes().item(j).toElement();
                    QString enumName = lockBitBitfieldElement.attribute("enum", "");
                    bool ok = false;
                    BitField currentBitField(lockBitBitfieldElement.attribute("text"),
                                             lockBitBitfieldElement.attribute("name"),
                                             lockBitBitfieldElement.attribute("mask").toInt(&ok, 16),
                                             0,
                                             lockBitBitfieldElement.attribute("enum", "") == "");

                    if (lockBitBitfieldElement.attribute("enum", "") != "") {
                        QDomNodeList enumNodesList = lockBitsNode.parentNode().childNodes();
                        for (int k = 0; k<enumNodesList.count(); k++) {
                            QDomElement enumElement = enumNodesList.item(k).toElement();
                            if ((enumElement.tagName() == "enumerator") &&
                                (enumElement.attribute("name") == enumName)) {
                                for (int l = 0; l<enumElement.childNodes().count(); l++) {
                                    QDomElement enumItemElement = enumElement.childNodes().item(l).toElement();
                                    bool ok = false;
                                    int val = enumItemElement.attribute("val").remove("0x").toInt(&ok,16);
                                    if (ok) {
                                        currentBitField.addEnumValue(val, enumItemElement.attribute("text", tr("Unable to read enum key value")));
                                    }
                                }
                                break;
                            }
                        }
                    }
                    currentLockByte->addBitField(currentBitField);
                }
                lockBytes.append(currentLockByte);
            }
        }
    } catch (QString ex) {
        errorString = ex;
        qWarning() << ex;
        return false;
    }
    return true;
}

bool AvrPart::findXml(QString )
{
    qWarning() << "Not yet implemented";
    return false;
}

QString AvrPart::findDeviceWithSignature(quint8 s0, quint8 s1, quint8 s2)
{
    switch (settings->deviceData) {
    case Settings::DeviceDb_SQLite:
        return findDeviceWithSignatureSqlite(s0, s1, s2);
        break;
    case Settings::DeviceDb_XML:
        return findDeviceWithSignatureXML(s0, s1, s2);
        break;
    }
    return "";
}

QString AvrPart::findDeviceWithSignatureSqlite(quint8 s0, quint8 s1, quint8 s2)
{
    QSqlQuery partQuery(db);
    partQuery.prepare("SELECT name FROM devices WHERE S0 = :s0 AND S1 = :s1 AND S2 = :s2");
    partQuery.bindValue(":s0", s0);
    partQuery.bindValue(":s1", s1);
    partQuery.bindValue(":s2", s2);

    if (partQuery.exec()) {
        partQuery.next();
        return partQuery.value(0).toString();
    }
    return QString("");
}

QString AvrPart::findDeviceWithSignatureXML(quint8 s0, quint8 s1, quint8 s2)
{
    QStringList nameFilter;
    nameFilter.append("*.xml");
    QStringList xmls = QDir(settings->xmlsPath).entryList(nameFilter, QDir::Files);
    foreach (QString xmlFileName, xmls) {
        domFile.setFileName(settings->xmlsPath+"/"+xmlFileName);
        if (!domFile.open(QFile::ReadOnly))  {
            throw QString("Could not open the %1 xml file").arg(xmlFileName);
        }

        if (!domDoc.setContent(&domFile)) {
            domFile.close();
            return "";
        }
        domFile.close();

        QDomNode signatureNode = domDoc.elementsByTagName("SIGNATURE").item(0);
        if (!signatureNode.isNull()) {
            QDomNode byte = signatureNode.firstChild();
            QDomElement currentElement;

            while(!byte.isNull()) {
                bool ok = false;
                currentElement = byte.toElement();
                if (currentElement.tagName() == "ADDR000") {
                    sign0 = currentElement.text().right(2).toInt(&ok, 16);
                } else if (currentElement.tagName() == "ADDR001") {
                    sign1 = currentElement.text().right(2).toInt(&ok, 16);
                } else if (currentElement.tagName() == "ADDR002") {
                    sign2 = currentElement.text().right(2).toInt(&ok, 16);
                    if (ok) {
                        if ((sign0 == s0) && (sign1 == s1) && (sign2 == s2)) {
                            QFileInfo xmlInfo(xmlFileName);
                            return xmlInfo.baseName();
                        }
                    }
                    break;
                }
                byte = byte.nextSibling();
            }
        }
    }
    return QString("");
}

// FIXME generate list on device change
QStringList AvrPart::getSupportedFuses()
{
    QStringList ret;
    foreach (Register *fr, fuseRegs) {
        ret.append(fr->name());
    }
    return ret;
}

void AvrPart::fusesChanged()
{
    fusesModel()->emitChanged();
}
