#ifndef CONFIG_H
#define CONFIG_H



#include <QObject>
#include <QMap>
#include <QUrl>
#include <QVector>

class Config : public QObject
{
    Q_OBJECT
public:
    QString VERSION_CLIENT;
    QString W3_VERSION_LATEST;
    QString W3_VERSION_126;
    int PATCH;
    QString W3PATH;
    QString DOCPATH;
    QString DOCMAPPATH;
    QString DOCMAPPATHDL;
    QString OLDMAPPATH;
    QString OLDMAPPATHDL;
    QString EUROPATH;
    QString SOUNDPATH;
    QString APPDATA;
    QString SYSTEM;
    bool USE_DUAL_VERSION;

    QVector<QString> W3_COMMON_FILES;

    QUrl json1;
    QUrl json2;
    QUrl json3;

    QString BETAPIN;

    bool SetOption(QString file, QString option, QString value);
    Config();
};


#endif //CONFIG_H
