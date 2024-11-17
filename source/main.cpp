#include <iostream>
#include <Poco/Net/SecureSMTPClientSession.h>
#include <Poco/Net/StreamSocket.h>
#include <Poco/Net/MailMessage.h>

#define SecurePort 587 //Standard port used by SMTP
#define AltPort 2525 //Alternative SMTP port, in case port 587 is blocked
#define UnsecurePort 25 //Older unsecured port, not recommended

using std::cin;
using std::cout;
using std::string;
using Poco::Net::MailMessage;
using Poco::Net::MailRecipient;

class SMTPClient {
    public:
    SMTPClient(string hostname, string username, string password){
        this->hostname = hostname;
        this->username = username;
        this->password = password;
    }

    int sendMsg(string subject, string msg, string recepient) {
        MailMessage msg;

        msg.addRecipient(MailRecipient(MailRecipient::PRIMARY_RECIPIENT,recepient));
    }
    
    private:
    string hostname;
    string username;
    string password;
};
