#define SMTP_SERVER_PORT 8080
#define MAX_MESSAGE_BODY_SIZE 1024
#define MAX_NUMBER_OF_ACCOUNTS 10

#define DOMAIN "@email.arpa.furg"
#define EOL_MESSAGE_MARK '\n'

typedef struct emailAccount {
  char *emailAddress;
  char *username;
  char *password;
} emailAccount;

typedef struct message {
  char *receiverAddress;
  char *senderAddress;
  char *messageBody;
} message;

typedef struct mailbox {
  char *boxOwnerEmail;
  message *box[];
} mailbox;

// Utils
void initializeAccountArray(emailAccount *desiredArray);

#pragma region AccountManipulationMethods
  void createNewAccount(const char *username, const char *password);
  void deleteAccount(const char *username);
  void checkCredentials(const char *emailAddress, const char *password);
#pragma endregion AccountManipulationMethods

#pragma region EmailManipulationMethods
  /**
   * @brief Method used to create a new message pointer.
   * 
   * @param senderEmail Email from the person who is sending the email
   * @param receiverEmail Email from the person who is going to receibe the email
   * @param messageBody Email message body
   */
  message *createMessage(const char *senderEmail, const char *receiverEmail, const char *messageBody);

  /**
   * @brief Method used to create a new message pointer.
   * 
   * @param senderEmail Email from the person who is sending the email
   * @param receiverEmail Email from the person who is going to receibe the email
   * @param messageBody Email message body
   */
  void sendMailBoxData(const char *emailAddress);

  /**
   * @brief Method used to create a new message pointer.
   * 
   * @param senderEmail Email from the person who is sending the email
   * @param receiverEmail Email from the person who is going to receibe the email
   * @param messageBody Email message body
   */
  void sendEmailToReceiver(message *message);

  /**
   * @brief Method used to create a new message pointer.
   * 
   * @param senderEmail Email from the person who is sending the email
   * @param receiverEmail Email from the person who is going to receibe the email
   * @param messageBody Email message body
   * 
   */
  void sendEmailDataForReading(const char *emailAddress);
#pragma endregion EmailManipulationMethods