/*
 * This auto-generated skeleton file illustrates how to build a server. If you
 * intend to customize it, you should edit a copy with another file name to 
 * avoid overwriting it when running the generator again.
 */
module TalkService_server;

import std.stdio;
import thrift.codegen.processor;
import thrift.protocol.binary;
import thrift.server.simple;
import thrift.server.transport.socket;
import thrift.transport.buffered;
import thrift.util.hashset;

import TalkService;
import line_types;


class TalkServiceHandler : TalkService {
  this() {
    // Your initialization goes here.
  }

  void acceptGroupInvitation(int reqSeq, string groupId) {
    // Your implementation goes here.
    writeln("acceptGroupInvitation called");
  }

  void acceptProximityMatches(string sessionId, HashSet!(string) ids) {
    // Your implementation goes here.
    writeln("acceptProximityMatches called");
  }

  string[] acquireCallRoute(string to) {
    // Your implementation goes here.
    writeln("acquireCallRoute called");
    return typeof(return).init;
  }

  string acquireCallTicket(string to) {
    // Your implementation goes here.
    writeln("acquireCallTicket called");
    return typeof(return).init;
  }

  string acquireEncryptedAccessToken(FeatureType featureType) {
    // Your implementation goes here.
    writeln("acquireEncryptedAccessToken called");
    return typeof(return).init;
  }

  string addSnsId(SnsIdType snsIdType, string snsAccessToken) {
    // Your implementation goes here.
    writeln("addSnsId called");
    return typeof(return).init;
  }

  void blockContact(int reqSeq, string id) {
    // Your implementation goes here.
    writeln("blockContact called");
  }

  void blockRecommendation(int reqSeq, string id) {
    // Your implementation goes here.
    writeln("blockRecommendation called");
  }

  void cancelGroupInvitation(int reqSeq, string groupId, string[] contactIds) {
    // Your implementation goes here.
    writeln("cancelGroupInvitation called");
  }

  VerificationSessionData changeVerificationMethod(string sessionId, VerificationMethod method) {
    // Your implementation goes here.
    writeln("changeVerificationMethod called");
    return typeof(return).init;
  }

  void clearIdentityCredential() {
    // Your implementation goes here.
    writeln("clearIdentityCredential called");
  }

  void clearMessageBox(string channelId, string messageBoxId) {
    // Your implementation goes here.
    writeln("clearMessageBox called");
  }

  void closeProximityMatch(string sessionId) {
    // Your implementation goes here.
    writeln("closeProximityMatch called");
  }

  string[string] commitSendMessage(int seq, string messageId, string[] receiverMids) {
    // Your implementation goes here.
    writeln("commitSendMessage called");
    return typeof(return).init;
  }

  string[string] commitSendMessages(int seq, string[] messageIds, string[] receiverMids) {
    // Your implementation goes here.
    writeln("commitSendMessages called");
    return typeof(return).init;
  }

  string[string] commitUpdateProfile(int seq, ProfileAttribute[] attrs, string[] receiverMids) {
    // Your implementation goes here.
    writeln("commitUpdateProfile called");
    return typeof(return).init;
  }

  void confirmEmail(string verifier, string pinCode) {
    // Your implementation goes here.
    writeln("confirmEmail called");
  }

  Group createGroup(int seq, string name, string[] contactIds) {
    // Your implementation goes here.
    writeln("createGroup called");
    return typeof(return).init;
  }

  string createQrcodeBase64Image(string url, string characterSet, int imageSize, int x, int y, int width, int height) {
    // Your implementation goes here.
    writeln("createQrcodeBase64Image called");
    return typeof(return).init;
  }

  Room createRoom(int reqSeq, string[] contactIds) {
    // Your implementation goes here.
    writeln("createRoom called");
    return typeof(return).init;
  }

  string createSession() {
    // Your implementation goes here.
    writeln("createSession called");
    return typeof(return).init;
  }

  Announcement[] fetchAnnouncements(int lastFetchedIndex) {
    // Your implementation goes here.
    writeln("fetchAnnouncements called");
    return typeof(return).init;
  }

  Message[] fetchMessages(long localTs, int count) {
    // Your implementation goes here.
    writeln("fetchMessages called");
    return typeof(return).init;
  }

  Operation[] fetchOperations(long localRev, int count) {
    // Your implementation goes here.
    writeln("fetchOperations called");
    return typeof(return).init;
  }

  Operation[] fetchOps(long localRev, int count, long globalRev, long individualRev) {
    // Your implementation goes here.
    writeln("fetchOps called");
    return typeof(return).init;
  }

  Contact[string] findAndAddContactsByEmail(int reqSeq, HashSet!(string) emails) {
    // Your implementation goes here.
    writeln("findAndAddContactsByEmail called");
    return typeof(return).init;
  }

  Contact[string] findAndAddContactsByMid(int reqSeq, string mid) {
    // Your implementation goes here.
    writeln("findAndAddContactsByMid called");
    return typeof(return).init;
  }

  Contact[string] findAndAddContactsByPhone(int reqSeq, HashSet!(string) phones) {
    // Your implementation goes here.
    writeln("findAndAddContactsByPhone called");
    return typeof(return).init;
  }

  Contact[string] findAndAddContactsByUserid(int reqSeq, string userid) {
    // Your implementation goes here.
    writeln("findAndAddContactsByUserid called");
    return typeof(return).init;
  }

  Contact findContactByUserid(string userid) {
    // Your implementation goes here.
    writeln("findContactByUserid called");
    return typeof(return).init;
  }

  Contact findContactByUserTicket(string ticketId) {
    // Your implementation goes here.
    writeln("findContactByUserTicket called");
    return typeof(return).init;
  }

  Contact[string] findContactsByEmail(HashSet!(string) emails) {
    // Your implementation goes here.
    writeln("findContactsByEmail called");
    return typeof(return).init;
  }

  Contact[string] findContactsByPhone(HashSet!(string) phones) {
    // Your implementation goes here.
    writeln("findContactsByPhone called");
    return typeof(return).init;
  }

  SnsIdUserStatus findSnsIdUserStatus(SnsIdType snsIdType, string snsAccessToken, string udidHash) {
    // Your implementation goes here.
    writeln("findSnsIdUserStatus called");
    return typeof(return).init;
  }

  void finishUpdateVerification(string sessionId) {
    // Your implementation goes here.
    writeln("finishUpdateVerification called");
  }

  Ticket generateUserTicket(long expirationTime, int maxUseCount) {
    // Your implementation goes here.
    writeln("generateUserTicket called");
    return typeof(return).init;
  }

  HashSet!(string) getAcceptedProximityMatches(string sessionId) {
    // Your implementation goes here.
    writeln("getAcceptedProximityMatches called");
    return typeof(return).init;
  }

  string[] getActiveBuddySubscriberIds() {
    // Your implementation goes here.
    writeln("getActiveBuddySubscriberIds called");
    return typeof(return).init;
  }

  string[] getAllContactIds() {
    // Your implementation goes here.
    writeln("getAllContactIds called");
    return typeof(return).init;
  }

  AuthQrcode getAuthQrcode(bool keepLoggedIn, string systemName) {
    // Your implementation goes here.
    writeln("getAuthQrcode called");
    return typeof(return).init;
  }

  string[] getBlockedContactIds() {
    // Your implementation goes here.
    writeln("getBlockedContactIds called");
    return typeof(return).init;
  }

  string[] getBlockedContactIdsByRange(int start, int count) {
    // Your implementation goes here.
    writeln("getBlockedContactIdsByRange called");
    return typeof(return).init;
  }

  string[] getBlockedRecommendationIds() {
    // Your implementation goes here.
    writeln("getBlockedRecommendationIds called");
    return typeof(return).init;
  }

  string[] getBuddyBlockerIds() {
    // Your implementation goes here.
    writeln("getBuddyBlockerIds called");
    return typeof(return).init;
  }

  Geolocation getBuddyLocation(string mid, int index) {
    // Your implementation goes here.
    writeln("getBuddyLocation called");
    return typeof(return).init;
  }

  CompactContact[] getCompactContactsModifiedSince(long timestamp) {
    // Your implementation goes here.
    writeln("getCompactContactsModifiedSince called");
    return typeof(return).init;
  }

  Group getCompactGroup(string groupId) {
    // Your implementation goes here.
    writeln("getCompactGroup called");
    return typeof(return).init;
  }

  Room getCompactRoom(string roomId) {
    // Your implementation goes here.
    writeln("getCompactRoom called");
    return typeof(return).init;
  }

  Contact getContact(string id) {
    // Your implementation goes here.
    writeln("getContact called");
    return typeof(return).init;
  }

  Contact[] getContacts(string[] ids) {
    // Your implementation goes here.
    writeln("getContacts called");
    return typeof(return).init;
  }

  string getCountryWithRequestIp() {
    // Your implementation goes here.
    writeln("getCountryWithRequestIp called");
    return typeof(return).init;
  }

  string[] getFavoriteMids() {
    // Your implementation goes here.
    writeln("getFavoriteMids called");
    return typeof(return).init;
  }

  Group getGroup(string groupId) {
    // Your implementation goes here.
    writeln("getGroup called");
    return typeof(return).init;
  }

  string[] getGroupIdsInvited() {
    // Your implementation goes here.
    writeln("getGroupIdsInvited called");
    return typeof(return).init;
  }

  string[] getGroupIdsJoined() {
    // Your implementation goes here.
    writeln("getGroupIdsJoined called");
    return typeof(return).init;
  }

  Group[] getGroups(string[] groupIds) {
    // Your implementation goes here.
    writeln("getGroups called");
    return typeof(return).init;
  }

  string[] getHiddenContactMids() {
    // Your implementation goes here.
    writeln("getHiddenContactMids called");
    return typeof(return).init;
  }

  string getIdentityIdentifier() {
    // Your implementation goes here.
    writeln("getIdentityIdentifier called");
    return typeof(return).init;
  }

  int getLastAnnouncementIndex() {
    // Your implementation goes here.
    writeln("getLastAnnouncementIndex called");
    return typeof(return).init;
  }

  long getLastOpRevision() {
    // Your implementation goes here.
    writeln("getLastOpRevision called");
    return typeof(return).init;
  }

  TMessageBox getMessageBox(string channelId, string messageBoxId, int lastMessagesCount) {
    // Your implementation goes here.
    writeln("getMessageBox called");
    return typeof(return).init;
  }

  TMessageBoxWrapUp getMessageBoxCompactWrapUp(string mid) {
    // Your implementation goes here.
    writeln("getMessageBoxCompactWrapUp called");
    return typeof(return).init;
  }

  TMessageBoxWrapUpResponse getMessageBoxCompactWrapUpList(int start, int messageBoxCount) {
    // Your implementation goes here.
    writeln("getMessageBoxCompactWrapUpList called");
    return typeof(return).init;
  }

  TMessageBox[] getMessageBoxList(string channelId, int lastMessagesCount) {
    // Your implementation goes here.
    writeln("getMessageBoxList called");
    return typeof(return).init;
  }

  TMessageBox[] getMessageBoxListByStatus(string channelId, int lastMessagesCount, int status) {
    // Your implementation goes here.
    writeln("getMessageBoxListByStatus called");
    return typeof(return).init;
  }

  TMessageBoxWrapUp getMessageBoxWrapUp(string mid) {
    // Your implementation goes here.
    writeln("getMessageBoxWrapUp called");
    return typeof(return).init;
  }

  TMessageBoxWrapUpResponse getMessageBoxWrapUpList(int start, int messageBoxCount) {
    // Your implementation goes here.
    writeln("getMessageBoxWrapUpList called");
    return typeof(return).init;
  }

  Message[] getMessagesBySequenceNumber(string channelId, string messageBoxId, long startSeq, long endSeq) {
    // Your implementation goes here.
    writeln("getMessagesBySequenceNumber called");
    return typeof(return).init;
  }

  Message[] getNextMessages(string messageBoxId, long startSeq, int messagesCount) {
    // Your implementation goes here.
    writeln("getNextMessages called");
    return typeof(return).init;
  }

  NotificationType[] getNotificationPolicy(CarrierCode carrier) {
    // Your implementation goes here.
    writeln("getNotificationPolicy called");
    return typeof(return).init;
  }

  Message[] getPreviousMessages(string messageBoxId, long endSeq, int messagesCount) {
    // Your implementation goes here.
    writeln("getPreviousMessages called");
    return typeof(return).init;
  }

  Profile getProfile() {
    // Your implementation goes here.
    writeln("getProfile called");
    return typeof(return).init;
  }

  ProximityMatchCandidateResult getProximityMatchCandidateList(string sessionId) {
    // Your implementation goes here.
    writeln("getProximityMatchCandidateList called");
    return typeof(return).init;
  }

  HashSet!(Contact) getProximityMatchCandidates(string sessionId) {
    // Your implementation goes here.
    writeln("getProximityMatchCandidates called");
    return typeof(return).init;
  }

  Message[] getRecentMessages(string messageBoxId, int messagesCount) {
    // Your implementation goes here.
    writeln("getRecentMessages called");
    return typeof(return).init;
  }

  string[] getRecommendationIds() {
    // Your implementation goes here.
    writeln("getRecommendationIds called");
    return typeof(return).init;
  }

  Room getRoom(string roomId) {
    // Your implementation goes here.
    writeln("getRoom called");
    return typeof(return).init;
  }

  RSAKey getRSAKeyInfo(IdentityProvider provider) {
    // Your implementation goes here.
    writeln("getRSAKeyInfo called");
    return typeof(return).init;
  }

  long getServerTime() {
    // Your implementation goes here.
    writeln("getServerTime called");
    return typeof(return).init;
  }

  LoginSession[] getSessions() {
    // Your implementation goes here.
    writeln("getSessions called");
    return typeof(return).init;
  }

  Settings getSettings() {
    // Your implementation goes here.
    writeln("getSettings called");
    return typeof(return).init;
  }

  Settings getSettingsAttributes(int attrBitset) {
    // Your implementation goes here.
    writeln("getSettingsAttributes called");
    return typeof(return).init;
  }

  SystemConfiguration getSystemConfiguration() {
    // Your implementation goes here.
    writeln("getSystemConfiguration called");
    return typeof(return).init;
  }

  Ticket getUserTicket() {
    // Your implementation goes here.
    writeln("getUserTicket called");
    return typeof(return).init;
  }

  WapInvitation getWapInvitation(string invitationHash) {
    // Your implementation goes here.
    writeln("getWapInvitation called");
    return typeof(return).init;
  }

  void invalidateUserTicket() {
    // Your implementation goes here.
    writeln("invalidateUserTicket called");
  }

  void inviteFriendsBySms(string[] phoneNumberList) {
    // Your implementation goes here.
    writeln("inviteFriendsBySms called");
  }

  void inviteIntoGroup(int reqSeq, string groupId, string[] contactIds) {
    // Your implementation goes here.
    writeln("inviteIntoGroup called");
  }

  void inviteIntoRoom(int reqSeq, string roomId, string[] contactIds) {
    // Your implementation goes here.
    writeln("inviteIntoRoom called");
  }

  void inviteViaEmail(int reqSeq, string email, string name) {
    // Your implementation goes here.
    writeln("inviteViaEmail called");
  }

  bool isIdentityIdentifierAvailable(IdentityProvider provider, string identifier) {
    // Your implementation goes here.
    writeln("isIdentityIdentifierAvailable called");
    return typeof(return).init;
  }

  bool isUseridAvailable(string userid) {
    // Your implementation goes here.
    writeln("isUseridAvailable called");
    return typeof(return).init;
  }

  void kickoutFromGroup(int reqSeq, string groupId, string[] contactIds) {
    // Your implementation goes here.
    writeln("kickoutFromGroup called");
  }

  void leaveGroup(int reqSeq, string groupId) {
    // Your implementation goes here.
    writeln("leaveGroup called");
  }

  void leaveRoom(int reqSeq, string roomId) {
    // Your implementation goes here.
    writeln("leaveRoom called");
  }

  string loginWithIdentityCredential(IdentityProvider identityProvider, string identifier, string password, bool keepLoggedIn, string accessLocation, string systemName, string certificate) {
    // Your implementation goes here.
    writeln("loginWithIdentityCredential called");
    return typeof(return).init;
  }

  LoginResult loginWithIdentityCredentialForCertificate(IdentityProvider identityProvider, string identifier, string password, bool keepLoggedIn, string accessLocation, string systemName, string certificate) {
    // Your implementation goes here.
    writeln("loginWithIdentityCredentialForCertificate called");
    return typeof(return).init;
  }

  string loginWithVerifier(string verifier) {
    // Your implementation goes here.
    writeln("loginWithVerifier called");
    return typeof(return).init;
  }

  LoginResult loginWithVerifierForCerificate(string verifier) {
    // Your implementation goes here.
    writeln("loginWithVerifierForCerificate called");
    return typeof(return).init;
  }

  LoginResult loginWithVerifierForCertificate(string verifier) {
    // Your implementation goes here.
    writeln("loginWithVerifierForCertificate called");
    return typeof(return).init;
  }

  void logout() {
    // Your implementation goes here.
    writeln("logout called");
  }

  void logoutSession(string tokenKey) {
    // Your implementation goes here.
    writeln("logoutSession called");
  }

  void noop() {
    // Your implementation goes here.
    writeln("noop called");
  }

  void notifiedRedirect(string[string] paramMap) {
    // Your implementation goes here.
    writeln("notifiedRedirect called");
  }

  string[string] notifyBuddyOnAir(int seq, string[] receiverMids) {
    // Your implementation goes here.
    writeln("notifyBuddyOnAir called");
    return typeof(return).init;
  }

  void notifyIndividualEvent(NotificationStatus notificationStatus, string[] receiverMids) {
    // Your implementation goes here.
    writeln("notifyIndividualEvent called");
  }

  void notifyInstalled(string udidHash, string applicationTypeWithExtensions) {
    // Your implementation goes here.
    writeln("notifyInstalled called");
  }

  void notifyRegistrationComplete(string udidHash, string applicationTypeWithExtensions) {
    // Your implementation goes here.
    writeln("notifyRegistrationComplete called");
  }

  void notifySleep(long lastRev, int badge) {
    // Your implementation goes here.
    writeln("notifySleep called");
  }

  void notifyUpdated(long lastRev, ref const(DeviceInfo) deviceInfo) {
    // Your implementation goes here.
    writeln("notifyUpdated called");
  }

  string openProximityMatch(ref const(Location) location) {
    // Your implementation goes here.
    writeln("openProximityMatch called");
    return typeof(return).init;
  }

  string registerBuddyUser(string buddyId, string registrarPassword) {
    // Your implementation goes here.
    writeln("registerBuddyUser called");
    return typeof(return).init;
  }

  void registerBuddyUserid(int seq, string userid) {
    // Your implementation goes here.
    writeln("registerBuddyUserid called");
  }

  string registerDevice(string sessionId) {
    // Your implementation goes here.
    writeln("registerDevice called");
    return typeof(return).init;
  }

  string registerDeviceWithIdentityCredential(string sessionId, IdentityProvider provider, string identifier, string verifier) {
    // Your implementation goes here.
    writeln("registerDeviceWithIdentityCredential called");
    return typeof(return).init;
  }

  string registerDeviceWithoutPhoneNumber(string region, string udidHash, ref const(DeviceInfo) deviceInfo) {
    // Your implementation goes here.
    writeln("registerDeviceWithoutPhoneNumber called");
    return typeof(return).init;
  }

  string registerDeviceWithoutPhoneNumberWithIdentityCredential(string region, string udidHash, ref const(DeviceInfo) deviceInfo, IdentityProvider provider, string identifier, string verifier, string mid) {
    // Your implementation goes here.
    writeln("registerDeviceWithoutPhoneNumberWithIdentityCredential called");
    return typeof(return).init;
  }

  bool registerUserid(int reqSeq, string userid) {
    // Your implementation goes here.
    writeln("registerUserid called");
    return typeof(return).init;
  }

  string registerWapDevice(string invitationHash, string guidHash, string email, ref const(DeviceInfo) deviceInfo) {
    // Your implementation goes here.
    writeln("registerWapDevice called");
    return typeof(return).init;
  }

  string registerWithExistingSnsIdAndIdentityCredential(ref const(IdentityCredential) identityCredential, string region, string udidHash, ref const(DeviceInfo) deviceInfo) {
    // Your implementation goes here.
    writeln("registerWithExistingSnsIdAndIdentityCredential called");
    return typeof(return).init;
  }

  RegisterWithSnsIdResult registerWithSnsId(SnsIdType snsIdType, string snsAccessToken, string region, string udidHash, ref const(DeviceInfo) deviceInfo, string mid) {
    // Your implementation goes here.
    writeln("registerWithSnsId called");
    return typeof(return).init;
  }

  string registerWithSnsIdAndIdentityCredential(SnsIdType snsIdType, string snsAccessToken, ref const(IdentityCredential) identityCredential, string region, string udidHash, ref const(DeviceInfo) deviceInfo) {
    // Your implementation goes here.
    writeln("registerWithSnsIdAndIdentityCredential called");
    return typeof(return).init;
  }

  string reissueDeviceCredential() {
    // Your implementation goes here.
    writeln("reissueDeviceCredential called");
    return typeof(return).init;
  }

  string reissueUserTicket(long expirationTime, int maxUseCount) {
    // Your implementation goes here.
    writeln("reissueUserTicket called");
    return typeof(return).init;
  }

  void rejectGroupInvitation(int reqSeq, string groupId) {
    // Your implementation goes here.
    writeln("rejectGroupInvitation called");
  }

  void releaseSession() {
    // Your implementation goes here.
    writeln("releaseSession called");
  }

  void removeAllMessages(int seq, string lastMessageId) {
    // Your implementation goes here.
    writeln("removeAllMessages called");
  }

  void removeBuddyLocation(string mid, int index) {
    // Your implementation goes here.
    writeln("removeBuddyLocation called");
  }

  bool removeMessage(string messageId) {
    // Your implementation goes here.
    writeln("removeMessage called");
    return typeof(return).init;
  }

  bool removeMessageFromMyHome(string messageId) {
    // Your implementation goes here.
    writeln("removeMessageFromMyHome called");
    return typeof(return).init;
  }

  string removeSnsId(SnsIdType snsIdType) {
    // Your implementation goes here.
    writeln("removeSnsId called");
    return typeof(return).init;
  }

  void report(long syncOpRevision, SyncCategory category, string report) {
    // Your implementation goes here.
    writeln("report called");
  }

  ContactReportResult[] reportContacts(long syncOpRevision, SyncCategory category, ContactReport[] contactReports, SyncActionType actionType) {
    // Your implementation goes here.
    writeln("reportContacts called");
    return typeof(return).init;
  }

  void reportGroups(long syncOpRevision, Group[] groups) {
    // Your implementation goes here.
    writeln("reportGroups called");
  }

  void reportProfile(long syncOpRevision, ref const(Profile) profile) {
    // Your implementation goes here.
    writeln("reportProfile called");
  }

  void reportRooms(long syncOpRevision, Room[] rooms) {
    // Your implementation goes here.
    writeln("reportRooms called");
  }

  void reportSettings(long syncOpRevision, ref const(Settings) settings) {
    // Your implementation goes here.
    writeln("reportSettings called");
  }

  void reportSpammer(string spammerMid, SpammerReason[] spammerReasons, string[] spamMessageIds) {
    // Your implementation goes here.
    writeln("reportSpammer called");
  }

  void requestAccountPasswordReset(IdentityProvider provider, string identifier, string locale) {
    // Your implementation goes here.
    writeln("requestAccountPasswordReset called");
  }

  EmailConfirmationSession requestEmailConfirmation(ref const(EmailConfirmation) emailConfirmation) {
    // Your implementation goes here.
    writeln("requestEmailConfirmation called");
    return typeof(return).init;
  }

  void requestIdentityUnbind(IdentityProvider provider, string identifier) {
    // Your implementation goes here.
    writeln("requestIdentityUnbind called");
  }

  EmailConfirmationSession resendEmailConfirmation(string verifier) {
    // Your implementation goes here.
    writeln("resendEmailConfirmation called");
    return typeof(return).init;
  }

  void resendPinCode(string sessionId) {
    // Your implementation goes here.
    writeln("resendPinCode called");
  }

  void resendPinCodeBySMS(string sessionId) {
    // Your implementation goes here.
    writeln("resendPinCodeBySMS called");
  }

  void sendChatChecked(int seq, string consumer, string lastMessageId) {
    // Your implementation goes here.
    writeln("sendChatChecked called");
  }

  void sendChatRemoved(int seq, string consumer, string lastMessageId) {
    // Your implementation goes here.
    writeln("sendChatRemoved called");
  }

  string[string] sendContentPreviewUpdated(int esq, string messageId, string[] receiverMids) {
    // Your implementation goes here.
    writeln("sendContentPreviewUpdated called");
    return typeof(return).init;
  }

  void sendContentReceipt(int seq, string consumer, string messageId) {
    // Your implementation goes here.
    writeln("sendContentReceipt called");
  }

  void sendDummyPush() {
    // Your implementation goes here.
    writeln("sendDummyPush called");
  }

  Message sendEvent(int seq, ref const(Message) message) {
    // Your implementation goes here.
    writeln("sendEvent called");
    return typeof(return).init;
  }

  Message sendMessage(int seq, ref const(Message) message) {
    // Your implementation goes here.
    writeln("sendMessage called");
    return typeof(return).init;
  }

  void sendMessageIgnored(int seq, string consumer, string[] messageIds) {
    // Your implementation goes here.
    writeln("sendMessageIgnored called");
  }

  void sendMessageReceipt(int seq, string consumer, string[] messageIds) {
    // Your implementation goes here.
    writeln("sendMessageReceipt called");
  }

  Message sendMessageToMyHome(int seq, ref const(Message) message) {
    // Your implementation goes here.
    writeln("sendMessageToMyHome called");
    return typeof(return).init;
  }

  void setBuddyLocation(string mid, int index, ref const(Geolocation) location) {
    // Your implementation goes here.
    writeln("setBuddyLocation called");
  }

  void setIdentityCredential(IdentityProvider provider, string identifier, string verifier) {
    // Your implementation goes here.
    writeln("setIdentityCredential called");
  }

  void setNotificationsEnabled(int reqSeq, MIDType type, string target, bool enablement) {
    // Your implementation goes here.
    writeln("setNotificationsEnabled called");
  }

  VerificationSessionData startUpdateVerification(string region, CarrierCode carrier, string phone, string udidHash, ref const(DeviceInfo) deviceInfo, string networkCode, string locale) {
    // Your implementation goes here.
    writeln("startUpdateVerification called");
    return typeof(return).init;
  }

  VerificationSessionData startVerification(string region, CarrierCode carrier, string phone, string udidHash, ref const(DeviceInfo) deviceInfo, string networkCode, string mid, string locale) {
    // Your implementation goes here.
    writeln("startVerification called");
    return typeof(return).init;
  }

  void storeUpdateProfileAttribute(int seq, ProfileAttribute profileAttribute, string value) {
    // Your implementation goes here.
    writeln("storeUpdateProfileAttribute called");
  }

  SnsFriendContactRegistration[] syncContactBySnsIds(int reqSeq, SnsFriendModification[] modifications) {
    // Your implementation goes here.
    writeln("syncContactBySnsIds called");
    return typeof(return).init;
  }

  ContactRegistration[string] syncContacts(int reqSeq, ContactModification[] localContacts) {
    // Your implementation goes here.
    writeln("syncContacts called");
    return typeof(return).init;
  }

  Message trySendMessage(int seq, ref const(Message) message) {
    // Your implementation goes here.
    writeln("trySendMessage called");
    return typeof(return).init;
  }

  void unblockContact(int reqSeq, string id) {
    // Your implementation goes here.
    writeln("unblockContact called");
  }

  void unblockRecommendation(int reqSeq, string id) {
    // Your implementation goes here.
    writeln("unblockRecommendation called");
  }

  string unregisterUserAndDevice() {
    // Your implementation goes here.
    writeln("unregisterUserAndDevice called");
    return typeof(return).init;
  }

  void updateApnsDeviceToken(string apnsDeviceToken) {
    // Your implementation goes here.
    writeln("updateApnsDeviceToken called");
  }

  void updateBuddySetting(string key, string value) {
    // Your implementation goes here.
    writeln("updateBuddySetting called");
  }

  void updateC2DMRegistrationId(string registrationId) {
    // Your implementation goes here.
    writeln("updateC2DMRegistrationId called");
  }

  void updateContactSetting(int reqSeq, string mid, ContactSetting flag, string value) {
    // Your implementation goes here.
    writeln("updateContactSetting called");
  }

  void updateCustomModeSettings(CustomMode customMode, string[string] paramMap) {
    // Your implementation goes here.
    writeln("updateCustomModeSettings called");
  }

  void updateDeviceInfo(string deviceUid, ref const(DeviceInfo) deviceInfo) {
    // Your implementation goes here.
    writeln("updateDeviceInfo called");
  }

  void updateGroup(int reqSeq, ref const(Group) group) {
    // Your implementation goes here.
    writeln("updateGroup called");
  }

  void updateNotificationToken(NotificationType type, string token) {
    // Your implementation goes here.
    writeln("updateNotificationToken called");
  }

  void updateNotificationTokenWithBytes(NotificationType type, string token) {
    // Your implementation goes here.
    writeln("updateNotificationTokenWithBytes called");
  }

  void updateProfile(int reqSeq, ref const(Profile) profile) {
    // Your implementation goes here.
    writeln("updateProfile called");
  }

  void updateProfileAttribute(int reqSeq, ProfileAttribute attr, string value) {
    // Your implementation goes here.
    writeln("updateProfileAttribute called");
  }

  void updateRegion(string region) {
    // Your implementation goes here.
    writeln("updateRegion called");
  }

  void updateSettings(int reqSeq, ref const(Settings) settings) {
    // Your implementation goes here.
    writeln("updateSettings called");
  }

  int updateSettings2(int reqSeq, ref const(Settings) settings) {
    // Your implementation goes here.
    writeln("updateSettings2 called");
    return typeof(return).init;
  }

  void updateSettingsAttribute(int reqSeq, SettingsAttribute attr, string value) {
    // Your implementation goes here.
    writeln("updateSettingsAttribute called");
  }

  int updateSettingsAttributes(int reqSeq, int attrBitset, ref const(Settings) settings) {
    // Your implementation goes here.
    writeln("updateSettingsAttributes called");
    return typeof(return).init;
  }

  void verifyIdentityCredential(IdentityProvider identityProvider, string identifier, string password) {
    // Your implementation goes here.
    writeln("verifyIdentityCredential called");
  }

  UserAuthStatus verifyIdentityCredentialWithResult(ref const(IdentityCredential) identityCredential) {
    // Your implementation goes here.
    writeln("verifyIdentityCredentialWithResult called");
    return typeof(return).init;
  }

  VerificationResult verifyPhone(string sessionId, string pinCode, string udidHash) {
    // Your implementation goes here.
    writeln("verifyPhone called");
    return typeof(return).init;
  }

  string verifyQrcode(string verifier, string pinCode) {
    // Your implementation goes here.
    writeln("verifyQrcode called");
    return typeof(return).init;
  }

}

void main() {
  auto protocolFactory = new TBinaryProtocolFactory!();
  auto processor = new TServiceProcessor!TalkService(new TalkServiceHandler);
  auto serverTransport = new TServerSocket(9090);
  auto transportFactory = new TBufferedTransportFactory;
  auto server = new TSimpleServer(
    processor, serverTransport, transportFactory, protocolFactory);
  server.serve();
}
