# Compiled for SuperSonic Line API Lite
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#
#  options string: py
#

from thrift.Thrift import TType, TMessageType, TFrozenDict, TException, TApplicationException
from thrift.protocol.TProtocol import TProtocolException
from thrift.TRecursive import fix_spec

import sys
import logging
from .ObjectTypes import *
from thrift.Thrift import TProcessor
from thrift.transport import TTransport
all_structs = []


class Iface(object):
    def acceptGroupInvitation(self, reqSeq, groupId):
        """
        Parameters:
         - reqSeq
         - groupId
        """
        pass

    def createGroup(self, seq, name, contactIds):
        """
        Parameters:
         - seq
         - name
         - contactIds
        """
        pass

    def createQrcodeBase64Image(self, url, characterSet, imageSize, x, y, width, height):
        """
        Parameters:
         - url
         - characterSet
         - imageSize
         - x
         - y
         - width
         - height
        """
        pass

    def createRoom(self, reqSeq, contactIds):
        """
        Parameters:
         - reqSeq
         - contactIds
        """
        pass

    def createSession(self):
        pass

    def fetchOperations(self, localRev, count):
        """
        Parameters:
         - localRev
         - count
        """
        pass

    def getProfile(self):
        pass

    def findAndAddContactsByEmail(self, reqSeq, emails):
        """
        Parameters:
         - reqSeq
         - emails
        """
        pass

    def findAndAddContactsByMid(self, reqSeq, mid):
        """
        Parameters:
         - reqSeq
         - mid
        """
        pass

    def findAndAddContactsByPhone(self, reqSeq, phones):
        """
        Parameters:
         - reqSeq
         - phones
        """
        pass

    def findAndAddContactsByUserid(self, reqSeq, userid):
        """
        Parameters:
         - reqSeq
         - userid
        """
        pass

    def findContactByUserid(self, userid):
        """
        Parameters:
         - userid
        """
        pass

    def findContactByUserTicket(self, ticketId):
        """
        Parameters:
         - ticketId
        """
        pass

    def findContactsByEmail(self, emails):
        """
        Parameters:
         - emails
        """
        pass

    def findContactsByPhone(self, phones):
        """
        Parameters:
         - phones
        """
        pass

    def generateUserTicket(self, expirationTime, maxUseCount):
        """
        Parameters:
         - expirationTime
         - maxUseCount
        """
        pass

    def getAllContactIds(self):
        pass

    def getBlockedContactIds(self):
        pass

    def getBlockedContactIdsByRange(self, start, count):
        """
        Parameters:
         - start
         - count
        """
        pass

    def getBlockedRecommendationIds(self):
        pass

    def getContact(self, id):
        """
        Parameters:
         - id
        """
        pass

    def getContacts(self, ids):
        """
        Parameters:
         - ids
        """
        pass

    def getGroup(self, groupId):
        """
        Parameters:
         - groupId
        """
        pass

    def getGroupIdsInvited(self):
        pass

    def getGroupIdsJoined(self):
        pass

    def getGroups(self, groupIds):
        """
        Parameters:
         - groupIds
        """
        pass

    def getFavoriteMids(self):
        pass

    def getHiddenContactMids(self):
        pass

    def getLastOpRevision(self):
        pass

    def getRoom(self, roomId):
        """
        Parameters:
         - roomId
        """
        pass

    def getRSAKeyInfo(self, provider):
        """
        Parameters:
         - provider
        """
        pass

    def getServerTime(self):
        pass

    def getSessions(self):
        pass

    def leaveGroup(self, reqSeq, groupId):
        """
        Parameters:
         - reqSeq
         - groupId
        """
        pass

    def loginZ(self, LoginRequest):
        """
        Parameters:
         - LoginRequest
        """
        pass

    def logout(self):
        pass

    def logoutSession(self, tokenKey):
        """
        Parameters:
         - tokenKey
        """
        pass

    def sendMessage(self, seq, message):
        """
        Parameters:
         - seq
         - message
        """
        pass


class Client(Iface):
    def __init__(self, iprot, oprot=None):
        self._iprot = self._oprot = iprot
        if oprot is not None:
            self._oprot = oprot
        self._seqid = 0

    def acceptGroupInvitation(self, reqSeq, groupId):
        """
        Parameters:
         - reqSeq
         - groupId
        """
        self.send_acceptGroupInvitation(reqSeq, groupId)
        self.recv_acceptGroupInvitation()

    def send_acceptGroupInvitation(self, reqSeq, groupId):
        self._oprot.writeMessageBegin('acceptGroupInvitation', TMessageType.CALL, self._seqid)
        args = acceptGroupInvitation_args()
        args.reqSeq = reqSeq
        args.groupId = groupId
        args.write(self._oprot)
        self._oprot.writeMessageEnd()
        self._oprot.trans.flush()

    def recv_acceptGroupInvitation(self):
        iprot = self._iprot
        (fname, mtype, rseqid) = iprot.readMessageBegin()
        if mtype == TMessageType.EXCEPTION:
            x = TApplicationException()
            x.read(iprot)
            iprot.readMessageEnd()
            raise x
        result = acceptGroupInvitation_result()
        result.read(iprot)
        iprot.readMessageEnd()
        if result.e is not None:
            raise result.e
        return

    def createGroup(self, seq, name, contactIds):
        """
        Parameters:
         - seq
         - name
         - contactIds
        """
        self.send_createGroup(seq, name, contactIds)
        return self.recv_createGroup()

    def send_createGroup(self, seq, name, contactIds):
        self._oprot.writeMessageBegin('createGroup', TMessageType.CALL, self._seqid)
        args = createGroup_args()
        args.seq = seq
        args.name = name
        args.contactIds = contactIds
        args.write(self._oprot)
        self._oprot.writeMessageEnd()
        self._oprot.trans.flush()

    def recv_createGroup(self):
        iprot = self._iprot
        (fname, mtype, rseqid) = iprot.readMessageBegin()
        if mtype == TMessageType.EXCEPTION:
            x = TApplicationException()
            x.read(iprot)
            iprot.readMessageEnd()
            raise x
        result = createGroup_result()
        result.read(iprot)
        iprot.readMessageEnd()
        if result.success is not None:
            return result.success
        if result.e is not None:
            raise result.e
        raise TApplicationException(TApplicationException.MISSING_RESULT, "createGroup failed: unknown result")

    def createQrcodeBase64Image(self, url, characterSet, imageSize, x, y, width, height):
        """
        Parameters:
         - url
         - characterSet
         - imageSize
         - x
         - y
         - width
         - height
        """
        self.send_createQrcodeBase64Image(url, characterSet, imageSize, x, y, width, height)
        return self.recv_createQrcodeBase64Image()

    def send_createQrcodeBase64Image(self, url, characterSet, imageSize, x, y, width, height):
        self._oprot.writeMessageBegin('createQrcodeBase64Image', TMessageType.CALL, self._seqid)
        args = createQrcodeBase64Image_args()
        args.url = url
        args.characterSet = characterSet
        args.imageSize = imageSize
        args.x = x
        args.y = y
        args.width = width
        args.height = height
        args.write(self._oprot)
        self._oprot.writeMessageEnd()
        self._oprot.trans.flush()

    def recv_createQrcodeBase64Image(self):
        iprot = self._iprot
        (fname, mtype, rseqid) = iprot.readMessageBegin()
        if mtype == TMessageType.EXCEPTION:
            x = TApplicationException()
            x.read(iprot)
            iprot.readMessageEnd()
            raise x
        result = createQrcodeBase64Image_result()
        result.read(iprot)
        iprot.readMessageEnd()
        if result.success is not None:
            return result.success
        if result.e is not None:
            raise result.e
        raise TApplicationException(TApplicationException.MISSING_RESULT, "createQrcodeBase64Image failed: unknown result")

    def createRoom(self, reqSeq, contactIds):
        """
        Parameters:
         - reqSeq
         - contactIds
        """
        self.send_createRoom(reqSeq, contactIds)
        return self.recv_createRoom()

    def send_createRoom(self, reqSeq, contactIds):
        self._oprot.writeMessageBegin('createRoom', TMessageType.CALL, self._seqid)
        args = createRoom_args()
        args.reqSeq = reqSeq
        args.contactIds = contactIds
        args.write(self._oprot)
        self._oprot.writeMessageEnd()
        self._oprot.trans.flush()

    def recv_createRoom(self):
        iprot = self._iprot
        (fname, mtype, rseqid) = iprot.readMessageBegin()
        if mtype == TMessageType.EXCEPTION:
            x = TApplicationException()
            x.read(iprot)
            iprot.readMessageEnd()
            raise x
        result = createRoom_result()
        result.read(iprot)
        iprot.readMessageEnd()
        if result.success is not None:
            return result.success
        if result.e is not None:
            raise result.e
        raise TApplicationException(TApplicationException.MISSING_RESULT, "createRoom failed: unknown result")

    def createSession(self):
        self.send_createSession()
        return self.recv_createSession()

    def send_createSession(self):
        self._oprot.writeMessageBegin('createSession', TMessageType.CALL, self._seqid)
        args = createSession_args()
        args.write(self._oprot)
        self._oprot.writeMessageEnd()
        self._oprot.trans.flush()

    def recv_createSession(self):
        iprot = self._iprot
        (fname, mtype, rseqid) = iprot.readMessageBegin()
        if mtype == TMessageType.EXCEPTION:
            x = TApplicationException()
            x.read(iprot)
            iprot.readMessageEnd()
            raise x
        result = createSession_result()
        result.read(iprot)
        iprot.readMessageEnd()
        if result.success is not None:
            return result.success
        if result.e is not None:
            raise result.e
        raise TApplicationException(TApplicationException.MISSING_RESULT, "createSession failed: unknown result")

    def fetchOperations(self, localRev, count):
        """
        Parameters:
         - localRev
         - count
        """
        self.send_fetchOperations(localRev, count)
        return self.recv_fetchOperations()

    def send_fetchOperations(self, localRev, count):
        self._oprot.writeMessageBegin('fetchOperations', TMessageType.CALL, self._seqid)
        args = fetchOperations_args()
        args.localRev = localRev
        args.count = count
        args.write(self._oprot)
        self._oprot.writeMessageEnd()
        self._oprot.trans.flush()

    def recv_fetchOperations(self):
        iprot = self._iprot
        (fname, mtype, rseqid) = iprot.readMessageBegin()
        if mtype == TMessageType.EXCEPTION:
            x = TApplicationException()
            x.read(iprot)
            iprot.readMessageEnd()
            raise x
        result = fetchOperations_result()
        result.read(iprot)
        iprot.readMessageEnd()
        if result.success is not None:
            return result.success
        if result.e is not None:
            raise result.e
        raise TApplicationException(TApplicationException.MISSING_RESULT, "fetchOperations failed: unknown result")

    def getProfile(self):
        self.send_getProfile()
        return self.recv_getProfile()

    def send_getProfile(self):
        self._oprot.writeMessageBegin('getProfile', TMessageType.CALL, self._seqid)
        args = getProfile_args()
        args.write(self._oprot)
        self._oprot.writeMessageEnd()
        self._oprot.trans.flush()

    def recv_getProfile(self):
        iprot = self._iprot
        (fname, mtype, rseqid) = iprot.readMessageBegin()
        if mtype == TMessageType.EXCEPTION:
            x = TApplicationException()
            x.read(iprot)
            iprot.readMessageEnd()
            raise x
        result = getProfile_result()
        result.read(iprot)
        iprot.readMessageEnd()
        if result.success is not None:
            return result.success
        if result.e is not None:
            raise result.e
        raise TApplicationException(TApplicationException.MISSING_RESULT, "getProfile failed: unknown result")

    def findAndAddContactsByEmail(self, reqSeq, emails):
        """
        Parameters:
         - reqSeq
         - emails
        """
        self.send_findAndAddContactsByEmail(reqSeq, emails)
        return self.recv_findAndAddContactsByEmail()

    def send_findAndAddContactsByEmail(self, reqSeq, emails):
        self._oprot.writeMessageBegin('findAndAddContactsByEmail', TMessageType.CALL, self._seqid)
        args = findAndAddContactsByEmail_args()
        args.reqSeq = reqSeq
        args.emails = emails
        args.write(self._oprot)
        self._oprot.writeMessageEnd()
        self._oprot.trans.flush()

    def recv_findAndAddContactsByEmail(self):
        iprot = self._iprot
        (fname, mtype, rseqid) = iprot.readMessageBegin()
        if mtype == TMessageType.EXCEPTION:
            x = TApplicationException()
            x.read(iprot)
            iprot.readMessageEnd()
            raise x
        result = findAndAddContactsByEmail_result()
        result.read(iprot)
        iprot.readMessageEnd()
        if result.success is not None:
            return result.success
        if result.e is not None:
            raise result.e
        raise TApplicationException(TApplicationException.MISSING_RESULT, "findAndAddContactsByEmail failed: unknown result")

    def findAndAddContactsByMid(self, reqSeq, mid):
        """
        Parameters:
         - reqSeq
         - mid
        """
        self.send_findAndAddContactsByMid(reqSeq, mid)
        return self.recv_findAndAddContactsByMid()

    def send_findAndAddContactsByMid(self, reqSeq, mid):
        self._oprot.writeMessageBegin('findAndAddContactsByMid', TMessageType.CALL, self._seqid)
        args = findAndAddContactsByMid_args()
        args.reqSeq = reqSeq
        args.mid = mid
        args.write(self._oprot)
        self._oprot.writeMessageEnd()
        self._oprot.trans.flush()

    def recv_findAndAddContactsByMid(self):
        iprot = self._iprot
        (fname, mtype, rseqid) = iprot.readMessageBegin()
        if mtype == TMessageType.EXCEPTION:
            x = TApplicationException()
            x.read(iprot)
            iprot.readMessageEnd()
            raise x
        result = findAndAddContactsByMid_result()
        result.read(iprot)
        iprot.readMessageEnd()
        if result.success is not None:
            return result.success
        if result.e is not None:
            raise result.e
        raise TApplicationException(TApplicationException.MISSING_RESULT, "findAndAddContactsByMid failed: unknown result")

    def findAndAddContactsByPhone(self, reqSeq, phones):
        """
        Parameters:
         - reqSeq
         - phones
        """
        self.send_findAndAddContactsByPhone(reqSeq, phones)
        return self.recv_findAndAddContactsByPhone()

    def send_findAndAddContactsByPhone(self, reqSeq, phones):
        self._oprot.writeMessageBegin('findAndAddContactsByPhone', TMessageType.CALL, self._seqid)
        args = findAndAddContactsByPhone_args()
        args.reqSeq = reqSeq
        args.phones = phones
        args.write(self._oprot)
        self._oprot.writeMessageEnd()
        self._oprot.trans.flush()

    def recv_findAndAddContactsByPhone(self):
        iprot = self._iprot
        (fname, mtype, rseqid) = iprot.readMessageBegin()
        if mtype == TMessageType.EXCEPTION:
            x = TApplicationException()
            x.read(iprot)
            iprot.readMessageEnd()
            raise x
        result = findAndAddContactsByPhone_result()
        result.read(iprot)
        iprot.readMessageEnd()
        if result.success is not None:
            return result.success
        if result.e is not None:
            raise result.e
        raise TApplicationException(TApplicationException.MISSING_RESULT, "findAndAddContactsByPhone failed: unknown result")

    def findAndAddContactsByUserid(self, reqSeq, userid):
        """
        Parameters:
         - reqSeq
         - userid
        """
        self.send_findAndAddContactsByUserid(reqSeq, userid)
        return self.recv_findAndAddContactsByUserid()

    def send_findAndAddContactsByUserid(self, reqSeq, userid):
        self._oprot.writeMessageBegin('findAndAddContactsByUserid', TMessageType.CALL, self._seqid)
        args = findAndAddContactsByUserid_args()
        args.reqSeq = reqSeq
        args.userid = userid
        args.write(self._oprot)
        self._oprot.writeMessageEnd()
        self._oprot.trans.flush()

    def recv_findAndAddContactsByUserid(self):
        iprot = self._iprot
        (fname, mtype, rseqid) = iprot.readMessageBegin()
        if mtype == TMessageType.EXCEPTION:
            x = TApplicationException()
            x.read(iprot)
            iprot.readMessageEnd()
            raise x
        result = findAndAddContactsByUserid_result()
        result.read(iprot)
        iprot.readMessageEnd()
        if result.success is not None:
            return result.success
        if result.e is not None:
            raise result.e
        raise TApplicationException(TApplicationException.MISSING_RESULT, "findAndAddContactsByUserid failed: unknown result")

    def findContactByUserid(self, userid):
        """
        Parameters:
         - userid
        """
        self.send_findContactByUserid(userid)
        return self.recv_findContactByUserid()

    def send_findContactByUserid(self, userid):
        self._oprot.writeMessageBegin('findContactByUserid', TMessageType.CALL, self._seqid)
        args = findContactByUserid_args()
        args.userid = userid
        args.write(self._oprot)
        self._oprot.writeMessageEnd()
        self._oprot.trans.flush()

    def recv_findContactByUserid(self):
        iprot = self._iprot
        (fname, mtype, rseqid) = iprot.readMessageBegin()
        if mtype == TMessageType.EXCEPTION:
            x = TApplicationException()
            x.read(iprot)
            iprot.readMessageEnd()
            raise x
        result = findContactByUserid_result()
        result.read(iprot)
        iprot.readMessageEnd()
        if result.success is not None:
            return result.success
        if result.e is not None:
            raise result.e
        raise TApplicationException(TApplicationException.MISSING_RESULT, "findContactByUserid failed: unknown result")

    def findContactByUserTicket(self, ticketId):
        """
        Parameters:
         - ticketId
        """
        self.send_findContactByUserTicket(ticketId)
        return self.recv_findContactByUserTicket()

    def send_findContactByUserTicket(self, ticketId):
        self._oprot.writeMessageBegin('findContactByUserTicket', TMessageType.CALL, self._seqid)
        args = findContactByUserTicket_args()
        args.ticketId = ticketId
        args.write(self._oprot)
        self._oprot.writeMessageEnd()
        self._oprot.trans.flush()

    def recv_findContactByUserTicket(self):
        iprot = self._iprot
        (fname, mtype, rseqid) = iprot.readMessageBegin()
        if mtype == TMessageType.EXCEPTION:
            x = TApplicationException()
            x.read(iprot)
            iprot.readMessageEnd()
            raise x
        result = findContactByUserTicket_result()
        result.read(iprot)
        iprot.readMessageEnd()
        if result.success is not None:
            return result.success
        if result.e is not None:
            raise result.e
        raise TApplicationException(TApplicationException.MISSING_RESULT, "findContactByUserTicket failed: unknown result")

    def findContactsByEmail(self, emails):
        """
        Parameters:
         - emails
        """
        self.send_findContactsByEmail(emails)
        return self.recv_findContactsByEmail()

    def send_findContactsByEmail(self, emails):
        self._oprot.writeMessageBegin('findContactsByEmail', TMessageType.CALL, self._seqid)
        args = findContactsByEmail_args()
        args.emails = emails
        args.write(self._oprot)
        self._oprot.writeMessageEnd()
        self._oprot.trans.flush()

    def recv_findContactsByEmail(self):
        iprot = self._iprot
        (fname, mtype, rseqid) = iprot.readMessageBegin()
        if mtype == TMessageType.EXCEPTION:
            x = TApplicationException()
            x.read(iprot)
            iprot.readMessageEnd()
            raise x
        result = findContactsByEmail_result()
        result.read(iprot)
        iprot.readMessageEnd()
        if result.success is not None:
            return result.success
        if result.e is not None:
            raise result.e
        raise TApplicationException(TApplicationException.MISSING_RESULT, "findContactsByEmail failed: unknown result")

    def findContactsByPhone(self, phones):
        """
        Parameters:
         - phones
        """
        self.send_findContactsByPhone(phones)
        return self.recv_findContactsByPhone()

    def send_findContactsByPhone(self, phones):
        self._oprot.writeMessageBegin('findContactsByPhone', TMessageType.CALL, self._seqid)
        args = findContactsByPhone_args()
        args.phones = phones
        args.write(self._oprot)
        self._oprot.writeMessageEnd()
        self._oprot.trans.flush()

    def recv_findContactsByPhone(self):
        iprot = self._iprot
        (fname, mtype, rseqid) = iprot.readMessageBegin()
        if mtype == TMessageType.EXCEPTION:
            x = TApplicationException()
            x.read(iprot)
            iprot.readMessageEnd()
            raise x
        result = findContactsByPhone_result()
        result.read(iprot)
        iprot.readMessageEnd()
        if result.success is not None:
            return result.success
        if result.e is not None:
            raise result.e
        raise TApplicationException(TApplicationException.MISSING_RESULT, "findContactsByPhone failed: unknown result")

    def generateUserTicket(self, expirationTime, maxUseCount):
        """
        Parameters:
         - expirationTime
         - maxUseCount
        """
        self.send_generateUserTicket(expirationTime, maxUseCount)
        return self.recv_generateUserTicket()

    def send_generateUserTicket(self, expirationTime, maxUseCount):
        self._oprot.writeMessageBegin('generateUserTicket', TMessageType.CALL, self._seqid)
        args = generateUserTicket_args()
        args.expirationTime = expirationTime
        args.maxUseCount = maxUseCount
        args.write(self._oprot)
        self._oprot.writeMessageEnd()
        self._oprot.trans.flush()

    def recv_generateUserTicket(self):
        iprot = self._iprot
        (fname, mtype, rseqid) = iprot.readMessageBegin()
        if mtype == TMessageType.EXCEPTION:
            x = TApplicationException()
            x.read(iprot)
            iprot.readMessageEnd()
            raise x
        result = generateUserTicket_result()
        result.read(iprot)
        iprot.readMessageEnd()
        if result.success is not None:
            return result.success
        if result.e is not None:
            raise result.e
        raise TApplicationException(TApplicationException.MISSING_RESULT, "generateUserTicket failed: unknown result")

    def getAllContactIds(self):
        self.send_getAllContactIds()
        return self.recv_getAllContactIds()

    def send_getAllContactIds(self):
        self._oprot.writeMessageBegin('getAllContactIds', TMessageType.CALL, self._seqid)
        args = getAllContactIds_args()
        args.write(self._oprot)
        self._oprot.writeMessageEnd()
        self._oprot.trans.flush()

    def recv_getAllContactIds(self):
        iprot = self._iprot
        (fname, mtype, rseqid) = iprot.readMessageBegin()
        if mtype == TMessageType.EXCEPTION:
            x = TApplicationException()
            x.read(iprot)
            iprot.readMessageEnd()
            raise x
        result = getAllContactIds_result()
        result.read(iprot)
        iprot.readMessageEnd()
        if result.success is not None:
            return result.success
        if result.e is not None:
            raise result.e
        raise TApplicationException(TApplicationException.MISSING_RESULT, "getAllContactIds failed: unknown result")

    def getBlockedContactIds(self):
        self.send_getBlockedContactIds()
        return self.recv_getBlockedContactIds()

    def send_getBlockedContactIds(self):
        self._oprot.writeMessageBegin('getBlockedContactIds', TMessageType.CALL, self._seqid)
        args = getBlockedContactIds_args()
        args.write(self._oprot)
        self._oprot.writeMessageEnd()
        self._oprot.trans.flush()

    def recv_getBlockedContactIds(self):
        iprot = self._iprot
        (fname, mtype, rseqid) = iprot.readMessageBegin()
        if mtype == TMessageType.EXCEPTION:
            x = TApplicationException()
            x.read(iprot)
            iprot.readMessageEnd()
            raise x
        result = getBlockedContactIds_result()
        result.read(iprot)
        iprot.readMessageEnd()
        if result.success is not None:
            return result.success
        if result.e is not None:
            raise result.e
        raise TApplicationException(TApplicationException.MISSING_RESULT, "getBlockedContactIds failed: unknown result")

    def getBlockedContactIdsByRange(self, start, count):
        """
        Parameters:
         - start
         - count
        """
        self.send_getBlockedContactIdsByRange(start, count)
        return self.recv_getBlockedContactIdsByRange()

    def send_getBlockedContactIdsByRange(self, start, count):
        self._oprot.writeMessageBegin('getBlockedContactIdsByRange', TMessageType.CALL, self._seqid)
        args = getBlockedContactIdsByRange_args()
        args.start = start
        args.count = count
        args.write(self._oprot)
        self._oprot.writeMessageEnd()
        self._oprot.trans.flush()

    def recv_getBlockedContactIdsByRange(self):
        iprot = self._iprot
        (fname, mtype, rseqid) = iprot.readMessageBegin()
        if mtype == TMessageType.EXCEPTION:
            x = TApplicationException()
            x.read(iprot)
            iprot.readMessageEnd()
            raise x
        result = getBlockedContactIdsByRange_result()
        result.read(iprot)
        iprot.readMessageEnd()
        if result.success is not None:
            return result.success
        if result.e is not None:
            raise result.e
        raise TApplicationException(TApplicationException.MISSING_RESULT, "getBlockedContactIdsByRange failed: unknown result")

    def getBlockedRecommendationIds(self):
        self.send_getBlockedRecommendationIds()
        return self.recv_getBlockedRecommendationIds()

    def send_getBlockedRecommendationIds(self):
        self._oprot.writeMessageBegin('getBlockedRecommendationIds', TMessageType.CALL, self._seqid)
        args = getBlockedRecommendationIds_args()
        args.write(self._oprot)
        self._oprot.writeMessageEnd()
        self._oprot.trans.flush()

    def recv_getBlockedRecommendationIds(self):
        iprot = self._iprot
        (fname, mtype, rseqid) = iprot.readMessageBegin()
        if mtype == TMessageType.EXCEPTION:
            x = TApplicationException()
            x.read(iprot)
            iprot.readMessageEnd()
            raise x
        result = getBlockedRecommendationIds_result()
        result.read(iprot)
        iprot.readMessageEnd()
        if result.success is not None:
            return result.success
        if result.e is not None:
            raise result.e
        raise TApplicationException(TApplicationException.MISSING_RESULT, "getBlockedRecommendationIds failed: unknown result")

    def getContact(self, id):
        """
        Parameters:
         - id
        """
        self.send_getContact(id)
        return self.recv_getContact()

    def send_getContact(self, id):
        self._oprot.writeMessageBegin('getContact', TMessageType.CALL, self._seqid)
        args = getContact_args()
        args.id = id
        args.write(self._oprot)
        self._oprot.writeMessageEnd()
        self._oprot.trans.flush()

    def recv_getContact(self):
        iprot = self._iprot
        (fname, mtype, rseqid) = iprot.readMessageBegin()
        if mtype == TMessageType.EXCEPTION:
            x = TApplicationException()
            x.read(iprot)
            iprot.readMessageEnd()
            raise x
        result = getContact_result()
        result.read(iprot)
        iprot.readMessageEnd()
        if result.success is not None:
            return result.success
        if result.e is not None:
            raise result.e
        raise TApplicationException(TApplicationException.MISSING_RESULT, "getContact failed: unknown result")

    def getContacts(self, ids):
        """
        Parameters:
         - ids
        """
        self.send_getContacts(ids)
        return self.recv_getContacts()

    def send_getContacts(self, ids):
        self._oprot.writeMessageBegin('getContacts', TMessageType.CALL, self._seqid)
        args = getContacts_args()
        args.ids = ids
        args.write(self._oprot)
        self._oprot.writeMessageEnd()
        self._oprot.trans.flush()

    def recv_getContacts(self):
        iprot = self._iprot
        (fname, mtype, rseqid) = iprot.readMessageBegin()
        if mtype == TMessageType.EXCEPTION:
            x = TApplicationException()
            x.read(iprot)
            iprot.readMessageEnd()
            raise x
        result = getContacts_result()
        result.read(iprot)
        iprot.readMessageEnd()
        if result.success is not None:
            return result.success
        if result.e is not None:
            raise result.e
        raise TApplicationException(TApplicationException.MISSING_RESULT, "getContacts failed: unknown result")

    def getGroup(self, groupId):
        """
        Parameters:
         - groupId
        """
        self.send_getGroup(groupId)
        return self.recv_getGroup()

    def send_getGroup(self, groupId):
        self._oprot.writeMessageBegin('getGroup', TMessageType.CALL, self._seqid)
        args = getGroup_args()
        args.groupId = groupId
        args.write(self._oprot)
        self._oprot.writeMessageEnd()
        self._oprot.trans.flush()

    def recv_getGroup(self):
        iprot = self._iprot
        (fname, mtype, rseqid) = iprot.readMessageBegin()
        if mtype == TMessageType.EXCEPTION:
            x = TApplicationException()
            x.read(iprot)
            iprot.readMessageEnd()
            raise x
        result = getGroup_result()
        result.read(iprot)
        iprot.readMessageEnd()
        if result.success is not None:
            return result.success
        if result.e is not None:
            raise result.e
        raise TApplicationException(TApplicationException.MISSING_RESULT, "getGroup failed: unknown result")

    def getGroupIdsInvited(self):
        self.send_getGroupIdsInvited()
        return self.recv_getGroupIdsInvited()

    def send_getGroupIdsInvited(self):
        self._oprot.writeMessageBegin('getGroupIdsInvited', TMessageType.CALL, self._seqid)
        args = getGroupIdsInvited_args()
        args.write(self._oprot)
        self._oprot.writeMessageEnd()
        self._oprot.trans.flush()

    def recv_getGroupIdsInvited(self):
        iprot = self._iprot
        (fname, mtype, rseqid) = iprot.readMessageBegin()
        if mtype == TMessageType.EXCEPTION:
            x = TApplicationException()
            x.read(iprot)
            iprot.readMessageEnd()
            raise x
        result = getGroupIdsInvited_result()
        result.read(iprot)
        iprot.readMessageEnd()
        if result.success is not None:
            return result.success
        if result.e is not None:
            raise result.e
        raise TApplicationException(TApplicationException.MISSING_RESULT, "getGroupIdsInvited failed: unknown result")

    def getGroupIdsJoined(self):
        self.send_getGroupIdsJoined()
        return self.recv_getGroupIdsJoined()

    def send_getGroupIdsJoined(self):
        self._oprot.writeMessageBegin('getGroupIdsJoined', TMessageType.CALL, self._seqid)
        args = getGroupIdsJoined_args()
        args.write(self._oprot)
        self._oprot.writeMessageEnd()
        self._oprot.trans.flush()

    def recv_getGroupIdsJoined(self):
        iprot = self._iprot
        (fname, mtype, rseqid) = iprot.readMessageBegin()
        if mtype == TMessageType.EXCEPTION:
            x = TApplicationException()
            x.read(iprot)
            iprot.readMessageEnd()
            raise x
        result = getGroupIdsJoined_result()
        result.read(iprot)
        iprot.readMessageEnd()
        if result.success is not None:
            return result.success
        if result.e is not None:
            raise result.e
        raise TApplicationException(TApplicationException.MISSING_RESULT, "getGroupIdsJoined failed: unknown result")

    def getGroups(self, groupIds):
        """
        Parameters:
         - groupIds
        """
        self.send_getGroups(groupIds)
        return self.recv_getGroups()

    def send_getGroups(self, groupIds):
        self._oprot.writeMessageBegin('getGroups', TMessageType.CALL, self._seqid)
        args = getGroups_args()
        args.groupIds = groupIds
        args.write(self._oprot)
        self._oprot.writeMessageEnd()
        self._oprot.trans.flush()

    def recv_getGroups(self):
        iprot = self._iprot
        (fname, mtype, rseqid) = iprot.readMessageBegin()
        if mtype == TMessageType.EXCEPTION:
            x = TApplicationException()
            x.read(iprot)
            iprot.readMessageEnd()
            raise x
        result = getGroups_result()
        result.read(iprot)
        iprot.readMessageEnd()
        if result.success is not None:
            return result.success
        if result.e is not None:
            raise result.e
        raise TApplicationException(TApplicationException.MISSING_RESULT, "getGroups failed: unknown result")

    def getFavoriteMids(self):
        self.send_getFavoriteMids()
        return self.recv_getFavoriteMids()

    def send_getFavoriteMids(self):
        self._oprot.writeMessageBegin('getFavoriteMids', TMessageType.CALL, self._seqid)
        args = getFavoriteMids_args()
        args.write(self._oprot)
        self._oprot.writeMessageEnd()
        self._oprot.trans.flush()

    def recv_getFavoriteMids(self):
        iprot = self._iprot
        (fname, mtype, rseqid) = iprot.readMessageBegin()
        if mtype == TMessageType.EXCEPTION:
            x = TApplicationException()
            x.read(iprot)
            iprot.readMessageEnd()
            raise x
        result = getFavoriteMids_result()
        result.read(iprot)
        iprot.readMessageEnd()
        if result.success is not None:
            return result.success
        if result.e is not None:
            raise result.e
        raise TApplicationException(TApplicationException.MISSING_RESULT, "getFavoriteMids failed: unknown result")

    def getHiddenContactMids(self):
        self.send_getHiddenContactMids()
        return self.recv_getHiddenContactMids()

    def send_getHiddenContactMids(self):
        self._oprot.writeMessageBegin('getHiddenContactMids', TMessageType.CALL, self._seqid)
        args = getHiddenContactMids_args()
        args.write(self._oprot)
        self._oprot.writeMessageEnd()
        self._oprot.trans.flush()

    def recv_getHiddenContactMids(self):
        iprot = self._iprot
        (fname, mtype, rseqid) = iprot.readMessageBegin()
        if mtype == TMessageType.EXCEPTION:
            x = TApplicationException()
            x.read(iprot)
            iprot.readMessageEnd()
            raise x
        result = getHiddenContactMids_result()
        result.read(iprot)
        iprot.readMessageEnd()
        if result.success is not None:
            return result.success
        if result.e is not None:
            raise result.e
        raise TApplicationException(TApplicationException.MISSING_RESULT, "getHiddenContactMids failed: unknown result")

    def getLastOpRevision(self):
        self.send_getLastOpRevision()
        return self.recv_getLastOpRevision()

    def send_getLastOpRevision(self):
        self._oprot.writeMessageBegin('getLastOpRevision', TMessageType.CALL, self._seqid)
        args = getLastOpRevision_args()
        args.write(self._oprot)
        self._oprot.writeMessageEnd()
        self._oprot.trans.flush()

    def recv_getLastOpRevision(self):
        iprot = self._iprot
        (fname, mtype, rseqid) = iprot.readMessageBegin()
        if mtype == TMessageType.EXCEPTION:
            x = TApplicationException()
            x.read(iprot)
            iprot.readMessageEnd()
            raise x
        result = getLastOpRevision_result()
        result.read(iprot)
        iprot.readMessageEnd()
        if result.success is not None:
            return result.success
        if result.e is not None:
            raise result.e
        raise TApplicationException(TApplicationException.MISSING_RESULT, "getLastOpRevision failed: unknown result")

    def getRoom(self, roomId):
        """
        Parameters:
         - roomId
        """
        self.send_getRoom(roomId)
        return self.recv_getRoom()

    def send_getRoom(self, roomId):
        self._oprot.writeMessageBegin('getRoom', TMessageType.CALL, self._seqid)
        args = getRoom_args()
        args.roomId = roomId
        args.write(self._oprot)
        self._oprot.writeMessageEnd()
        self._oprot.trans.flush()

    def recv_getRoom(self):
        iprot = self._iprot
        (fname, mtype, rseqid) = iprot.readMessageBegin()
        if mtype == TMessageType.EXCEPTION:
            x = TApplicationException()
            x.read(iprot)
            iprot.readMessageEnd()
            raise x
        result = getRoom_result()
        result.read(iprot)
        iprot.readMessageEnd()
        if result.success is not None:
            return result.success
        if result.e is not None:
            raise result.e
        raise TApplicationException(TApplicationException.MISSING_RESULT, "getRoom failed: unknown result")

    def getRSAKeyInfo(self, provider):
        """
        Parameters:
         - provider
        """
        self.send_getRSAKeyInfo(provider)
        return self.recv_getRSAKeyInfo()

    def send_getRSAKeyInfo(self, provider):
        self._oprot.writeMessageBegin('getRSAKeyInfo', TMessageType.CALL, self._seqid)
        args = getRSAKeyInfo_args()
        args.provider = provider
        args.write(self._oprot)
        self._oprot.writeMessageEnd()
        self._oprot.trans.flush()

    def recv_getRSAKeyInfo(self):
        iprot = self._iprot
        (fname, mtype, rseqid) = iprot.readMessageBegin()
        if mtype == TMessageType.EXCEPTION:
            x = TApplicationException()
            x.read(iprot)
            iprot.readMessageEnd()
            raise x
        result = getRSAKeyInfo_result()
        result.read(iprot)
        iprot.readMessageEnd()
        if result.success is not None:
            return result.success
        if result.e is not None:
            raise result.e
        raise TApplicationException(TApplicationException.MISSING_RESULT, "getRSAKeyInfo failed: unknown result")

    def getServerTime(self):
        self.send_getServerTime()
        return self.recv_getServerTime()

    def send_getServerTime(self):
        self._oprot.writeMessageBegin('getServerTime', TMessageType.CALL, self._seqid)
        args = getServerTime_args()
        args.write(self._oprot)
        self._oprot.writeMessageEnd()
        self._oprot.trans.flush()

    def recv_getServerTime(self):
        iprot = self._iprot
        (fname, mtype, rseqid) = iprot.readMessageBegin()
        if mtype == TMessageType.EXCEPTION:
            x = TApplicationException()
            x.read(iprot)
            iprot.readMessageEnd()
            raise x
        result = getServerTime_result()
        result.read(iprot)
        iprot.readMessageEnd()
        if result.success is not None:
            return result.success
        if result.e is not None:
            raise result.e
        raise TApplicationException(TApplicationException.MISSING_RESULT, "getServerTime failed: unknown result")

    def getSessions(self):
        self.send_getSessions()
        return self.recv_getSessions()

    def send_getSessions(self):
        self._oprot.writeMessageBegin('getSessions', TMessageType.CALL, self._seqid)
        args = getSessions_args()
        args.write(self._oprot)
        self._oprot.writeMessageEnd()
        self._oprot.trans.flush()

    def recv_getSessions(self):
        iprot = self._iprot
        (fname, mtype, rseqid) = iprot.readMessageBegin()
        if mtype == TMessageType.EXCEPTION:
            x = TApplicationException()
            x.read(iprot)
            iprot.readMessageEnd()
            raise x
        result = getSessions_result()
        result.read(iprot)
        iprot.readMessageEnd()
        if result.success is not None:
            return result.success
        if result.e is not None:
            raise result.e
        raise TApplicationException(TApplicationException.MISSING_RESULT, "getSessions failed: unknown result")

    def leaveGroup(self, reqSeq, groupId):
        """
        Parameters:
         - reqSeq
         - groupId
        """
        self.send_leaveGroup(reqSeq, groupId)
        self.recv_leaveGroup()

    def send_leaveGroup(self, reqSeq, groupId):
        self._oprot.writeMessageBegin('leaveGroup', TMessageType.CALL, self._seqid)
        args = leaveGroup_args()
        args.reqSeq = reqSeq
        args.groupId = groupId
        args.write(self._oprot)
        self._oprot.writeMessageEnd()
        self._oprot.trans.flush()

    def recv_leaveGroup(self):
        iprot = self._iprot
        (fname, mtype, rseqid) = iprot.readMessageBegin()
        if mtype == TMessageType.EXCEPTION:
            x = TApplicationException()
            x.read(iprot)
            iprot.readMessageEnd()
            raise x
        result = leaveGroup_result()
        result.read(iprot)
        iprot.readMessageEnd()
        if result.e is not None:
            raise result.e
        return

    def loginZ(self, LoginRequest):
        """
        Parameters:
         - LoginRequest
        """
        self.send_loginZ(LoginRequest)
        return self.recv_loginZ()

    def send_loginZ(self, LoginRequest):
        self._oprot.writeMessageBegin('loginZ', TMessageType.CALL, self._seqid)
        args = loginZ_args()
        args.LoginRequest = LoginRequest
        args.write(self._oprot)
        self._oprot.writeMessageEnd()
        self._oprot.trans.flush()

    def recv_loginZ(self):
        iprot = self._iprot
        (fname, mtype, rseqid) = iprot.readMessageBegin()
        if mtype == TMessageType.EXCEPTION:
            x = TApplicationException()
            x.read(iprot)
            iprot.readMessageEnd()
            raise x
        result = loginZ_result()
        result.read(iprot)
        iprot.readMessageEnd()
        if result.success is not None:
            return result.success
        if result.e is not None:
            raise result.e
        raise TApplicationException(TApplicationException.MISSING_RESULT, "loginZ failed: unknown result")

    def logout(self):
        self.send_logout()
        self.recv_logout()

    def send_logout(self):
        self._oprot.writeMessageBegin('logout', TMessageType.CALL, self._seqid)
        args = logout_args()
        args.write(self._oprot)
        self._oprot.writeMessageEnd()
        self._oprot.trans.flush()

    def recv_logout(self):
        iprot = self._iprot
        (fname, mtype, rseqid) = iprot.readMessageBegin()
        if mtype == TMessageType.EXCEPTION:
            x = TApplicationException()
            x.read(iprot)
            iprot.readMessageEnd()
            raise x
        result = logout_result()
        result.read(iprot)
        iprot.readMessageEnd()
        if result.e is not None:
            raise result.e
        return

    def logoutSession(self, tokenKey):
        """
        Parameters:
         - tokenKey
        """
        self.send_logoutSession(tokenKey)
        self.recv_logoutSession()

    def send_logoutSession(self, tokenKey):
        self._oprot.writeMessageBegin('logoutSession', TMessageType.CALL, self._seqid)
        args = logoutSession_args()
        args.tokenKey = tokenKey
        args.write(self._oprot)
        self._oprot.writeMessageEnd()
        self._oprot.trans.flush()

    def recv_logoutSession(self):
        iprot = self._iprot
        (fname, mtype, rseqid) = iprot.readMessageBegin()
        if mtype == TMessageType.EXCEPTION:
            x = TApplicationException()
            x.read(iprot)
            iprot.readMessageEnd()
            raise x
        result = logoutSession_result()
        result.read(iprot)
        iprot.readMessageEnd()
        if result.e is not None:
            raise result.e
        return

    def sendMessage(self, seq, message):
        """
        Parameters:
         - seq
         - message
        """
        self.send_sendMessage(seq, message)
        return self.recv_sendMessage()

    def send_sendMessage(self, seq, message):
        self._oprot.writeMessageBegin('sendMessage', TMessageType.CALL, self._seqid)
        args = sendMessage_args()
        args.seq = seq
        args.message = message
        args.write(self._oprot)
        self._oprot.writeMessageEnd()
        self._oprot.trans.flush()

    def recv_sendMessage(self):
        iprot = self._iprot
        (fname, mtype, rseqid) = iprot.readMessageBegin()
        if mtype == TMessageType.EXCEPTION:
            x = TApplicationException()
            x.read(iprot)
            iprot.readMessageEnd()
            raise x
        result = sendMessage_result()
        result.read(iprot)
        iprot.readMessageEnd()
        if result.success is not None:
            return result.success
        if result.e is not None:
            raise result.e
        raise TApplicationException(TApplicationException.MISSING_RESULT, "sendMessage failed: unknown result")


class Processor(Iface, TProcessor):
    def __init__(self, handler):
        self._handler = handler
        self._processMap = {}
        self._processMap["acceptGroupInvitation"] = Processor.process_acceptGroupInvitation
        self._processMap["createGroup"] = Processor.process_createGroup
        self._processMap["createQrcodeBase64Image"] = Processor.process_createQrcodeBase64Image
        self._processMap["createRoom"] = Processor.process_createRoom
        self._processMap["createSession"] = Processor.process_createSession
        self._processMap["fetchOperations"] = Processor.process_fetchOperations
        self._processMap["getProfile"] = Processor.process_getProfile
        self._processMap["findAndAddContactsByEmail"] = Processor.process_findAndAddContactsByEmail
        self._processMap["findAndAddContactsByMid"] = Processor.process_findAndAddContactsByMid
        self._processMap["findAndAddContactsByPhone"] = Processor.process_findAndAddContactsByPhone
        self._processMap["findAndAddContactsByUserid"] = Processor.process_findAndAddContactsByUserid
        self._processMap["findContactByUserid"] = Processor.process_findContactByUserid
        self._processMap["findContactByUserTicket"] = Processor.process_findContactByUserTicket
        self._processMap["findContactsByEmail"] = Processor.process_findContactsByEmail
        self._processMap["findContactsByPhone"] = Processor.process_findContactsByPhone
        self._processMap["generateUserTicket"] = Processor.process_generateUserTicket
        self._processMap["getAllContactIds"] = Processor.process_getAllContactIds
        self._processMap["getBlockedContactIds"] = Processor.process_getBlockedContactIds
        self._processMap["getBlockedContactIdsByRange"] = Processor.process_getBlockedContactIdsByRange
        self._processMap["getBlockedRecommendationIds"] = Processor.process_getBlockedRecommendationIds
        self._processMap["getContact"] = Processor.process_getContact
        self._processMap["getContacts"] = Processor.process_getContacts
        self._processMap["getGroup"] = Processor.process_getGroup
        self._processMap["getGroupIdsInvited"] = Processor.process_getGroupIdsInvited
        self._processMap["getGroupIdsJoined"] = Processor.process_getGroupIdsJoined
        self._processMap["getGroups"] = Processor.process_getGroups
        self._processMap["getFavoriteMids"] = Processor.process_getFavoriteMids
        self._processMap["getHiddenContactMids"] = Processor.process_getHiddenContactMids
        self._processMap["getLastOpRevision"] = Processor.process_getLastOpRevision
        self._processMap["getRoom"] = Processor.process_getRoom
        self._processMap["getRSAKeyInfo"] = Processor.process_getRSAKeyInfo
        self._processMap["getServerTime"] = Processor.process_getServerTime
        self._processMap["getSessions"] = Processor.process_getSessions
        self._processMap["leaveGroup"] = Processor.process_leaveGroup
        self._processMap["loginZ"] = Processor.process_loginZ
        self._processMap["logout"] = Processor.process_logout
        self._processMap["logoutSession"] = Processor.process_logoutSession
        self._processMap["sendMessage"] = Processor.process_sendMessage

    def process(self, iprot, oprot):
        (name, type, seqid) = iprot.readMessageBegin()
        if name not in self._processMap:
            iprot.skip(TType.STRUCT)
            iprot.readMessageEnd()
            x = TApplicationException(TApplicationException.UNKNOWN_METHOD, 'Unknown function %s' % (name))
            oprot.writeMessageBegin(name, TMessageType.EXCEPTION, seqid)
            x.write(oprot)
            oprot.writeMessageEnd()
            oprot.trans.flush()
            return
        else:
            self._processMap[name](self, seqid, iprot, oprot)
        return True

    def process_acceptGroupInvitation(self, seqid, iprot, oprot):
        args = acceptGroupInvitation_args()
        args.read(iprot)
        iprot.readMessageEnd()
        result = acceptGroupInvitation_result()
        try:
            self._handler.acceptGroupInvitation(args.reqSeq, args.groupId)
            msg_type = TMessageType.REPLY
        except (TTransport.TTransportException, KeyboardInterrupt, SystemExit):
            raise
        except TalkException as e:
            msg_type = TMessageType.REPLY
            result.e = e
        except Exception as ex:
            msg_type = TMessageType.EXCEPTION
            logging.exception(ex)
            result = TApplicationException(TApplicationException.INTERNAL_ERROR, 'Internal error')
        oprot.writeMessageBegin("acceptGroupInvitation", msg_type, seqid)
        result.write(oprot)
        oprot.writeMessageEnd()
        oprot.trans.flush()

    def process_createGroup(self, seqid, iprot, oprot):
        args = createGroup_args()
        args.read(iprot)
        iprot.readMessageEnd()
        result = createGroup_result()
        try:
            result.success = self._handler.createGroup(args.seq, args.name, args.contactIds)
            msg_type = TMessageType.REPLY
        except (TTransport.TTransportException, KeyboardInterrupt, SystemExit):
            raise
        except TalkException as e:
            msg_type = TMessageType.REPLY
            result.e = e
        except Exception as ex:
            msg_type = TMessageType.EXCEPTION
            logging.exception(ex)
            result = TApplicationException(TApplicationException.INTERNAL_ERROR, 'Internal error')
        oprot.writeMessageBegin("createGroup", msg_type, seqid)
        result.write(oprot)
        oprot.writeMessageEnd()
        oprot.trans.flush()

    def process_createQrcodeBase64Image(self, seqid, iprot, oprot):
        args = createQrcodeBase64Image_args()
        args.read(iprot)
        iprot.readMessageEnd()
        result = createQrcodeBase64Image_result()
        try:
            result.success = self._handler.createQrcodeBase64Image(args.url, args.characterSet, args.imageSize, args.x, args.y, args.width, args.height)
            msg_type = TMessageType.REPLY
        except (TTransport.TTransportException, KeyboardInterrupt, SystemExit):
            raise
        except TalkException as e:
            msg_type = TMessageType.REPLY
            result.e = e
        except Exception as ex:
            msg_type = TMessageType.EXCEPTION
            logging.exception(ex)
            result = TApplicationException(TApplicationException.INTERNAL_ERROR, 'Internal error')
        oprot.writeMessageBegin("createQrcodeBase64Image", msg_type, seqid)
        result.write(oprot)
        oprot.writeMessageEnd()
        oprot.trans.flush()

    def process_createRoom(self, seqid, iprot, oprot):
        args = createRoom_args()
        args.read(iprot)
        iprot.readMessageEnd()
        result = createRoom_result()
        try:
            result.success = self._handler.createRoom(args.reqSeq, args.contactIds)
            msg_type = TMessageType.REPLY
        except (TTransport.TTransportException, KeyboardInterrupt, SystemExit):
            raise
        except TalkException as e:
            msg_type = TMessageType.REPLY
            result.e = e
        except Exception as ex:
            msg_type = TMessageType.EXCEPTION
            logging.exception(ex)
            result = TApplicationException(TApplicationException.INTERNAL_ERROR, 'Internal error')
        oprot.writeMessageBegin("createRoom", msg_type, seqid)
        result.write(oprot)
        oprot.writeMessageEnd()
        oprot.trans.flush()

    def process_createSession(self, seqid, iprot, oprot):
        args = createSession_args()
        args.read(iprot)
        iprot.readMessageEnd()
        result = createSession_result()
        try:
            result.success = self._handler.createSession()
            msg_type = TMessageType.REPLY
        except (TTransport.TTransportException, KeyboardInterrupt, SystemExit):
            raise
        except TalkException as e:
            msg_type = TMessageType.REPLY
            result.e = e
        except Exception as ex:
            msg_type = TMessageType.EXCEPTION
            logging.exception(ex)
            result = TApplicationException(TApplicationException.INTERNAL_ERROR, 'Internal error')
        oprot.writeMessageBegin("createSession", msg_type, seqid)
        result.write(oprot)
        oprot.writeMessageEnd()
        oprot.trans.flush()

    def process_fetchOperations(self, seqid, iprot, oprot):
        args = fetchOperations_args()
        args.read(iprot)
        iprot.readMessageEnd()
        result = fetchOperations_result()
        try:
            result.success = self._handler.fetchOperations(args.localRev, args.count)
            msg_type = TMessageType.REPLY
        except (TTransport.TTransportException, KeyboardInterrupt, SystemExit):
            raise
        except TalkException as e:
            msg_type = TMessageType.REPLY
            result.e = e
        except Exception as ex:
            msg_type = TMessageType.EXCEPTION
            logging.exception(ex)
            result = TApplicationException(TApplicationException.INTERNAL_ERROR, 'Internal error')
        oprot.writeMessageBegin("fetchOperations", msg_type, seqid)
        result.write(oprot)
        oprot.writeMessageEnd()
        oprot.trans.flush()

    def process_getProfile(self, seqid, iprot, oprot):
        args = getProfile_args()
        args.read(iprot)
        iprot.readMessageEnd()
        result = getProfile_result()
        try:
            result.success = self._handler.getProfile()
            msg_type = TMessageType.REPLY
        except (TTransport.TTransportException, KeyboardInterrupt, SystemExit):
            raise
        except TalkException as e:
            msg_type = TMessageType.REPLY
            result.e = e
        except Exception as ex:
            msg_type = TMessageType.EXCEPTION
            logging.exception(ex)
            result = TApplicationException(TApplicationException.INTERNAL_ERROR, 'Internal error')
        oprot.writeMessageBegin("getProfile", msg_type, seqid)
        result.write(oprot)
        oprot.writeMessageEnd()
        oprot.trans.flush()

    def process_findAndAddContactsByEmail(self, seqid, iprot, oprot):
        args = findAndAddContactsByEmail_args()
        args.read(iprot)
        iprot.readMessageEnd()
        result = findAndAddContactsByEmail_result()
        try:
            result.success = self._handler.findAndAddContactsByEmail(args.reqSeq, args.emails)
            msg_type = TMessageType.REPLY
        except (TTransport.TTransportException, KeyboardInterrupt, SystemExit):
            raise
        except TalkException as e:
            msg_type = TMessageType.REPLY
            result.e = e
        except Exception as ex:
            msg_type = TMessageType.EXCEPTION
            logging.exception(ex)
            result = TApplicationException(TApplicationException.INTERNAL_ERROR, 'Internal error')
        oprot.writeMessageBegin("findAndAddContactsByEmail", msg_type, seqid)
        result.write(oprot)
        oprot.writeMessageEnd()
        oprot.trans.flush()

    def process_findAndAddContactsByMid(self, seqid, iprot, oprot):
        args = findAndAddContactsByMid_args()
        args.read(iprot)
        iprot.readMessageEnd()
        result = findAndAddContactsByMid_result()
        try:
            result.success = self._handler.findAndAddContactsByMid(args.reqSeq, args.mid)
            msg_type = TMessageType.REPLY
        except (TTransport.TTransportException, KeyboardInterrupt, SystemExit):
            raise
        except TalkException as e:
            msg_type = TMessageType.REPLY
            result.e = e
        except Exception as ex:
            msg_type = TMessageType.EXCEPTION
            logging.exception(ex)
            result = TApplicationException(TApplicationException.INTERNAL_ERROR, 'Internal error')
        oprot.writeMessageBegin("findAndAddContactsByMid", msg_type, seqid)
        result.write(oprot)
        oprot.writeMessageEnd()
        oprot.trans.flush()

    def process_findAndAddContactsByPhone(self, seqid, iprot, oprot):
        args = findAndAddContactsByPhone_args()
        args.read(iprot)
        iprot.readMessageEnd()
        result = findAndAddContactsByPhone_result()
        try:
            result.success = self._handler.findAndAddContactsByPhone(args.reqSeq, args.phones)
            msg_type = TMessageType.REPLY
        except (TTransport.TTransportException, KeyboardInterrupt, SystemExit):
            raise
        except TalkException as e:
            msg_type = TMessageType.REPLY
            result.e = e
        except Exception as ex:
            msg_type = TMessageType.EXCEPTION
            logging.exception(ex)
            result = TApplicationException(TApplicationException.INTERNAL_ERROR, 'Internal error')
        oprot.writeMessageBegin("findAndAddContactsByPhone", msg_type, seqid)
        result.write(oprot)
        oprot.writeMessageEnd()
        oprot.trans.flush()

    def process_findAndAddContactsByUserid(self, seqid, iprot, oprot):
        args = findAndAddContactsByUserid_args()
        args.read(iprot)
        iprot.readMessageEnd()
        result = findAndAddContactsByUserid_result()
        try:
            result.success = self._handler.findAndAddContactsByUserid(args.reqSeq, args.userid)
            msg_type = TMessageType.REPLY
        except (TTransport.TTransportException, KeyboardInterrupt, SystemExit):
            raise
        except TalkException as e:
            msg_type = TMessageType.REPLY
            result.e = e
        except Exception as ex:
            msg_type = TMessageType.EXCEPTION
            logging.exception(ex)
            result = TApplicationException(TApplicationException.INTERNAL_ERROR, 'Internal error')
        oprot.writeMessageBegin("findAndAddContactsByUserid", msg_type, seqid)
        result.write(oprot)
        oprot.writeMessageEnd()
        oprot.trans.flush()

    def process_findContactByUserid(self, seqid, iprot, oprot):
        args = findContactByUserid_args()
        args.read(iprot)
        iprot.readMessageEnd()
        result = findContactByUserid_result()
        try:
            result.success = self._handler.findContactByUserid(args.userid)
            msg_type = TMessageType.REPLY
        except (TTransport.TTransportException, KeyboardInterrupt, SystemExit):
            raise
        except TalkException as e:
            msg_type = TMessageType.REPLY
            result.e = e
        except Exception as ex:
            msg_type = TMessageType.EXCEPTION
            logging.exception(ex)
            result = TApplicationException(TApplicationException.INTERNAL_ERROR, 'Internal error')
        oprot.writeMessageBegin("findContactByUserid", msg_type, seqid)
        result.write(oprot)
        oprot.writeMessageEnd()
        oprot.trans.flush()

    def process_findContactByUserTicket(self, seqid, iprot, oprot):
        args = findContactByUserTicket_args()
        args.read(iprot)
        iprot.readMessageEnd()
        result = findContactByUserTicket_result()
        try:
            result.success = self._handler.findContactByUserTicket(args.ticketId)
            msg_type = TMessageType.REPLY
        except (TTransport.TTransportException, KeyboardInterrupt, SystemExit):
            raise
        except TalkException as e:
            msg_type = TMessageType.REPLY
            result.e = e
        except Exception as ex:
            msg_type = TMessageType.EXCEPTION
            logging.exception(ex)
            result = TApplicationException(TApplicationException.INTERNAL_ERROR, 'Internal error')
        oprot.writeMessageBegin("findContactByUserTicket", msg_type, seqid)
        result.write(oprot)
        oprot.writeMessageEnd()
        oprot.trans.flush()

    def process_findContactsByEmail(self, seqid, iprot, oprot):
        args = findContactsByEmail_args()
        args.read(iprot)
        iprot.readMessageEnd()
        result = findContactsByEmail_result()
        try:
            result.success = self._handler.findContactsByEmail(args.emails)
            msg_type = TMessageType.REPLY
        except (TTransport.TTransportException, KeyboardInterrupt, SystemExit):
            raise
        except TalkException as e:
            msg_type = TMessageType.REPLY
            result.e = e
        except Exception as ex:
            msg_type = TMessageType.EXCEPTION
            logging.exception(ex)
            result = TApplicationException(TApplicationException.INTERNAL_ERROR, 'Internal error')
        oprot.writeMessageBegin("findContactsByEmail", msg_type, seqid)
        result.write(oprot)
        oprot.writeMessageEnd()
        oprot.trans.flush()

    def process_findContactsByPhone(self, seqid, iprot, oprot):
        args = findContactsByPhone_args()
        args.read(iprot)
        iprot.readMessageEnd()
        result = findContactsByPhone_result()
        try:
            result.success = self._handler.findContactsByPhone(args.phones)
            msg_type = TMessageType.REPLY
        except (TTransport.TTransportException, KeyboardInterrupt, SystemExit):
            raise
        except TalkException as e:
            msg_type = TMessageType.REPLY
            result.e = e
        except Exception as ex:
            msg_type = TMessageType.EXCEPTION
            logging.exception(ex)
            result = TApplicationException(TApplicationException.INTERNAL_ERROR, 'Internal error')
        oprot.writeMessageBegin("findContactsByPhone", msg_type, seqid)
        result.write(oprot)
        oprot.writeMessageEnd()
        oprot.trans.flush()

    def process_generateUserTicket(self, seqid, iprot, oprot):
        args = generateUserTicket_args()
        args.read(iprot)
        iprot.readMessageEnd()
        result = generateUserTicket_result()
        try:
            result.success = self._handler.generateUserTicket(args.expirationTime, args.maxUseCount)
            msg_type = TMessageType.REPLY
        except (TTransport.TTransportException, KeyboardInterrupt, SystemExit):
            raise
        except TalkException as e:
            msg_type = TMessageType.REPLY
            result.e = e
        except Exception as ex:
            msg_type = TMessageType.EXCEPTION
            logging.exception(ex)
            result = TApplicationException(TApplicationException.INTERNAL_ERROR, 'Internal error')
        oprot.writeMessageBegin("generateUserTicket", msg_type, seqid)
        result.write(oprot)
        oprot.writeMessageEnd()
        oprot.trans.flush()

    def process_getAllContactIds(self, seqid, iprot, oprot):
        args = getAllContactIds_args()
        args.read(iprot)
        iprot.readMessageEnd()
        result = getAllContactIds_result()
        try:
            result.success = self._handler.getAllContactIds()
            msg_type = TMessageType.REPLY
        except (TTransport.TTransportException, KeyboardInterrupt, SystemExit):
            raise
        except TalkException as e:
            msg_type = TMessageType.REPLY
            result.e = e
        except Exception as ex:
            msg_type = TMessageType.EXCEPTION
            logging.exception(ex)
            result = TApplicationException(TApplicationException.INTERNAL_ERROR, 'Internal error')
        oprot.writeMessageBegin("getAllContactIds", msg_type, seqid)
        result.write(oprot)
        oprot.writeMessageEnd()
        oprot.trans.flush()

    def process_getBlockedContactIds(self, seqid, iprot, oprot):
        args = getBlockedContactIds_args()
        args.read(iprot)
        iprot.readMessageEnd()
        result = getBlockedContactIds_result()
        try:
            result.success = self._handler.getBlockedContactIds()
            msg_type = TMessageType.REPLY
        except (TTransport.TTransportException, KeyboardInterrupt, SystemExit):
            raise
        except TalkException as e:
            msg_type = TMessageType.REPLY
            result.e = e
        except Exception as ex:
            msg_type = TMessageType.EXCEPTION
            logging.exception(ex)
            result = TApplicationException(TApplicationException.INTERNAL_ERROR, 'Internal error')
        oprot.writeMessageBegin("getBlockedContactIds", msg_type, seqid)
        result.write(oprot)
        oprot.writeMessageEnd()
        oprot.trans.flush()

    def process_getBlockedContactIdsByRange(self, seqid, iprot, oprot):
        args = getBlockedContactIdsByRange_args()
        args.read(iprot)
        iprot.readMessageEnd()
        result = getBlockedContactIdsByRange_result()
        try:
            result.success = self._handler.getBlockedContactIdsByRange(args.start, args.count)
            msg_type = TMessageType.REPLY
        except (TTransport.TTransportException, KeyboardInterrupt, SystemExit):
            raise
        except TalkException as e:
            msg_type = TMessageType.REPLY
            result.e = e
        except Exception as ex:
            msg_type = TMessageType.EXCEPTION
            logging.exception(ex)
            result = TApplicationException(TApplicationException.INTERNAL_ERROR, 'Internal error')
        oprot.writeMessageBegin("getBlockedContactIdsByRange", msg_type, seqid)
        result.write(oprot)
        oprot.writeMessageEnd()
        oprot.trans.flush()

    def process_getBlockedRecommendationIds(self, seqid, iprot, oprot):
        args = getBlockedRecommendationIds_args()
        args.read(iprot)
        iprot.readMessageEnd()
        result = getBlockedRecommendationIds_result()
        try:
            result.success = self._handler.getBlockedRecommendationIds()
            msg_type = TMessageType.REPLY
        except (TTransport.TTransportException, KeyboardInterrupt, SystemExit):
            raise
        except TalkException as e:
            msg_type = TMessageType.REPLY
            result.e = e
        except Exception as ex:
            msg_type = TMessageType.EXCEPTION
            logging.exception(ex)
            result = TApplicationException(TApplicationException.INTERNAL_ERROR, 'Internal error')
        oprot.writeMessageBegin("getBlockedRecommendationIds", msg_type, seqid)
        result.write(oprot)
        oprot.writeMessageEnd()
        oprot.trans.flush()

    def process_getContact(self, seqid, iprot, oprot):
        args = getContact_args()
        args.read(iprot)
        iprot.readMessageEnd()
        result = getContact_result()
        try:
            result.success = self._handler.getContact(args.id)
            msg_type = TMessageType.REPLY
        except (TTransport.TTransportException, KeyboardInterrupt, SystemExit):
            raise
        except TalkException as e:
            msg_type = TMessageType.REPLY
            result.e = e
        except Exception as ex:
            msg_type = TMessageType.EXCEPTION
            logging.exception(ex)
            result = TApplicationException(TApplicationException.INTERNAL_ERROR, 'Internal error')
        oprot.writeMessageBegin("getContact", msg_type, seqid)
        result.write(oprot)
        oprot.writeMessageEnd()
        oprot.trans.flush()

    def process_getContacts(self, seqid, iprot, oprot):
        args = getContacts_args()
        args.read(iprot)
        iprot.readMessageEnd()
        result = getContacts_result()
        try:
            result.success = self._handler.getContacts(args.ids)
            msg_type = TMessageType.REPLY
        except (TTransport.TTransportException, KeyboardInterrupt, SystemExit):
            raise
        except TalkException as e:
            msg_type = TMessageType.REPLY
            result.e = e
        except Exception as ex:
            msg_type = TMessageType.EXCEPTION
            logging.exception(ex)
            result = TApplicationException(TApplicationException.INTERNAL_ERROR, 'Internal error')
        oprot.writeMessageBegin("getContacts", msg_type, seqid)
        result.write(oprot)
        oprot.writeMessageEnd()
        oprot.trans.flush()

    def process_getGroup(self, seqid, iprot, oprot):
        args = getGroup_args()
        args.read(iprot)
        iprot.readMessageEnd()
        result = getGroup_result()
        try:
            result.success = self._handler.getGroup(args.groupId)
            msg_type = TMessageType.REPLY
        except (TTransport.TTransportException, KeyboardInterrupt, SystemExit):
            raise
        except TalkException as e:
            msg_type = TMessageType.REPLY
            result.e = e
        except Exception as ex:
            msg_type = TMessageType.EXCEPTION
            logging.exception(ex)
            result = TApplicationException(TApplicationException.INTERNAL_ERROR, 'Internal error')
        oprot.writeMessageBegin("getGroup", msg_type, seqid)
        result.write(oprot)
        oprot.writeMessageEnd()
        oprot.trans.flush()

    def process_getGroupIdsInvited(self, seqid, iprot, oprot):
        args = getGroupIdsInvited_args()
        args.read(iprot)
        iprot.readMessageEnd()
        result = getGroupIdsInvited_result()
        try:
            result.success = self._handler.getGroupIdsInvited()
            msg_type = TMessageType.REPLY
        except (TTransport.TTransportException, KeyboardInterrupt, SystemExit):
            raise
        except TalkException as e:
            msg_type = TMessageType.REPLY
            result.e = e
        except Exception as ex:
            msg_type = TMessageType.EXCEPTION
            logging.exception(ex)
            result = TApplicationException(TApplicationException.INTERNAL_ERROR, 'Internal error')
        oprot.writeMessageBegin("getGroupIdsInvited", msg_type, seqid)
        result.write(oprot)
        oprot.writeMessageEnd()
        oprot.trans.flush()

    def process_getGroupIdsJoined(self, seqid, iprot, oprot):
        args = getGroupIdsJoined_args()
        args.read(iprot)
        iprot.readMessageEnd()
        result = getGroupIdsJoined_result()
        try:
            result.success = self._handler.getGroupIdsJoined()
            msg_type = TMessageType.REPLY
        except (TTransport.TTransportException, KeyboardInterrupt, SystemExit):
            raise
        except TalkException as e:
            msg_type = TMessageType.REPLY
            result.e = e
        except Exception as ex:
            msg_type = TMessageType.EXCEPTION
            logging.exception(ex)
            result = TApplicationException(TApplicationException.INTERNAL_ERROR, 'Internal error')
        oprot.writeMessageBegin("getGroupIdsJoined", msg_type, seqid)
        result.write(oprot)
        oprot.writeMessageEnd()
        oprot.trans.flush()

    def process_getGroups(self, seqid, iprot, oprot):
        args = getGroups_args()
        args.read(iprot)
        iprot.readMessageEnd()
        result = getGroups_result()
        try:
            result.success = self._handler.getGroups(args.groupIds)
            msg_type = TMessageType.REPLY
        except (TTransport.TTransportException, KeyboardInterrupt, SystemExit):
            raise
        except TalkException as e:
            msg_type = TMessageType.REPLY
            result.e = e
        except Exception as ex:
            msg_type = TMessageType.EXCEPTION
            logging.exception(ex)
            result = TApplicationException(TApplicationException.INTERNAL_ERROR, 'Internal error')
        oprot.writeMessageBegin("getGroups", msg_type, seqid)
        result.write(oprot)
        oprot.writeMessageEnd()
        oprot.trans.flush()

    def process_getFavoriteMids(self, seqid, iprot, oprot):
        args = getFavoriteMids_args()
        args.read(iprot)
        iprot.readMessageEnd()
        result = getFavoriteMids_result()
        try:
            result.success = self._handler.getFavoriteMids()
            msg_type = TMessageType.REPLY
        except (TTransport.TTransportException, KeyboardInterrupt, SystemExit):
            raise
        except TalkException as e:
            msg_type = TMessageType.REPLY
            result.e = e
        except Exception as ex:
            msg_type = TMessageType.EXCEPTION
            logging.exception(ex)
            result = TApplicationException(TApplicationException.INTERNAL_ERROR, 'Internal error')
        oprot.writeMessageBegin("getFavoriteMids", msg_type, seqid)
        result.write(oprot)
        oprot.writeMessageEnd()
        oprot.trans.flush()

    def process_getHiddenContactMids(self, seqid, iprot, oprot):
        args = getHiddenContactMids_args()
        args.read(iprot)
        iprot.readMessageEnd()
        result = getHiddenContactMids_result()
        try:
            result.success = self._handler.getHiddenContactMids()
            msg_type = TMessageType.REPLY
        except (TTransport.TTransportException, KeyboardInterrupt, SystemExit):
            raise
        except TalkException as e:
            msg_type = TMessageType.REPLY
            result.e = e
        except Exception as ex:
            msg_type = TMessageType.EXCEPTION
            logging.exception(ex)
            result = TApplicationException(TApplicationException.INTERNAL_ERROR, 'Internal error')
        oprot.writeMessageBegin("getHiddenContactMids", msg_type, seqid)
        result.write(oprot)
        oprot.writeMessageEnd()
        oprot.trans.flush()

    def process_getLastOpRevision(self, seqid, iprot, oprot):
        args = getLastOpRevision_args()
        args.read(iprot)
        iprot.readMessageEnd()
        result = getLastOpRevision_result()
        try:
            result.success = self._handler.getLastOpRevision()
            msg_type = TMessageType.REPLY
        except (TTransport.TTransportException, KeyboardInterrupt, SystemExit):
            raise
        except TalkException as e:
            msg_type = TMessageType.REPLY
            result.e = e
        except Exception as ex:
            msg_type = TMessageType.EXCEPTION
            logging.exception(ex)
            result = TApplicationException(TApplicationException.INTERNAL_ERROR, 'Internal error')
        oprot.writeMessageBegin("getLastOpRevision", msg_type, seqid)
        result.write(oprot)
        oprot.writeMessageEnd()
        oprot.trans.flush()

    def process_getRoom(self, seqid, iprot, oprot):
        args = getRoom_args()
        args.read(iprot)
        iprot.readMessageEnd()
        result = getRoom_result()
        try:
            result.success = self._handler.getRoom(args.roomId)
            msg_type = TMessageType.REPLY
        except (TTransport.TTransportException, KeyboardInterrupt, SystemExit):
            raise
        except TalkException as e:
            msg_type = TMessageType.REPLY
            result.e = e
        except Exception as ex:
            msg_type = TMessageType.EXCEPTION
            logging.exception(ex)
            result = TApplicationException(TApplicationException.INTERNAL_ERROR, 'Internal error')
        oprot.writeMessageBegin("getRoom", msg_type, seqid)
        result.write(oprot)
        oprot.writeMessageEnd()
        oprot.trans.flush()

    def process_getRSAKeyInfo(self, seqid, iprot, oprot):
        args = getRSAKeyInfo_args()
        args.read(iprot)
        iprot.readMessageEnd()
        result = getRSAKeyInfo_result()
        try:
            result.success = self._handler.getRSAKeyInfo(args.provider)
            msg_type = TMessageType.REPLY
        except (TTransport.TTransportException, KeyboardInterrupt, SystemExit):
            raise
        except TalkException as e:
            msg_type = TMessageType.REPLY
            result.e = e
        except Exception as ex:
            msg_type = TMessageType.EXCEPTION
            logging.exception(ex)
            result = TApplicationException(TApplicationException.INTERNAL_ERROR, 'Internal error')
        oprot.writeMessageBegin("getRSAKeyInfo", msg_type, seqid)
        result.write(oprot)
        oprot.writeMessageEnd()
        oprot.trans.flush()

    def process_getServerTime(self, seqid, iprot, oprot):
        args = getServerTime_args()
        args.read(iprot)
        iprot.readMessageEnd()
        result = getServerTime_result()
        try:
            result.success = self._handler.getServerTime()
            msg_type = TMessageType.REPLY
        except (TTransport.TTransportException, KeyboardInterrupt, SystemExit):
            raise
        except TalkException as e:
            msg_type = TMessageType.REPLY
            result.e = e
        except Exception as ex:
            msg_type = TMessageType.EXCEPTION
            logging.exception(ex)
            result = TApplicationException(TApplicationException.INTERNAL_ERROR, 'Internal error')
        oprot.writeMessageBegin("getServerTime", msg_type, seqid)
        result.write(oprot)
        oprot.writeMessageEnd()
        oprot.trans.flush()

    def process_getSessions(self, seqid, iprot, oprot):
        args = getSessions_args()
        args.read(iprot)
        iprot.readMessageEnd()
        result = getSessions_result()
        try:
            result.success = self._handler.getSessions()
            msg_type = TMessageType.REPLY
        except (TTransport.TTransportException, KeyboardInterrupt, SystemExit):
            raise
        except TalkException as e:
            msg_type = TMessageType.REPLY
            result.e = e
        except Exception as ex:
            msg_type = TMessageType.EXCEPTION
            logging.exception(ex)
            result = TApplicationException(TApplicationException.INTERNAL_ERROR, 'Internal error')
        oprot.writeMessageBegin("getSessions", msg_type, seqid)
        result.write(oprot)
        oprot.writeMessageEnd()
        oprot.trans.flush()

    def process_leaveGroup(self, seqid, iprot, oprot):
        args = leaveGroup_args()
        args.read(iprot)
        iprot.readMessageEnd()
        result = leaveGroup_result()
        try:
            self._handler.leaveGroup(args.reqSeq, args.groupId)
            msg_type = TMessageType.REPLY
        except (TTransport.TTransportException, KeyboardInterrupt, SystemExit):
            raise
        except TalkException as e:
            msg_type = TMessageType.REPLY
            result.e = e
        except Exception as ex:
            msg_type = TMessageType.EXCEPTION
            logging.exception(ex)
            result = TApplicationException(TApplicationException.INTERNAL_ERROR, 'Internal error')
        oprot.writeMessageBegin("leaveGroup", msg_type, seqid)
        result.write(oprot)
        oprot.writeMessageEnd()
        oprot.trans.flush()

    def process_loginZ(self, seqid, iprot, oprot):
        args = loginZ_args()
        args.read(iprot)
        iprot.readMessageEnd()
        result = loginZ_result()
        try:
            result.success = self._handler.loginZ(args.LoginRequest)
            msg_type = TMessageType.REPLY
        except (TTransport.TTransportException, KeyboardInterrupt, SystemExit):
            raise
        except TalkException as e:
            msg_type = TMessageType.REPLY
            result.e = e
        except Exception as ex:
            msg_type = TMessageType.EXCEPTION
            logging.exception(ex)
            result = TApplicationException(TApplicationException.INTERNAL_ERROR, 'Internal error')
        oprot.writeMessageBegin("loginZ", msg_type, seqid)
        result.write(oprot)
        oprot.writeMessageEnd()
        oprot.trans.flush()

    def process_logout(self, seqid, iprot, oprot):
        args = logout_args()
        args.read(iprot)
        iprot.readMessageEnd()
        result = logout_result()
        try:
            self._handler.logout()
            msg_type = TMessageType.REPLY
        except (TTransport.TTransportException, KeyboardInterrupt, SystemExit):
            raise
        except TalkException as e:
            msg_type = TMessageType.REPLY
            result.e = e
        except Exception as ex:
            msg_type = TMessageType.EXCEPTION
            logging.exception(ex)
            result = TApplicationException(TApplicationException.INTERNAL_ERROR, 'Internal error')
        oprot.writeMessageBegin("logout", msg_type, seqid)
        result.write(oprot)
        oprot.writeMessageEnd()
        oprot.trans.flush()

    def process_logoutSession(self, seqid, iprot, oprot):
        args = logoutSession_args()
        args.read(iprot)
        iprot.readMessageEnd()
        result = logoutSession_result()
        try:
            self._handler.logoutSession(args.tokenKey)
            msg_type = TMessageType.REPLY
        except (TTransport.TTransportException, KeyboardInterrupt, SystemExit):
            raise
        except TalkException as e:
            msg_type = TMessageType.REPLY
            result.e = e
        except Exception as ex:
            msg_type = TMessageType.EXCEPTION
            logging.exception(ex)
            result = TApplicationException(TApplicationException.INTERNAL_ERROR, 'Internal error')
        oprot.writeMessageBegin("logoutSession", msg_type, seqid)
        result.write(oprot)
        oprot.writeMessageEnd()
        oprot.trans.flush()

    def process_sendMessage(self, seqid, iprot, oprot):
        args = sendMessage_args()
        args.read(iprot)
        iprot.readMessageEnd()
        result = sendMessage_result()
        try:
            result.success = self._handler.sendMessage(args.seq, args.message)
            msg_type = TMessageType.REPLY
        except (TTransport.TTransportException, KeyboardInterrupt, SystemExit):
            raise
        except TalkException as e:
            msg_type = TMessageType.REPLY
            result.e = e
        except Exception as ex:
            msg_type = TMessageType.EXCEPTION
            logging.exception(ex)
            result = TApplicationException(TApplicationException.INTERNAL_ERROR, 'Internal error')
        oprot.writeMessageBegin("sendMessage", msg_type, seqid)
        result.write(oprot)
        oprot.writeMessageEnd()
        oprot.trans.flush()

# HELPER FUNCTIONS AND STRUCTURES


class acceptGroupInvitation_args(object):
    """
    Attributes:
     - reqSeq
     - groupId
    """


    def __init__(self, reqSeq=None, groupId=None,):
        self.reqSeq = reqSeq
        self.groupId = groupId

    def read(self, iprot):
        if iprot._fast_decode is not None and isinstance(iprot.trans, TTransport.CReadableTransport) and self.thrift_spec is not None:
            iprot._fast_decode(self, iprot, [self.__class__, self.thrift_spec])
            return
        iprot.readStructBegin()
        while True:
            (fname, ftype, fid) = iprot.readFieldBegin()
            if ftype == TType.STOP:
                break
            if fid == 1:
                if ftype == TType.I32:
                    self.reqSeq = iprot.readI32()
                else:
                    iprot.skip(ftype)
            elif fid == 2:
                if ftype == TType.STRING:
                    self.groupId = iprot.readString().decode('utf-8') if sys.version_info[0] == 2 else iprot.readString()
                else:
                    iprot.skip(ftype)
            else:
                iprot.skip(ftype)
            iprot.readFieldEnd()
        iprot.readStructEnd()

    def write(self, oprot):
        if oprot._fast_encode is not None and self.thrift_spec is not None:
            oprot.trans.write(oprot._fast_encode(self, [self.__class__, self.thrift_spec]))
            return
        oprot.writeStructBegin('acceptGroupInvitation_args')
        if self.reqSeq is not None:
            oprot.writeFieldBegin('reqSeq', TType.I32, 1)
            oprot.writeI32(self.reqSeq)
            oprot.writeFieldEnd()
        if self.groupId is not None:
            oprot.writeFieldBegin('groupId', TType.STRING, 2)
            oprot.writeString(self.groupId.encode('utf-8') if sys.version_info[0] == 2 else self.groupId)
            oprot.writeFieldEnd()
        oprot.writeFieldStop()
        oprot.writeStructEnd()

    def validate(self):
        return

    def __repr__(self):
        L = ['%s=%r' % (key, value)
             for key, value in self.__dict__.items()]
        return '%s(%s)' % (self.__class__.__name__, ', '.join(L))

    def __eq__(self, other):
        return isinstance(other, self.__class__) and self.__dict__ == other.__dict__

    def __ne__(self, other):
        return not (self == other)
all_structs.append(acceptGroupInvitation_args)
acceptGroupInvitation_args.thrift_spec = (
    None,  # 0
    (1, TType.I32, 'reqSeq', None, None, ),  # 1
    (2, TType.STRING, 'groupId', 'UTF8', None, ),  # 2
)


class acceptGroupInvitation_result(object):
    """
    Attributes:
     - e
    """


    def __init__(self, e=None,):
        self.e = e

    def read(self, iprot):
        if iprot._fast_decode is not None and isinstance(iprot.trans, TTransport.CReadableTransport) and self.thrift_spec is not None:
            iprot._fast_decode(self, iprot, [self.__class__, self.thrift_spec])
            return
        iprot.readStructBegin()
        while True:
            (fname, ftype, fid) = iprot.readFieldBegin()
            if ftype == TType.STOP:
                break
            if fid == 1:
                if ftype == TType.STRUCT:
                    self.e = TalkException()
                    self.e.read(iprot)
                else:
                    iprot.skip(ftype)
            else:
                iprot.skip(ftype)
            iprot.readFieldEnd()
        iprot.readStructEnd()

    def write(self, oprot):
        if oprot._fast_encode is not None and self.thrift_spec is not None:
            oprot.trans.write(oprot._fast_encode(self, [self.__class__, self.thrift_spec]))
            return
        oprot.writeStructBegin('acceptGroupInvitation_result')
        if self.e is not None:
            oprot.writeFieldBegin('e', TType.STRUCT, 1)
            self.e.write(oprot)
            oprot.writeFieldEnd()
        oprot.writeFieldStop()
        oprot.writeStructEnd()

    def validate(self):
        return

    def __repr__(self):
        L = ['%s=%r' % (key, value)
             for key, value in self.__dict__.items()]
        return '%s(%s)' % (self.__class__.__name__, ', '.join(L))

    def __eq__(self, other):
        return isinstance(other, self.__class__) and self.__dict__ == other.__dict__

    def __ne__(self, other):
        return not (self == other)
all_structs.append(acceptGroupInvitation_result)
acceptGroupInvitation_result.thrift_spec = (
    None,  # 0
    (1, TType.STRUCT, 'e', [TalkException, None], None, ),  # 1
)


class createGroup_args(object):
    """
    Attributes:
     - seq
     - name
     - contactIds
    """


    def __init__(self, seq=None, name=None, contactIds=None,):
        self.seq = seq
        self.name = name
        self.contactIds = contactIds

    def read(self, iprot):
        if iprot._fast_decode is not None and isinstance(iprot.trans, TTransport.CReadableTransport) and self.thrift_spec is not None:
            iprot._fast_decode(self, iprot, [self.__class__, self.thrift_spec])
            return
        iprot.readStructBegin()
        while True:
            (fname, ftype, fid) = iprot.readFieldBegin()
            if ftype == TType.STOP:
                break
            if fid == 1:
                if ftype == TType.I32:
                    self.seq = iprot.readI32()
                else:
                    iprot.skip(ftype)
            elif fid == 2:
                if ftype == TType.STRING:
                    self.name = iprot.readString().decode('utf-8') if sys.version_info[0] == 2 else iprot.readString()
                else:
                    iprot.skip(ftype)
            elif fid == 3:
                if ftype == TType.LIST:
                    self.contactIds = []
                    (_etype56, _size53) = iprot.readListBegin()
                    for _i57 in range(_size53):
                        _elem58 = iprot.readString().decode('utf-8') if sys.version_info[0] == 2 else iprot.readString()
                        self.contactIds.append(_elem58)
                    iprot.readListEnd()
                else:
                    iprot.skip(ftype)
            else:
                iprot.skip(ftype)
            iprot.readFieldEnd()
        iprot.readStructEnd()

    def write(self, oprot):
        if oprot._fast_encode is not None and self.thrift_spec is not None:
            oprot.trans.write(oprot._fast_encode(self, [self.__class__, self.thrift_spec]))
            return
        oprot.writeStructBegin('createGroup_args')
        if self.seq is not None:
            oprot.writeFieldBegin('seq', TType.I32, 1)
            oprot.writeI32(self.seq)
            oprot.writeFieldEnd()
        if self.name is not None:
            oprot.writeFieldBegin('name', TType.STRING, 2)
            oprot.writeString(self.name.encode('utf-8') if sys.version_info[0] == 2 else self.name)
            oprot.writeFieldEnd()
        if self.contactIds is not None:
            oprot.writeFieldBegin('contactIds', TType.LIST, 3)
            oprot.writeListBegin(TType.STRING, len(self.contactIds))
            for iter59 in self.contactIds:
                oprot.writeString(iter59.encode('utf-8') if sys.version_info[0] == 2 else iter59)
            oprot.writeListEnd()
            oprot.writeFieldEnd()
        oprot.writeFieldStop()
        oprot.writeStructEnd()

    def validate(self):
        return

    def __repr__(self):
        L = ['%s=%r' % (key, value)
             for key, value in self.__dict__.items()]
        return '%s(%s)' % (self.__class__.__name__, ', '.join(L))

    def __eq__(self, other):
        return isinstance(other, self.__class__) and self.__dict__ == other.__dict__

    def __ne__(self, other):
        return not (self == other)
all_structs.append(createGroup_args)
createGroup_args.thrift_spec = (
    None,  # 0
    (1, TType.I32, 'seq', None, None, ),  # 1
    (2, TType.STRING, 'name', 'UTF8', None, ),  # 2
    (3, TType.LIST, 'contactIds', (TType.STRING, 'UTF8', False), None, ),  # 3
)


class createGroup_result(object):
    """
    Attributes:
     - success
     - e
    """


    def __init__(self, success=None, e=None,):
        self.success = success
        self.e = e

    def read(self, iprot):
        if iprot._fast_decode is not None and isinstance(iprot.trans, TTransport.CReadableTransport) and self.thrift_spec is not None:
            iprot._fast_decode(self, iprot, [self.__class__, self.thrift_spec])
            return
        iprot.readStructBegin()
        while True:
            (fname, ftype, fid) = iprot.readFieldBegin()
            if ftype == TType.STOP:
                break
            if fid == 0:
                if ftype == TType.STRUCT:
                    self.success = Group()
                    self.success.read(iprot)
                else:
                    iprot.skip(ftype)
            elif fid == 1:
                if ftype == TType.STRUCT:
                    self.e = TalkException()
                    self.e.read(iprot)
                else:
                    iprot.skip(ftype)
            else:
                iprot.skip(ftype)
            iprot.readFieldEnd()
        iprot.readStructEnd()

    def write(self, oprot):
        if oprot._fast_encode is not None and self.thrift_spec is not None:
            oprot.trans.write(oprot._fast_encode(self, [self.__class__, self.thrift_spec]))
            return
        oprot.writeStructBegin('createGroup_result')
        if self.success is not None:
            oprot.writeFieldBegin('success', TType.STRUCT, 0)
            self.success.write(oprot)
            oprot.writeFieldEnd()
        if self.e is not None:
            oprot.writeFieldBegin('e', TType.STRUCT, 1)
            self.e.write(oprot)
            oprot.writeFieldEnd()
        oprot.writeFieldStop()
        oprot.writeStructEnd()

    def validate(self):
        return

    def __repr__(self):
        L = ['%s=%r' % (key, value)
             for key, value in self.__dict__.items()]
        return '%s(%s)' % (self.__class__.__name__, ', '.join(L))

    def __eq__(self, other):
        return isinstance(other, self.__class__) and self.__dict__ == other.__dict__

    def __ne__(self, other):
        return not (self == other)
all_structs.append(createGroup_result)
createGroup_result.thrift_spec = (
    (0, TType.STRUCT, 'success', [Group, None], None, ),  # 0
    (1, TType.STRUCT, 'e', [TalkException, None], None, ),  # 1
)


class createQrcodeBase64Image_args(object):
    """
    Attributes:
     - url
     - characterSet
     - imageSize
     - x
     - y
     - width
     - height
    """


    def __init__(self, url=None, characterSet=None, imageSize=None, x=None, y=None, width=None, height=None,):
        self.url = url
        self.characterSet = characterSet
        self.imageSize = imageSize
        self.x = x
        self.y = y
        self.width = width
        self.height = height

    def read(self, iprot):
        if iprot._fast_decode is not None and isinstance(iprot.trans, TTransport.CReadableTransport) and self.thrift_spec is not None:
            iprot._fast_decode(self, iprot, [self.__class__, self.thrift_spec])
            return
        iprot.readStructBegin()
        while True:
            (fname, ftype, fid) = iprot.readFieldBegin()
            if ftype == TType.STOP:
                break
            if fid == 2:
                if ftype == TType.STRING:
                    self.url = iprot.readString().decode('utf-8') if sys.version_info[0] == 2 else iprot.readString()
                else:
                    iprot.skip(ftype)
            elif fid == 3:
                if ftype == TType.STRING:
                    self.characterSet = iprot.readString().decode('utf-8') if sys.version_info[0] == 2 else iprot.readString()
                else:
                    iprot.skip(ftype)
            elif fid == 4:
                if ftype == TType.I32:
                    self.imageSize = iprot.readI32()
                else:
                    iprot.skip(ftype)
            elif fid == 5:
                if ftype == TType.I32:
                    self.x = iprot.readI32()
                else:
                    iprot.skip(ftype)
            elif fid == 6:
                if ftype == TType.I32:
                    self.y = iprot.readI32()
                else:
                    iprot.skip(ftype)
            elif fid == 7:
                if ftype == TType.I32:
                    self.width = iprot.readI32()
                else:
                    iprot.skip(ftype)
            elif fid == 8:
                if ftype == TType.I32:
                    self.height = iprot.readI32()
                else:
                    iprot.skip(ftype)
            else:
                iprot.skip(ftype)
            iprot.readFieldEnd()
        iprot.readStructEnd()

    def write(self, oprot):
        if oprot._fast_encode is not None and self.thrift_spec is not None:
            oprot.trans.write(oprot._fast_encode(self, [self.__class__, self.thrift_spec]))
            return
        oprot.writeStructBegin('createQrcodeBase64Image_args')
        if self.url is not None:
            oprot.writeFieldBegin('url', TType.STRING, 2)
            oprot.writeString(self.url.encode('utf-8') if sys.version_info[0] == 2 else self.url)
            oprot.writeFieldEnd()
        if self.characterSet is not None:
            oprot.writeFieldBegin('characterSet', TType.STRING, 3)
            oprot.writeString(self.characterSet.encode('utf-8') if sys.version_info[0] == 2 else self.characterSet)
            oprot.writeFieldEnd()
        if self.imageSize is not None:
            oprot.writeFieldBegin('imageSize', TType.I32, 4)
            oprot.writeI32(self.imageSize)
            oprot.writeFieldEnd()
        if self.x is not None:
            oprot.writeFieldBegin('x', TType.I32, 5)
            oprot.writeI32(self.x)
            oprot.writeFieldEnd()
        if self.y is not None:
            oprot.writeFieldBegin('y', TType.I32, 6)
            oprot.writeI32(self.y)
            oprot.writeFieldEnd()
        if self.width is not None:
            oprot.writeFieldBegin('width', TType.I32, 7)
            oprot.writeI32(self.width)
            oprot.writeFieldEnd()
        if self.height is not None:
            oprot.writeFieldBegin('height', TType.I32, 8)
            oprot.writeI32(self.height)
            oprot.writeFieldEnd()
        oprot.writeFieldStop()
        oprot.writeStructEnd()

    def validate(self):
        return

    def __repr__(self):
        L = ['%s=%r' % (key, value)
             for key, value in self.__dict__.items()]
        return '%s(%s)' % (self.__class__.__name__, ', '.join(L))

    def __eq__(self, other):
        return isinstance(other, self.__class__) and self.__dict__ == other.__dict__

    def __ne__(self, other):
        return not (self == other)
all_structs.append(createQrcodeBase64Image_args)
createQrcodeBase64Image_args.thrift_spec = (
    None,  # 0
    None,  # 1
    (2, TType.STRING, 'url', 'UTF8', None, ),  # 2
    (3, TType.STRING, 'characterSet', 'UTF8', None, ),  # 3
    (4, TType.I32, 'imageSize', None, None, ),  # 4
    (5, TType.I32, 'x', None, None, ),  # 5
    (6, TType.I32, 'y', None, None, ),  # 6
    (7, TType.I32, 'width', None, None, ),  # 7
    (8, TType.I32, 'height', None, None, ),  # 8
)


class createQrcodeBase64Image_result(object):
    """
    Attributes:
     - success
     - e
    """


    def __init__(self, success=None, e=None,):
        self.success = success
        self.e = e

    def read(self, iprot):
        if iprot._fast_decode is not None and isinstance(iprot.trans, TTransport.CReadableTransport) and self.thrift_spec is not None:
            iprot._fast_decode(self, iprot, [self.__class__, self.thrift_spec])
            return
        iprot.readStructBegin()
        while True:
            (fname, ftype, fid) = iprot.readFieldBegin()
            if ftype == TType.STOP:
                break
            if fid == 0:
                if ftype == TType.STRING:
                    self.success = iprot.readString().decode('utf-8') if sys.version_info[0] == 2 else iprot.readString()
                else:
                    iprot.skip(ftype)
            elif fid == 1:
                if ftype == TType.STRUCT:
                    self.e = TalkException()
                    self.e.read(iprot)
                else:
                    iprot.skip(ftype)
            else:
                iprot.skip(ftype)
            iprot.readFieldEnd()
        iprot.readStructEnd()

    def write(self, oprot):
        if oprot._fast_encode is not None and self.thrift_spec is not None:
            oprot.trans.write(oprot._fast_encode(self, [self.__class__, self.thrift_spec]))
            return
        oprot.writeStructBegin('createQrcodeBase64Image_result')
        if self.success is not None:
            oprot.writeFieldBegin('success', TType.STRING, 0)
            oprot.writeString(self.success.encode('utf-8') if sys.version_info[0] == 2 else self.success)
            oprot.writeFieldEnd()
        if self.e is not None:
            oprot.writeFieldBegin('e', TType.STRUCT, 1)
            self.e.write(oprot)
            oprot.writeFieldEnd()
        oprot.writeFieldStop()
        oprot.writeStructEnd()

    def validate(self):
        return

    def __repr__(self):
        L = ['%s=%r' % (key, value)
             for key, value in self.__dict__.items()]
        return '%s(%s)' % (self.__class__.__name__, ', '.join(L))

    def __eq__(self, other):
        return isinstance(other, self.__class__) and self.__dict__ == other.__dict__

    def __ne__(self, other):
        return not (self == other)
all_structs.append(createQrcodeBase64Image_result)
createQrcodeBase64Image_result.thrift_spec = (
    (0, TType.STRING, 'success', 'UTF8', None, ),  # 0
    (1, TType.STRUCT, 'e', [TalkException, None], None, ),  # 1
)


class createRoom_args(object):
    """
    Attributes:
     - reqSeq
     - contactIds
    """


    def __init__(self, reqSeq=None, contactIds=None,):
        self.reqSeq = reqSeq
        self.contactIds = contactIds

    def read(self, iprot):
        if iprot._fast_decode is not None and isinstance(iprot.trans, TTransport.CReadableTransport) and self.thrift_spec is not None:
            iprot._fast_decode(self, iprot, [self.__class__, self.thrift_spec])
            return
        iprot.readStructBegin()
        while True:
            (fname, ftype, fid) = iprot.readFieldBegin()
            if ftype == TType.STOP:
                break
            if fid == 1:
                if ftype == TType.I32:
                    self.reqSeq = iprot.readI32()
                else:
                    iprot.skip(ftype)
            elif fid == 2:
                if ftype == TType.LIST:
                    self.contactIds = []
                    (_etype63, _size60) = iprot.readListBegin()
                    for _i64 in range(_size60):
                        _elem65 = iprot.readString().decode('utf-8') if sys.version_info[0] == 2 else iprot.readString()
                        self.contactIds.append(_elem65)
                    iprot.readListEnd()
                else:
                    iprot.skip(ftype)
            else:
                iprot.skip(ftype)
            iprot.readFieldEnd()
        iprot.readStructEnd()

    def write(self, oprot):
        if oprot._fast_encode is not None and self.thrift_spec is not None:
            oprot.trans.write(oprot._fast_encode(self, [self.__class__, self.thrift_spec]))
            return
        oprot.writeStructBegin('createRoom_args')
        if self.reqSeq is not None:
            oprot.writeFieldBegin('reqSeq', TType.I32, 1)
            oprot.writeI32(self.reqSeq)
            oprot.writeFieldEnd()
        if self.contactIds is not None:
            oprot.writeFieldBegin('contactIds', TType.LIST, 2)
            oprot.writeListBegin(TType.STRING, len(self.contactIds))
            for iter66 in self.contactIds:
                oprot.writeString(iter66.encode('utf-8') if sys.version_info[0] == 2 else iter66)
            oprot.writeListEnd()
            oprot.writeFieldEnd()
        oprot.writeFieldStop()
        oprot.writeStructEnd()

    def validate(self):
        return

    def __repr__(self):
        L = ['%s=%r' % (key, value)
             for key, value in self.__dict__.items()]
        return '%s(%s)' % (self.__class__.__name__, ', '.join(L))

    def __eq__(self, other):
        return isinstance(other, self.__class__) and self.__dict__ == other.__dict__

    def __ne__(self, other):
        return not (self == other)
all_structs.append(createRoom_args)
createRoom_args.thrift_spec = (
    None,  # 0
    (1, TType.I32, 'reqSeq', None, None, ),  # 1
    (2, TType.LIST, 'contactIds', (TType.STRING, 'UTF8', False), None, ),  # 2
)


class createRoom_result(object):
    """
    Attributes:
     - success
     - e
    """


    def __init__(self, success=None, e=None,):
        self.success = success
        self.e = e

    def read(self, iprot):
        if iprot._fast_decode is not None and isinstance(iprot.trans, TTransport.CReadableTransport) and self.thrift_spec is not None:
            iprot._fast_decode(self, iprot, [self.__class__, self.thrift_spec])
            return
        iprot.readStructBegin()
        while True:
            (fname, ftype, fid) = iprot.readFieldBegin()
            if ftype == TType.STOP:
                break
            if fid == 0:
                if ftype == TType.STRUCT:
                    self.success = Room()
                    self.success.read(iprot)
                else:
                    iprot.skip(ftype)
            elif fid == 1:
                if ftype == TType.STRUCT:
                    self.e = TalkException()
                    self.e.read(iprot)
                else:
                    iprot.skip(ftype)
            else:
                iprot.skip(ftype)
            iprot.readFieldEnd()
        iprot.readStructEnd()

    def write(self, oprot):
        if oprot._fast_encode is not None and self.thrift_spec is not None:
            oprot.trans.write(oprot._fast_encode(self, [self.__class__, self.thrift_spec]))
            return
        oprot.writeStructBegin('createRoom_result')
        if self.success is not None:
            oprot.writeFieldBegin('success', TType.STRUCT, 0)
            self.success.write(oprot)
            oprot.writeFieldEnd()
        if self.e is not None:
            oprot.writeFieldBegin('e', TType.STRUCT, 1)
            self.e.write(oprot)
            oprot.writeFieldEnd()
        oprot.writeFieldStop()
        oprot.writeStructEnd()

    def validate(self):
        return

    def __repr__(self):
        L = ['%s=%r' % (key, value)
             for key, value in self.__dict__.items()]
        return '%s(%s)' % (self.__class__.__name__, ', '.join(L))

    def __eq__(self, other):
        return isinstance(other, self.__class__) and self.__dict__ == other.__dict__

    def __ne__(self, other):
        return not (self == other)
all_structs.append(createRoom_result)
createRoom_result.thrift_spec = (
    (0, TType.STRUCT, 'success', [Room, None], None, ),  # 0
    (1, TType.STRUCT, 'e', [TalkException, None], None, ),  # 1
)


class createSession_args(object):


    def read(self, iprot):
        if iprot._fast_decode is not None and isinstance(iprot.trans, TTransport.CReadableTransport) and self.thrift_spec is not None:
            iprot._fast_decode(self, iprot, [self.__class__, self.thrift_spec])
            return
        iprot.readStructBegin()
        while True:
            (fname, ftype, fid) = iprot.readFieldBegin()
            if ftype == TType.STOP:
                break
            else:
                iprot.skip(ftype)
            iprot.readFieldEnd()
        iprot.readStructEnd()

    def write(self, oprot):
        if oprot._fast_encode is not None and self.thrift_spec is not None:
            oprot.trans.write(oprot._fast_encode(self, [self.__class__, self.thrift_spec]))
            return
        oprot.writeStructBegin('createSession_args')
        oprot.writeFieldStop()
        oprot.writeStructEnd()

    def validate(self):
        return

    def __repr__(self):
        L = ['%s=%r' % (key, value)
             for key, value in self.__dict__.items()]
        return '%s(%s)' % (self.__class__.__name__, ', '.join(L))

    def __eq__(self, other):
        return isinstance(other, self.__class__) and self.__dict__ == other.__dict__

    def __ne__(self, other):
        return not (self == other)
all_structs.append(createSession_args)
createSession_args.thrift_spec = (
)


class createSession_result(object):
    """
    Attributes:
     - success
     - e
    """


    def __init__(self, success=None, e=None,):
        self.success = success
        self.e = e

    def read(self, iprot):
        if iprot._fast_decode is not None and isinstance(iprot.trans, TTransport.CReadableTransport) and self.thrift_spec is not None:
            iprot._fast_decode(self, iprot, [self.__class__, self.thrift_spec])
            return
        iprot.readStructBegin()
        while True:
            (fname, ftype, fid) = iprot.readFieldBegin()
            if ftype == TType.STOP:
                break
            if fid == 0:
                if ftype == TType.STRING:
                    self.success = iprot.readString().decode('utf-8') if sys.version_info[0] == 2 else iprot.readString()
                else:
                    iprot.skip(ftype)
            elif fid == 1:
                if ftype == TType.STRUCT:
                    self.e = TalkException()
                    self.e.read(iprot)
                else:
                    iprot.skip(ftype)
            else:
                iprot.skip(ftype)
            iprot.readFieldEnd()
        iprot.readStructEnd()

    def write(self, oprot):
        if oprot._fast_encode is not None and self.thrift_spec is not None:
            oprot.trans.write(oprot._fast_encode(self, [self.__class__, self.thrift_spec]))
            return
        oprot.writeStructBegin('createSession_result')
        if self.success is not None:
            oprot.writeFieldBegin('success', TType.STRING, 0)
            oprot.writeString(self.success.encode('utf-8') if sys.version_info[0] == 2 else self.success)
            oprot.writeFieldEnd()
        if self.e is not None:
            oprot.writeFieldBegin('e', TType.STRUCT, 1)
            self.e.write(oprot)
            oprot.writeFieldEnd()
        oprot.writeFieldStop()
        oprot.writeStructEnd()

    def validate(self):
        return

    def __repr__(self):
        L = ['%s=%r' % (key, value)
             for key, value in self.__dict__.items()]
        return '%s(%s)' % (self.__class__.__name__, ', '.join(L))

    def __eq__(self, other):
        return isinstance(other, self.__class__) and self.__dict__ == other.__dict__

    def __ne__(self, other):
        return not (self == other)
all_structs.append(createSession_result)
createSession_result.thrift_spec = (
    (0, TType.STRING, 'success', 'UTF8', None, ),  # 0
    (1, TType.STRUCT, 'e', [TalkException, None], None, ),  # 1
)


class fetchOperations_args(object):
    """
    Attributes:
     - localRev
     - count
    """


    def __init__(self, localRev=None, count=None,):
        self.localRev = localRev
        self.count = count

    def read(self, iprot):
        if iprot._fast_decode is not None and isinstance(iprot.trans, TTransport.CReadableTransport) and self.thrift_spec is not None:
            iprot._fast_decode(self, iprot, [self.__class__, self.thrift_spec])
            return
        iprot.readStructBegin()
        while True:
            (fname, ftype, fid) = iprot.readFieldBegin()
            if ftype == TType.STOP:
                break
            if fid == 2:
                if ftype == TType.I64:
                    self.localRev = iprot.readI64()
                else:
                    iprot.skip(ftype)
            elif fid == 3:
                if ftype == TType.I32:
                    self.count = iprot.readI32()
                else:
                    iprot.skip(ftype)
            else:
                iprot.skip(ftype)
            iprot.readFieldEnd()
        iprot.readStructEnd()

    def write(self, oprot):
        if oprot._fast_encode is not None and self.thrift_spec is not None:
            oprot.trans.write(oprot._fast_encode(self, [self.__class__, self.thrift_spec]))
            return
        oprot.writeStructBegin('fetchOperations_args')
        if self.localRev is not None:
            oprot.writeFieldBegin('localRev', TType.I64, 2)
            oprot.writeI64(self.localRev)
            oprot.writeFieldEnd()
        if self.count is not None:
            oprot.writeFieldBegin('count', TType.I32, 3)
            oprot.writeI32(self.count)
            oprot.writeFieldEnd()
        oprot.writeFieldStop()
        oprot.writeStructEnd()

    def validate(self):
        return

    def __repr__(self):
        L = ['%s=%r' % (key, value)
             for key, value in self.__dict__.items()]
        return '%s(%s)' % (self.__class__.__name__, ', '.join(L))

    def __eq__(self, other):
        return isinstance(other, self.__class__) and self.__dict__ == other.__dict__

    def __ne__(self, other):
        return not (self == other)
all_structs.append(fetchOperations_args)
fetchOperations_args.thrift_spec = (
    None,  # 0
    None,  # 1
    (2, TType.I64, 'localRev', None, None, ),  # 2
    (3, TType.I32, 'count', None, None, ),  # 3
)


class fetchOperations_result(object):
    """
    Attributes:
     - success
     - e
    """


    def __init__(self, success=None, e=None,):
        self.success = success
        self.e = e

    def read(self, iprot):
        if iprot._fast_decode is not None and isinstance(iprot.trans, TTransport.CReadableTransport) and self.thrift_spec is not None:
            iprot._fast_decode(self, iprot, [self.__class__, self.thrift_spec])
            return
        iprot.readStructBegin()
        while True:
            (fname, ftype, fid) = iprot.readFieldBegin()
            if ftype == TType.STOP:
                break
            if fid == 0:
                if ftype == TType.LIST:
                    self.success = []
                    (_etype70, _size67) = iprot.readListBegin()
                    for _i71 in range(_size67):
                        _elem72 = Operation()
                        _elem72.read(iprot)
                        self.success.append(_elem72)
                    iprot.readListEnd()
                else:
                    iprot.skip(ftype)
            elif fid == 1:
                if ftype == TType.STRUCT:
                    self.e = TalkException()
                    self.e.read(iprot)
                else:
                    iprot.skip(ftype)
            else:
                iprot.skip(ftype)
            iprot.readFieldEnd()
        iprot.readStructEnd()

    def write(self, oprot):
        if oprot._fast_encode is not None and self.thrift_spec is not None:
            oprot.trans.write(oprot._fast_encode(self, [self.__class__, self.thrift_spec]))
            return
        oprot.writeStructBegin('fetchOperations_result')
        if self.success is not None:
            oprot.writeFieldBegin('success', TType.LIST, 0)
            oprot.writeListBegin(TType.STRUCT, len(self.success))
            for iter73 in self.success:
                iter73.write(oprot)
            oprot.writeListEnd()
            oprot.writeFieldEnd()
        if self.e is not None:
            oprot.writeFieldBegin('e', TType.STRUCT, 1)
            self.e.write(oprot)
            oprot.writeFieldEnd()
        oprot.writeFieldStop()
        oprot.writeStructEnd()

    def validate(self):
        return

    def __repr__(self):
        L = ['%s=%r' % (key, value)
             for key, value in self.__dict__.items()]
        return '%s(%s)' % (self.__class__.__name__, ', '.join(L))

    def __eq__(self, other):
        return isinstance(other, self.__class__) and self.__dict__ == other.__dict__

    def __ne__(self, other):
        return not (self == other)
all_structs.append(fetchOperations_result)
fetchOperations_result.thrift_spec = (
    (0, TType.LIST, 'success', (TType.STRUCT, [Operation, None], False), None, ),  # 0
    (1, TType.STRUCT, 'e', [TalkException, None], None, ),  # 1
)


class getProfile_args(object):


    def read(self, iprot):
        if iprot._fast_decode is not None and isinstance(iprot.trans, TTransport.CReadableTransport) and self.thrift_spec is not None:
            iprot._fast_decode(self, iprot, [self.__class__, self.thrift_spec])
            return
        iprot.readStructBegin()
        while True:
            (fname, ftype, fid) = iprot.readFieldBegin()
            if ftype == TType.STOP:
                break
            else:
                iprot.skip(ftype)
            iprot.readFieldEnd()
        iprot.readStructEnd()

    def write(self, oprot):
        if oprot._fast_encode is not None and self.thrift_spec is not None:
            oprot.trans.write(oprot._fast_encode(self, [self.__class__, self.thrift_spec]))
            return
        oprot.writeStructBegin('getProfile_args')
        oprot.writeFieldStop()
        oprot.writeStructEnd()

    def validate(self):
        return

    def __repr__(self):
        L = ['%s=%r' % (key, value)
             for key, value in self.__dict__.items()]
        return '%s(%s)' % (self.__class__.__name__, ', '.join(L))

    def __eq__(self, other):
        return isinstance(other, self.__class__) and self.__dict__ == other.__dict__

    def __ne__(self, other):
        return not (self == other)
all_structs.append(getProfile_args)
getProfile_args.thrift_spec = (
)


class getProfile_result(object):
    """
    Attributes:
     - success
     - e
    """


    def __init__(self, success=None, e=None,):
        self.success = success
        self.e = e

    def read(self, iprot):
        if iprot._fast_decode is not None and isinstance(iprot.trans, TTransport.CReadableTransport) and self.thrift_spec is not None:
            iprot._fast_decode(self, iprot, [self.__class__, self.thrift_spec])
            return
        iprot.readStructBegin()
        while True:
            (fname, ftype, fid) = iprot.readFieldBegin()
            if ftype == TType.STOP:
                break
            if fid == 0:
                if ftype == TType.STRUCT:
                    self.success = Profile()
                    self.success.read(iprot)
                else:
                    iprot.skip(ftype)
            elif fid == 1:
                if ftype == TType.STRUCT:
                    self.e = TalkException()
                    self.e.read(iprot)
                else:
                    iprot.skip(ftype)
            else:
                iprot.skip(ftype)
            iprot.readFieldEnd()
        iprot.readStructEnd()

    def write(self, oprot):
        if oprot._fast_encode is not None and self.thrift_spec is not None:
            oprot.trans.write(oprot._fast_encode(self, [self.__class__, self.thrift_spec]))
            return
        oprot.writeStructBegin('getProfile_result')
        if self.success is not None:
            oprot.writeFieldBegin('success', TType.STRUCT, 0)
            self.success.write(oprot)
            oprot.writeFieldEnd()
        if self.e is not None:
            oprot.writeFieldBegin('e', TType.STRUCT, 1)
            self.e.write(oprot)
            oprot.writeFieldEnd()
        oprot.writeFieldStop()
        oprot.writeStructEnd()

    def validate(self):
        return

    def __repr__(self):
        L = ['%s=%r' % (key, value)
             for key, value in self.__dict__.items()]
        return '%s(%s)' % (self.__class__.__name__, ', '.join(L))

    def __eq__(self, other):
        return isinstance(other, self.__class__) and self.__dict__ == other.__dict__

    def __ne__(self, other):
        return not (self == other)
all_structs.append(getProfile_result)
getProfile_result.thrift_spec = (
    (0, TType.STRUCT, 'success', [Profile, None], None, ),  # 0
    (1, TType.STRUCT, 'e', [TalkException, None], None, ),  # 1
)


class findAndAddContactsByEmail_args(object):
    """
    Attributes:
     - reqSeq
     - emails
    """


    def __init__(self, reqSeq=None, emails=None,):
        self.reqSeq = reqSeq
        self.emails = emails

    def read(self, iprot):
        if iprot._fast_decode is not None and isinstance(iprot.trans, TTransport.CReadableTransport) and self.thrift_spec is not None:
            iprot._fast_decode(self, iprot, [self.__class__, self.thrift_spec])
            return
        iprot.readStructBegin()
        while True:
            (fname, ftype, fid) = iprot.readFieldBegin()
            if ftype == TType.STOP:
                break
            if fid == 1:
                if ftype == TType.I32:
                    self.reqSeq = iprot.readI32()
                else:
                    iprot.skip(ftype)
            elif fid == 2:
                if ftype == TType.SET:
                    self.emails = set()
                    (_etype77, _size74) = iprot.readSetBegin()
                    for _i78 in range(_size74):
                        _elem79 = iprot.readString().decode('utf-8') if sys.version_info[0] == 2 else iprot.readString()
                        self.emails.add(_elem79)
                    iprot.readSetEnd()
                else:
                    iprot.skip(ftype)
            else:
                iprot.skip(ftype)
            iprot.readFieldEnd()
        iprot.readStructEnd()

    def write(self, oprot):
        if oprot._fast_encode is not None and self.thrift_spec is not None:
            oprot.trans.write(oprot._fast_encode(self, [self.__class__, self.thrift_spec]))
            return
        oprot.writeStructBegin('findAndAddContactsByEmail_args')
        if self.reqSeq is not None:
            oprot.writeFieldBegin('reqSeq', TType.I32, 1)
            oprot.writeI32(self.reqSeq)
            oprot.writeFieldEnd()
        if self.emails is not None:
            oprot.writeFieldBegin('emails', TType.SET, 2)
            oprot.writeSetBegin(TType.STRING, len(self.emails))
            for iter80 in self.emails:
                oprot.writeString(iter80.encode('utf-8') if sys.version_info[0] == 2 else iter80)
            oprot.writeSetEnd()
            oprot.writeFieldEnd()
        oprot.writeFieldStop()
        oprot.writeStructEnd()

    def validate(self):
        return

    def __repr__(self):
        L = ['%s=%r' % (key, value)
             for key, value in self.__dict__.items()]
        return '%s(%s)' % (self.__class__.__name__, ', '.join(L))

    def __eq__(self, other):
        return isinstance(other, self.__class__) and self.__dict__ == other.__dict__

    def __ne__(self, other):
        return not (self == other)
all_structs.append(findAndAddContactsByEmail_args)
findAndAddContactsByEmail_args.thrift_spec = (
    None,  # 0
    (1, TType.I32, 'reqSeq', None, None, ),  # 1
    (2, TType.SET, 'emails', (TType.STRING, 'UTF8', False), None, ),  # 2
)


class findAndAddContactsByEmail_result(object):
    """
    Attributes:
     - success
     - e
    """


    def __init__(self, success=None, e=None,):
        self.success = success
        self.e = e

    def read(self, iprot):
        if iprot._fast_decode is not None and isinstance(iprot.trans, TTransport.CReadableTransport) and self.thrift_spec is not None:
            iprot._fast_decode(self, iprot, [self.__class__, self.thrift_spec])
            return
        iprot.readStructBegin()
        while True:
            (fname, ftype, fid) = iprot.readFieldBegin()
            if ftype == TType.STOP:
                break
            if fid == 0:
                if ftype == TType.MAP:
                    self.success = {}
                    (_ktype82, _vtype83, _size81) = iprot.readMapBegin()
                    for _i85 in range(_size81):
                        _key86 = iprot.readString().decode('utf-8') if sys.version_info[0] == 2 else iprot.readString()
                        _val87 = Contact()
                        _val87.read(iprot)
                        self.success[_key86] = _val87
                    iprot.readMapEnd()
                else:
                    iprot.skip(ftype)
            elif fid == 1:
                if ftype == TType.STRUCT:
                    self.e = TalkException()
                    self.e.read(iprot)
                else:
                    iprot.skip(ftype)
            else:
                iprot.skip(ftype)
            iprot.readFieldEnd()
        iprot.readStructEnd()

    def write(self, oprot):
        if oprot._fast_encode is not None and self.thrift_spec is not None:
            oprot.trans.write(oprot._fast_encode(self, [self.__class__, self.thrift_spec]))
            return
        oprot.writeStructBegin('findAndAddContactsByEmail_result')
        if self.success is not None:
            oprot.writeFieldBegin('success', TType.MAP, 0)
            oprot.writeMapBegin(TType.STRING, TType.STRUCT, len(self.success))
            for kiter88, viter89 in self.success.items():
                oprot.writeString(kiter88.encode('utf-8') if sys.version_info[0] == 2 else kiter88)
                viter89.write(oprot)
            oprot.writeMapEnd()
            oprot.writeFieldEnd()
        if self.e is not None:
            oprot.writeFieldBegin('e', TType.STRUCT, 1)
            self.e.write(oprot)
            oprot.writeFieldEnd()
        oprot.writeFieldStop()
        oprot.writeStructEnd()

    def validate(self):
        return

    def __repr__(self):
        L = ['%s=%r' % (key, value)
             for key, value in self.__dict__.items()]
        return '%s(%s)' % (self.__class__.__name__, ', '.join(L))

    def __eq__(self, other):
        return isinstance(other, self.__class__) and self.__dict__ == other.__dict__

    def __ne__(self, other):
        return not (self == other)
all_structs.append(findAndAddContactsByEmail_result)
findAndAddContactsByEmail_result.thrift_spec = (
    (0, TType.MAP, 'success', (TType.STRING, 'UTF8', TType.STRUCT, [Contact, None], False), None, ),  # 0
    (1, TType.STRUCT, 'e', [TalkException, None], None, ),  # 1
)


class findAndAddContactsByMid_args(object):
    """
    Attributes:
     - reqSeq
     - mid
    """


    def __init__(self, reqSeq=None, mid=None,):
        self.reqSeq = reqSeq
        self.mid = mid

    def read(self, iprot):
        if iprot._fast_decode is not None and isinstance(iprot.trans, TTransport.CReadableTransport) and self.thrift_spec is not None:
            iprot._fast_decode(self, iprot, [self.__class__, self.thrift_spec])
            return
        iprot.readStructBegin()
        while True:
            (fname, ftype, fid) = iprot.readFieldBegin()
            if ftype == TType.STOP:
                break
            if fid == 1:
                if ftype == TType.I32:
                    self.reqSeq = iprot.readI32()
                else:
                    iprot.skip(ftype)
            elif fid == 2:
                if ftype == TType.STRING:
                    self.mid = iprot.readString().decode('utf-8') if sys.version_info[0] == 2 else iprot.readString()
                else:
                    iprot.skip(ftype)
            else:
                iprot.skip(ftype)
            iprot.readFieldEnd()
        iprot.readStructEnd()

    def write(self, oprot):
        if oprot._fast_encode is not None and self.thrift_spec is not None:
            oprot.trans.write(oprot._fast_encode(self, [self.__class__, self.thrift_spec]))
            return
        oprot.writeStructBegin('findAndAddContactsByMid_args')
        if self.reqSeq is not None:
            oprot.writeFieldBegin('reqSeq', TType.I32, 1)
            oprot.writeI32(self.reqSeq)
            oprot.writeFieldEnd()
        if self.mid is not None:
            oprot.writeFieldBegin('mid', TType.STRING, 2)
            oprot.writeString(self.mid.encode('utf-8') if sys.version_info[0] == 2 else self.mid)
            oprot.writeFieldEnd()
        oprot.writeFieldStop()
        oprot.writeStructEnd()

    def validate(self):
        return

    def __repr__(self):
        L = ['%s=%r' % (key, value)
             for key, value in self.__dict__.items()]
        return '%s(%s)' % (self.__class__.__name__, ', '.join(L))

    def __eq__(self, other):
        return isinstance(other, self.__class__) and self.__dict__ == other.__dict__

    def __ne__(self, other):
        return not (self == other)
all_structs.append(findAndAddContactsByMid_args)
findAndAddContactsByMid_args.thrift_spec = (
    None,  # 0
    (1, TType.I32, 'reqSeq', None, None, ),  # 1
    (2, TType.STRING, 'mid', 'UTF8', None, ),  # 2
)


class findAndAddContactsByMid_result(object):
    """
    Attributes:
     - success
     - e
    """


    def __init__(self, success=None, e=None,):
        self.success = success
        self.e = e

    def read(self, iprot):
        if iprot._fast_decode is not None and isinstance(iprot.trans, TTransport.CReadableTransport) and self.thrift_spec is not None:
            iprot._fast_decode(self, iprot, [self.__class__, self.thrift_spec])
            return
        iprot.readStructBegin()
        while True:
            (fname, ftype, fid) = iprot.readFieldBegin()
            if ftype == TType.STOP:
                break
            if fid == 0:
                if ftype == TType.MAP:
                    self.success = {}
                    (_ktype91, _vtype92, _size90) = iprot.readMapBegin()
                    for _i94 in range(_size90):
                        _key95 = iprot.readString().decode('utf-8') if sys.version_info[0] == 2 else iprot.readString()
                        _val96 = Contact()
                        _val96.read(iprot)
                        self.success[_key95] = _val96
                    iprot.readMapEnd()
                else:
                    iprot.skip(ftype)
            elif fid == 1:
                if ftype == TType.STRUCT:
                    self.e = TalkException()
                    self.e.read(iprot)
                else:
                    iprot.skip(ftype)
            else:
                iprot.skip(ftype)
            iprot.readFieldEnd()
        iprot.readStructEnd()

    def write(self, oprot):
        if oprot._fast_encode is not None and self.thrift_spec is not None:
            oprot.trans.write(oprot._fast_encode(self, [self.__class__, self.thrift_spec]))
            return
        oprot.writeStructBegin('findAndAddContactsByMid_result')
        if self.success is not None:
            oprot.writeFieldBegin('success', TType.MAP, 0)
            oprot.writeMapBegin(TType.STRING, TType.STRUCT, len(self.success))
            for kiter97, viter98 in self.success.items():
                oprot.writeString(kiter97.encode('utf-8') if sys.version_info[0] == 2 else kiter97)
                viter98.write(oprot)
            oprot.writeMapEnd()
            oprot.writeFieldEnd()
        if self.e is not None:
            oprot.writeFieldBegin('e', TType.STRUCT, 1)
            self.e.write(oprot)
            oprot.writeFieldEnd()
        oprot.writeFieldStop()
        oprot.writeStructEnd()

    def validate(self):
        return

    def __repr__(self):
        L = ['%s=%r' % (key, value)
             for key, value in self.__dict__.items()]
        return '%s(%s)' % (self.__class__.__name__, ', '.join(L))

    def __eq__(self, other):
        return isinstance(other, self.__class__) and self.__dict__ == other.__dict__

    def __ne__(self, other):
        return not (self == other)
all_structs.append(findAndAddContactsByMid_result)
findAndAddContactsByMid_result.thrift_spec = (
    (0, TType.MAP, 'success', (TType.STRING, 'UTF8', TType.STRUCT, [Contact, None], False), None, ),  # 0
    (1, TType.STRUCT, 'e', [TalkException, None], None, ),  # 1
)


class findAndAddContactsByPhone_args(object):
    """
    Attributes:
     - reqSeq
     - phones
    """


    def __init__(self, reqSeq=None, phones=None,):
        self.reqSeq = reqSeq
        self.phones = phones

    def read(self, iprot):
        if iprot._fast_decode is not None and isinstance(iprot.trans, TTransport.CReadableTransport) and self.thrift_spec is not None:
            iprot._fast_decode(self, iprot, [self.__class__, self.thrift_spec])
            return
        iprot.readStructBegin()
        while True:
            (fname, ftype, fid) = iprot.readFieldBegin()
            if ftype == TType.STOP:
                break
            if fid == 1:
                if ftype == TType.I32:
                    self.reqSeq = iprot.readI32()
                else:
                    iprot.skip(ftype)
            elif fid == 2:
                if ftype == TType.SET:
                    self.phones = set()
                    (_etype102, _size99) = iprot.readSetBegin()
                    for _i103 in range(_size99):
                        _elem104 = iprot.readString().decode('utf-8') if sys.version_info[0] == 2 else iprot.readString()
                        self.phones.add(_elem104)
                    iprot.readSetEnd()
                else:
                    iprot.skip(ftype)
            else:
                iprot.skip(ftype)
            iprot.readFieldEnd()
        iprot.readStructEnd()

    def write(self, oprot):
        if oprot._fast_encode is not None and self.thrift_spec is not None:
            oprot.trans.write(oprot._fast_encode(self, [self.__class__, self.thrift_spec]))
            return
        oprot.writeStructBegin('findAndAddContactsByPhone_args')
        if self.reqSeq is not None:
            oprot.writeFieldBegin('reqSeq', TType.I32, 1)
            oprot.writeI32(self.reqSeq)
            oprot.writeFieldEnd()
        if self.phones is not None:
            oprot.writeFieldBegin('phones', TType.SET, 2)
            oprot.writeSetBegin(TType.STRING, len(self.phones))
            for iter105 in self.phones:
                oprot.writeString(iter105.encode('utf-8') if sys.version_info[0] == 2 else iter105)
            oprot.writeSetEnd()
            oprot.writeFieldEnd()
        oprot.writeFieldStop()
        oprot.writeStructEnd()

    def validate(self):
        return

    def __repr__(self):
        L = ['%s=%r' % (key, value)
             for key, value in self.__dict__.items()]
        return '%s(%s)' % (self.__class__.__name__, ', '.join(L))

    def __eq__(self, other):
        return isinstance(other, self.__class__) and self.__dict__ == other.__dict__

    def __ne__(self, other):
        return not (self == other)
all_structs.append(findAndAddContactsByPhone_args)
findAndAddContactsByPhone_args.thrift_spec = (
    None,  # 0
    (1, TType.I32, 'reqSeq', None, None, ),  # 1
    (2, TType.SET, 'phones', (TType.STRING, 'UTF8', False), None, ),  # 2
)


class findAndAddContactsByPhone_result(object):
    """
    Attributes:
     - success
     - e
    """


    def __init__(self, success=None, e=None,):
        self.success = success
        self.e = e

    def read(self, iprot):
        if iprot._fast_decode is not None and isinstance(iprot.trans, TTransport.CReadableTransport) and self.thrift_spec is not None:
            iprot._fast_decode(self, iprot, [self.__class__, self.thrift_spec])
            return
        iprot.readStructBegin()
        while True:
            (fname, ftype, fid) = iprot.readFieldBegin()
            if ftype == TType.STOP:
                break
            if fid == 0:
                if ftype == TType.MAP:
                    self.success = {}
                    (_ktype107, _vtype108, _size106) = iprot.readMapBegin()
                    for _i110 in range(_size106):
                        _key111 = iprot.readString().decode('utf-8') if sys.version_info[0] == 2 else iprot.readString()
                        _val112 = Contact()
                        _val112.read(iprot)
                        self.success[_key111] = _val112
                    iprot.readMapEnd()
                else:
                    iprot.skip(ftype)
            elif fid == 1:
                if ftype == TType.STRUCT:
                    self.e = TalkException()
                    self.e.read(iprot)
                else:
                    iprot.skip(ftype)
            else:
                iprot.skip(ftype)
            iprot.readFieldEnd()
        iprot.readStructEnd()

    def write(self, oprot):
        if oprot._fast_encode is not None and self.thrift_spec is not None:
            oprot.trans.write(oprot._fast_encode(self, [self.__class__, self.thrift_spec]))
            return
        oprot.writeStructBegin('findAndAddContactsByPhone_result')
        if self.success is not None:
            oprot.writeFieldBegin('success', TType.MAP, 0)
            oprot.writeMapBegin(TType.STRING, TType.STRUCT, len(self.success))
            for kiter113, viter114 in self.success.items():
                oprot.writeString(kiter113.encode('utf-8') if sys.version_info[0] == 2 else kiter113)
                viter114.write(oprot)
            oprot.writeMapEnd()
            oprot.writeFieldEnd()
        if self.e is not None:
            oprot.writeFieldBegin('e', TType.STRUCT, 1)
            self.e.write(oprot)
            oprot.writeFieldEnd()
        oprot.writeFieldStop()
        oprot.writeStructEnd()

    def validate(self):
        return

    def __repr__(self):
        L = ['%s=%r' % (key, value)
             for key, value in self.__dict__.items()]
        return '%s(%s)' % (self.__class__.__name__, ', '.join(L))

    def __eq__(self, other):
        return isinstance(other, self.__class__) and self.__dict__ == other.__dict__

    def __ne__(self, other):
        return not (self == other)
all_structs.append(findAndAddContactsByPhone_result)
findAndAddContactsByPhone_result.thrift_spec = (
    (0, TType.MAP, 'success', (TType.STRING, 'UTF8', TType.STRUCT, [Contact, None], False), None, ),  # 0
    (1, TType.STRUCT, 'e', [TalkException, None], None, ),  # 1
)


class findAndAddContactsByUserid_args(object):
    """
    Attributes:
     - reqSeq
     - userid
    """


    def __init__(self, reqSeq=None, userid=None,):
        self.reqSeq = reqSeq
        self.userid = userid

    def read(self, iprot):
        if iprot._fast_decode is not None and isinstance(iprot.trans, TTransport.CReadableTransport) and self.thrift_spec is not None:
            iprot._fast_decode(self, iprot, [self.__class__, self.thrift_spec])
            return
        iprot.readStructBegin()
        while True:
            (fname, ftype, fid) = iprot.readFieldBegin()
            if ftype == TType.STOP:
                break
            if fid == 1:
                if ftype == TType.I32:
                    self.reqSeq = iprot.readI32()
                else:
                    iprot.skip(ftype)
            elif fid == 2:
                if ftype == TType.STRING:
                    self.userid = iprot.readString().decode('utf-8') if sys.version_info[0] == 2 else iprot.readString()
                else:
                    iprot.skip(ftype)
            else:
                iprot.skip(ftype)
            iprot.readFieldEnd()
        iprot.readStructEnd()

    def write(self, oprot):
        if oprot._fast_encode is not None and self.thrift_spec is not None:
            oprot.trans.write(oprot._fast_encode(self, [self.__class__, self.thrift_spec]))
            return
        oprot.writeStructBegin('findAndAddContactsByUserid_args')
        if self.reqSeq is not None:
            oprot.writeFieldBegin('reqSeq', TType.I32, 1)
            oprot.writeI32(self.reqSeq)
            oprot.writeFieldEnd()
        if self.userid is not None:
            oprot.writeFieldBegin('userid', TType.STRING, 2)
            oprot.writeString(self.userid.encode('utf-8') if sys.version_info[0] == 2 else self.userid)
            oprot.writeFieldEnd()
        oprot.writeFieldStop()
        oprot.writeStructEnd()

    def validate(self):
        return

    def __repr__(self):
        L = ['%s=%r' % (key, value)
             for key, value in self.__dict__.items()]
        return '%s(%s)' % (self.__class__.__name__, ', '.join(L))

    def __eq__(self, other):
        return isinstance(other, self.__class__) and self.__dict__ == other.__dict__

    def __ne__(self, other):
        return not (self == other)
all_structs.append(findAndAddContactsByUserid_args)
findAndAddContactsByUserid_args.thrift_spec = (
    None,  # 0
    (1, TType.I32, 'reqSeq', None, None, ),  # 1
    (2, TType.STRING, 'userid', 'UTF8', None, ),  # 2
)


class findAndAddContactsByUserid_result(object):
    """
    Attributes:
     - success
     - e
    """


    def __init__(self, success=None, e=None,):
        self.success = success
        self.e = e

    def read(self, iprot):
        if iprot._fast_decode is not None and isinstance(iprot.trans, TTransport.CReadableTransport) and self.thrift_spec is not None:
            iprot._fast_decode(self, iprot, [self.__class__, self.thrift_spec])
            return
        iprot.readStructBegin()
        while True:
            (fname, ftype, fid) = iprot.readFieldBegin()
            if ftype == TType.STOP:
                break
            if fid == 0:
                if ftype == TType.MAP:
                    self.success = {}
                    (_ktype116, _vtype117, _size115) = iprot.readMapBegin()
                    for _i119 in range(_size115):
                        _key120 = iprot.readString().decode('utf-8') if sys.version_info[0] == 2 else iprot.readString()
                        _val121 = Contact()
                        _val121.read(iprot)
                        self.success[_key120] = _val121
                    iprot.readMapEnd()
                else:
                    iprot.skip(ftype)
            elif fid == 1:
                if ftype == TType.STRUCT:
                    self.e = TalkException()
                    self.e.read(iprot)
                else:
                    iprot.skip(ftype)
            else:
                iprot.skip(ftype)
            iprot.readFieldEnd()
        iprot.readStructEnd()

    def write(self, oprot):
        if oprot._fast_encode is not None and self.thrift_spec is not None:
            oprot.trans.write(oprot._fast_encode(self, [self.__class__, self.thrift_spec]))
            return
        oprot.writeStructBegin('findAndAddContactsByUserid_result')
        if self.success is not None:
            oprot.writeFieldBegin('success', TType.MAP, 0)
            oprot.writeMapBegin(TType.STRING, TType.STRUCT, len(self.success))
            for kiter122, viter123 in self.success.items():
                oprot.writeString(kiter122.encode('utf-8') if sys.version_info[0] == 2 else kiter122)
                viter123.write(oprot)
            oprot.writeMapEnd()
            oprot.writeFieldEnd()
        if self.e is not None:
            oprot.writeFieldBegin('e', TType.STRUCT, 1)
            self.e.write(oprot)
            oprot.writeFieldEnd()
        oprot.writeFieldStop()
        oprot.writeStructEnd()

    def validate(self):
        return

    def __repr__(self):
        L = ['%s=%r' % (key, value)
             for key, value in self.__dict__.items()]
        return '%s(%s)' % (self.__class__.__name__, ', '.join(L))

    def __eq__(self, other):
        return isinstance(other, self.__class__) and self.__dict__ == other.__dict__

    def __ne__(self, other):
        return not (self == other)
all_structs.append(findAndAddContactsByUserid_result)
findAndAddContactsByUserid_result.thrift_spec = (
    (0, TType.MAP, 'success', (TType.STRING, 'UTF8', TType.STRUCT, [Contact, None], False), None, ),  # 0
    (1, TType.STRUCT, 'e', [TalkException, None], None, ),  # 1
)


class findContactByUserid_args(object):
    """
    Attributes:
     - userid
    """


    def __init__(self, userid=None,):
        self.userid = userid

    def read(self, iprot):
        if iprot._fast_decode is not None and isinstance(iprot.trans, TTransport.CReadableTransport) and self.thrift_spec is not None:
            iprot._fast_decode(self, iprot, [self.__class__, self.thrift_spec])
            return
        iprot.readStructBegin()
        while True:
            (fname, ftype, fid) = iprot.readFieldBegin()
            if ftype == TType.STOP:
                break
            if fid == 2:
                if ftype == TType.STRING:
                    self.userid = iprot.readString().decode('utf-8') if sys.version_info[0] == 2 else iprot.readString()
                else:
                    iprot.skip(ftype)
            else:
                iprot.skip(ftype)
            iprot.readFieldEnd()
        iprot.readStructEnd()

    def write(self, oprot):
        if oprot._fast_encode is not None and self.thrift_spec is not None:
            oprot.trans.write(oprot._fast_encode(self, [self.__class__, self.thrift_spec]))
            return
        oprot.writeStructBegin('findContactByUserid_args')
        if self.userid is not None:
            oprot.writeFieldBegin('userid', TType.STRING, 2)
            oprot.writeString(self.userid.encode('utf-8') if sys.version_info[0] == 2 else self.userid)
            oprot.writeFieldEnd()
        oprot.writeFieldStop()
        oprot.writeStructEnd()

    def validate(self):
        return

    def __repr__(self):
        L = ['%s=%r' % (key, value)
             for key, value in self.__dict__.items()]
        return '%s(%s)' % (self.__class__.__name__, ', '.join(L))

    def __eq__(self, other):
        return isinstance(other, self.__class__) and self.__dict__ == other.__dict__

    def __ne__(self, other):
        return not (self == other)
all_structs.append(findContactByUserid_args)
findContactByUserid_args.thrift_spec = (
    None,  # 0
    None,  # 1
    (2, TType.STRING, 'userid', 'UTF8', None, ),  # 2
)


class findContactByUserid_result(object):
    """
    Attributes:
     - success
     - e
    """


    def __init__(self, success=None, e=None,):
        self.success = success
        self.e = e

    def read(self, iprot):
        if iprot._fast_decode is not None and isinstance(iprot.trans, TTransport.CReadableTransport) and self.thrift_spec is not None:
            iprot._fast_decode(self, iprot, [self.__class__, self.thrift_spec])
            return
        iprot.readStructBegin()
        while True:
            (fname, ftype, fid) = iprot.readFieldBegin()
            if ftype == TType.STOP:
                break
            if fid == 0:
                if ftype == TType.STRUCT:
                    self.success = Contact()
                    self.success.read(iprot)
                else:
                    iprot.skip(ftype)
            elif fid == 1:
                if ftype == TType.STRUCT:
                    self.e = TalkException()
                    self.e.read(iprot)
                else:
                    iprot.skip(ftype)
            else:
                iprot.skip(ftype)
            iprot.readFieldEnd()
        iprot.readStructEnd()

    def write(self, oprot):
        if oprot._fast_encode is not None and self.thrift_spec is not None:
            oprot.trans.write(oprot._fast_encode(self, [self.__class__, self.thrift_spec]))
            return
        oprot.writeStructBegin('findContactByUserid_result')
        if self.success is not None:
            oprot.writeFieldBegin('success', TType.STRUCT, 0)
            self.success.write(oprot)
            oprot.writeFieldEnd()
        if self.e is not None:
            oprot.writeFieldBegin('e', TType.STRUCT, 1)
            self.e.write(oprot)
            oprot.writeFieldEnd()
        oprot.writeFieldStop()
        oprot.writeStructEnd()

    def validate(self):
        return

    def __repr__(self):
        L = ['%s=%r' % (key, value)
             for key, value in self.__dict__.items()]
        return '%s(%s)' % (self.__class__.__name__, ', '.join(L))

    def __eq__(self, other):
        return isinstance(other, self.__class__) and self.__dict__ == other.__dict__

    def __ne__(self, other):
        return not (self == other)
all_structs.append(findContactByUserid_result)
findContactByUserid_result.thrift_spec = (
    (0, TType.STRUCT, 'success', [Contact, None], None, ),  # 0
    (1, TType.STRUCT, 'e', [TalkException, None], None, ),  # 1
)


class findContactByUserTicket_args(object):
    """
    Attributes:
     - ticketId
    """


    def __init__(self, ticketId=None,):
        self.ticketId = ticketId

    def read(self, iprot):
        if iprot._fast_decode is not None and isinstance(iprot.trans, TTransport.CReadableTransport) and self.thrift_spec is not None:
            iprot._fast_decode(self, iprot, [self.__class__, self.thrift_spec])
            return
        iprot.readStructBegin()
        while True:
            (fname, ftype, fid) = iprot.readFieldBegin()
            if ftype == TType.STOP:
                break
            if fid == 2:
                if ftype == TType.STRING:
                    self.ticketId = iprot.readString().decode('utf-8') if sys.version_info[0] == 2 else iprot.readString()
                else:
                    iprot.skip(ftype)
            else:
                iprot.skip(ftype)
            iprot.readFieldEnd()
        iprot.readStructEnd()

    def write(self, oprot):
        if oprot._fast_encode is not None and self.thrift_spec is not None:
            oprot.trans.write(oprot._fast_encode(self, [self.__class__, self.thrift_spec]))
            return
        oprot.writeStructBegin('findContactByUserTicket_args')
        if self.ticketId is not None:
            oprot.writeFieldBegin('ticketId', TType.STRING, 2)
            oprot.writeString(self.ticketId.encode('utf-8') if sys.version_info[0] == 2 else self.ticketId)
            oprot.writeFieldEnd()
        oprot.writeFieldStop()
        oprot.writeStructEnd()

    def validate(self):
        return

    def __repr__(self):
        L = ['%s=%r' % (key, value)
             for key, value in self.__dict__.items()]
        return '%s(%s)' % (self.__class__.__name__, ', '.join(L))

    def __eq__(self, other):
        return isinstance(other, self.__class__) and self.__dict__ == other.__dict__

    def __ne__(self, other):
        return not (self == other)
all_structs.append(findContactByUserTicket_args)
findContactByUserTicket_args.thrift_spec = (
    None,  # 0
    None,  # 1
    (2, TType.STRING, 'ticketId', 'UTF8', None, ),  # 2
)


class findContactByUserTicket_result(object):
    """
    Attributes:
     - success
     - e
    """


    def __init__(self, success=None, e=None,):
        self.success = success
        self.e = e

    def read(self, iprot):
        if iprot._fast_decode is not None and isinstance(iprot.trans, TTransport.CReadableTransport) and self.thrift_spec is not None:
            iprot._fast_decode(self, iprot, [self.__class__, self.thrift_spec])
            return
        iprot.readStructBegin()
        while True:
            (fname, ftype, fid) = iprot.readFieldBegin()
            if ftype == TType.STOP:
                break
            if fid == 0:
                if ftype == TType.STRUCT:
                    self.success = Contact()
                    self.success.read(iprot)
                else:
                    iprot.skip(ftype)
            elif fid == 1:
                if ftype == TType.STRUCT:
                    self.e = TalkException()
                    self.e.read(iprot)
                else:
                    iprot.skip(ftype)
            else:
                iprot.skip(ftype)
            iprot.readFieldEnd()
        iprot.readStructEnd()

    def write(self, oprot):
        if oprot._fast_encode is not None and self.thrift_spec is not None:
            oprot.trans.write(oprot._fast_encode(self, [self.__class__, self.thrift_spec]))
            return
        oprot.writeStructBegin('findContactByUserTicket_result')
        if self.success is not None:
            oprot.writeFieldBegin('success', TType.STRUCT, 0)
            self.success.write(oprot)
            oprot.writeFieldEnd()
        if self.e is not None:
            oprot.writeFieldBegin('e', TType.STRUCT, 1)
            self.e.write(oprot)
            oprot.writeFieldEnd()
        oprot.writeFieldStop()
        oprot.writeStructEnd()

    def validate(self):
        return

    def __repr__(self):
        L = ['%s=%r' % (key, value)
             for key, value in self.__dict__.items()]
        return '%s(%s)' % (self.__class__.__name__, ', '.join(L))

    def __eq__(self, other):
        return isinstance(other, self.__class__) and self.__dict__ == other.__dict__

    def __ne__(self, other):
        return not (self == other)
all_structs.append(findContactByUserTicket_result)
findContactByUserTicket_result.thrift_spec = (
    (0, TType.STRUCT, 'success', [Contact, None], None, ),  # 0
    (1, TType.STRUCT, 'e', [TalkException, None], None, ),  # 1
)


class findContactsByEmail_args(object):
    """
    Attributes:
     - emails
    """


    def __init__(self, emails=None,):
        self.emails = emails

    def read(self, iprot):
        if iprot._fast_decode is not None and isinstance(iprot.trans, TTransport.CReadableTransport) and self.thrift_spec is not None:
            iprot._fast_decode(self, iprot, [self.__class__, self.thrift_spec])
            return
        iprot.readStructBegin()
        while True:
            (fname, ftype, fid) = iprot.readFieldBegin()
            if ftype == TType.STOP:
                break
            if fid == 2:
                if ftype == TType.SET:
                    self.emails = set()
                    (_etype127, _size124) = iprot.readSetBegin()
                    for _i128 in range(_size124):
                        _elem129 = iprot.readString().decode('utf-8') if sys.version_info[0] == 2 else iprot.readString()
                        self.emails.add(_elem129)
                    iprot.readSetEnd()
                else:
                    iprot.skip(ftype)
            else:
                iprot.skip(ftype)
            iprot.readFieldEnd()
        iprot.readStructEnd()

    def write(self, oprot):
        if oprot._fast_encode is not None and self.thrift_spec is not None:
            oprot.trans.write(oprot._fast_encode(self, [self.__class__, self.thrift_spec]))
            return
        oprot.writeStructBegin('findContactsByEmail_args')
        if self.emails is not None:
            oprot.writeFieldBegin('emails', TType.SET, 2)
            oprot.writeSetBegin(TType.STRING, len(self.emails))
            for iter130 in self.emails:
                oprot.writeString(iter130.encode('utf-8') if sys.version_info[0] == 2 else iter130)
            oprot.writeSetEnd()
            oprot.writeFieldEnd()
        oprot.writeFieldStop()
        oprot.writeStructEnd()

    def validate(self):
        return

    def __repr__(self):
        L = ['%s=%r' % (key, value)
             for key, value in self.__dict__.items()]
        return '%s(%s)' % (self.__class__.__name__, ', '.join(L))

    def __eq__(self, other):
        return isinstance(other, self.__class__) and self.__dict__ == other.__dict__

    def __ne__(self, other):
        return not (self == other)
all_structs.append(findContactsByEmail_args)
findContactsByEmail_args.thrift_spec = (
    None,  # 0
    None,  # 1
    (2, TType.SET, 'emails', (TType.STRING, 'UTF8', False), None, ),  # 2
)


class findContactsByEmail_result(object):
    """
    Attributes:
     - success
     - e
    """


    def __init__(self, success=None, e=None,):
        self.success = success
        self.e = e

    def read(self, iprot):
        if iprot._fast_decode is not None and isinstance(iprot.trans, TTransport.CReadableTransport) and self.thrift_spec is not None:
            iprot._fast_decode(self, iprot, [self.__class__, self.thrift_spec])
            return
        iprot.readStructBegin()
        while True:
            (fname, ftype, fid) = iprot.readFieldBegin()
            if ftype == TType.STOP:
                break
            if fid == 0:
                if ftype == TType.MAP:
                    self.success = {}
                    (_ktype132, _vtype133, _size131) = iprot.readMapBegin()
                    for _i135 in range(_size131):
                        _key136 = iprot.readString().decode('utf-8') if sys.version_info[0] == 2 else iprot.readString()
                        _val137 = Contact()
                        _val137.read(iprot)
                        self.success[_key136] = _val137
                    iprot.readMapEnd()
                else:
                    iprot.skip(ftype)
            elif fid == 1:
                if ftype == TType.STRUCT:
                    self.e = TalkException()
                    self.e.read(iprot)
                else:
                    iprot.skip(ftype)
            else:
                iprot.skip(ftype)
            iprot.readFieldEnd()
        iprot.readStructEnd()

    def write(self, oprot):
        if oprot._fast_encode is not None and self.thrift_spec is not None:
            oprot.trans.write(oprot._fast_encode(self, [self.__class__, self.thrift_spec]))
            return
        oprot.writeStructBegin('findContactsByEmail_result')
        if self.success is not None:
            oprot.writeFieldBegin('success', TType.MAP, 0)
            oprot.writeMapBegin(TType.STRING, TType.STRUCT, len(self.success))
            for kiter138, viter139 in self.success.items():
                oprot.writeString(kiter138.encode('utf-8') if sys.version_info[0] == 2 else kiter138)
                viter139.write(oprot)
            oprot.writeMapEnd()
            oprot.writeFieldEnd()
        if self.e is not None:
            oprot.writeFieldBegin('e', TType.STRUCT, 1)
            self.e.write(oprot)
            oprot.writeFieldEnd()
        oprot.writeFieldStop()
        oprot.writeStructEnd()

    def validate(self):
        return

    def __repr__(self):
        L = ['%s=%r' % (key, value)
             for key, value in self.__dict__.items()]
        return '%s(%s)' % (self.__class__.__name__, ', '.join(L))

    def __eq__(self, other):
        return isinstance(other, self.__class__) and self.__dict__ == other.__dict__

    def __ne__(self, other):
        return not (self == other)
all_structs.append(findContactsByEmail_result)
findContactsByEmail_result.thrift_spec = (
    (0, TType.MAP, 'success', (TType.STRING, 'UTF8', TType.STRUCT, [Contact, None], False), None, ),  # 0
    (1, TType.STRUCT, 'e', [TalkException, None], None, ),  # 1
)


class findContactsByPhone_args(object):
    """
    Attributes:
     - phones
    """


    def __init__(self, phones=None,):
        self.phones = phones

    def read(self, iprot):
        if iprot._fast_decode is not None and isinstance(iprot.trans, TTransport.CReadableTransport) and self.thrift_spec is not None:
            iprot._fast_decode(self, iprot, [self.__class__, self.thrift_spec])
            return
        iprot.readStructBegin()
        while True:
            (fname, ftype, fid) = iprot.readFieldBegin()
            if ftype == TType.STOP:
                break
            if fid == 2:
                if ftype == TType.SET:
                    self.phones = set()
                    (_etype143, _size140) = iprot.readSetBegin()
                    for _i144 in range(_size140):
                        _elem145 = iprot.readString().decode('utf-8') if sys.version_info[0] == 2 else iprot.readString()
                        self.phones.add(_elem145)
                    iprot.readSetEnd()
                else:
                    iprot.skip(ftype)
            else:
                iprot.skip(ftype)
            iprot.readFieldEnd()
        iprot.readStructEnd()

    def write(self, oprot):
        if oprot._fast_encode is not None and self.thrift_spec is not None:
            oprot.trans.write(oprot._fast_encode(self, [self.__class__, self.thrift_spec]))
            return
        oprot.writeStructBegin('findContactsByPhone_args')
        if self.phones is not None:
            oprot.writeFieldBegin('phones', TType.SET, 2)
            oprot.writeSetBegin(TType.STRING, len(self.phones))
            for iter146 in self.phones:
                oprot.writeString(iter146.encode('utf-8') if sys.version_info[0] == 2 else iter146)
            oprot.writeSetEnd()
            oprot.writeFieldEnd()
        oprot.writeFieldStop()
        oprot.writeStructEnd()

    def validate(self):
        return

    def __repr__(self):
        L = ['%s=%r' % (key, value)
             for key, value in self.__dict__.items()]
        return '%s(%s)' % (self.__class__.__name__, ', '.join(L))

    def __eq__(self, other):
        return isinstance(other, self.__class__) and self.__dict__ == other.__dict__

    def __ne__(self, other):
        return not (self == other)
all_structs.append(findContactsByPhone_args)
findContactsByPhone_args.thrift_spec = (
    None,  # 0
    None,  # 1
    (2, TType.SET, 'phones', (TType.STRING, 'UTF8', False), None, ),  # 2
)


class findContactsByPhone_result(object):
    """
    Attributes:
     - success
     - e
    """


    def __init__(self, success=None, e=None,):
        self.success = success
        self.e = e

    def read(self, iprot):
        if iprot._fast_decode is not None and isinstance(iprot.trans, TTransport.CReadableTransport) and self.thrift_spec is not None:
            iprot._fast_decode(self, iprot, [self.__class__, self.thrift_spec])
            return
        iprot.readStructBegin()
        while True:
            (fname, ftype, fid) = iprot.readFieldBegin()
            if ftype == TType.STOP:
                break
            if fid == 0:
                if ftype == TType.MAP:
                    self.success = {}
                    (_ktype148, _vtype149, _size147) = iprot.readMapBegin()
                    for _i151 in range(_size147):
                        _key152 = iprot.readString().decode('utf-8') if sys.version_info[0] == 2 else iprot.readString()
                        _val153 = Contact()
                        _val153.read(iprot)
                        self.success[_key152] = _val153
                    iprot.readMapEnd()
                else:
                    iprot.skip(ftype)
            elif fid == 1:
                if ftype == TType.STRUCT:
                    self.e = TalkException()
                    self.e.read(iprot)
                else:
                    iprot.skip(ftype)
            else:
                iprot.skip(ftype)
            iprot.readFieldEnd()
        iprot.readStructEnd()

    def write(self, oprot):
        if oprot._fast_encode is not None and self.thrift_spec is not None:
            oprot.trans.write(oprot._fast_encode(self, [self.__class__, self.thrift_spec]))
            return
        oprot.writeStructBegin('findContactsByPhone_result')
        if self.success is not None:
            oprot.writeFieldBegin('success', TType.MAP, 0)
            oprot.writeMapBegin(TType.STRING, TType.STRUCT, len(self.success))
            for kiter154, viter155 in self.success.items():
                oprot.writeString(kiter154.encode('utf-8') if sys.version_info[0] == 2 else kiter154)
                viter155.write(oprot)
            oprot.writeMapEnd()
            oprot.writeFieldEnd()
        if self.e is not None:
            oprot.writeFieldBegin('e', TType.STRUCT, 1)
            self.e.write(oprot)
            oprot.writeFieldEnd()
        oprot.writeFieldStop()
        oprot.writeStructEnd()

    def validate(self):
        return

    def __repr__(self):
        L = ['%s=%r' % (key, value)
             for key, value in self.__dict__.items()]
        return '%s(%s)' % (self.__class__.__name__, ', '.join(L))

    def __eq__(self, other):
        return isinstance(other, self.__class__) and self.__dict__ == other.__dict__

    def __ne__(self, other):
        return not (self == other)
all_structs.append(findContactsByPhone_result)
findContactsByPhone_result.thrift_spec = (
    (0, TType.MAP, 'success', (TType.STRING, 'UTF8', TType.STRUCT, [Contact, None], False), None, ),  # 0
    (1, TType.STRUCT, 'e', [TalkException, None], None, ),  # 1
)


class generateUserTicket_args(object):
    """
    Attributes:
     - expirationTime
     - maxUseCount
    """


    def __init__(self, expirationTime=None, maxUseCount=None,):
        self.expirationTime = expirationTime
        self.maxUseCount = maxUseCount

    def read(self, iprot):
        if iprot._fast_decode is not None and isinstance(iprot.trans, TTransport.CReadableTransport) and self.thrift_spec is not None:
            iprot._fast_decode(self, iprot, [self.__class__, self.thrift_spec])
            return
        iprot.readStructBegin()
        while True:
            (fname, ftype, fid) = iprot.readFieldBegin()
            if ftype == TType.STOP:
                break
            if fid == 3:
                if ftype == TType.I64:
                    self.expirationTime = iprot.readI64()
                else:
                    iprot.skip(ftype)
            elif fid == 4:
                if ftype == TType.I32:
                    self.maxUseCount = iprot.readI32()
                else:
                    iprot.skip(ftype)
            else:
                iprot.skip(ftype)
            iprot.readFieldEnd()
        iprot.readStructEnd()

    def write(self, oprot):
        if oprot._fast_encode is not None and self.thrift_spec is not None:
            oprot.trans.write(oprot._fast_encode(self, [self.__class__, self.thrift_spec]))
            return
        oprot.writeStructBegin('generateUserTicket_args')
        if self.expirationTime is not None:
            oprot.writeFieldBegin('expirationTime', TType.I64, 3)
            oprot.writeI64(self.expirationTime)
            oprot.writeFieldEnd()
        if self.maxUseCount is not None:
            oprot.writeFieldBegin('maxUseCount', TType.I32, 4)
            oprot.writeI32(self.maxUseCount)
            oprot.writeFieldEnd()
        oprot.writeFieldStop()
        oprot.writeStructEnd()

    def validate(self):
        return

    def __repr__(self):
        L = ['%s=%r' % (key, value)
             for key, value in self.__dict__.items()]
        return '%s(%s)' % (self.__class__.__name__, ', '.join(L))

    def __eq__(self, other):
        return isinstance(other, self.__class__) and self.__dict__ == other.__dict__

    def __ne__(self, other):
        return not (self == other)
all_structs.append(generateUserTicket_args)
generateUserTicket_args.thrift_spec = (
    None,  # 0
    None,  # 1
    None,  # 2
    (3, TType.I64, 'expirationTime', None, None, ),  # 3
    (4, TType.I32, 'maxUseCount', None, None, ),  # 4
)


class generateUserTicket_result(object):
    """
    Attributes:
     - success
     - e
    """


    def __init__(self, success=None, e=None,):
        self.success = success
        self.e = e

    def read(self, iprot):
        if iprot._fast_decode is not None and isinstance(iprot.trans, TTransport.CReadableTransport) and self.thrift_spec is not None:
            iprot._fast_decode(self, iprot, [self.__class__, self.thrift_spec])
            return
        iprot.readStructBegin()
        while True:
            (fname, ftype, fid) = iprot.readFieldBegin()
            if ftype == TType.STOP:
                break
            if fid == 0:
                if ftype == TType.STRUCT:
                    self.success = Ticket()
                    self.success.read(iprot)
                else:
                    iprot.skip(ftype)
            elif fid == 1:
                if ftype == TType.STRUCT:
                    self.e = TalkException()
                    self.e.read(iprot)
                else:
                    iprot.skip(ftype)
            else:
                iprot.skip(ftype)
            iprot.readFieldEnd()
        iprot.readStructEnd()

    def write(self, oprot):
        if oprot._fast_encode is not None and self.thrift_spec is not None:
            oprot.trans.write(oprot._fast_encode(self, [self.__class__, self.thrift_spec]))
            return
        oprot.writeStructBegin('generateUserTicket_result')
        if self.success is not None:
            oprot.writeFieldBegin('success', TType.STRUCT, 0)
            self.success.write(oprot)
            oprot.writeFieldEnd()
        if self.e is not None:
            oprot.writeFieldBegin('e', TType.STRUCT, 1)
            self.e.write(oprot)
            oprot.writeFieldEnd()
        oprot.writeFieldStop()
        oprot.writeStructEnd()

    def validate(self):
        return

    def __repr__(self):
        L = ['%s=%r' % (key, value)
             for key, value in self.__dict__.items()]
        return '%s(%s)' % (self.__class__.__name__, ', '.join(L))

    def __eq__(self, other):
        return isinstance(other, self.__class__) and self.__dict__ == other.__dict__

    def __ne__(self, other):
        return not (self == other)
all_structs.append(generateUserTicket_result)
generateUserTicket_result.thrift_spec = (
    (0, TType.STRUCT, 'success', [Ticket, None], None, ),  # 0
    (1, TType.STRUCT, 'e', [TalkException, None], None, ),  # 1
)


class getAllContactIds_args(object):


    def read(self, iprot):
        if iprot._fast_decode is not None and isinstance(iprot.trans, TTransport.CReadableTransport) and self.thrift_spec is not None:
            iprot._fast_decode(self, iprot, [self.__class__, self.thrift_spec])
            return
        iprot.readStructBegin()
        while True:
            (fname, ftype, fid) = iprot.readFieldBegin()
            if ftype == TType.STOP:
                break
            else:
                iprot.skip(ftype)
            iprot.readFieldEnd()
        iprot.readStructEnd()

    def write(self, oprot):
        if oprot._fast_encode is not None and self.thrift_spec is not None:
            oprot.trans.write(oprot._fast_encode(self, [self.__class__, self.thrift_spec]))
            return
        oprot.writeStructBegin('getAllContactIds_args')
        oprot.writeFieldStop()
        oprot.writeStructEnd()

    def validate(self):
        return

    def __repr__(self):
        L = ['%s=%r' % (key, value)
             for key, value in self.__dict__.items()]
        return '%s(%s)' % (self.__class__.__name__, ', '.join(L))

    def __eq__(self, other):
        return isinstance(other, self.__class__) and self.__dict__ == other.__dict__

    def __ne__(self, other):
        return not (self == other)
all_structs.append(getAllContactIds_args)
getAllContactIds_args.thrift_spec = (
)


class getAllContactIds_result(object):
    """
    Attributes:
     - success
     - e
    """


    def __init__(self, success=None, e=None,):
        self.success = success
        self.e = e

    def read(self, iprot):
        if iprot._fast_decode is not None and isinstance(iprot.trans, TTransport.CReadableTransport) and self.thrift_spec is not None:
            iprot._fast_decode(self, iprot, [self.__class__, self.thrift_spec])
            return
        iprot.readStructBegin()
        while True:
            (fname, ftype, fid) = iprot.readFieldBegin()
            if ftype == TType.STOP:
                break
            if fid == 0:
                if ftype == TType.LIST:
                    self.success = []
                    (_etype159, _size156) = iprot.readListBegin()
                    for _i160 in range(_size156):
                        _elem161 = iprot.readString().decode('utf-8') if sys.version_info[0] == 2 else iprot.readString()
                        self.success.append(_elem161)
                    iprot.readListEnd()
                else:
                    iprot.skip(ftype)
            elif fid == 1:
                if ftype == TType.STRUCT:
                    self.e = TalkException()
                    self.e.read(iprot)
                else:
                    iprot.skip(ftype)
            else:
                iprot.skip(ftype)
            iprot.readFieldEnd()
        iprot.readStructEnd()

    def write(self, oprot):
        if oprot._fast_encode is not None and self.thrift_spec is not None:
            oprot.trans.write(oprot._fast_encode(self, [self.__class__, self.thrift_spec]))
            return
        oprot.writeStructBegin('getAllContactIds_result')
        if self.success is not None:
            oprot.writeFieldBegin('success', TType.LIST, 0)
            oprot.writeListBegin(TType.STRING, len(self.success))
            for iter162 in self.success:
                oprot.writeString(iter162.encode('utf-8') if sys.version_info[0] == 2 else iter162)
            oprot.writeListEnd()
            oprot.writeFieldEnd()
        if self.e is not None:
            oprot.writeFieldBegin('e', TType.STRUCT, 1)
            self.e.write(oprot)
            oprot.writeFieldEnd()
        oprot.writeFieldStop()
        oprot.writeStructEnd()

    def validate(self):
        return

    def __repr__(self):
        L = ['%s=%r' % (key, value)
             for key, value in self.__dict__.items()]
        return '%s(%s)' % (self.__class__.__name__, ', '.join(L))

    def __eq__(self, other):
        return isinstance(other, self.__class__) and self.__dict__ == other.__dict__

    def __ne__(self, other):
        return not (self == other)
all_structs.append(getAllContactIds_result)
getAllContactIds_result.thrift_spec = (
    (0, TType.LIST, 'success', (TType.STRING, 'UTF8', False), None, ),  # 0
    (1, TType.STRUCT, 'e', [TalkException, None], None, ),  # 1
)


class getBlockedContactIds_args(object):


    def read(self, iprot):
        if iprot._fast_decode is not None and isinstance(iprot.trans, TTransport.CReadableTransport) and self.thrift_spec is not None:
            iprot._fast_decode(self, iprot, [self.__class__, self.thrift_spec])
            return
        iprot.readStructBegin()
        while True:
            (fname, ftype, fid) = iprot.readFieldBegin()
            if ftype == TType.STOP:
                break
            else:
                iprot.skip(ftype)
            iprot.readFieldEnd()
        iprot.readStructEnd()

    def write(self, oprot):
        if oprot._fast_encode is not None and self.thrift_spec is not None:
            oprot.trans.write(oprot._fast_encode(self, [self.__class__, self.thrift_spec]))
            return
        oprot.writeStructBegin('getBlockedContactIds_args')
        oprot.writeFieldStop()
        oprot.writeStructEnd()

    def validate(self):
        return

    def __repr__(self):
        L = ['%s=%r' % (key, value)
             for key, value in self.__dict__.items()]
        return '%s(%s)' % (self.__class__.__name__, ', '.join(L))

    def __eq__(self, other):
        return isinstance(other, self.__class__) and self.__dict__ == other.__dict__

    def __ne__(self, other):
        return not (self == other)
all_structs.append(getBlockedContactIds_args)
getBlockedContactIds_args.thrift_spec = (
)


class getBlockedContactIds_result(object):
    """
    Attributes:
     - success
     - e
    """


    def __init__(self, success=None, e=None,):
        self.success = success
        self.e = e

    def read(self, iprot):
        if iprot._fast_decode is not None and isinstance(iprot.trans, TTransport.CReadableTransport) and self.thrift_spec is not None:
            iprot._fast_decode(self, iprot, [self.__class__, self.thrift_spec])
            return
        iprot.readStructBegin()
        while True:
            (fname, ftype, fid) = iprot.readFieldBegin()
            if ftype == TType.STOP:
                break
            if fid == 0:
                if ftype == TType.LIST:
                    self.success = []
                    (_etype166, _size163) = iprot.readListBegin()
                    for _i167 in range(_size163):
                        _elem168 = iprot.readString().decode('utf-8') if sys.version_info[0] == 2 else iprot.readString()
                        self.success.append(_elem168)
                    iprot.readListEnd()
                else:
                    iprot.skip(ftype)
            elif fid == 1:
                if ftype == TType.STRUCT:
                    self.e = TalkException()
                    self.e.read(iprot)
                else:
                    iprot.skip(ftype)
            else:
                iprot.skip(ftype)
            iprot.readFieldEnd()
        iprot.readStructEnd()

    def write(self, oprot):
        if oprot._fast_encode is not None and self.thrift_spec is not None:
            oprot.trans.write(oprot._fast_encode(self, [self.__class__, self.thrift_spec]))
            return
        oprot.writeStructBegin('getBlockedContactIds_result')
        if self.success is not None:
            oprot.writeFieldBegin('success', TType.LIST, 0)
            oprot.writeListBegin(TType.STRING, len(self.success))
            for iter169 in self.success:
                oprot.writeString(iter169.encode('utf-8') if sys.version_info[0] == 2 else iter169)
            oprot.writeListEnd()
            oprot.writeFieldEnd()
        if self.e is not None:
            oprot.writeFieldBegin('e', TType.STRUCT, 1)
            self.e.write(oprot)
            oprot.writeFieldEnd()
        oprot.writeFieldStop()
        oprot.writeStructEnd()

    def validate(self):
        return

    def __repr__(self):
        L = ['%s=%r' % (key, value)
             for key, value in self.__dict__.items()]
        return '%s(%s)' % (self.__class__.__name__, ', '.join(L))

    def __eq__(self, other):
        return isinstance(other, self.__class__) and self.__dict__ == other.__dict__

    def __ne__(self, other):
        return not (self == other)
all_structs.append(getBlockedContactIds_result)
getBlockedContactIds_result.thrift_spec = (
    (0, TType.LIST, 'success', (TType.STRING, 'UTF8', False), None, ),  # 0
    (1, TType.STRUCT, 'e', [TalkException, None], None, ),  # 1
)


class getBlockedContactIdsByRange_args(object):
    """
    Attributes:
     - start
     - count
    """


    def __init__(self, start=None, count=None,):
        self.start = start
        self.count = count

    def read(self, iprot):
        if iprot._fast_decode is not None and isinstance(iprot.trans, TTransport.CReadableTransport) and self.thrift_spec is not None:
            iprot._fast_decode(self, iprot, [self.__class__, self.thrift_spec])
            return
        iprot.readStructBegin()
        while True:
            (fname, ftype, fid) = iprot.readFieldBegin()
            if ftype == TType.STOP:
                break
            if fid == 2:
                if ftype == TType.I32:
                    self.start = iprot.readI32()
                else:
                    iprot.skip(ftype)
            elif fid == 3:
                if ftype == TType.I32:
                    self.count = iprot.readI32()
                else:
                    iprot.skip(ftype)
            else:
                iprot.skip(ftype)
            iprot.readFieldEnd()
        iprot.readStructEnd()

    def write(self, oprot):
        if oprot._fast_encode is not None and self.thrift_spec is not None:
            oprot.trans.write(oprot._fast_encode(self, [self.__class__, self.thrift_spec]))
            return
        oprot.writeStructBegin('getBlockedContactIdsByRange_args')
        if self.start is not None:
            oprot.writeFieldBegin('start', TType.I32, 2)
            oprot.writeI32(self.start)
            oprot.writeFieldEnd()
        if self.count is not None:
            oprot.writeFieldBegin('count', TType.I32, 3)
            oprot.writeI32(self.count)
            oprot.writeFieldEnd()
        oprot.writeFieldStop()
        oprot.writeStructEnd()

    def validate(self):
        return

    def __repr__(self):
        L = ['%s=%r' % (key, value)
             for key, value in self.__dict__.items()]
        return '%s(%s)' % (self.__class__.__name__, ', '.join(L))

    def __eq__(self, other):
        return isinstance(other, self.__class__) and self.__dict__ == other.__dict__

    def __ne__(self, other):
        return not (self == other)
all_structs.append(getBlockedContactIdsByRange_args)
getBlockedContactIdsByRange_args.thrift_spec = (
    None,  # 0
    None,  # 1
    (2, TType.I32, 'start', None, None, ),  # 2
    (3, TType.I32, 'count', None, None, ),  # 3
)


class getBlockedContactIdsByRange_result(object):
    """
    Attributes:
     - success
     - e
    """


    def __init__(self, success=None, e=None,):
        self.success = success
        self.e = e

    def read(self, iprot):
        if iprot._fast_decode is not None and isinstance(iprot.trans, TTransport.CReadableTransport) and self.thrift_spec is not None:
            iprot._fast_decode(self, iprot, [self.__class__, self.thrift_spec])
            return
        iprot.readStructBegin()
        while True:
            (fname, ftype, fid) = iprot.readFieldBegin()
            if ftype == TType.STOP:
                break
            if fid == 0:
                if ftype == TType.LIST:
                    self.success = []
                    (_etype173, _size170) = iprot.readListBegin()
                    for _i174 in range(_size170):
                        _elem175 = iprot.readString().decode('utf-8') if sys.version_info[0] == 2 else iprot.readString()
                        self.success.append(_elem175)
                    iprot.readListEnd()
                else:
                    iprot.skip(ftype)
            elif fid == 1:
                if ftype == TType.STRUCT:
                    self.e = TalkException()
                    self.e.read(iprot)
                else:
                    iprot.skip(ftype)
            else:
                iprot.skip(ftype)
            iprot.readFieldEnd()
        iprot.readStructEnd()

    def write(self, oprot):
        if oprot._fast_encode is not None and self.thrift_spec is not None:
            oprot.trans.write(oprot._fast_encode(self, [self.__class__, self.thrift_spec]))
            return
        oprot.writeStructBegin('getBlockedContactIdsByRange_result')
        if self.success is not None:
            oprot.writeFieldBegin('success', TType.LIST, 0)
            oprot.writeListBegin(TType.STRING, len(self.success))
            for iter176 in self.success:
                oprot.writeString(iter176.encode('utf-8') if sys.version_info[0] == 2 else iter176)
            oprot.writeListEnd()
            oprot.writeFieldEnd()
        if self.e is not None:
            oprot.writeFieldBegin('e', TType.STRUCT, 1)
            self.e.write(oprot)
            oprot.writeFieldEnd()
        oprot.writeFieldStop()
        oprot.writeStructEnd()

    def validate(self):
        return

    def __repr__(self):
        L = ['%s=%r' % (key, value)
             for key, value in self.__dict__.items()]
        return '%s(%s)' % (self.__class__.__name__, ', '.join(L))

    def __eq__(self, other):
        return isinstance(other, self.__class__) and self.__dict__ == other.__dict__

    def __ne__(self, other):
        return not (self == other)
all_structs.append(getBlockedContactIdsByRange_result)
getBlockedContactIdsByRange_result.thrift_spec = (
    (0, TType.LIST, 'success', (TType.STRING, 'UTF8', False), None, ),  # 0
    (1, TType.STRUCT, 'e', [TalkException, None], None, ),  # 1
)


class getBlockedRecommendationIds_args(object):


    def read(self, iprot):
        if iprot._fast_decode is not None and isinstance(iprot.trans, TTransport.CReadableTransport) and self.thrift_spec is not None:
            iprot._fast_decode(self, iprot, [self.__class__, self.thrift_spec])
            return
        iprot.readStructBegin()
        while True:
            (fname, ftype, fid) = iprot.readFieldBegin()
            if ftype == TType.STOP:
                break
            else:
                iprot.skip(ftype)
            iprot.readFieldEnd()
        iprot.readStructEnd()

    def write(self, oprot):
        if oprot._fast_encode is not None and self.thrift_spec is not None:
            oprot.trans.write(oprot._fast_encode(self, [self.__class__, self.thrift_spec]))
            return
        oprot.writeStructBegin('getBlockedRecommendationIds_args')
        oprot.writeFieldStop()
        oprot.writeStructEnd()

    def validate(self):
        return

    def __repr__(self):
        L = ['%s=%r' % (key, value)
             for key, value in self.__dict__.items()]
        return '%s(%s)' % (self.__class__.__name__, ', '.join(L))

    def __eq__(self, other):
        return isinstance(other, self.__class__) and self.__dict__ == other.__dict__

    def __ne__(self, other):
        return not (self == other)
all_structs.append(getBlockedRecommendationIds_args)
getBlockedRecommendationIds_args.thrift_spec = (
)


class getBlockedRecommendationIds_result(object):
    """
    Attributes:
     - success
     - e
    """


    def __init__(self, success=None, e=None,):
        self.success = success
        self.e = e

    def read(self, iprot):
        if iprot._fast_decode is not None and isinstance(iprot.trans, TTransport.CReadableTransport) and self.thrift_spec is not None:
            iprot._fast_decode(self, iprot, [self.__class__, self.thrift_spec])
            return
        iprot.readStructBegin()
        while True:
            (fname, ftype, fid) = iprot.readFieldBegin()
            if ftype == TType.STOP:
                break
            if fid == 0:
                if ftype == TType.LIST:
                    self.success = []
                    (_etype180, _size177) = iprot.readListBegin()
                    for _i181 in range(_size177):
                        _elem182 = iprot.readString().decode('utf-8') if sys.version_info[0] == 2 else iprot.readString()
                        self.success.append(_elem182)
                    iprot.readListEnd()
                else:
                    iprot.skip(ftype)
            elif fid == 1:
                if ftype == TType.STRUCT:
                    self.e = TalkException()
                    self.e.read(iprot)
                else:
                    iprot.skip(ftype)
            else:
                iprot.skip(ftype)
            iprot.readFieldEnd()
        iprot.readStructEnd()

    def write(self, oprot):
        if oprot._fast_encode is not None and self.thrift_spec is not None:
            oprot.trans.write(oprot._fast_encode(self, [self.__class__, self.thrift_spec]))
            return
        oprot.writeStructBegin('getBlockedRecommendationIds_result')
        if self.success is not None:
            oprot.writeFieldBegin('success', TType.LIST, 0)
            oprot.writeListBegin(TType.STRING, len(self.success))
            for iter183 in self.success:
                oprot.writeString(iter183.encode('utf-8') if sys.version_info[0] == 2 else iter183)
            oprot.writeListEnd()
            oprot.writeFieldEnd()
        if self.e is not None:
            oprot.writeFieldBegin('e', TType.STRUCT, 1)
            self.e.write(oprot)
            oprot.writeFieldEnd()
        oprot.writeFieldStop()
        oprot.writeStructEnd()

    def validate(self):
        return

    def __repr__(self):
        L = ['%s=%r' % (key, value)
             for key, value in self.__dict__.items()]
        return '%s(%s)' % (self.__class__.__name__, ', '.join(L))

    def __eq__(self, other):
        return isinstance(other, self.__class__) and self.__dict__ == other.__dict__

    def __ne__(self, other):
        return not (self == other)
all_structs.append(getBlockedRecommendationIds_result)
getBlockedRecommendationIds_result.thrift_spec = (
    (0, TType.LIST, 'success', (TType.STRING, 'UTF8', False), None, ),  # 0
    (1, TType.STRUCT, 'e', [TalkException, None], None, ),  # 1
)


class getContact_args(object):
    """
    Attributes:
     - id
    """


    def __init__(self, id=None,):
        self.id = id

    def read(self, iprot):
        if iprot._fast_decode is not None and isinstance(iprot.trans, TTransport.CReadableTransport) and self.thrift_spec is not None:
            iprot._fast_decode(self, iprot, [self.__class__, self.thrift_spec])
            return
        iprot.readStructBegin()
        while True:
            (fname, ftype, fid) = iprot.readFieldBegin()
            if ftype == TType.STOP:
                break
            if fid == 2:
                if ftype == TType.STRING:
                    self.id = iprot.readString().decode('utf-8') if sys.version_info[0] == 2 else iprot.readString()
                else:
                    iprot.skip(ftype)
            else:
                iprot.skip(ftype)
            iprot.readFieldEnd()
        iprot.readStructEnd()

    def write(self, oprot):
        if oprot._fast_encode is not None and self.thrift_spec is not None:
            oprot.trans.write(oprot._fast_encode(self, [self.__class__, self.thrift_spec]))
            return
        oprot.writeStructBegin('getContact_args')
        if self.id is not None:
            oprot.writeFieldBegin('id', TType.STRING, 2)
            oprot.writeString(self.id.encode('utf-8') if sys.version_info[0] == 2 else self.id)
            oprot.writeFieldEnd()
        oprot.writeFieldStop()
        oprot.writeStructEnd()

    def validate(self):
        return

    def __repr__(self):
        L = ['%s=%r' % (key, value)
             for key, value in self.__dict__.items()]
        return '%s(%s)' % (self.__class__.__name__, ', '.join(L))

    def __eq__(self, other):
        return isinstance(other, self.__class__) and self.__dict__ == other.__dict__

    def __ne__(self, other):
        return not (self == other)
all_structs.append(getContact_args)
getContact_args.thrift_spec = (
    None,  # 0
    None,  # 1
    (2, TType.STRING, 'id', 'UTF8', None, ),  # 2
)


class getContact_result(object):
    """
    Attributes:
     - success
     - e
    """


    def __init__(self, success=None, e=None,):
        self.success = success
        self.e = e

    def read(self, iprot):
        if iprot._fast_decode is not None and isinstance(iprot.trans, TTransport.CReadableTransport) and self.thrift_spec is not None:
            iprot._fast_decode(self, iprot, [self.__class__, self.thrift_spec])
            return
        iprot.readStructBegin()
        while True:
            (fname, ftype, fid) = iprot.readFieldBegin()
            if ftype == TType.STOP:
                break
            if fid == 0:
                if ftype == TType.STRUCT:
                    self.success = Contact()
                    self.success.read(iprot)
                else:
                    iprot.skip(ftype)
            elif fid == 1:
                if ftype == TType.STRUCT:
                    self.e = TalkException()
                    self.e.read(iprot)
                else:
                    iprot.skip(ftype)
            else:
                iprot.skip(ftype)
            iprot.readFieldEnd()
        iprot.readStructEnd()

    def write(self, oprot):
        if oprot._fast_encode is not None and self.thrift_spec is not None:
            oprot.trans.write(oprot._fast_encode(self, [self.__class__, self.thrift_spec]))
            return
        oprot.writeStructBegin('getContact_result')
        if self.success is not None:
            oprot.writeFieldBegin('success', TType.STRUCT, 0)
            self.success.write(oprot)
            oprot.writeFieldEnd()
        if self.e is not None:
            oprot.writeFieldBegin('e', TType.STRUCT, 1)
            self.e.write(oprot)
            oprot.writeFieldEnd()
        oprot.writeFieldStop()
        oprot.writeStructEnd()

    def validate(self):
        return

    def __repr__(self):
        L = ['%s=%r' % (key, value)
             for key, value in self.__dict__.items()]
        return '%s(%s)' % (self.__class__.__name__, ', '.join(L))

    def __eq__(self, other):
        return isinstance(other, self.__class__) and self.__dict__ == other.__dict__

    def __ne__(self, other):
        return not (self == other)
all_structs.append(getContact_result)
getContact_result.thrift_spec = (
    (0, TType.STRUCT, 'success', [Contact, None], None, ),  # 0
    (1, TType.STRUCT, 'e', [TalkException, None], None, ),  # 1
)


class getContacts_args(object):
    """
    Attributes:
     - ids
    """


    def __init__(self, ids=None,):
        self.ids = ids

    def read(self, iprot):
        if iprot._fast_decode is not None and isinstance(iprot.trans, TTransport.CReadableTransport) and self.thrift_spec is not None:
            iprot._fast_decode(self, iprot, [self.__class__, self.thrift_spec])
            return
        iprot.readStructBegin()
        while True:
            (fname, ftype, fid) = iprot.readFieldBegin()
            if ftype == TType.STOP:
                break
            if fid == 2:
                if ftype == TType.LIST:
                    self.ids = []
                    (_etype187, _size184) = iprot.readListBegin()
                    for _i188 in range(_size184):
                        _elem189 = iprot.readString().decode('utf-8') if sys.version_info[0] == 2 else iprot.readString()
                        self.ids.append(_elem189)
                    iprot.readListEnd()
                else:
                    iprot.skip(ftype)
            else:
                iprot.skip(ftype)
            iprot.readFieldEnd()
        iprot.readStructEnd()

    def write(self, oprot):
        if oprot._fast_encode is not None and self.thrift_spec is not None:
            oprot.trans.write(oprot._fast_encode(self, [self.__class__, self.thrift_spec]))
            return
        oprot.writeStructBegin('getContacts_args')
        if self.ids is not None:
            oprot.writeFieldBegin('ids', TType.LIST, 2)
            oprot.writeListBegin(TType.STRING, len(self.ids))
            for iter190 in self.ids:
                oprot.writeString(iter190.encode('utf-8') if sys.version_info[0] == 2 else iter190)
            oprot.writeListEnd()
            oprot.writeFieldEnd()
        oprot.writeFieldStop()
        oprot.writeStructEnd()

    def validate(self):
        return

    def __repr__(self):
        L = ['%s=%r' % (key, value)
             for key, value in self.__dict__.items()]
        return '%s(%s)' % (self.__class__.__name__, ', '.join(L))

    def __eq__(self, other):
        return isinstance(other, self.__class__) and self.__dict__ == other.__dict__

    def __ne__(self, other):
        return not (self == other)
all_structs.append(getContacts_args)
getContacts_args.thrift_spec = (
    None,  # 0
    None,  # 1
    (2, TType.LIST, 'ids', (TType.STRING, 'UTF8', False), None, ),  # 2
)


class getContacts_result(object):
    """
    Attributes:
     - success
     - e
    """


    def __init__(self, success=None, e=None,):
        self.success = success
        self.e = e

    def read(self, iprot):
        if iprot._fast_decode is not None and isinstance(iprot.trans, TTransport.CReadableTransport) and self.thrift_spec is not None:
            iprot._fast_decode(self, iprot, [self.__class__, self.thrift_spec])
            return
        iprot.readStructBegin()
        while True:
            (fname, ftype, fid) = iprot.readFieldBegin()
            if ftype == TType.STOP:
                break
            if fid == 0:
                if ftype == TType.LIST:
                    self.success = []
                    (_etype194, _size191) = iprot.readListBegin()
                    for _i195 in range(_size191):
                        _elem196 = Contact()
                        _elem196.read(iprot)
                        self.success.append(_elem196)
                    iprot.readListEnd()
                else:
                    iprot.skip(ftype)
            elif fid == 1:
                if ftype == TType.STRUCT:
                    self.e = TalkException()
                    self.e.read(iprot)
                else:
                    iprot.skip(ftype)
            else:
                iprot.skip(ftype)
            iprot.readFieldEnd()
        iprot.readStructEnd()

    def write(self, oprot):
        if oprot._fast_encode is not None and self.thrift_spec is not None:
            oprot.trans.write(oprot._fast_encode(self, [self.__class__, self.thrift_spec]))
            return
        oprot.writeStructBegin('getContacts_result')
        if self.success is not None:
            oprot.writeFieldBegin('success', TType.LIST, 0)
            oprot.writeListBegin(TType.STRUCT, len(self.success))
            for iter197 in self.success:
                iter197.write(oprot)
            oprot.writeListEnd()
            oprot.writeFieldEnd()
        if self.e is not None:
            oprot.writeFieldBegin('e', TType.STRUCT, 1)
            self.e.write(oprot)
            oprot.writeFieldEnd()
        oprot.writeFieldStop()
        oprot.writeStructEnd()

    def validate(self):
        return

    def __repr__(self):
        L = ['%s=%r' % (key, value)
             for key, value in self.__dict__.items()]
        return '%s(%s)' % (self.__class__.__name__, ', '.join(L))

    def __eq__(self, other):
        return isinstance(other, self.__class__) and self.__dict__ == other.__dict__

    def __ne__(self, other):
        return not (self == other)
all_structs.append(getContacts_result)
getContacts_result.thrift_spec = (
    (0, TType.LIST, 'success', (TType.STRUCT, [Contact, None], False), None, ),  # 0
    (1, TType.STRUCT, 'e', [TalkException, None], None, ),  # 1
)


class getGroup_args(object):
    """
    Attributes:
     - groupId
    """


    def __init__(self, groupId=None,):
        self.groupId = groupId

    def read(self, iprot):
        if iprot._fast_decode is not None and isinstance(iprot.trans, TTransport.CReadableTransport) and self.thrift_spec is not None:
            iprot._fast_decode(self, iprot, [self.__class__, self.thrift_spec])
            return
        iprot.readStructBegin()
        while True:
            (fname, ftype, fid) = iprot.readFieldBegin()
            if ftype == TType.STOP:
                break
            if fid == 2:
                if ftype == TType.STRING:
                    self.groupId = iprot.readString().decode('utf-8') if sys.version_info[0] == 2 else iprot.readString()
                else:
                    iprot.skip(ftype)
            else:
                iprot.skip(ftype)
            iprot.readFieldEnd()
        iprot.readStructEnd()

    def write(self, oprot):
        if oprot._fast_encode is not None and self.thrift_spec is not None:
            oprot.trans.write(oprot._fast_encode(self, [self.__class__, self.thrift_spec]))
            return
        oprot.writeStructBegin('getGroup_args')
        if self.groupId is not None:
            oprot.writeFieldBegin('groupId', TType.STRING, 2)
            oprot.writeString(self.groupId.encode('utf-8') if sys.version_info[0] == 2 else self.groupId)
            oprot.writeFieldEnd()
        oprot.writeFieldStop()
        oprot.writeStructEnd()

    def validate(self):
        return

    def __repr__(self):
        L = ['%s=%r' % (key, value)
             for key, value in self.__dict__.items()]
        return '%s(%s)' % (self.__class__.__name__, ', '.join(L))

    def __eq__(self, other):
        return isinstance(other, self.__class__) and self.__dict__ == other.__dict__

    def __ne__(self, other):
        return not (self == other)
all_structs.append(getGroup_args)
getGroup_args.thrift_spec = (
    None,  # 0
    None,  # 1
    (2, TType.STRING, 'groupId', 'UTF8', None, ),  # 2
)


class getGroup_result(object):
    """
    Attributes:
     - success
     - e
    """


    def __init__(self, success=None, e=None,):
        self.success = success
        self.e = e

    def read(self, iprot):
        if iprot._fast_decode is not None and isinstance(iprot.trans, TTransport.CReadableTransport) and self.thrift_spec is not None:
            iprot._fast_decode(self, iprot, [self.__class__, self.thrift_spec])
            return
        iprot.readStructBegin()
        while True:
            (fname, ftype, fid) = iprot.readFieldBegin()
            if ftype == TType.STOP:
                break
            if fid == 0:
                if ftype == TType.STRUCT:
                    self.success = Group()
                    self.success.read(iprot)
                else:
                    iprot.skip(ftype)
            elif fid == 1:
                if ftype == TType.STRUCT:
                    self.e = TalkException()
                    self.e.read(iprot)
                else:
                    iprot.skip(ftype)
            else:
                iprot.skip(ftype)
            iprot.readFieldEnd()
        iprot.readStructEnd()

    def write(self, oprot):
        if oprot._fast_encode is not None and self.thrift_spec is not None:
            oprot.trans.write(oprot._fast_encode(self, [self.__class__, self.thrift_spec]))
            return
        oprot.writeStructBegin('getGroup_result')
        if self.success is not None:
            oprot.writeFieldBegin('success', TType.STRUCT, 0)
            self.success.write(oprot)
            oprot.writeFieldEnd()
        if self.e is not None:
            oprot.writeFieldBegin('e', TType.STRUCT, 1)
            self.e.write(oprot)
            oprot.writeFieldEnd()
        oprot.writeFieldStop()
        oprot.writeStructEnd()

    def validate(self):
        return

    def __repr__(self):
        L = ['%s=%r' % (key, value)
             for key, value in self.__dict__.items()]
        return '%s(%s)' % (self.__class__.__name__, ', '.join(L))

    def __eq__(self, other):
        return isinstance(other, self.__class__) and self.__dict__ == other.__dict__

    def __ne__(self, other):
        return not (self == other)
all_structs.append(getGroup_result)
getGroup_result.thrift_spec = (
    (0, TType.STRUCT, 'success', [Group, None], None, ),  # 0
    (1, TType.STRUCT, 'e', [TalkException, None], None, ),  # 1
)


class getGroupIdsInvited_args(object):


    def read(self, iprot):
        if iprot._fast_decode is not None and isinstance(iprot.trans, TTransport.CReadableTransport) and self.thrift_spec is not None:
            iprot._fast_decode(self, iprot, [self.__class__, self.thrift_spec])
            return
        iprot.readStructBegin()
        while True:
            (fname, ftype, fid) = iprot.readFieldBegin()
            if ftype == TType.STOP:
                break
            else:
                iprot.skip(ftype)
            iprot.readFieldEnd()
        iprot.readStructEnd()

    def write(self, oprot):
        if oprot._fast_encode is not None and self.thrift_spec is not None:
            oprot.trans.write(oprot._fast_encode(self, [self.__class__, self.thrift_spec]))
            return
        oprot.writeStructBegin('getGroupIdsInvited_args')
        oprot.writeFieldStop()
        oprot.writeStructEnd()

    def validate(self):
        return

    def __repr__(self):
        L = ['%s=%r' % (key, value)
             for key, value in self.__dict__.items()]
        return '%s(%s)' % (self.__class__.__name__, ', '.join(L))

    def __eq__(self, other):
        return isinstance(other, self.__class__) and self.__dict__ == other.__dict__

    def __ne__(self, other):
        return not (self == other)
all_structs.append(getGroupIdsInvited_args)
getGroupIdsInvited_args.thrift_spec = (
)


class getGroupIdsInvited_result(object):
    """
    Attributes:
     - success
     - e
    """


    def __init__(self, success=None, e=None,):
        self.success = success
        self.e = e

    def read(self, iprot):
        if iprot._fast_decode is not None and isinstance(iprot.trans, TTransport.CReadableTransport) and self.thrift_spec is not None:
            iprot._fast_decode(self, iprot, [self.__class__, self.thrift_spec])
            return
        iprot.readStructBegin()
        while True:
            (fname, ftype, fid) = iprot.readFieldBegin()
            if ftype == TType.STOP:
                break
            if fid == 0:
                if ftype == TType.LIST:
                    self.success = []
                    (_etype201, _size198) = iprot.readListBegin()
                    for _i202 in range(_size198):
                        _elem203 = iprot.readString().decode('utf-8') if sys.version_info[0] == 2 else iprot.readString()
                        self.success.append(_elem203)
                    iprot.readListEnd()
                else:
                    iprot.skip(ftype)
            elif fid == 1:
                if ftype == TType.STRUCT:
                    self.e = TalkException()
                    self.e.read(iprot)
                else:
                    iprot.skip(ftype)
            else:
                iprot.skip(ftype)
            iprot.readFieldEnd()
        iprot.readStructEnd()

    def write(self, oprot):
        if oprot._fast_encode is not None and self.thrift_spec is not None:
            oprot.trans.write(oprot._fast_encode(self, [self.__class__, self.thrift_spec]))
            return
        oprot.writeStructBegin('getGroupIdsInvited_result')
        if self.success is not None:
            oprot.writeFieldBegin('success', TType.LIST, 0)
            oprot.writeListBegin(TType.STRING, len(self.success))
            for iter204 in self.success:
                oprot.writeString(iter204.encode('utf-8') if sys.version_info[0] == 2 else iter204)
            oprot.writeListEnd()
            oprot.writeFieldEnd()
        if self.e is not None:
            oprot.writeFieldBegin('e', TType.STRUCT, 1)
            self.e.write(oprot)
            oprot.writeFieldEnd()
        oprot.writeFieldStop()
        oprot.writeStructEnd()

    def validate(self):
        return

    def __repr__(self):
        L = ['%s=%r' % (key, value)
             for key, value in self.__dict__.items()]
        return '%s(%s)' % (self.__class__.__name__, ', '.join(L))

    def __eq__(self, other):
        return isinstance(other, self.__class__) and self.__dict__ == other.__dict__

    def __ne__(self, other):
        return not (self == other)
all_structs.append(getGroupIdsInvited_result)
getGroupIdsInvited_result.thrift_spec = (
    (0, TType.LIST, 'success', (TType.STRING, 'UTF8', False), None, ),  # 0
    (1, TType.STRUCT, 'e', [TalkException, None], None, ),  # 1
)


class getGroupIdsJoined_args(object):


    def read(self, iprot):
        if iprot._fast_decode is not None and isinstance(iprot.trans, TTransport.CReadableTransport) and self.thrift_spec is not None:
            iprot._fast_decode(self, iprot, [self.__class__, self.thrift_spec])
            return
        iprot.readStructBegin()
        while True:
            (fname, ftype, fid) = iprot.readFieldBegin()
            if ftype == TType.STOP:
                break
            else:
                iprot.skip(ftype)
            iprot.readFieldEnd()
        iprot.readStructEnd()

    def write(self, oprot):
        if oprot._fast_encode is not None and self.thrift_spec is not None:
            oprot.trans.write(oprot._fast_encode(self, [self.__class__, self.thrift_spec]))
            return
        oprot.writeStructBegin('getGroupIdsJoined_args')
        oprot.writeFieldStop()
        oprot.writeStructEnd()

    def validate(self):
        return

    def __repr__(self):
        L = ['%s=%r' % (key, value)
             for key, value in self.__dict__.items()]
        return '%s(%s)' % (self.__class__.__name__, ', '.join(L))

    def __eq__(self, other):
        return isinstance(other, self.__class__) and self.__dict__ == other.__dict__

    def __ne__(self, other):
        return not (self == other)
all_structs.append(getGroupIdsJoined_args)
getGroupIdsJoined_args.thrift_spec = (
)


class getGroupIdsJoined_result(object):
    """
    Attributes:
     - success
     - e
    """


    def __init__(self, success=None, e=None,):
        self.success = success
        self.e = e

    def read(self, iprot):
        if iprot._fast_decode is not None and isinstance(iprot.trans, TTransport.CReadableTransport) and self.thrift_spec is not None:
            iprot._fast_decode(self, iprot, [self.__class__, self.thrift_spec])
            return
        iprot.readStructBegin()
        while True:
            (fname, ftype, fid) = iprot.readFieldBegin()
            if ftype == TType.STOP:
                break
            if fid == 0:
                if ftype == TType.LIST:
                    self.success = []
                    (_etype208, _size205) = iprot.readListBegin()
                    for _i209 in range(_size205):
                        _elem210 = iprot.readString().decode('utf-8') if sys.version_info[0] == 2 else iprot.readString()
                        self.success.append(_elem210)
                    iprot.readListEnd()
                else:
                    iprot.skip(ftype)
            elif fid == 1:
                if ftype == TType.STRUCT:
                    self.e = TalkException()
                    self.e.read(iprot)
                else:
                    iprot.skip(ftype)
            else:
                iprot.skip(ftype)
            iprot.readFieldEnd()
        iprot.readStructEnd()

    def write(self, oprot):
        if oprot._fast_encode is not None and self.thrift_spec is not None:
            oprot.trans.write(oprot._fast_encode(self, [self.__class__, self.thrift_spec]))
            return
        oprot.writeStructBegin('getGroupIdsJoined_result')
        if self.success is not None:
            oprot.writeFieldBegin('success', TType.LIST, 0)
            oprot.writeListBegin(TType.STRING, len(self.success))
            for iter211 in self.success:
                oprot.writeString(iter211.encode('utf-8') if sys.version_info[0] == 2 else iter211)
            oprot.writeListEnd()
            oprot.writeFieldEnd()
        if self.e is not None:
            oprot.writeFieldBegin('e', TType.STRUCT, 1)
            self.e.write(oprot)
            oprot.writeFieldEnd()
        oprot.writeFieldStop()
        oprot.writeStructEnd()

    def validate(self):
        return

    def __repr__(self):
        L = ['%s=%r' % (key, value)
             for key, value in self.__dict__.items()]
        return '%s(%s)' % (self.__class__.__name__, ', '.join(L))

    def __eq__(self, other):
        return isinstance(other, self.__class__) and self.__dict__ == other.__dict__

    def __ne__(self, other):
        return not (self == other)
all_structs.append(getGroupIdsJoined_result)
getGroupIdsJoined_result.thrift_spec = (
    (0, TType.LIST, 'success', (TType.STRING, 'UTF8', False), None, ),  # 0
    (1, TType.STRUCT, 'e', [TalkException, None], None, ),  # 1
)


class getGroups_args(object):
    """
    Attributes:
     - groupIds
    """


    def __init__(self, groupIds=None,):
        self.groupIds = groupIds

    def read(self, iprot):
        if iprot._fast_decode is not None and isinstance(iprot.trans, TTransport.CReadableTransport) and self.thrift_spec is not None:
            iprot._fast_decode(self, iprot, [self.__class__, self.thrift_spec])
            return
        iprot.readStructBegin()
        while True:
            (fname, ftype, fid) = iprot.readFieldBegin()
            if ftype == TType.STOP:
                break
            if fid == 2:
                if ftype == TType.LIST:
                    self.groupIds = []
                    (_etype215, _size212) = iprot.readListBegin()
                    for _i216 in range(_size212):
                        _elem217 = iprot.readString().decode('utf-8') if sys.version_info[0] == 2 else iprot.readString()
                        self.groupIds.append(_elem217)
                    iprot.readListEnd()
                else:
                    iprot.skip(ftype)
            else:
                iprot.skip(ftype)
            iprot.readFieldEnd()
        iprot.readStructEnd()

    def write(self, oprot):
        if oprot._fast_encode is not None and self.thrift_spec is not None:
            oprot.trans.write(oprot._fast_encode(self, [self.__class__, self.thrift_spec]))
            return
        oprot.writeStructBegin('getGroups_args')
        if self.groupIds is not None:
            oprot.writeFieldBegin('groupIds', TType.LIST, 2)
            oprot.writeListBegin(TType.STRING, len(self.groupIds))
            for iter218 in self.groupIds:
                oprot.writeString(iter218.encode('utf-8') if sys.version_info[0] == 2 else iter218)
            oprot.writeListEnd()
            oprot.writeFieldEnd()
        oprot.writeFieldStop()
        oprot.writeStructEnd()

    def validate(self):
        return

    def __repr__(self):
        L = ['%s=%r' % (key, value)
             for key, value in self.__dict__.items()]
        return '%s(%s)' % (self.__class__.__name__, ', '.join(L))

    def __eq__(self, other):
        return isinstance(other, self.__class__) and self.__dict__ == other.__dict__

    def __ne__(self, other):
        return not (self == other)
all_structs.append(getGroups_args)
getGroups_args.thrift_spec = (
    None,  # 0
    None,  # 1
    (2, TType.LIST, 'groupIds', (TType.STRING, 'UTF8', False), None, ),  # 2
)


class getGroups_result(object):
    """
    Attributes:
     - success
     - e
    """


    def __init__(self, success=None, e=None,):
        self.success = success
        self.e = e

    def read(self, iprot):
        if iprot._fast_decode is not None and isinstance(iprot.trans, TTransport.CReadableTransport) and self.thrift_spec is not None:
            iprot._fast_decode(self, iprot, [self.__class__, self.thrift_spec])
            return
        iprot.readStructBegin()
        while True:
            (fname, ftype, fid) = iprot.readFieldBegin()
            if ftype == TType.STOP:
                break
            if fid == 0:
                if ftype == TType.LIST:
                    self.success = []
                    (_etype222, _size219) = iprot.readListBegin()
                    for _i223 in range(_size219):
                        _elem224 = Group()
                        _elem224.read(iprot)
                        self.success.append(_elem224)
                    iprot.readListEnd()
                else:
                    iprot.skip(ftype)
            elif fid == 1:
                if ftype == TType.STRUCT:
                    self.e = TalkException()
                    self.e.read(iprot)
                else:
                    iprot.skip(ftype)
            else:
                iprot.skip(ftype)
            iprot.readFieldEnd()
        iprot.readStructEnd()

    def write(self, oprot):
        if oprot._fast_encode is not None and self.thrift_spec is not None:
            oprot.trans.write(oprot._fast_encode(self, [self.__class__, self.thrift_spec]))
            return
        oprot.writeStructBegin('getGroups_result')
        if self.success is not None:
            oprot.writeFieldBegin('success', TType.LIST, 0)
            oprot.writeListBegin(TType.STRUCT, len(self.success))
            for iter225 in self.success:
                iter225.write(oprot)
            oprot.writeListEnd()
            oprot.writeFieldEnd()
        if self.e is not None:
            oprot.writeFieldBegin('e', TType.STRUCT, 1)
            self.e.write(oprot)
            oprot.writeFieldEnd()
        oprot.writeFieldStop()
        oprot.writeStructEnd()

    def validate(self):
        return

    def __repr__(self):
        L = ['%s=%r' % (key, value)
             for key, value in self.__dict__.items()]
        return '%s(%s)' % (self.__class__.__name__, ', '.join(L))

    def __eq__(self, other):
        return isinstance(other, self.__class__) and self.__dict__ == other.__dict__

    def __ne__(self, other):
        return not (self == other)
all_structs.append(getGroups_result)
getGroups_result.thrift_spec = (
    (0, TType.LIST, 'success', (TType.STRUCT, [Group, None], False), None, ),  # 0
    (1, TType.STRUCT, 'e', [TalkException, None], None, ),  # 1
)


class getFavoriteMids_args(object):


    def read(self, iprot):
        if iprot._fast_decode is not None and isinstance(iprot.trans, TTransport.CReadableTransport) and self.thrift_spec is not None:
            iprot._fast_decode(self, iprot, [self.__class__, self.thrift_spec])
            return
        iprot.readStructBegin()
        while True:
            (fname, ftype, fid) = iprot.readFieldBegin()
            if ftype == TType.STOP:
                break
            else:
                iprot.skip(ftype)
            iprot.readFieldEnd()
        iprot.readStructEnd()

    def write(self, oprot):
        if oprot._fast_encode is not None and self.thrift_spec is not None:
            oprot.trans.write(oprot._fast_encode(self, [self.__class__, self.thrift_spec]))
            return
        oprot.writeStructBegin('getFavoriteMids_args')
        oprot.writeFieldStop()
        oprot.writeStructEnd()

    def validate(self):
        return

    def __repr__(self):
        L = ['%s=%r' % (key, value)
             for key, value in self.__dict__.items()]
        return '%s(%s)' % (self.__class__.__name__, ', '.join(L))

    def __eq__(self, other):
        return isinstance(other, self.__class__) and self.__dict__ == other.__dict__

    def __ne__(self, other):
        return not (self == other)
all_structs.append(getFavoriteMids_args)
getFavoriteMids_args.thrift_spec = (
)


class getFavoriteMids_result(object):
    """
    Attributes:
     - success
     - e
    """


    def __init__(self, success=None, e=None,):
        self.success = success
        self.e = e

    def read(self, iprot):
        if iprot._fast_decode is not None and isinstance(iprot.trans, TTransport.CReadableTransport) and self.thrift_spec is not None:
            iprot._fast_decode(self, iprot, [self.__class__, self.thrift_spec])
            return
        iprot.readStructBegin()
        while True:
            (fname, ftype, fid) = iprot.readFieldBegin()
            if ftype == TType.STOP:
                break
            if fid == 0:
                if ftype == TType.LIST:
                    self.success = []
                    (_etype229, _size226) = iprot.readListBegin()
                    for _i230 in range(_size226):
                        _elem231 = iprot.readString().decode('utf-8') if sys.version_info[0] == 2 else iprot.readString()
                        self.success.append(_elem231)
                    iprot.readListEnd()
                else:
                    iprot.skip(ftype)
            elif fid == 1:
                if ftype == TType.STRUCT:
                    self.e = TalkException()
                    self.e.read(iprot)
                else:
                    iprot.skip(ftype)
            else:
                iprot.skip(ftype)
            iprot.readFieldEnd()
        iprot.readStructEnd()

    def write(self, oprot):
        if oprot._fast_encode is not None and self.thrift_spec is not None:
            oprot.trans.write(oprot._fast_encode(self, [self.__class__, self.thrift_spec]))
            return
        oprot.writeStructBegin('getFavoriteMids_result')
        if self.success is not None:
            oprot.writeFieldBegin('success', TType.LIST, 0)
            oprot.writeListBegin(TType.STRING, len(self.success))
            for iter232 in self.success:
                oprot.writeString(iter232.encode('utf-8') if sys.version_info[0] == 2 else iter232)
            oprot.writeListEnd()
            oprot.writeFieldEnd()
        if self.e is not None:
            oprot.writeFieldBegin('e', TType.STRUCT, 1)
            self.e.write(oprot)
            oprot.writeFieldEnd()
        oprot.writeFieldStop()
        oprot.writeStructEnd()

    def validate(self):
        return

    def __repr__(self):
        L = ['%s=%r' % (key, value)
             for key, value in self.__dict__.items()]
        return '%s(%s)' % (self.__class__.__name__, ', '.join(L))

    def __eq__(self, other):
        return isinstance(other, self.__class__) and self.__dict__ == other.__dict__

    def __ne__(self, other):
        return not (self == other)
all_structs.append(getFavoriteMids_result)
getFavoriteMids_result.thrift_spec = (
    (0, TType.LIST, 'success', (TType.STRING, 'UTF8', False), None, ),  # 0
    (1, TType.STRUCT, 'e', [TalkException, None], None, ),  # 1
)


class getHiddenContactMids_args(object):


    def read(self, iprot):
        if iprot._fast_decode is not None and isinstance(iprot.trans, TTransport.CReadableTransport) and self.thrift_spec is not None:
            iprot._fast_decode(self, iprot, [self.__class__, self.thrift_spec])
            return
        iprot.readStructBegin()
        while True:
            (fname, ftype, fid) = iprot.readFieldBegin()
            if ftype == TType.STOP:
                break
            else:
                iprot.skip(ftype)
            iprot.readFieldEnd()
        iprot.readStructEnd()

    def write(self, oprot):
        if oprot._fast_encode is not None and self.thrift_spec is not None:
            oprot.trans.write(oprot._fast_encode(self, [self.__class__, self.thrift_spec]))
            return
        oprot.writeStructBegin('getHiddenContactMids_args')
        oprot.writeFieldStop()
        oprot.writeStructEnd()

    def validate(self):
        return

    def __repr__(self):
        L = ['%s=%r' % (key, value)
             for key, value in self.__dict__.items()]
        return '%s(%s)' % (self.__class__.__name__, ', '.join(L))

    def __eq__(self, other):
        return isinstance(other, self.__class__) and self.__dict__ == other.__dict__

    def __ne__(self, other):
        return not (self == other)
all_structs.append(getHiddenContactMids_args)
getHiddenContactMids_args.thrift_spec = (
)


class getHiddenContactMids_result(object):
    """
    Attributes:
     - success
     - e
    """


    def __init__(self, success=None, e=None,):
        self.success = success
        self.e = e

    def read(self, iprot):
        if iprot._fast_decode is not None and isinstance(iprot.trans, TTransport.CReadableTransport) and self.thrift_spec is not None:
            iprot._fast_decode(self, iprot, [self.__class__, self.thrift_spec])
            return
        iprot.readStructBegin()
        while True:
            (fname, ftype, fid) = iprot.readFieldBegin()
            if ftype == TType.STOP:
                break
            if fid == 0:
                if ftype == TType.LIST:
                    self.success = []
                    (_etype236, _size233) = iprot.readListBegin()
                    for _i237 in range(_size233):
                        _elem238 = iprot.readString().decode('utf-8') if sys.version_info[0] == 2 else iprot.readString()
                        self.success.append(_elem238)
                    iprot.readListEnd()
                else:
                    iprot.skip(ftype)
            elif fid == 1:
                if ftype == TType.STRUCT:
                    self.e = TalkException()
                    self.e.read(iprot)
                else:
                    iprot.skip(ftype)
            else:
                iprot.skip(ftype)
            iprot.readFieldEnd()
        iprot.readStructEnd()

    def write(self, oprot):
        if oprot._fast_encode is not None and self.thrift_spec is not None:
            oprot.trans.write(oprot._fast_encode(self, [self.__class__, self.thrift_spec]))
            return
        oprot.writeStructBegin('getHiddenContactMids_result')
        if self.success is not None:
            oprot.writeFieldBegin('success', TType.LIST, 0)
            oprot.writeListBegin(TType.STRING, len(self.success))
            for iter239 in self.success:
                oprot.writeString(iter239.encode('utf-8') if sys.version_info[0] == 2 else iter239)
            oprot.writeListEnd()
            oprot.writeFieldEnd()
        if self.e is not None:
            oprot.writeFieldBegin('e', TType.STRUCT, 1)
            self.e.write(oprot)
            oprot.writeFieldEnd()
        oprot.writeFieldStop()
        oprot.writeStructEnd()

    def validate(self):
        return

    def __repr__(self):
        L = ['%s=%r' % (key, value)
             for key, value in self.__dict__.items()]
        return '%s(%s)' % (self.__class__.__name__, ', '.join(L))

    def __eq__(self, other):
        return isinstance(other, self.__class__) and self.__dict__ == other.__dict__

    def __ne__(self, other):
        return not (self == other)
all_structs.append(getHiddenContactMids_result)
getHiddenContactMids_result.thrift_spec = (
    (0, TType.LIST, 'success', (TType.STRING, 'UTF8', False), None, ),  # 0
    (1, TType.STRUCT, 'e', [TalkException, None], None, ),  # 1
)


class getLastOpRevision_args(object):


    def read(self, iprot):
        if iprot._fast_decode is not None and isinstance(iprot.trans, TTransport.CReadableTransport) and self.thrift_spec is not None:
            iprot._fast_decode(self, iprot, [self.__class__, self.thrift_spec])
            return
        iprot.readStructBegin()
        while True:
            (fname, ftype, fid) = iprot.readFieldBegin()
            if ftype == TType.STOP:
                break
            else:
                iprot.skip(ftype)
            iprot.readFieldEnd()
        iprot.readStructEnd()

    def write(self, oprot):
        if oprot._fast_encode is not None and self.thrift_spec is not None:
            oprot.trans.write(oprot._fast_encode(self, [self.__class__, self.thrift_spec]))
            return
        oprot.writeStructBegin('getLastOpRevision_args')
        oprot.writeFieldStop()
        oprot.writeStructEnd()

    def validate(self):
        return

    def __repr__(self):
        L = ['%s=%r' % (key, value)
             for key, value in self.__dict__.items()]
        return '%s(%s)' % (self.__class__.__name__, ', '.join(L))

    def __eq__(self, other):
        return isinstance(other, self.__class__) and self.__dict__ == other.__dict__

    def __ne__(self, other):
        return not (self == other)
all_structs.append(getLastOpRevision_args)
getLastOpRevision_args.thrift_spec = (
)


class getLastOpRevision_result(object):
    """
    Attributes:
     - success
     - e
    """


    def __init__(self, success=None, e=None,):
        self.success = success
        self.e = e

    def read(self, iprot):
        if iprot._fast_decode is not None and isinstance(iprot.trans, TTransport.CReadableTransport) and self.thrift_spec is not None:
            iprot._fast_decode(self, iprot, [self.__class__, self.thrift_spec])
            return
        iprot.readStructBegin()
        while True:
            (fname, ftype, fid) = iprot.readFieldBegin()
            if ftype == TType.STOP:
                break
            if fid == 0:
                if ftype == TType.I64:
                    self.success = iprot.readI64()
                else:
                    iprot.skip(ftype)
            elif fid == 1:
                if ftype == TType.STRUCT:
                    self.e = TalkException()
                    self.e.read(iprot)
                else:
                    iprot.skip(ftype)
            else:
                iprot.skip(ftype)
            iprot.readFieldEnd()
        iprot.readStructEnd()

    def write(self, oprot):
        if oprot._fast_encode is not None and self.thrift_spec is not None:
            oprot.trans.write(oprot._fast_encode(self, [self.__class__, self.thrift_spec]))
            return
        oprot.writeStructBegin('getLastOpRevision_result')
        if self.success is not None:
            oprot.writeFieldBegin('success', TType.I64, 0)
            oprot.writeI64(self.success)
            oprot.writeFieldEnd()
        if self.e is not None:
            oprot.writeFieldBegin('e', TType.STRUCT, 1)
            self.e.write(oprot)
            oprot.writeFieldEnd()
        oprot.writeFieldStop()
        oprot.writeStructEnd()

    def validate(self):
        return

    def __repr__(self):
        L = ['%s=%r' % (key, value)
             for key, value in self.__dict__.items()]
        return '%s(%s)' % (self.__class__.__name__, ', '.join(L))

    def __eq__(self, other):
        return isinstance(other, self.__class__) and self.__dict__ == other.__dict__

    def __ne__(self, other):
        return not (self == other)
all_structs.append(getLastOpRevision_result)
getLastOpRevision_result.thrift_spec = (
    (0, TType.I64, 'success', None, None, ),  # 0
    (1, TType.STRUCT, 'e', [TalkException, None], None, ),  # 1
)


class getRoom_args(object):
    """
    Attributes:
     - roomId
    """


    def __init__(self, roomId=None,):
        self.roomId = roomId

    def read(self, iprot):
        if iprot._fast_decode is not None and isinstance(iprot.trans, TTransport.CReadableTransport) and self.thrift_spec is not None:
            iprot._fast_decode(self, iprot, [self.__class__, self.thrift_spec])
            return
        iprot.readStructBegin()
        while True:
            (fname, ftype, fid) = iprot.readFieldBegin()
            if ftype == TType.STOP:
                break
            if fid == 2:
                if ftype == TType.STRING:
                    self.roomId = iprot.readString().decode('utf-8') if sys.version_info[0] == 2 else iprot.readString()
                else:
                    iprot.skip(ftype)
            else:
                iprot.skip(ftype)
            iprot.readFieldEnd()
        iprot.readStructEnd()

    def write(self, oprot):
        if oprot._fast_encode is not None and self.thrift_spec is not None:
            oprot.trans.write(oprot._fast_encode(self, [self.__class__, self.thrift_spec]))
            return
        oprot.writeStructBegin('getRoom_args')
        if self.roomId is not None:
            oprot.writeFieldBegin('roomId', TType.STRING, 2)
            oprot.writeString(self.roomId.encode('utf-8') if sys.version_info[0] == 2 else self.roomId)
            oprot.writeFieldEnd()
        oprot.writeFieldStop()
        oprot.writeStructEnd()

    def validate(self):
        return

    def __repr__(self):
        L = ['%s=%r' % (key, value)
             for key, value in self.__dict__.items()]
        return '%s(%s)' % (self.__class__.__name__, ', '.join(L))

    def __eq__(self, other):
        return isinstance(other, self.__class__) and self.__dict__ == other.__dict__

    def __ne__(self, other):
        return not (self == other)
all_structs.append(getRoom_args)
getRoom_args.thrift_spec = (
    None,  # 0
    None,  # 1
    (2, TType.STRING, 'roomId', 'UTF8', None, ),  # 2
)


class getRoom_result(object):
    """
    Attributes:
     - success
     - e
    """


    def __init__(self, success=None, e=None,):
        self.success = success
        self.e = e

    def read(self, iprot):
        if iprot._fast_decode is not None and isinstance(iprot.trans, TTransport.CReadableTransport) and self.thrift_spec is not None:
            iprot._fast_decode(self, iprot, [self.__class__, self.thrift_spec])
            return
        iprot.readStructBegin()
        while True:
            (fname, ftype, fid) = iprot.readFieldBegin()
            if ftype == TType.STOP:
                break
            if fid == 0:
                if ftype == TType.STRUCT:
                    self.success = Room()
                    self.success.read(iprot)
                else:
                    iprot.skip(ftype)
            elif fid == 1:
                if ftype == TType.STRUCT:
                    self.e = TalkException()
                    self.e.read(iprot)
                else:
                    iprot.skip(ftype)
            else:
                iprot.skip(ftype)
            iprot.readFieldEnd()
        iprot.readStructEnd()

    def write(self, oprot):
        if oprot._fast_encode is not None and self.thrift_spec is not None:
            oprot.trans.write(oprot._fast_encode(self, [self.__class__, self.thrift_spec]))
            return
        oprot.writeStructBegin('getRoom_result')
        if self.success is not None:
            oprot.writeFieldBegin('success', TType.STRUCT, 0)
            self.success.write(oprot)
            oprot.writeFieldEnd()
        if self.e is not None:
            oprot.writeFieldBegin('e', TType.STRUCT, 1)
            self.e.write(oprot)
            oprot.writeFieldEnd()
        oprot.writeFieldStop()
        oprot.writeStructEnd()

    def validate(self):
        return

    def __repr__(self):
        L = ['%s=%r' % (key, value)
             for key, value in self.__dict__.items()]
        return '%s(%s)' % (self.__class__.__name__, ', '.join(L))

    def __eq__(self, other):
        return isinstance(other, self.__class__) and self.__dict__ == other.__dict__

    def __ne__(self, other):
        return not (self == other)
all_structs.append(getRoom_result)
getRoom_result.thrift_spec = (
    (0, TType.STRUCT, 'success', [Room, None], None, ),  # 0
    (1, TType.STRUCT, 'e', [TalkException, None], None, ),  # 1
)


class getRSAKeyInfo_args(object):
    """
    Attributes:
     - provider
    """


    def __init__(self, provider=None,):
        self.provider = provider

    def read(self, iprot):
        if iprot._fast_decode is not None and isinstance(iprot.trans, TTransport.CReadableTransport) and self.thrift_spec is not None:
            iprot._fast_decode(self, iprot, [self.__class__, self.thrift_spec])
            return
        iprot.readStructBegin()
        while True:
            (fname, ftype, fid) = iprot.readFieldBegin()
            if ftype == TType.STOP:
                break
            if fid == 2:
                if ftype == TType.I32:
                    self.provider = iprot.readI32()
                else:
                    iprot.skip(ftype)
            else:
                iprot.skip(ftype)
            iprot.readFieldEnd()
        iprot.readStructEnd()

    def write(self, oprot):
        if oprot._fast_encode is not None and self.thrift_spec is not None:
            oprot.trans.write(oprot._fast_encode(self, [self.__class__, self.thrift_spec]))
            return
        oprot.writeStructBegin('getRSAKeyInfo_args')
        if self.provider is not None:
            oprot.writeFieldBegin('provider', TType.I32, 2)
            oprot.writeI32(self.provider)
            oprot.writeFieldEnd()
        oprot.writeFieldStop()
        oprot.writeStructEnd()

    def validate(self):
        return

    def __repr__(self):
        L = ['%s=%r' % (key, value)
             for key, value in self.__dict__.items()]
        return '%s(%s)' % (self.__class__.__name__, ', '.join(L))

    def __eq__(self, other):
        return isinstance(other, self.__class__) and self.__dict__ == other.__dict__

    def __ne__(self, other):
        return not (self == other)
all_structs.append(getRSAKeyInfo_args)
getRSAKeyInfo_args.thrift_spec = (
    None,  # 0
    None,  # 1
    (2, TType.I32, 'provider', None, None, ),  # 2
)


class getRSAKeyInfo_result(object):
    """
    Attributes:
     - success
     - e
    """


    def __init__(self, success=None, e=None,):
        self.success = success
        self.e = e

    def read(self, iprot):
        if iprot._fast_decode is not None and isinstance(iprot.trans, TTransport.CReadableTransport) and self.thrift_spec is not None:
            iprot._fast_decode(self, iprot, [self.__class__, self.thrift_spec])
            return
        iprot.readStructBegin()
        while True:
            (fname, ftype, fid) = iprot.readFieldBegin()
            if ftype == TType.STOP:
                break
            if fid == 0:
                if ftype == TType.STRUCT:
                    self.success = RSAKey()
                    self.success.read(iprot)
                else:
                    iprot.skip(ftype)
            elif fid == 1:
                if ftype == TType.STRUCT:
                    self.e = TalkException()
                    self.e.read(iprot)
                else:
                    iprot.skip(ftype)
            else:
                iprot.skip(ftype)
            iprot.readFieldEnd()
        iprot.readStructEnd()

    def write(self, oprot):
        if oprot._fast_encode is not None and self.thrift_spec is not None:
            oprot.trans.write(oprot._fast_encode(self, [self.__class__, self.thrift_spec]))
            return
        oprot.writeStructBegin('getRSAKeyInfo_result')
        if self.success is not None:
            oprot.writeFieldBegin('success', TType.STRUCT, 0)
            self.success.write(oprot)
            oprot.writeFieldEnd()
        if self.e is not None:
            oprot.writeFieldBegin('e', TType.STRUCT, 1)
            self.e.write(oprot)
            oprot.writeFieldEnd()
        oprot.writeFieldStop()
        oprot.writeStructEnd()

    def validate(self):
        return

    def __repr__(self):
        L = ['%s=%r' % (key, value)
             for key, value in self.__dict__.items()]
        return '%s(%s)' % (self.__class__.__name__, ', '.join(L))

    def __eq__(self, other):
        return isinstance(other, self.__class__) and self.__dict__ == other.__dict__

    def __ne__(self, other):
        return not (self == other)
all_structs.append(getRSAKeyInfo_result)
getRSAKeyInfo_result.thrift_spec = (
    (0, TType.STRUCT, 'success', [RSAKey, None], None, ),  # 0
    (1, TType.STRUCT, 'e', [TalkException, None], None, ),  # 1
)


class getServerTime_args(object):


    def read(self, iprot):
        if iprot._fast_decode is not None and isinstance(iprot.trans, TTransport.CReadableTransport) and self.thrift_spec is not None:
            iprot._fast_decode(self, iprot, [self.__class__, self.thrift_spec])
            return
        iprot.readStructBegin()
        while True:
            (fname, ftype, fid) = iprot.readFieldBegin()
            if ftype == TType.STOP:
                break
            else:
                iprot.skip(ftype)
            iprot.readFieldEnd()
        iprot.readStructEnd()

    def write(self, oprot):
        if oprot._fast_encode is not None and self.thrift_spec is not None:
            oprot.trans.write(oprot._fast_encode(self, [self.__class__, self.thrift_spec]))
            return
        oprot.writeStructBegin('getServerTime_args')
        oprot.writeFieldStop()
        oprot.writeStructEnd()

    def validate(self):
        return

    def __repr__(self):
        L = ['%s=%r' % (key, value)
             for key, value in self.__dict__.items()]
        return '%s(%s)' % (self.__class__.__name__, ', '.join(L))

    def __eq__(self, other):
        return isinstance(other, self.__class__) and self.__dict__ == other.__dict__

    def __ne__(self, other):
        return not (self == other)
all_structs.append(getServerTime_args)
getServerTime_args.thrift_spec = (
)


class getServerTime_result(object):
    """
    Attributes:
     - success
     - e
    """


    def __init__(self, success=None, e=None,):
        self.success = success
        self.e = e

    def read(self, iprot):
        if iprot._fast_decode is not None and isinstance(iprot.trans, TTransport.CReadableTransport) and self.thrift_spec is not None:
            iprot._fast_decode(self, iprot, [self.__class__, self.thrift_spec])
            return
        iprot.readStructBegin()
        while True:
            (fname, ftype, fid) = iprot.readFieldBegin()
            if ftype == TType.STOP:
                break
            if fid == 0:
                if ftype == TType.I64:
                    self.success = iprot.readI64()
                else:
                    iprot.skip(ftype)
            elif fid == 1:
                if ftype == TType.STRUCT:
                    self.e = TalkException()
                    self.e.read(iprot)
                else:
                    iprot.skip(ftype)
            else:
                iprot.skip(ftype)
            iprot.readFieldEnd()
        iprot.readStructEnd()

    def write(self, oprot):
        if oprot._fast_encode is not None and self.thrift_spec is not None:
            oprot.trans.write(oprot._fast_encode(self, [self.__class__, self.thrift_spec]))
            return
        oprot.writeStructBegin('getServerTime_result')
        if self.success is not None:
            oprot.writeFieldBegin('success', TType.I64, 0)
            oprot.writeI64(self.success)
            oprot.writeFieldEnd()
        if self.e is not None:
            oprot.writeFieldBegin('e', TType.STRUCT, 1)
            self.e.write(oprot)
            oprot.writeFieldEnd()
        oprot.writeFieldStop()
        oprot.writeStructEnd()

    def validate(self):
        return

    def __repr__(self):
        L = ['%s=%r' % (key, value)
             for key, value in self.__dict__.items()]
        return '%s(%s)' % (self.__class__.__name__, ', '.join(L))

    def __eq__(self, other):
        return isinstance(other, self.__class__) and self.__dict__ == other.__dict__

    def __ne__(self, other):
        return not (self == other)
all_structs.append(getServerTime_result)
getServerTime_result.thrift_spec = (
    (0, TType.I64, 'success', None, None, ),  # 0
    (1, TType.STRUCT, 'e', [TalkException, None], None, ),  # 1
)


class getSessions_args(object):


    def read(self, iprot):
        if iprot._fast_decode is not None and isinstance(iprot.trans, TTransport.CReadableTransport) and self.thrift_spec is not None:
            iprot._fast_decode(self, iprot, [self.__class__, self.thrift_spec])
            return
        iprot.readStructBegin()
        while True:
            (fname, ftype, fid) = iprot.readFieldBegin()
            if ftype == TType.STOP:
                break
            else:
                iprot.skip(ftype)
            iprot.readFieldEnd()
        iprot.readStructEnd()

    def write(self, oprot):
        if oprot._fast_encode is not None and self.thrift_spec is not None:
            oprot.trans.write(oprot._fast_encode(self, [self.__class__, self.thrift_spec]))
            return
        oprot.writeStructBegin('getSessions_args')
        oprot.writeFieldStop()
        oprot.writeStructEnd()

    def validate(self):
        return

    def __repr__(self):
        L = ['%s=%r' % (key, value)
             for key, value in self.__dict__.items()]
        return '%s(%s)' % (self.__class__.__name__, ', '.join(L))

    def __eq__(self, other):
        return isinstance(other, self.__class__) and self.__dict__ == other.__dict__

    def __ne__(self, other):
        return not (self == other)
all_structs.append(getSessions_args)
getSessions_args.thrift_spec = (
)


class getSessions_result(object):
    """
    Attributes:
     - success
     - e
    """


    def __init__(self, success=None, e=None,):
        self.success = success
        self.e = e

    def read(self, iprot):
        if iprot._fast_decode is not None and isinstance(iprot.trans, TTransport.CReadableTransport) and self.thrift_spec is not None:
            iprot._fast_decode(self, iprot, [self.__class__, self.thrift_spec])
            return
        iprot.readStructBegin()
        while True:
            (fname, ftype, fid) = iprot.readFieldBegin()
            if ftype == TType.STOP:
                break
            if fid == 0:
                if ftype == TType.LIST:
                    self.success = []
                    (_etype243, _size240) = iprot.readListBegin()
                    for _i244 in range(_size240):
                        _elem245 = LoginSession()
                        _elem245.read(iprot)
                        self.success.append(_elem245)
                    iprot.readListEnd()
                else:
                    iprot.skip(ftype)
            elif fid == 1:
                if ftype == TType.STRUCT:
                    self.e = TalkException()
                    self.e.read(iprot)
                else:
                    iprot.skip(ftype)
            else:
                iprot.skip(ftype)
            iprot.readFieldEnd()
        iprot.readStructEnd()

    def write(self, oprot):
        if oprot._fast_encode is not None and self.thrift_spec is not None:
            oprot.trans.write(oprot._fast_encode(self, [self.__class__, self.thrift_spec]))
            return
        oprot.writeStructBegin('getSessions_result')
        if self.success is not None:
            oprot.writeFieldBegin('success', TType.LIST, 0)
            oprot.writeListBegin(TType.STRUCT, len(self.success))
            for iter246 in self.success:
                iter246.write(oprot)
            oprot.writeListEnd()
            oprot.writeFieldEnd()
        if self.e is not None:
            oprot.writeFieldBegin('e', TType.STRUCT, 1)
            self.e.write(oprot)
            oprot.writeFieldEnd()
        oprot.writeFieldStop()
        oprot.writeStructEnd()

    def validate(self):
        return

    def __repr__(self):
        L = ['%s=%r' % (key, value)
             for key, value in self.__dict__.items()]
        return '%s(%s)' % (self.__class__.__name__, ', '.join(L))

    def __eq__(self, other):
        return isinstance(other, self.__class__) and self.__dict__ == other.__dict__

    def __ne__(self, other):
        return not (self == other)
all_structs.append(getSessions_result)
getSessions_result.thrift_spec = (
    (0, TType.LIST, 'success', (TType.STRUCT, [LoginSession, None], False), None, ),  # 0
    (1, TType.STRUCT, 'e', [TalkException, None], None, ),  # 1
)


class leaveGroup_args(object):
    """
    Attributes:
     - reqSeq
     - groupId
    """


    def __init__(self, reqSeq=None, groupId=None,):
        self.reqSeq = reqSeq
        self.groupId = groupId

    def read(self, iprot):
        if iprot._fast_decode is not None and isinstance(iprot.trans, TTransport.CReadableTransport) and self.thrift_spec is not None:
            iprot._fast_decode(self, iprot, [self.__class__, self.thrift_spec])
            return
        iprot.readStructBegin()
        while True:
            (fname, ftype, fid) = iprot.readFieldBegin()
            if ftype == TType.STOP:
                break
            if fid == 1:
                if ftype == TType.I32:
                    self.reqSeq = iprot.readI32()
                else:
                    iprot.skip(ftype)
            elif fid == 2:
                if ftype == TType.STRING:
                    self.groupId = iprot.readString().decode('utf-8') if sys.version_info[0] == 2 else iprot.readString()
                else:
                    iprot.skip(ftype)
            else:
                iprot.skip(ftype)
            iprot.readFieldEnd()
        iprot.readStructEnd()

    def write(self, oprot):
        if oprot._fast_encode is not None and self.thrift_spec is not None:
            oprot.trans.write(oprot._fast_encode(self, [self.__class__, self.thrift_spec]))
            return
        oprot.writeStructBegin('leaveGroup_args')
        if self.reqSeq is not None:
            oprot.writeFieldBegin('reqSeq', TType.I32, 1)
            oprot.writeI32(self.reqSeq)
            oprot.writeFieldEnd()
        if self.groupId is not None:
            oprot.writeFieldBegin('groupId', TType.STRING, 2)
            oprot.writeString(self.groupId.encode('utf-8') if sys.version_info[0] == 2 else self.groupId)
            oprot.writeFieldEnd()
        oprot.writeFieldStop()
        oprot.writeStructEnd()

    def validate(self):
        return

    def __repr__(self):
        L = ['%s=%r' % (key, value)
             for key, value in self.__dict__.items()]
        return '%s(%s)' % (self.__class__.__name__, ', '.join(L))

    def __eq__(self, other):
        return isinstance(other, self.__class__) and self.__dict__ == other.__dict__

    def __ne__(self, other):
        return not (self == other)
all_structs.append(leaveGroup_args)
leaveGroup_args.thrift_spec = (
    None,  # 0
    (1, TType.I32, 'reqSeq', None, None, ),  # 1
    (2, TType.STRING, 'groupId', 'UTF8', None, ),  # 2
)


class leaveGroup_result(object):
    """
    Attributes:
     - e
    """


    def __init__(self, e=None,):
        self.e = e

    def read(self, iprot):
        if iprot._fast_decode is not None and isinstance(iprot.trans, TTransport.CReadableTransport) and self.thrift_spec is not None:
            iprot._fast_decode(self, iprot, [self.__class__, self.thrift_spec])
            return
        iprot.readStructBegin()
        while True:
            (fname, ftype, fid) = iprot.readFieldBegin()
            if ftype == TType.STOP:
                break
            if fid == 1:
                if ftype == TType.STRUCT:
                    self.e = TalkException()
                    self.e.read(iprot)
                else:
                    iprot.skip(ftype)
            else:
                iprot.skip(ftype)
            iprot.readFieldEnd()
        iprot.readStructEnd()

    def write(self, oprot):
        if oprot._fast_encode is not None and self.thrift_spec is not None:
            oprot.trans.write(oprot._fast_encode(self, [self.__class__, self.thrift_spec]))
            return
        oprot.writeStructBegin('leaveGroup_result')
        if self.e is not None:
            oprot.writeFieldBegin('e', TType.STRUCT, 1)
            self.e.write(oprot)
            oprot.writeFieldEnd()
        oprot.writeFieldStop()
        oprot.writeStructEnd()

    def validate(self):
        return

    def __repr__(self):
        L = ['%s=%r' % (key, value)
             for key, value in self.__dict__.items()]
        return '%s(%s)' % (self.__class__.__name__, ', '.join(L))

    def __eq__(self, other):
        return isinstance(other, self.__class__) and self.__dict__ == other.__dict__

    def __ne__(self, other):
        return not (self == other)
all_structs.append(leaveGroup_result)
leaveGroup_result.thrift_spec = (
    None,  # 0
    (1, TType.STRUCT, 'e', [TalkException, None], None, ),  # 1
)


class loginZ_args(object):
    """
    Attributes:
     - LoginRequest
    """


    def __init__(self, LoginRequest=None,):
        self.LoginRequest = LoginRequest

    def read(self, iprot):
        if iprot._fast_decode is not None and isinstance(iprot.trans, TTransport.CReadableTransport) and self.thrift_spec is not None:
            iprot._fast_decode(self, iprot, [self.__class__, self.thrift_spec])
            return
        iprot.readStructBegin()
        while True:
            (fname, ftype, fid) = iprot.readFieldBegin()
            if ftype == TType.STOP:
                break
            if fid == 2:
                if ftype == TType.STRUCT:
                    self.LoginRequest = loginRequest()
                    self.LoginRequest.read(iprot)
                else:
                    iprot.skip(ftype)
            else:
                iprot.skip(ftype)
            iprot.readFieldEnd()
        iprot.readStructEnd()

    def write(self, oprot):
        if oprot._fast_encode is not None and self.thrift_spec is not None:
            oprot.trans.write(oprot._fast_encode(self, [self.__class__, self.thrift_spec]))
            return
        oprot.writeStructBegin('loginZ_args')
        if self.LoginRequest is not None:
            oprot.writeFieldBegin('LoginRequest', TType.STRUCT, 2)
            self.LoginRequest.write(oprot)
            oprot.writeFieldEnd()
        oprot.writeFieldStop()
        oprot.writeStructEnd()

    def validate(self):
        return

    def __repr__(self):
        L = ['%s=%r' % (key, value)
             for key, value in self.__dict__.items()]
        return '%s(%s)' % (self.__class__.__name__, ', '.join(L))

    def __eq__(self, other):
        return isinstance(other, self.__class__) and self.__dict__ == other.__dict__

    def __ne__(self, other):
        return not (self == other)
all_structs.append(loginZ_args)
loginZ_args.thrift_spec = (
    None,  # 0
    None,  # 1
    (2, TType.STRUCT, 'LoginRequest', [loginRequest, None], None, ),  # 2
)


class loginZ_result(object):
    """
    Attributes:
     - success
     - e
    """


    def __init__(self, success=None, e=None,):
        self.success = success
        self.e = e

    def read(self, iprot):
        if iprot._fast_decode is not None and isinstance(iprot.trans, TTransport.CReadableTransport) and self.thrift_spec is not None:
            iprot._fast_decode(self, iprot, [self.__class__, self.thrift_spec])
            return
        iprot.readStructBegin()
        while True:
            (fname, ftype, fid) = iprot.readFieldBegin()
            if ftype == TType.STOP:
                break
            if fid == 0:
                if ftype == TType.STRUCT:
                    self.success = LoginResult()
                    self.success.read(iprot)
                else:
                    iprot.skip(ftype)
            elif fid == 1:
                if ftype == TType.STRUCT:
                    self.e = TalkException()
                    self.e.read(iprot)
                else:
                    iprot.skip(ftype)
            else:
                iprot.skip(ftype)
            iprot.readFieldEnd()
        iprot.readStructEnd()

    def write(self, oprot):
        if oprot._fast_encode is not None and self.thrift_spec is not None:
            oprot.trans.write(oprot._fast_encode(self, [self.__class__, self.thrift_spec]))
            return
        oprot.writeStructBegin('loginZ_result')
        if self.success is not None:
            oprot.writeFieldBegin('success', TType.STRUCT, 0)
            self.success.write(oprot)
            oprot.writeFieldEnd()
        if self.e is not None:
            oprot.writeFieldBegin('e', TType.STRUCT, 1)
            self.e.write(oprot)
            oprot.writeFieldEnd()
        oprot.writeFieldStop()
        oprot.writeStructEnd()

    def validate(self):
        return

    def __repr__(self):
        L = ['%s=%r' % (key, value)
             for key, value in self.__dict__.items()]
        return '%s(%s)' % (self.__class__.__name__, ', '.join(L))

    def __eq__(self, other):
        return isinstance(other, self.__class__) and self.__dict__ == other.__dict__

    def __ne__(self, other):
        return not (self == other)
all_structs.append(loginZ_result)
loginZ_result.thrift_spec = (
    (0, TType.STRUCT, 'success', [LoginResult, None], None, ),  # 0
    (1, TType.STRUCT, 'e', [TalkException, None], None, ),  # 1
)


class logout_args(object):


    def read(self, iprot):
        if iprot._fast_decode is not None and isinstance(iprot.trans, TTransport.CReadableTransport) and self.thrift_spec is not None:
            iprot._fast_decode(self, iprot, [self.__class__, self.thrift_spec])
            return
        iprot.readStructBegin()
        while True:
            (fname, ftype, fid) = iprot.readFieldBegin()
            if ftype == TType.STOP:
                break
            else:
                iprot.skip(ftype)
            iprot.readFieldEnd()
        iprot.readStructEnd()

    def write(self, oprot):
        if oprot._fast_encode is not None and self.thrift_spec is not None:
            oprot.trans.write(oprot._fast_encode(self, [self.__class__, self.thrift_spec]))
            return
        oprot.writeStructBegin('logout_args')
        oprot.writeFieldStop()
        oprot.writeStructEnd()

    def validate(self):
        return

    def __repr__(self):
        L = ['%s=%r' % (key, value)
             for key, value in self.__dict__.items()]
        return '%s(%s)' % (self.__class__.__name__, ', '.join(L))

    def __eq__(self, other):
        return isinstance(other, self.__class__) and self.__dict__ == other.__dict__

    def __ne__(self, other):
        return not (self == other)
all_structs.append(logout_args)
logout_args.thrift_spec = (
)


class logout_result(object):
    """
    Attributes:
     - e
    """


    def __init__(self, e=None,):
        self.e = e

    def read(self, iprot):
        if iprot._fast_decode is not None and isinstance(iprot.trans, TTransport.CReadableTransport) and self.thrift_spec is not None:
            iprot._fast_decode(self, iprot, [self.__class__, self.thrift_spec])
            return
        iprot.readStructBegin()
        while True:
            (fname, ftype, fid) = iprot.readFieldBegin()
            if ftype == TType.STOP:
                break
            if fid == 1:
                if ftype == TType.STRUCT:
                    self.e = TalkException()
                    self.e.read(iprot)
                else:
                    iprot.skip(ftype)
            else:
                iprot.skip(ftype)
            iprot.readFieldEnd()
        iprot.readStructEnd()

    def write(self, oprot):
        if oprot._fast_encode is not None and self.thrift_spec is not None:
            oprot.trans.write(oprot._fast_encode(self, [self.__class__, self.thrift_spec]))
            return
        oprot.writeStructBegin('logout_result')
        if self.e is not None:
            oprot.writeFieldBegin('e', TType.STRUCT, 1)
            self.e.write(oprot)
            oprot.writeFieldEnd()
        oprot.writeFieldStop()
        oprot.writeStructEnd()

    def validate(self):
        return

    def __repr__(self):
        L = ['%s=%r' % (key, value)
             for key, value in self.__dict__.items()]
        return '%s(%s)' % (self.__class__.__name__, ', '.join(L))

    def __eq__(self, other):
        return isinstance(other, self.__class__) and self.__dict__ == other.__dict__

    def __ne__(self, other):
        return not (self == other)
all_structs.append(logout_result)
logout_result.thrift_spec = (
    None,  # 0
    (1, TType.STRUCT, 'e', [TalkException, None], None, ),  # 1
)


class logoutSession_args(object):
    """
    Attributes:
     - tokenKey
    """


    def __init__(self, tokenKey=None,):
        self.tokenKey = tokenKey

    def read(self, iprot):
        if iprot._fast_decode is not None and isinstance(iprot.trans, TTransport.CReadableTransport) and self.thrift_spec is not None:
            iprot._fast_decode(self, iprot, [self.__class__, self.thrift_spec])
            return
        iprot.readStructBegin()
        while True:
            (fname, ftype, fid) = iprot.readFieldBegin()
            if ftype == TType.STOP:
                break
            if fid == 2:
                if ftype == TType.STRING:
                    self.tokenKey = iprot.readString().decode('utf-8') if sys.version_info[0] == 2 else iprot.readString()
                else:
                    iprot.skip(ftype)
            else:
                iprot.skip(ftype)
            iprot.readFieldEnd()
        iprot.readStructEnd()

    def write(self, oprot):
        if oprot._fast_encode is not None and self.thrift_spec is not None:
            oprot.trans.write(oprot._fast_encode(self, [self.__class__, self.thrift_spec]))
            return
        oprot.writeStructBegin('logoutSession_args')
        if self.tokenKey is not None:
            oprot.writeFieldBegin('tokenKey', TType.STRING, 2)
            oprot.writeString(self.tokenKey.encode('utf-8') if sys.version_info[0] == 2 else self.tokenKey)
            oprot.writeFieldEnd()
        oprot.writeFieldStop()
        oprot.writeStructEnd()

    def validate(self):
        return

    def __repr__(self):
        L = ['%s=%r' % (key, value)
             for key, value in self.__dict__.items()]
        return '%s(%s)' % (self.__class__.__name__, ', '.join(L))

    def __eq__(self, other):
        return isinstance(other, self.__class__) and self.__dict__ == other.__dict__

    def __ne__(self, other):
        return not (self == other)
all_structs.append(logoutSession_args)
logoutSession_args.thrift_spec = (
    None,  # 0
    None,  # 1
    (2, TType.STRING, 'tokenKey', 'UTF8', None, ),  # 2
)


class logoutSession_result(object):
    """
    Attributes:
     - e
    """


    def __init__(self, e=None,):
        self.e = e

    def read(self, iprot):
        if iprot._fast_decode is not None and isinstance(iprot.trans, TTransport.CReadableTransport) and self.thrift_spec is not None:
            iprot._fast_decode(self, iprot, [self.__class__, self.thrift_spec])
            return
        iprot.readStructBegin()
        while True:
            (fname, ftype, fid) = iprot.readFieldBegin()
            if ftype == TType.STOP:
                break
            if fid == 1:
                if ftype == TType.STRUCT:
                    self.e = TalkException()
                    self.e.read(iprot)
                else:
                    iprot.skip(ftype)
            else:
                iprot.skip(ftype)
            iprot.readFieldEnd()
        iprot.readStructEnd()

    def write(self, oprot):
        if oprot._fast_encode is not None and self.thrift_spec is not None:
            oprot.trans.write(oprot._fast_encode(self, [self.__class__, self.thrift_spec]))
            return
        oprot.writeStructBegin('logoutSession_result')
        if self.e is not None:
            oprot.writeFieldBegin('e', TType.STRUCT, 1)
            self.e.write(oprot)
            oprot.writeFieldEnd()
        oprot.writeFieldStop()
        oprot.writeStructEnd()

    def validate(self):
        return

    def __repr__(self):
        L = ['%s=%r' % (key, value)
             for key, value in self.__dict__.items()]
        return '%s(%s)' % (self.__class__.__name__, ', '.join(L))

    def __eq__(self, other):
        return isinstance(other, self.__class__) and self.__dict__ == other.__dict__

    def __ne__(self, other):
        return not (self == other)
all_structs.append(logoutSession_result)
logoutSession_result.thrift_spec = (
    None,  # 0
    (1, TType.STRUCT, 'e', [TalkException, None], None, ),  # 1
)


class sendMessage_args(object):
    """
    Attributes:
     - seq
     - message
    """


    def __init__(self, seq=None, message=None,):
        self.seq = seq
        self.message = message

    def read(self, iprot):
        if iprot._fast_decode is not None and isinstance(iprot.trans, TTransport.CReadableTransport) and self.thrift_spec is not None:
            iprot._fast_decode(self, iprot, [self.__class__, self.thrift_spec])
            return
        iprot.readStructBegin()
        while True:
            (fname, ftype, fid) = iprot.readFieldBegin()
            if ftype == TType.STOP:
                break
            if fid == 1:
                if ftype == TType.I32:
                    self.seq = iprot.readI32()
                else:
                    iprot.skip(ftype)
            elif fid == 2:
                if ftype == TType.STRUCT:
                    self.message = Message()
                    self.message.read(iprot)
                else:
                    iprot.skip(ftype)
            else:
                iprot.skip(ftype)
            iprot.readFieldEnd()
        iprot.readStructEnd()

    def write(self, oprot):
        if oprot._fast_encode is not None and self.thrift_spec is not None:
            oprot.trans.write(oprot._fast_encode(self, [self.__class__, self.thrift_spec]))
            return
        oprot.writeStructBegin('sendMessage_args')
        if self.seq is not None:
            oprot.writeFieldBegin('seq', TType.I32, 1)
            oprot.writeI32(self.seq)
            oprot.writeFieldEnd()
        if self.message is not None:
            oprot.writeFieldBegin('message', TType.STRUCT, 2)
            self.message.write(oprot)
            oprot.writeFieldEnd()
        oprot.writeFieldStop()
        oprot.writeStructEnd()

    def validate(self):
        return

    def __repr__(self):
        L = ['%s=%r' % (key, value)
             for key, value in self.__dict__.items()]
        return '%s(%s)' % (self.__class__.__name__, ', '.join(L))

    def __eq__(self, other):
        return isinstance(other, self.__class__) and self.__dict__ == other.__dict__

    def __ne__(self, other):
        return not (self == other)
all_structs.append(sendMessage_args)
sendMessage_args.thrift_spec = (
    None,  # 0
    (1, TType.I32, 'seq', None, None, ),  # 1
    (2, TType.STRUCT, 'message', [Message, None], None, ),  # 2
)


class sendMessage_result(object):
    """
    Attributes:
     - success
     - e
    """


    def __init__(self, success=None, e=None,):
        self.success = success
        self.e = e

    def read(self, iprot):
        if iprot._fast_decode is not None and isinstance(iprot.trans, TTransport.CReadableTransport) and self.thrift_spec is not None:
            iprot._fast_decode(self, iprot, [self.__class__, self.thrift_spec])
            return
        iprot.readStructBegin()
        while True:
            (fname, ftype, fid) = iprot.readFieldBegin()
            if ftype == TType.STOP:
                break
            if fid == 0:
                if ftype == TType.STRUCT:
                    self.success = Message()
                    self.success.read(iprot)
                else:
                    iprot.skip(ftype)
            elif fid == 1:
                if ftype == TType.STRUCT:
                    self.e = TalkException()
                    self.e.read(iprot)
                else:
                    iprot.skip(ftype)
            else:
                iprot.skip(ftype)
            iprot.readFieldEnd()
        iprot.readStructEnd()

    def write(self, oprot):
        if oprot._fast_encode is not None and self.thrift_spec is not None:
            oprot.trans.write(oprot._fast_encode(self, [self.__class__, self.thrift_spec]))
            return
        oprot.writeStructBegin('sendMessage_result')
        if self.success is not None:
            oprot.writeFieldBegin('success', TType.STRUCT, 0)
            self.success.write(oprot)
            oprot.writeFieldEnd()
        if self.e is not None:
            oprot.writeFieldBegin('e', TType.STRUCT, 1)
            self.e.write(oprot)
            oprot.writeFieldEnd()
        oprot.writeFieldStop()
        oprot.writeStructEnd()

    def validate(self):
        return

    def __repr__(self):
        L = ['%s=%r' % (key, value)
             for key, value in self.__dict__.items()]
        return '%s(%s)' % (self.__class__.__name__, ', '.join(L))

    def __eq__(self, other):
        return isinstance(other, self.__class__) and self.__dict__ == other.__dict__

    def __ne__(self, other):
        return not (self == other)
all_structs.append(sendMessage_result)
sendMessage_result.thrift_spec = (
    (0, TType.STRUCT, 'success', [Message, None], None, ),  # 0
    (1, TType.STRUCT, 'e', [TalkException, None], None, ),  # 1
)
fix_spec(all_structs)
del all_structs

