#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <sys/types.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <netinet/in.h>

#include <pthread.h>

#include "serverDefs.h"

const size_t emailAccountSize = sizeof(emailAccount);
emailAccount *registeredAccounts;

int main() {
  for (int i = 0; i < MAX_NUMBER_OF_ACCOUNTS; i += emailAccountSize) {
    registeredAccounts[i];
  }

  return 0;
}

// Utils
void initializeAccountArray(emailAccount *desiredArray) {
  size_t maxNumberOfRegisteredAccounts = MAX_NUMBER_OF_ACCOUNTS * (sizeof(emailAccount));
  registeredAccounts = (emailAccount *) malloc(maxNumberOfRegisteredAccounts);

  for (int i = 0; i < MAX_NUMBER_OF_ACCOUNTS; i += emailAccountSize) {
    
  }
}

// Account related methods
void createNewAccount(const char *username, const char *password) {
  emailAccount *newAccount;
  char *completeEmailAddress = malloc(sizeof(username) + sizeof(DOMAIN));
  completeEmailAddress = strcat(username, DOMAIN);

  newAccount = malloc(sizeof(emailAccount));
  newAccount->emailAddress = malloc(sizeof(completeEmailAddress));
  newAccount->username = malloc(sizeof(username));
  newAccount->password = malloc(sizeof(password));

  strcpy(newAccount->emailAddress, completeEmailAddress);
  strcpy(newAccount->username, username);
  strcpy(newAccount->password, password);

  size_t emailAccountSize = sizeof(newAccount);

  registeredAccounts = malloc(emailAccountSize);
}

void deleteAccount(const char *username) {

}

void checkCredentials(const char *emailAddress, const char *password) {

}




// Email manipulation methods
message *createMessage(const char *senderEmail, const char *receiverEmail, const char *messageBody);
void sendMailBoxData(const char *emailAddress);
void sendEmailToReceiver(message *message);
void sendEmailDataForReading(const char *emailAddress)