/**
 * OpenAPI Petstore
 * This is a sample server Petstore server. For this sample, you can use the api key `special-key` to test the authorization filters.
 *
 * OpenAPI spec version: 1.0.0
 * 
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAIUser.h
 *
 * A User who is purchasing from the pet store
 */

#ifndef OAIUser_H_
#define OAIUser_H_

#include <QJsonObject>


#include <QString>

#include "OAIObject.h"

namespace OpenAPI {

class OAIUser: public OAIObject {
public:
    OAIUser();
    OAIUser(QString json);
    ~OAIUser();
    void init();
    void cleanup();

    QString asJson () override;
    QJsonObject asJsonObject() override;
    void fromJsonObject(QJsonObject json) override;
    OAIUser* fromJson(QString jsonString) override;

    qint64 getId();
    void setId(qint64 id);

    QString* getUsername();
    void setUsername(QString* username);

    QString* getFirstName();
    void setFirstName(QString* first_name);

    QString* getLastName();
    void setLastName(QString* last_name);

    QString* getEmail();
    void setEmail(QString* email);

    QString* getPassword();
    void setPassword(QString* password);

    QString* getPhone();
    void setPhone(QString* phone);

    qint32 getUserStatus();
    void setUserStatus(qint32 user_status);


    virtual bool isSet() override;

private:
    qint64 id;
    bool m_id_isSet;

    QString* username;
    bool m_username_isSet;

    QString* first_name;
    bool m_first_name_isSet;

    QString* last_name;
    bool m_last_name_isSet;

    QString* email;
    bool m_email_isSet;

    QString* password;
    bool m_password_isSet;

    QString* phone;
    bool m_phone_isSet;

    qint32 user_status;
    bool m_user_status_isSet;

};

}

#endif /* OAIUser_H_ */