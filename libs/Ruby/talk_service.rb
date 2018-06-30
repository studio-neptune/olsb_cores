#
# Compiled for SuperSonic Line API Lite
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#

require 'thrift'
require 'litecore_types'

module TalkService
  class Client
    include ::Thrift::Client

    def acceptGroupInvitation(reqSeq, groupId)
      send_acceptGroupInvitation(reqSeq, groupId)
      recv_acceptGroupInvitation()
    end

    def send_acceptGroupInvitation(reqSeq, groupId)
      send_message('acceptGroupInvitation', AcceptGroupInvitation_args, :reqSeq => reqSeq, :groupId => groupId)
    end

    def recv_acceptGroupInvitation()
      result = receive_message(AcceptGroupInvitation_result)
      raise result.e unless result.e.nil?
      return
    end

    def createGroup(seq, name, contactIds)
      send_createGroup(seq, name, contactIds)
      return recv_createGroup()
    end

    def send_createGroup(seq, name, contactIds)
      send_message('createGroup', CreateGroup_args, :seq => seq, :name => name, :contactIds => contactIds)
    end

    def recv_createGroup()
      result = receive_message(CreateGroup_result)
      return result.success unless result.success.nil?
      raise result.e unless result.e.nil?
      raise ::Thrift::ApplicationException.new(::Thrift::ApplicationException::MISSING_RESULT, 'createGroup failed: unknown result')
    end

    def createQrcodeBase64Image(url, characterSet, imageSize, x, y, width, height)
      send_createQrcodeBase64Image(url, characterSet, imageSize, x, y, width, height)
      return recv_createQrcodeBase64Image()
    end

    def send_createQrcodeBase64Image(url, characterSet, imageSize, x, y, width, height)
      send_message('createQrcodeBase64Image', CreateQrcodeBase64Image_args, :url => url, :characterSet => characterSet, :imageSize => imageSize, :x => x, :y => y, :width => width, :height => height)
    end

    def recv_createQrcodeBase64Image()
      result = receive_message(CreateQrcodeBase64Image_result)
      return result.success unless result.success.nil?
      raise result.e unless result.e.nil?
      raise ::Thrift::ApplicationException.new(::Thrift::ApplicationException::MISSING_RESULT, 'createQrcodeBase64Image failed: unknown result')
    end

    def createRoom(reqSeq, contactIds)
      send_createRoom(reqSeq, contactIds)
      return recv_createRoom()
    end

    def send_createRoom(reqSeq, contactIds)
      send_message('createRoom', CreateRoom_args, :reqSeq => reqSeq, :contactIds => contactIds)
    end

    def recv_createRoom()
      result = receive_message(CreateRoom_result)
      return result.success unless result.success.nil?
      raise result.e unless result.e.nil?
      raise ::Thrift::ApplicationException.new(::Thrift::ApplicationException::MISSING_RESULT, 'createRoom failed: unknown result')
    end

    def createSession()
      send_createSession()
      return recv_createSession()
    end

    def send_createSession()
      send_message('createSession', CreateSession_args)
    end

    def recv_createSession()
      result = receive_message(CreateSession_result)
      return result.success unless result.success.nil?
      raise result.e unless result.e.nil?
      raise ::Thrift::ApplicationException.new(::Thrift::ApplicationException::MISSING_RESULT, 'createSession failed: unknown result')
    end

    def fetchOperations(localRev, count)
      send_fetchOperations(localRev, count)
      return recv_fetchOperations()
    end

    def send_fetchOperations(localRev, count)
      send_message('fetchOperations', FetchOperations_args, :localRev => localRev, :count => count)
    end

    def recv_fetchOperations()
      result = receive_message(FetchOperations_result)
      return result.success unless result.success.nil?
      raise result.e unless result.e.nil?
      raise ::Thrift::ApplicationException.new(::Thrift::ApplicationException::MISSING_RESULT, 'fetchOperations failed: unknown result')
    end

    def getProfile()
      send_getProfile()
      return recv_getProfile()
    end

    def send_getProfile()
      send_message('getProfile', GetProfile_args)
    end

    def recv_getProfile()
      result = receive_message(GetProfile_result)
      return result.success unless result.success.nil?
      raise result.e unless result.e.nil?
      raise ::Thrift::ApplicationException.new(::Thrift::ApplicationException::MISSING_RESULT, 'getProfile failed: unknown result')
    end

    def findAndAddContactsByEmail(reqSeq, emails)
      send_findAndAddContactsByEmail(reqSeq, emails)
      return recv_findAndAddContactsByEmail()
    end

    def send_findAndAddContactsByEmail(reqSeq, emails)
      send_message('findAndAddContactsByEmail', FindAndAddContactsByEmail_args, :reqSeq => reqSeq, :emails => emails)
    end

    def recv_findAndAddContactsByEmail()
      result = receive_message(FindAndAddContactsByEmail_result)
      return result.success unless result.success.nil?
      raise result.e unless result.e.nil?
      raise ::Thrift::ApplicationException.new(::Thrift::ApplicationException::MISSING_RESULT, 'findAndAddContactsByEmail failed: unknown result')
    end

    def findAndAddContactsByMid(reqSeq, mid)
      send_findAndAddContactsByMid(reqSeq, mid)
      return recv_findAndAddContactsByMid()
    end

    def send_findAndAddContactsByMid(reqSeq, mid)
      send_message('findAndAddContactsByMid', FindAndAddContactsByMid_args, :reqSeq => reqSeq, :mid => mid)
    end

    def recv_findAndAddContactsByMid()
      result = receive_message(FindAndAddContactsByMid_result)
      return result.success unless result.success.nil?
      raise result.e unless result.e.nil?
      raise ::Thrift::ApplicationException.new(::Thrift::ApplicationException::MISSING_RESULT, 'findAndAddContactsByMid failed: unknown result')
    end

    def findAndAddContactsByPhone(reqSeq, phones)
      send_findAndAddContactsByPhone(reqSeq, phones)
      return recv_findAndAddContactsByPhone()
    end

    def send_findAndAddContactsByPhone(reqSeq, phones)
      send_message('findAndAddContactsByPhone', FindAndAddContactsByPhone_args, :reqSeq => reqSeq, :phones => phones)
    end

    def recv_findAndAddContactsByPhone()
      result = receive_message(FindAndAddContactsByPhone_result)
      return result.success unless result.success.nil?
      raise result.e unless result.e.nil?
      raise ::Thrift::ApplicationException.new(::Thrift::ApplicationException::MISSING_RESULT, 'findAndAddContactsByPhone failed: unknown result')
    end

    def findAndAddContactsByUserid(reqSeq, userid)
      send_findAndAddContactsByUserid(reqSeq, userid)
      return recv_findAndAddContactsByUserid()
    end

    def send_findAndAddContactsByUserid(reqSeq, userid)
      send_message('findAndAddContactsByUserid', FindAndAddContactsByUserid_args, :reqSeq => reqSeq, :userid => userid)
    end

    def recv_findAndAddContactsByUserid()
      result = receive_message(FindAndAddContactsByUserid_result)
      return result.success unless result.success.nil?
      raise result.e unless result.e.nil?
      raise ::Thrift::ApplicationException.new(::Thrift::ApplicationException::MISSING_RESULT, 'findAndAddContactsByUserid failed: unknown result')
    end

    def findContactByUserid(userid)
      send_findContactByUserid(userid)
      return recv_findContactByUserid()
    end

    def send_findContactByUserid(userid)
      send_message('findContactByUserid', FindContactByUserid_args, :userid => userid)
    end

    def recv_findContactByUserid()
      result = receive_message(FindContactByUserid_result)
      return result.success unless result.success.nil?
      raise result.e unless result.e.nil?
      raise ::Thrift::ApplicationException.new(::Thrift::ApplicationException::MISSING_RESULT, 'findContactByUserid failed: unknown result')
    end

    def findContactByUserTicket(ticketId)
      send_findContactByUserTicket(ticketId)
      return recv_findContactByUserTicket()
    end

    def send_findContactByUserTicket(ticketId)
      send_message('findContactByUserTicket', FindContactByUserTicket_args, :ticketId => ticketId)
    end

    def recv_findContactByUserTicket()
      result = receive_message(FindContactByUserTicket_result)
      return result.success unless result.success.nil?
      raise result.e unless result.e.nil?
      raise ::Thrift::ApplicationException.new(::Thrift::ApplicationException::MISSING_RESULT, 'findContactByUserTicket failed: unknown result')
    end

    def findContactsByEmail(emails)
      send_findContactsByEmail(emails)
      return recv_findContactsByEmail()
    end

    def send_findContactsByEmail(emails)
      send_message('findContactsByEmail', FindContactsByEmail_args, :emails => emails)
    end

    def recv_findContactsByEmail()
      result = receive_message(FindContactsByEmail_result)
      return result.success unless result.success.nil?
      raise result.e unless result.e.nil?
      raise ::Thrift::ApplicationException.new(::Thrift::ApplicationException::MISSING_RESULT, 'findContactsByEmail failed: unknown result')
    end

    def findContactsByPhone(phones)
      send_findContactsByPhone(phones)
      return recv_findContactsByPhone()
    end

    def send_findContactsByPhone(phones)
      send_message('findContactsByPhone', FindContactsByPhone_args, :phones => phones)
    end

    def recv_findContactsByPhone()
      result = receive_message(FindContactsByPhone_result)
      return result.success unless result.success.nil?
      raise result.e unless result.e.nil?
      raise ::Thrift::ApplicationException.new(::Thrift::ApplicationException::MISSING_RESULT, 'findContactsByPhone failed: unknown result')
    end

    def generateUserTicket(expirationTime, maxUseCount)
      send_generateUserTicket(expirationTime, maxUseCount)
      return recv_generateUserTicket()
    end

    def send_generateUserTicket(expirationTime, maxUseCount)
      send_message('generateUserTicket', GenerateUserTicket_args, :expirationTime => expirationTime, :maxUseCount => maxUseCount)
    end

    def recv_generateUserTicket()
      result = receive_message(GenerateUserTicket_result)
      return result.success unless result.success.nil?
      raise result.e unless result.e.nil?
      raise ::Thrift::ApplicationException.new(::Thrift::ApplicationException::MISSING_RESULT, 'generateUserTicket failed: unknown result')
    end

    def getAllContactIds()
      send_getAllContactIds()
      return recv_getAllContactIds()
    end

    def send_getAllContactIds()
      send_message('getAllContactIds', GetAllContactIds_args)
    end

    def recv_getAllContactIds()
      result = receive_message(GetAllContactIds_result)
      return result.success unless result.success.nil?
      raise result.e unless result.e.nil?
      raise ::Thrift::ApplicationException.new(::Thrift::ApplicationException::MISSING_RESULT, 'getAllContactIds failed: unknown result')
    end

    def getBlockedContactIds()
      send_getBlockedContactIds()
      return recv_getBlockedContactIds()
    end

    def send_getBlockedContactIds()
      send_message('getBlockedContactIds', GetBlockedContactIds_args)
    end

    def recv_getBlockedContactIds()
      result = receive_message(GetBlockedContactIds_result)
      return result.success unless result.success.nil?
      raise result.e unless result.e.nil?
      raise ::Thrift::ApplicationException.new(::Thrift::ApplicationException::MISSING_RESULT, 'getBlockedContactIds failed: unknown result')
    end

    def getBlockedContactIdsByRange(start, count)
      send_getBlockedContactIdsByRange(start, count)
      return recv_getBlockedContactIdsByRange()
    end

    def send_getBlockedContactIdsByRange(start, count)
      send_message('getBlockedContactIdsByRange', GetBlockedContactIdsByRange_args, :start => start, :count => count)
    end

    def recv_getBlockedContactIdsByRange()
      result = receive_message(GetBlockedContactIdsByRange_result)
      return result.success unless result.success.nil?
      raise result.e unless result.e.nil?
      raise ::Thrift::ApplicationException.new(::Thrift::ApplicationException::MISSING_RESULT, 'getBlockedContactIdsByRange failed: unknown result')
    end

    def getBlockedRecommendationIds()
      send_getBlockedRecommendationIds()
      return recv_getBlockedRecommendationIds()
    end

    def send_getBlockedRecommendationIds()
      send_message('getBlockedRecommendationIds', GetBlockedRecommendationIds_args)
    end

    def recv_getBlockedRecommendationIds()
      result = receive_message(GetBlockedRecommendationIds_result)
      return result.success unless result.success.nil?
      raise result.e unless result.e.nil?
      raise ::Thrift::ApplicationException.new(::Thrift::ApplicationException::MISSING_RESULT, 'getBlockedRecommendationIds failed: unknown result')
    end

    def getContact(id)
      send_getContact(id)
      return recv_getContact()
    end

    def send_getContact(id)
      send_message('getContact', GetContact_args, :id => id)
    end

    def recv_getContact()
      result = receive_message(GetContact_result)
      return result.success unless result.success.nil?
      raise result.e unless result.e.nil?
      raise ::Thrift::ApplicationException.new(::Thrift::ApplicationException::MISSING_RESULT, 'getContact failed: unknown result')
    end

    def getContacts(ids)
      send_getContacts(ids)
      return recv_getContacts()
    end

    def send_getContacts(ids)
      send_message('getContacts', GetContacts_args, :ids => ids)
    end

    def recv_getContacts()
      result = receive_message(GetContacts_result)
      return result.success unless result.success.nil?
      raise result.e unless result.e.nil?
      raise ::Thrift::ApplicationException.new(::Thrift::ApplicationException::MISSING_RESULT, 'getContacts failed: unknown result')
    end

    def getGroup(groupId)
      send_getGroup(groupId)
      return recv_getGroup()
    end

    def send_getGroup(groupId)
      send_message('getGroup', GetGroup_args, :groupId => groupId)
    end

    def recv_getGroup()
      result = receive_message(GetGroup_result)
      return result.success unless result.success.nil?
      raise result.e unless result.e.nil?
      raise ::Thrift::ApplicationException.new(::Thrift::ApplicationException::MISSING_RESULT, 'getGroup failed: unknown result')
    end

    def getGroupIdsInvited()
      send_getGroupIdsInvited()
      return recv_getGroupIdsInvited()
    end

    def send_getGroupIdsInvited()
      send_message('getGroupIdsInvited', GetGroupIdsInvited_args)
    end

    def recv_getGroupIdsInvited()
      result = receive_message(GetGroupIdsInvited_result)
      return result.success unless result.success.nil?
      raise result.e unless result.e.nil?
      raise ::Thrift::ApplicationException.new(::Thrift::ApplicationException::MISSING_RESULT, 'getGroupIdsInvited failed: unknown result')
    end

    def getGroupIdsJoined()
      send_getGroupIdsJoined()
      return recv_getGroupIdsJoined()
    end

    def send_getGroupIdsJoined()
      send_message('getGroupIdsJoined', GetGroupIdsJoined_args)
    end

    def recv_getGroupIdsJoined()
      result = receive_message(GetGroupIdsJoined_result)
      return result.success unless result.success.nil?
      raise result.e unless result.e.nil?
      raise ::Thrift::ApplicationException.new(::Thrift::ApplicationException::MISSING_RESULT, 'getGroupIdsJoined failed: unknown result')
    end

    def getGroups(groupIds)
      send_getGroups(groupIds)
      return recv_getGroups()
    end

    def send_getGroups(groupIds)
      send_message('getGroups', GetGroups_args, :groupIds => groupIds)
    end

    def recv_getGroups()
      result = receive_message(GetGroups_result)
      return result.success unless result.success.nil?
      raise result.e unless result.e.nil?
      raise ::Thrift::ApplicationException.new(::Thrift::ApplicationException::MISSING_RESULT, 'getGroups failed: unknown result')
    end

    def getFavoriteMids()
      send_getFavoriteMids()
      return recv_getFavoriteMids()
    end

    def send_getFavoriteMids()
      send_message('getFavoriteMids', GetFavoriteMids_args)
    end

    def recv_getFavoriteMids()
      result = receive_message(GetFavoriteMids_result)
      return result.success unless result.success.nil?
      raise result.e unless result.e.nil?
      raise ::Thrift::ApplicationException.new(::Thrift::ApplicationException::MISSING_RESULT, 'getFavoriteMids failed: unknown result')
    end

    def getHiddenContactMids()
      send_getHiddenContactMids()
      return recv_getHiddenContactMids()
    end

    def send_getHiddenContactMids()
      send_message('getHiddenContactMids', GetHiddenContactMids_args)
    end

    def recv_getHiddenContactMids()
      result = receive_message(GetHiddenContactMids_result)
      return result.success unless result.success.nil?
      raise result.e unless result.e.nil?
      raise ::Thrift::ApplicationException.new(::Thrift::ApplicationException::MISSING_RESULT, 'getHiddenContactMids failed: unknown result')
    end

    def getLastOpRevision()
      send_getLastOpRevision()
      return recv_getLastOpRevision()
    end

    def send_getLastOpRevision()
      send_message('getLastOpRevision', GetLastOpRevision_args)
    end

    def recv_getLastOpRevision()
      result = receive_message(GetLastOpRevision_result)
      return result.success unless result.success.nil?
      raise result.e unless result.e.nil?
      raise ::Thrift::ApplicationException.new(::Thrift::ApplicationException::MISSING_RESULT, 'getLastOpRevision failed: unknown result')
    end

    def getRoom(roomId)
      send_getRoom(roomId)
      return recv_getRoom()
    end

    def send_getRoom(roomId)
      send_message('getRoom', GetRoom_args, :roomId => roomId)
    end

    def recv_getRoom()
      result = receive_message(GetRoom_result)
      return result.success unless result.success.nil?
      raise result.e unless result.e.nil?
      raise ::Thrift::ApplicationException.new(::Thrift::ApplicationException::MISSING_RESULT, 'getRoom failed: unknown result')
    end

    def getRSAKeyInfo(provider)
      send_getRSAKeyInfo(provider)
      return recv_getRSAKeyInfo()
    end

    def send_getRSAKeyInfo(provider)
      send_message('getRSAKeyInfo', GetRSAKeyInfo_args, :provider => provider)
    end

    def recv_getRSAKeyInfo()
      result = receive_message(GetRSAKeyInfo_result)
      return result.success unless result.success.nil?
      raise result.e unless result.e.nil?
      raise ::Thrift::ApplicationException.new(::Thrift::ApplicationException::MISSING_RESULT, 'getRSAKeyInfo failed: unknown result')
    end

    def getServerTime()
      send_getServerTime()
      return recv_getServerTime()
    end

    def send_getServerTime()
      send_message('getServerTime', GetServerTime_args)
    end

    def recv_getServerTime()
      result = receive_message(GetServerTime_result)
      return result.success unless result.success.nil?
      raise result.e unless result.e.nil?
      raise ::Thrift::ApplicationException.new(::Thrift::ApplicationException::MISSING_RESULT, 'getServerTime failed: unknown result')
    end

    def getSessions()
      send_getSessions()
      return recv_getSessions()
    end

    def send_getSessions()
      send_message('getSessions', GetSessions_args)
    end

    def recv_getSessions()
      result = receive_message(GetSessions_result)
      return result.success unless result.success.nil?
      raise result.e unless result.e.nil?
      raise ::Thrift::ApplicationException.new(::Thrift::ApplicationException::MISSING_RESULT, 'getSessions failed: unknown result')
    end

    def leaveGroup(reqSeq, groupId)
      send_leaveGroup(reqSeq, groupId)
      recv_leaveGroup()
    end

    def send_leaveGroup(reqSeq, groupId)
      send_message('leaveGroup', LeaveGroup_args, :reqSeq => reqSeq, :groupId => groupId)
    end

    def recv_leaveGroup()
      result = receive_message(LeaveGroup_result)
      raise result.e unless result.e.nil?
      return
    end

    def loginZ(LoginRequest)
      send_loginZ(LoginRequest)
      return recv_loginZ()
    end

    def send_loginZ(LoginRequest)
      send_message('loginZ', LoginZ_args, :LoginRequest => LoginRequest)
    end

    def recv_loginZ()
      result = receive_message(LoginZ_result)
      return result.success unless result.success.nil?
      raise result.e unless result.e.nil?
      raise ::Thrift::ApplicationException.new(::Thrift::ApplicationException::MISSING_RESULT, 'loginZ failed: unknown result')
    end

    def logout()
      send_logout()
      recv_logout()
    end

    def send_logout()
      send_message('logout', Logout_args)
    end

    def recv_logout()
      result = receive_message(Logout_result)
      raise result.e unless result.e.nil?
      return
    end

    def logoutSession(tokenKey)
      send_logoutSession(tokenKey)
      recv_logoutSession()
    end

    def send_logoutSession(tokenKey)
      send_message('logoutSession', LogoutSession_args, :tokenKey => tokenKey)
    end

    def recv_logoutSession()
      result = receive_message(LogoutSession_result)
      raise result.e unless result.e.nil?
      return
    end

    def sendMessage(seq, message)
      send_sendMessage(seq, message)
      return recv_sendMessage()
    end

    def send_sendMessage(seq, message)
      send_message('sendMessage', SendMessage_args, :seq => seq, :message => message)
    end

    def recv_sendMessage()
      result = receive_message(SendMessage_result)
      return result.success unless result.success.nil?
      raise result.e unless result.e.nil?
      raise ::Thrift::ApplicationException.new(::Thrift::ApplicationException::MISSING_RESULT, 'sendMessage failed: unknown result')
    end

  end

  class Processor
    include ::Thrift::Processor

    def process_acceptGroupInvitation(seqid, iprot, oprot)
      args = read_args(iprot, AcceptGroupInvitation_args)
      result = AcceptGroupInvitation_result.new()
      begin
        @handler.acceptGroupInvitation(args.reqSeq, args.groupId)
      rescue ::TalkException => e
        result.e = e
      end
      write_result(result, oprot, 'acceptGroupInvitation', seqid)
    end

    def process_createGroup(seqid, iprot, oprot)
      args = read_args(iprot, CreateGroup_args)
      result = CreateGroup_result.new()
      begin
        result.success = @handler.createGroup(args.seq, args.name, args.contactIds)
      rescue ::TalkException => e
        result.e = e
      end
      write_result(result, oprot, 'createGroup', seqid)
    end

    def process_createQrcodeBase64Image(seqid, iprot, oprot)
      args = read_args(iprot, CreateQrcodeBase64Image_args)
      result = CreateQrcodeBase64Image_result.new()
      begin
        result.success = @handler.createQrcodeBase64Image(args.url, args.characterSet, args.imageSize, args.x, args.y, args.width, args.height)
      rescue ::TalkException => e
        result.e = e
      end
      write_result(result, oprot, 'createQrcodeBase64Image', seqid)
    end

    def process_createRoom(seqid, iprot, oprot)
      args = read_args(iprot, CreateRoom_args)
      result = CreateRoom_result.new()
      begin
        result.success = @handler.createRoom(args.reqSeq, args.contactIds)
      rescue ::TalkException => e
        result.e = e
      end
      write_result(result, oprot, 'createRoom', seqid)
    end

    def process_createSession(seqid, iprot, oprot)
      args = read_args(iprot, CreateSession_args)
      result = CreateSession_result.new()
      begin
        result.success = @handler.createSession()
      rescue ::TalkException => e
        result.e = e
      end
      write_result(result, oprot, 'createSession', seqid)
    end

    def process_fetchOperations(seqid, iprot, oprot)
      args = read_args(iprot, FetchOperations_args)
      result = FetchOperations_result.new()
      begin
        result.success = @handler.fetchOperations(args.localRev, args.count)
      rescue ::TalkException => e
        result.e = e
      end
      write_result(result, oprot, 'fetchOperations', seqid)
    end

    def process_getProfile(seqid, iprot, oprot)
      args = read_args(iprot, GetProfile_args)
      result = GetProfile_result.new()
      begin
        result.success = @handler.getProfile()
      rescue ::TalkException => e
        result.e = e
      end
      write_result(result, oprot, 'getProfile', seqid)
    end

    def process_findAndAddContactsByEmail(seqid, iprot, oprot)
      args = read_args(iprot, FindAndAddContactsByEmail_args)
      result = FindAndAddContactsByEmail_result.new()
      begin
        result.success = @handler.findAndAddContactsByEmail(args.reqSeq, args.emails)
      rescue ::TalkException => e
        result.e = e
      end
      write_result(result, oprot, 'findAndAddContactsByEmail', seqid)
    end

    def process_findAndAddContactsByMid(seqid, iprot, oprot)
      args = read_args(iprot, FindAndAddContactsByMid_args)
      result = FindAndAddContactsByMid_result.new()
      begin
        result.success = @handler.findAndAddContactsByMid(args.reqSeq, args.mid)
      rescue ::TalkException => e
        result.e = e
      end
      write_result(result, oprot, 'findAndAddContactsByMid', seqid)
    end

    def process_findAndAddContactsByPhone(seqid, iprot, oprot)
      args = read_args(iprot, FindAndAddContactsByPhone_args)
      result = FindAndAddContactsByPhone_result.new()
      begin
        result.success = @handler.findAndAddContactsByPhone(args.reqSeq, args.phones)
      rescue ::TalkException => e
        result.e = e
      end
      write_result(result, oprot, 'findAndAddContactsByPhone', seqid)
    end

    def process_findAndAddContactsByUserid(seqid, iprot, oprot)
      args = read_args(iprot, FindAndAddContactsByUserid_args)
      result = FindAndAddContactsByUserid_result.new()
      begin
        result.success = @handler.findAndAddContactsByUserid(args.reqSeq, args.userid)
      rescue ::TalkException => e
        result.e = e
      end
      write_result(result, oprot, 'findAndAddContactsByUserid', seqid)
    end

    def process_findContactByUserid(seqid, iprot, oprot)
      args = read_args(iprot, FindContactByUserid_args)
      result = FindContactByUserid_result.new()
      begin
        result.success = @handler.findContactByUserid(args.userid)
      rescue ::TalkException => e
        result.e = e
      end
      write_result(result, oprot, 'findContactByUserid', seqid)
    end

    def process_findContactByUserTicket(seqid, iprot, oprot)
      args = read_args(iprot, FindContactByUserTicket_args)
      result = FindContactByUserTicket_result.new()
      begin
        result.success = @handler.findContactByUserTicket(args.ticketId)
      rescue ::TalkException => e
        result.e = e
      end
      write_result(result, oprot, 'findContactByUserTicket', seqid)
    end

    def process_findContactsByEmail(seqid, iprot, oprot)
      args = read_args(iprot, FindContactsByEmail_args)
      result = FindContactsByEmail_result.new()
      begin
        result.success = @handler.findContactsByEmail(args.emails)
      rescue ::TalkException => e
        result.e = e
      end
      write_result(result, oprot, 'findContactsByEmail', seqid)
    end

    def process_findContactsByPhone(seqid, iprot, oprot)
      args = read_args(iprot, FindContactsByPhone_args)
      result = FindContactsByPhone_result.new()
      begin
        result.success = @handler.findContactsByPhone(args.phones)
      rescue ::TalkException => e
        result.e = e
      end
      write_result(result, oprot, 'findContactsByPhone', seqid)
    end

    def process_generateUserTicket(seqid, iprot, oprot)
      args = read_args(iprot, GenerateUserTicket_args)
      result = GenerateUserTicket_result.new()
      begin
        result.success = @handler.generateUserTicket(args.expirationTime, args.maxUseCount)
      rescue ::TalkException => e
        result.e = e
      end
      write_result(result, oprot, 'generateUserTicket', seqid)
    end

    def process_getAllContactIds(seqid, iprot, oprot)
      args = read_args(iprot, GetAllContactIds_args)
      result = GetAllContactIds_result.new()
      begin
        result.success = @handler.getAllContactIds()
      rescue ::TalkException => e
        result.e = e
      end
      write_result(result, oprot, 'getAllContactIds', seqid)
    end

    def process_getBlockedContactIds(seqid, iprot, oprot)
      args = read_args(iprot, GetBlockedContactIds_args)
      result = GetBlockedContactIds_result.new()
      begin
        result.success = @handler.getBlockedContactIds()
      rescue ::TalkException => e
        result.e = e
      end
      write_result(result, oprot, 'getBlockedContactIds', seqid)
    end

    def process_getBlockedContactIdsByRange(seqid, iprot, oprot)
      args = read_args(iprot, GetBlockedContactIdsByRange_args)
      result = GetBlockedContactIdsByRange_result.new()
      begin
        result.success = @handler.getBlockedContactIdsByRange(args.start, args.count)
      rescue ::TalkException => e
        result.e = e
      end
      write_result(result, oprot, 'getBlockedContactIdsByRange', seqid)
    end

    def process_getBlockedRecommendationIds(seqid, iprot, oprot)
      args = read_args(iprot, GetBlockedRecommendationIds_args)
      result = GetBlockedRecommendationIds_result.new()
      begin
        result.success = @handler.getBlockedRecommendationIds()
      rescue ::TalkException => e
        result.e = e
      end
      write_result(result, oprot, 'getBlockedRecommendationIds', seqid)
    end

    def process_getContact(seqid, iprot, oprot)
      args = read_args(iprot, GetContact_args)
      result = GetContact_result.new()
      begin
        result.success = @handler.getContact(args.id)
      rescue ::TalkException => e
        result.e = e
      end
      write_result(result, oprot, 'getContact', seqid)
    end

    def process_getContacts(seqid, iprot, oprot)
      args = read_args(iprot, GetContacts_args)
      result = GetContacts_result.new()
      begin
        result.success = @handler.getContacts(args.ids)
      rescue ::TalkException => e
        result.e = e
      end
      write_result(result, oprot, 'getContacts', seqid)
    end

    def process_getGroup(seqid, iprot, oprot)
      args = read_args(iprot, GetGroup_args)
      result = GetGroup_result.new()
      begin
        result.success = @handler.getGroup(args.groupId)
      rescue ::TalkException => e
        result.e = e
      end
      write_result(result, oprot, 'getGroup', seqid)
    end

    def process_getGroupIdsInvited(seqid, iprot, oprot)
      args = read_args(iprot, GetGroupIdsInvited_args)
      result = GetGroupIdsInvited_result.new()
      begin
        result.success = @handler.getGroupIdsInvited()
      rescue ::TalkException => e
        result.e = e
      end
      write_result(result, oprot, 'getGroupIdsInvited', seqid)
    end

    def process_getGroupIdsJoined(seqid, iprot, oprot)
      args = read_args(iprot, GetGroupIdsJoined_args)
      result = GetGroupIdsJoined_result.new()
      begin
        result.success = @handler.getGroupIdsJoined()
      rescue ::TalkException => e
        result.e = e
      end
      write_result(result, oprot, 'getGroupIdsJoined', seqid)
    end

    def process_getGroups(seqid, iprot, oprot)
      args = read_args(iprot, GetGroups_args)
      result = GetGroups_result.new()
      begin
        result.success = @handler.getGroups(args.groupIds)
      rescue ::TalkException => e
        result.e = e
      end
      write_result(result, oprot, 'getGroups', seqid)
    end

    def process_getFavoriteMids(seqid, iprot, oprot)
      args = read_args(iprot, GetFavoriteMids_args)
      result = GetFavoriteMids_result.new()
      begin
        result.success = @handler.getFavoriteMids()
      rescue ::TalkException => e
        result.e = e
      end
      write_result(result, oprot, 'getFavoriteMids', seqid)
    end

    def process_getHiddenContactMids(seqid, iprot, oprot)
      args = read_args(iprot, GetHiddenContactMids_args)
      result = GetHiddenContactMids_result.new()
      begin
        result.success = @handler.getHiddenContactMids()
      rescue ::TalkException => e
        result.e = e
      end
      write_result(result, oprot, 'getHiddenContactMids', seqid)
    end

    def process_getLastOpRevision(seqid, iprot, oprot)
      args = read_args(iprot, GetLastOpRevision_args)
      result = GetLastOpRevision_result.new()
      begin
        result.success = @handler.getLastOpRevision()
      rescue ::TalkException => e
        result.e = e
      end
      write_result(result, oprot, 'getLastOpRevision', seqid)
    end

    def process_getRoom(seqid, iprot, oprot)
      args = read_args(iprot, GetRoom_args)
      result = GetRoom_result.new()
      begin
        result.success = @handler.getRoom(args.roomId)
      rescue ::TalkException => e
        result.e = e
      end
      write_result(result, oprot, 'getRoom', seqid)
    end

    def process_getRSAKeyInfo(seqid, iprot, oprot)
      args = read_args(iprot, GetRSAKeyInfo_args)
      result = GetRSAKeyInfo_result.new()
      begin
        result.success = @handler.getRSAKeyInfo(args.provider)
      rescue ::TalkException => e
        result.e = e
      end
      write_result(result, oprot, 'getRSAKeyInfo', seqid)
    end

    def process_getServerTime(seqid, iprot, oprot)
      args = read_args(iprot, GetServerTime_args)
      result = GetServerTime_result.new()
      begin
        result.success = @handler.getServerTime()
      rescue ::TalkException => e
        result.e = e
      end
      write_result(result, oprot, 'getServerTime', seqid)
    end

    def process_getSessions(seqid, iprot, oprot)
      args = read_args(iprot, GetSessions_args)
      result = GetSessions_result.new()
      begin
        result.success = @handler.getSessions()
      rescue ::TalkException => e
        result.e = e
      end
      write_result(result, oprot, 'getSessions', seqid)
    end

    def process_leaveGroup(seqid, iprot, oprot)
      args = read_args(iprot, LeaveGroup_args)
      result = LeaveGroup_result.new()
      begin
        @handler.leaveGroup(args.reqSeq, args.groupId)
      rescue ::TalkException => e
        result.e = e
      end
      write_result(result, oprot, 'leaveGroup', seqid)
    end

    def process_loginZ(seqid, iprot, oprot)
      args = read_args(iprot, LoginZ_args)
      result = LoginZ_result.new()
      begin
        result.success = @handler.loginZ(args.LoginRequest)
      rescue ::TalkException => e
        result.e = e
      end
      write_result(result, oprot, 'loginZ', seqid)
    end

    def process_logout(seqid, iprot, oprot)
      args = read_args(iprot, Logout_args)
      result = Logout_result.new()
      begin
        @handler.logout()
      rescue ::TalkException => e
        result.e = e
      end
      write_result(result, oprot, 'logout', seqid)
    end

    def process_logoutSession(seqid, iprot, oprot)
      args = read_args(iprot, LogoutSession_args)
      result = LogoutSession_result.new()
      begin
        @handler.logoutSession(args.tokenKey)
      rescue ::TalkException => e
        result.e = e
      end
      write_result(result, oprot, 'logoutSession', seqid)
    end

    def process_sendMessage(seqid, iprot, oprot)
      args = read_args(iprot, SendMessage_args)
      result = SendMessage_result.new()
      begin
        result.success = @handler.sendMessage(args.seq, args.message)
      rescue ::TalkException => e
        result.e = e
      end
      write_result(result, oprot, 'sendMessage', seqid)
    end

  end

  # HELPER FUNCTIONS AND STRUCTURES

  class AcceptGroupInvitation_args
    include ::Thrift::Struct, ::Thrift::Struct_Union
    REQSEQ = 1
    GROUPID = 2

    FIELDS = {
      REQSEQ => {:type => ::Thrift::Types::I32, :name => 'reqSeq'},
      GROUPID => {:type => ::Thrift::Types::STRING, :name => 'groupId'}
    }

    def struct_fields; FIELDS; end

    def validate
    end

    ::Thrift::Struct.generate_accessors self
  end

  class AcceptGroupInvitation_result
    include ::Thrift::Struct, ::Thrift::Struct_Union
    E = 1

    FIELDS = {
      E => {:type => ::Thrift::Types::STRUCT, :name => 'e', :class => ::TalkException}
    }

    def struct_fields; FIELDS; end

    def validate
    end

    ::Thrift::Struct.generate_accessors self
  end

  class CreateGroup_args
    include ::Thrift::Struct, ::Thrift::Struct_Union
    SEQ = 1
    NAME = 2
    CONTACTIDS = 3

    FIELDS = {
      SEQ => {:type => ::Thrift::Types::I32, :name => 'seq'},
      NAME => {:type => ::Thrift::Types::STRING, :name => 'name'},
      CONTACTIDS => {:type => ::Thrift::Types::LIST, :name => 'contactIds', :element => {:type => ::Thrift::Types::STRING}}
    }

    def struct_fields; FIELDS; end

    def validate
    end

    ::Thrift::Struct.generate_accessors self
  end

  class CreateGroup_result
    include ::Thrift::Struct, ::Thrift::Struct_Union
    SUCCESS = 0
    E = 1

    FIELDS = {
      SUCCESS => {:type => ::Thrift::Types::STRUCT, :name => 'success', :class => ::Group},
      E => {:type => ::Thrift::Types::STRUCT, :name => 'e', :class => ::TalkException}
    }

    def struct_fields; FIELDS; end

    def validate
    end

    ::Thrift::Struct.generate_accessors self
  end

  class CreateQrcodeBase64Image_args
    include ::Thrift::Struct, ::Thrift::Struct_Union
    URL = 2
    CHARACTERSET = 3
    IMAGESIZE = 4
    X = 5
    Y = 6
    WIDTH = 7
    HEIGHT = 8

    FIELDS = {
      URL => {:type => ::Thrift::Types::STRING, :name => 'url'},
      CHARACTERSET => {:type => ::Thrift::Types::STRING, :name => 'characterSet'},
      IMAGESIZE => {:type => ::Thrift::Types::I32, :name => 'imageSize'},
      X => {:type => ::Thrift::Types::I32, :name => 'x'},
      Y => {:type => ::Thrift::Types::I32, :name => 'y'},
      WIDTH => {:type => ::Thrift::Types::I32, :name => 'width'},
      HEIGHT => {:type => ::Thrift::Types::I32, :name => 'height'}
    }

    def struct_fields; FIELDS; end

    def validate
    end

    ::Thrift::Struct.generate_accessors self
  end

  class CreateQrcodeBase64Image_result
    include ::Thrift::Struct, ::Thrift::Struct_Union
    SUCCESS = 0
    E = 1

    FIELDS = {
      SUCCESS => {:type => ::Thrift::Types::STRING, :name => 'success'},
      E => {:type => ::Thrift::Types::STRUCT, :name => 'e', :class => ::TalkException}
    }

    def struct_fields; FIELDS; end

    def validate
    end

    ::Thrift::Struct.generate_accessors self
  end

  class CreateRoom_args
    include ::Thrift::Struct, ::Thrift::Struct_Union
    REQSEQ = 1
    CONTACTIDS = 2

    FIELDS = {
      REQSEQ => {:type => ::Thrift::Types::I32, :name => 'reqSeq'},
      CONTACTIDS => {:type => ::Thrift::Types::LIST, :name => 'contactIds', :element => {:type => ::Thrift::Types::STRING}}
    }

    def struct_fields; FIELDS; end

    def validate
    end

    ::Thrift::Struct.generate_accessors self
  end

  class CreateRoom_result
    include ::Thrift::Struct, ::Thrift::Struct_Union
    SUCCESS = 0
    E = 1

    FIELDS = {
      SUCCESS => {:type => ::Thrift::Types::STRUCT, :name => 'success', :class => ::Room},
      E => {:type => ::Thrift::Types::STRUCT, :name => 'e', :class => ::TalkException}
    }

    def struct_fields; FIELDS; end

    def validate
    end

    ::Thrift::Struct.generate_accessors self
  end

  class CreateSession_args
    include ::Thrift::Struct, ::Thrift::Struct_Union

    FIELDS = {

    }

    def struct_fields; FIELDS; end

    def validate
    end

    ::Thrift::Struct.generate_accessors self
  end

  class CreateSession_result
    include ::Thrift::Struct, ::Thrift::Struct_Union
    SUCCESS = 0
    E = 1

    FIELDS = {
      SUCCESS => {:type => ::Thrift::Types::STRING, :name => 'success'},
      E => {:type => ::Thrift::Types::STRUCT, :name => 'e', :class => ::TalkException}
    }

    def struct_fields; FIELDS; end

    def validate
    end

    ::Thrift::Struct.generate_accessors self
  end

  class FetchOperations_args
    include ::Thrift::Struct, ::Thrift::Struct_Union
    LOCALREV = 2
    COUNT = 3

    FIELDS = {
      LOCALREV => {:type => ::Thrift::Types::I64, :name => 'localRev'},
      COUNT => {:type => ::Thrift::Types::I32, :name => 'count'}
    }

    def struct_fields; FIELDS; end

    def validate
    end

    ::Thrift::Struct.generate_accessors self
  end

  class FetchOperations_result
    include ::Thrift::Struct, ::Thrift::Struct_Union
    SUCCESS = 0
    E = 1

    FIELDS = {
      SUCCESS => {:type => ::Thrift::Types::LIST, :name => 'success', :element => {:type => ::Thrift::Types::STRUCT, :class => ::Operation}},
      E => {:type => ::Thrift::Types::STRUCT, :name => 'e', :class => ::TalkException}
    }

    def struct_fields; FIELDS; end

    def validate
    end

    ::Thrift::Struct.generate_accessors self
  end

  class GetProfile_args
    include ::Thrift::Struct, ::Thrift::Struct_Union

    FIELDS = {

    }

    def struct_fields; FIELDS; end

    def validate
    end

    ::Thrift::Struct.generate_accessors self
  end

  class GetProfile_result
    include ::Thrift::Struct, ::Thrift::Struct_Union
    SUCCESS = 0
    E = 1

    FIELDS = {
      SUCCESS => {:type => ::Thrift::Types::STRUCT, :name => 'success', :class => ::Profile},
      E => {:type => ::Thrift::Types::STRUCT, :name => 'e', :class => ::TalkException}
    }

    def struct_fields; FIELDS; end

    def validate
    end

    ::Thrift::Struct.generate_accessors self
  end

  class FindAndAddContactsByEmail_args
    include ::Thrift::Struct, ::Thrift::Struct_Union
    REQSEQ = 1
    EMAILS = 2

    FIELDS = {
      REQSEQ => {:type => ::Thrift::Types::I32, :name => 'reqSeq'},
      EMAILS => {:type => ::Thrift::Types::SET, :name => 'emails', :element => {:type => ::Thrift::Types::STRING}}
    }

    def struct_fields; FIELDS; end

    def validate
    end

    ::Thrift::Struct.generate_accessors self
  end

  class FindAndAddContactsByEmail_result
    include ::Thrift::Struct, ::Thrift::Struct_Union
    SUCCESS = 0
    E = 1

    FIELDS = {
      SUCCESS => {:type => ::Thrift::Types::MAP, :name => 'success', :key => {:type => ::Thrift::Types::STRING}, :value => {:type => ::Thrift::Types::STRUCT, :class => ::Contact}},
      E => {:type => ::Thrift::Types::STRUCT, :name => 'e', :class => ::TalkException}
    }

    def struct_fields; FIELDS; end

    def validate
    end

    ::Thrift::Struct.generate_accessors self
  end

  class FindAndAddContactsByMid_args
    include ::Thrift::Struct, ::Thrift::Struct_Union
    REQSEQ = 1
    MID = 2

    FIELDS = {
      REQSEQ => {:type => ::Thrift::Types::I32, :name => 'reqSeq'},
      MID => {:type => ::Thrift::Types::STRING, :name => 'mid'}
    }

    def struct_fields; FIELDS; end

    def validate
    end

    ::Thrift::Struct.generate_accessors self
  end

  class FindAndAddContactsByMid_result
    include ::Thrift::Struct, ::Thrift::Struct_Union
    SUCCESS = 0
    E = 1

    FIELDS = {
      SUCCESS => {:type => ::Thrift::Types::MAP, :name => 'success', :key => {:type => ::Thrift::Types::STRING}, :value => {:type => ::Thrift::Types::STRUCT, :class => ::Contact}},
      E => {:type => ::Thrift::Types::STRUCT, :name => 'e', :class => ::TalkException}
    }

    def struct_fields; FIELDS; end

    def validate
    end

    ::Thrift::Struct.generate_accessors self
  end

  class FindAndAddContactsByPhone_args
    include ::Thrift::Struct, ::Thrift::Struct_Union
    REQSEQ = 1
    PHONES = 2

    FIELDS = {
      REQSEQ => {:type => ::Thrift::Types::I32, :name => 'reqSeq'},
      PHONES => {:type => ::Thrift::Types::SET, :name => 'phones', :element => {:type => ::Thrift::Types::STRING}}
    }

    def struct_fields; FIELDS; end

    def validate
    end

    ::Thrift::Struct.generate_accessors self
  end

  class FindAndAddContactsByPhone_result
    include ::Thrift::Struct, ::Thrift::Struct_Union
    SUCCESS = 0
    E = 1

    FIELDS = {
      SUCCESS => {:type => ::Thrift::Types::MAP, :name => 'success', :key => {:type => ::Thrift::Types::STRING}, :value => {:type => ::Thrift::Types::STRUCT, :class => ::Contact}},
      E => {:type => ::Thrift::Types::STRUCT, :name => 'e', :class => ::TalkException}
    }

    def struct_fields; FIELDS; end

    def validate
    end

    ::Thrift::Struct.generate_accessors self
  end

  class FindAndAddContactsByUserid_args
    include ::Thrift::Struct, ::Thrift::Struct_Union
    REQSEQ = 1
    USERID = 2

    FIELDS = {
      REQSEQ => {:type => ::Thrift::Types::I32, :name => 'reqSeq'},
      USERID => {:type => ::Thrift::Types::STRING, :name => 'userid'}
    }

    def struct_fields; FIELDS; end

    def validate
    end

    ::Thrift::Struct.generate_accessors self
  end

  class FindAndAddContactsByUserid_result
    include ::Thrift::Struct, ::Thrift::Struct_Union
    SUCCESS = 0
    E = 1

    FIELDS = {
      SUCCESS => {:type => ::Thrift::Types::MAP, :name => 'success', :key => {:type => ::Thrift::Types::STRING}, :value => {:type => ::Thrift::Types::STRUCT, :class => ::Contact}},
      E => {:type => ::Thrift::Types::STRUCT, :name => 'e', :class => ::TalkException}
    }

    def struct_fields; FIELDS; end

    def validate
    end

    ::Thrift::Struct.generate_accessors self
  end

  class FindContactByUserid_args
    include ::Thrift::Struct, ::Thrift::Struct_Union
    USERID = 2

    FIELDS = {
      USERID => {:type => ::Thrift::Types::STRING, :name => 'userid'}
    }

    def struct_fields; FIELDS; end

    def validate
    end

    ::Thrift::Struct.generate_accessors self
  end

  class FindContactByUserid_result
    include ::Thrift::Struct, ::Thrift::Struct_Union
    SUCCESS = 0
    E = 1

    FIELDS = {
      SUCCESS => {:type => ::Thrift::Types::STRUCT, :name => 'success', :class => ::Contact},
      E => {:type => ::Thrift::Types::STRUCT, :name => 'e', :class => ::TalkException}
    }

    def struct_fields; FIELDS; end

    def validate
    end

    ::Thrift::Struct.generate_accessors self
  end

  class FindContactByUserTicket_args
    include ::Thrift::Struct, ::Thrift::Struct_Union
    TICKETID = 2

    FIELDS = {
      TICKETID => {:type => ::Thrift::Types::STRING, :name => 'ticketId'}
    }

    def struct_fields; FIELDS; end

    def validate
    end

    ::Thrift::Struct.generate_accessors self
  end

  class FindContactByUserTicket_result
    include ::Thrift::Struct, ::Thrift::Struct_Union
    SUCCESS = 0
    E = 1

    FIELDS = {
      SUCCESS => {:type => ::Thrift::Types::STRUCT, :name => 'success', :class => ::Contact},
      E => {:type => ::Thrift::Types::STRUCT, :name => 'e', :class => ::TalkException}
    }

    def struct_fields; FIELDS; end

    def validate
    end

    ::Thrift::Struct.generate_accessors self
  end

  class FindContactsByEmail_args
    include ::Thrift::Struct, ::Thrift::Struct_Union
    EMAILS = 2

    FIELDS = {
      EMAILS => {:type => ::Thrift::Types::SET, :name => 'emails', :element => {:type => ::Thrift::Types::STRING}}
    }

    def struct_fields; FIELDS; end

    def validate
    end

    ::Thrift::Struct.generate_accessors self
  end

  class FindContactsByEmail_result
    include ::Thrift::Struct, ::Thrift::Struct_Union
    SUCCESS = 0
    E = 1

    FIELDS = {
      SUCCESS => {:type => ::Thrift::Types::MAP, :name => 'success', :key => {:type => ::Thrift::Types::STRING}, :value => {:type => ::Thrift::Types::STRUCT, :class => ::Contact}},
      E => {:type => ::Thrift::Types::STRUCT, :name => 'e', :class => ::TalkException}
    }

    def struct_fields; FIELDS; end

    def validate
    end

    ::Thrift::Struct.generate_accessors self
  end

  class FindContactsByPhone_args
    include ::Thrift::Struct, ::Thrift::Struct_Union
    PHONES = 2

    FIELDS = {
      PHONES => {:type => ::Thrift::Types::SET, :name => 'phones', :element => {:type => ::Thrift::Types::STRING}}
    }

    def struct_fields; FIELDS; end

    def validate
    end

    ::Thrift::Struct.generate_accessors self
  end

  class FindContactsByPhone_result
    include ::Thrift::Struct, ::Thrift::Struct_Union
    SUCCESS = 0
    E = 1

    FIELDS = {
      SUCCESS => {:type => ::Thrift::Types::MAP, :name => 'success', :key => {:type => ::Thrift::Types::STRING}, :value => {:type => ::Thrift::Types::STRUCT, :class => ::Contact}},
      E => {:type => ::Thrift::Types::STRUCT, :name => 'e', :class => ::TalkException}
    }

    def struct_fields; FIELDS; end

    def validate
    end

    ::Thrift::Struct.generate_accessors self
  end

  class GenerateUserTicket_args
    include ::Thrift::Struct, ::Thrift::Struct_Union
    EXPIRATIONTIME = 3
    MAXUSECOUNT = 4

    FIELDS = {
      EXPIRATIONTIME => {:type => ::Thrift::Types::I64, :name => 'expirationTime'},
      MAXUSECOUNT => {:type => ::Thrift::Types::I32, :name => 'maxUseCount'}
    }

    def struct_fields; FIELDS; end

    def validate
    end

    ::Thrift::Struct.generate_accessors self
  end

  class GenerateUserTicket_result
    include ::Thrift::Struct, ::Thrift::Struct_Union
    SUCCESS = 0
    E = 1

    FIELDS = {
      SUCCESS => {:type => ::Thrift::Types::STRUCT, :name => 'success', :class => ::Ticket},
      E => {:type => ::Thrift::Types::STRUCT, :name => 'e', :class => ::TalkException}
    }

    def struct_fields; FIELDS; end

    def validate
    end

    ::Thrift::Struct.generate_accessors self
  end

  class GetAllContactIds_args
    include ::Thrift::Struct, ::Thrift::Struct_Union

    FIELDS = {

    }

    def struct_fields; FIELDS; end

    def validate
    end

    ::Thrift::Struct.generate_accessors self
  end

  class GetAllContactIds_result
    include ::Thrift::Struct, ::Thrift::Struct_Union
    SUCCESS = 0
    E = 1

    FIELDS = {
      SUCCESS => {:type => ::Thrift::Types::LIST, :name => 'success', :element => {:type => ::Thrift::Types::STRING}},
      E => {:type => ::Thrift::Types::STRUCT, :name => 'e', :class => ::TalkException}
    }

    def struct_fields; FIELDS; end

    def validate
    end

    ::Thrift::Struct.generate_accessors self
  end

  class GetBlockedContactIds_args
    include ::Thrift::Struct, ::Thrift::Struct_Union

    FIELDS = {

    }

    def struct_fields; FIELDS; end

    def validate
    end

    ::Thrift::Struct.generate_accessors self
  end

  class GetBlockedContactIds_result
    include ::Thrift::Struct, ::Thrift::Struct_Union
    SUCCESS = 0
    E = 1

    FIELDS = {
      SUCCESS => {:type => ::Thrift::Types::LIST, :name => 'success', :element => {:type => ::Thrift::Types::STRING}},
      E => {:type => ::Thrift::Types::STRUCT, :name => 'e', :class => ::TalkException}
    }

    def struct_fields; FIELDS; end

    def validate
    end

    ::Thrift::Struct.generate_accessors self
  end

  class GetBlockedContactIdsByRange_args
    include ::Thrift::Struct, ::Thrift::Struct_Union
    START = 2
    COUNT = 3

    FIELDS = {
      START => {:type => ::Thrift::Types::I32, :name => 'start'},
      COUNT => {:type => ::Thrift::Types::I32, :name => 'count'}
    }

    def struct_fields; FIELDS; end

    def validate
    end

    ::Thrift::Struct.generate_accessors self
  end

  class GetBlockedContactIdsByRange_result
    include ::Thrift::Struct, ::Thrift::Struct_Union
    SUCCESS = 0
    E = 1

    FIELDS = {
      SUCCESS => {:type => ::Thrift::Types::LIST, :name => 'success', :element => {:type => ::Thrift::Types::STRING}},
      E => {:type => ::Thrift::Types::STRUCT, :name => 'e', :class => ::TalkException}
    }

    def struct_fields; FIELDS; end

    def validate
    end

    ::Thrift::Struct.generate_accessors self
  end

  class GetBlockedRecommendationIds_args
    include ::Thrift::Struct, ::Thrift::Struct_Union

    FIELDS = {

    }

    def struct_fields; FIELDS; end

    def validate
    end

    ::Thrift::Struct.generate_accessors self
  end

  class GetBlockedRecommendationIds_result
    include ::Thrift::Struct, ::Thrift::Struct_Union
    SUCCESS = 0
    E = 1

    FIELDS = {
      SUCCESS => {:type => ::Thrift::Types::LIST, :name => 'success', :element => {:type => ::Thrift::Types::STRING}},
      E => {:type => ::Thrift::Types::STRUCT, :name => 'e', :class => ::TalkException}
    }

    def struct_fields; FIELDS; end

    def validate
    end

    ::Thrift::Struct.generate_accessors self
  end

  class GetContact_args
    include ::Thrift::Struct, ::Thrift::Struct_Union
    ID = 2

    FIELDS = {
      ID => {:type => ::Thrift::Types::STRING, :name => 'id'}
    }

    def struct_fields; FIELDS; end

    def validate
    end

    ::Thrift::Struct.generate_accessors self
  end

  class GetContact_result
    include ::Thrift::Struct, ::Thrift::Struct_Union
    SUCCESS = 0
    E = 1

    FIELDS = {
      SUCCESS => {:type => ::Thrift::Types::STRUCT, :name => 'success', :class => ::Contact},
      E => {:type => ::Thrift::Types::STRUCT, :name => 'e', :class => ::TalkException}
    }

    def struct_fields; FIELDS; end

    def validate
    end

    ::Thrift::Struct.generate_accessors self
  end

  class GetContacts_args
    include ::Thrift::Struct, ::Thrift::Struct_Union
    IDS = 2

    FIELDS = {
      IDS => {:type => ::Thrift::Types::LIST, :name => 'ids', :element => {:type => ::Thrift::Types::STRING}}
    }

    def struct_fields; FIELDS; end

    def validate
    end

    ::Thrift::Struct.generate_accessors self
  end

  class GetContacts_result
    include ::Thrift::Struct, ::Thrift::Struct_Union
    SUCCESS = 0
    E = 1

    FIELDS = {
      SUCCESS => {:type => ::Thrift::Types::LIST, :name => 'success', :element => {:type => ::Thrift::Types::STRUCT, :class => ::Contact}},
      E => {:type => ::Thrift::Types::STRUCT, :name => 'e', :class => ::TalkException}
    }

    def struct_fields; FIELDS; end

    def validate
    end

    ::Thrift::Struct.generate_accessors self
  end

  class GetGroup_args
    include ::Thrift::Struct, ::Thrift::Struct_Union
    GROUPID = 2

    FIELDS = {
      GROUPID => {:type => ::Thrift::Types::STRING, :name => 'groupId'}
    }

    def struct_fields; FIELDS; end

    def validate
    end

    ::Thrift::Struct.generate_accessors self
  end

  class GetGroup_result
    include ::Thrift::Struct, ::Thrift::Struct_Union
    SUCCESS = 0
    E = 1

    FIELDS = {
      SUCCESS => {:type => ::Thrift::Types::STRUCT, :name => 'success', :class => ::Group},
      E => {:type => ::Thrift::Types::STRUCT, :name => 'e', :class => ::TalkException}
    }

    def struct_fields; FIELDS; end

    def validate
    end

    ::Thrift::Struct.generate_accessors self
  end

  class GetGroupIdsInvited_args
    include ::Thrift::Struct, ::Thrift::Struct_Union

    FIELDS = {

    }

    def struct_fields; FIELDS; end

    def validate
    end

    ::Thrift::Struct.generate_accessors self
  end

  class GetGroupIdsInvited_result
    include ::Thrift::Struct, ::Thrift::Struct_Union
    SUCCESS = 0
    E = 1

    FIELDS = {
      SUCCESS => {:type => ::Thrift::Types::LIST, :name => 'success', :element => {:type => ::Thrift::Types::STRING}},
      E => {:type => ::Thrift::Types::STRUCT, :name => 'e', :class => ::TalkException}
    }

    def struct_fields; FIELDS; end

    def validate
    end

    ::Thrift::Struct.generate_accessors self
  end

  class GetGroupIdsJoined_args
    include ::Thrift::Struct, ::Thrift::Struct_Union

    FIELDS = {

    }

    def struct_fields; FIELDS; end

    def validate
    end

    ::Thrift::Struct.generate_accessors self
  end

  class GetGroupIdsJoined_result
    include ::Thrift::Struct, ::Thrift::Struct_Union
    SUCCESS = 0
    E = 1

    FIELDS = {
      SUCCESS => {:type => ::Thrift::Types::LIST, :name => 'success', :element => {:type => ::Thrift::Types::STRING}},
      E => {:type => ::Thrift::Types::STRUCT, :name => 'e', :class => ::TalkException}
    }

    def struct_fields; FIELDS; end

    def validate
    end

    ::Thrift::Struct.generate_accessors self
  end

  class GetGroups_args
    include ::Thrift::Struct, ::Thrift::Struct_Union
    GROUPIDS = 2

    FIELDS = {
      GROUPIDS => {:type => ::Thrift::Types::LIST, :name => 'groupIds', :element => {:type => ::Thrift::Types::STRING}}
    }

    def struct_fields; FIELDS; end

    def validate
    end

    ::Thrift::Struct.generate_accessors self
  end

  class GetGroups_result
    include ::Thrift::Struct, ::Thrift::Struct_Union
    SUCCESS = 0
    E = 1

    FIELDS = {
      SUCCESS => {:type => ::Thrift::Types::LIST, :name => 'success', :element => {:type => ::Thrift::Types::STRUCT, :class => ::Group}},
      E => {:type => ::Thrift::Types::STRUCT, :name => 'e', :class => ::TalkException}
    }

    def struct_fields; FIELDS; end

    def validate
    end

    ::Thrift::Struct.generate_accessors self
  end

  class GetFavoriteMids_args
    include ::Thrift::Struct, ::Thrift::Struct_Union

    FIELDS = {

    }

    def struct_fields; FIELDS; end

    def validate
    end

    ::Thrift::Struct.generate_accessors self
  end

  class GetFavoriteMids_result
    include ::Thrift::Struct, ::Thrift::Struct_Union
    SUCCESS = 0
    E = 1

    FIELDS = {
      SUCCESS => {:type => ::Thrift::Types::LIST, :name => 'success', :element => {:type => ::Thrift::Types::STRING}},
      E => {:type => ::Thrift::Types::STRUCT, :name => 'e', :class => ::TalkException}
    }

    def struct_fields; FIELDS; end

    def validate
    end

    ::Thrift::Struct.generate_accessors self
  end

  class GetHiddenContactMids_args
    include ::Thrift::Struct, ::Thrift::Struct_Union

    FIELDS = {

    }

    def struct_fields; FIELDS; end

    def validate
    end

    ::Thrift::Struct.generate_accessors self
  end

  class GetHiddenContactMids_result
    include ::Thrift::Struct, ::Thrift::Struct_Union
    SUCCESS = 0
    E = 1

    FIELDS = {
      SUCCESS => {:type => ::Thrift::Types::LIST, :name => 'success', :element => {:type => ::Thrift::Types::STRING}},
      E => {:type => ::Thrift::Types::STRUCT, :name => 'e', :class => ::TalkException}
    }

    def struct_fields; FIELDS; end

    def validate
    end

    ::Thrift::Struct.generate_accessors self
  end

  class GetLastOpRevision_args
    include ::Thrift::Struct, ::Thrift::Struct_Union

    FIELDS = {

    }

    def struct_fields; FIELDS; end

    def validate
    end

    ::Thrift::Struct.generate_accessors self
  end

  class GetLastOpRevision_result
    include ::Thrift::Struct, ::Thrift::Struct_Union
    SUCCESS = 0
    E = 1

    FIELDS = {
      SUCCESS => {:type => ::Thrift::Types::I64, :name => 'success'},
      E => {:type => ::Thrift::Types::STRUCT, :name => 'e', :class => ::TalkException}
    }

    def struct_fields; FIELDS; end

    def validate
    end

    ::Thrift::Struct.generate_accessors self
  end

  class GetRoom_args
    include ::Thrift::Struct, ::Thrift::Struct_Union
    ROOMID = 2

    FIELDS = {
      ROOMID => {:type => ::Thrift::Types::STRING, :name => 'roomId'}
    }

    def struct_fields; FIELDS; end

    def validate
    end

    ::Thrift::Struct.generate_accessors self
  end

  class GetRoom_result
    include ::Thrift::Struct, ::Thrift::Struct_Union
    SUCCESS = 0
    E = 1

    FIELDS = {
      SUCCESS => {:type => ::Thrift::Types::STRUCT, :name => 'success', :class => ::Room},
      E => {:type => ::Thrift::Types::STRUCT, :name => 'e', :class => ::TalkException}
    }

    def struct_fields; FIELDS; end

    def validate
    end

    ::Thrift::Struct.generate_accessors self
  end

  class GetRSAKeyInfo_args
    include ::Thrift::Struct, ::Thrift::Struct_Union
    PROVIDER = 2

    FIELDS = {
      PROVIDER => {:type => ::Thrift::Types::I32, :name => 'provider', :enum_class => ::IdentityProvider}
    }

    def struct_fields; FIELDS; end

    def validate
      unless @provider.nil? || ::IdentityProvider::VALID_VALUES.include?(@provider)
        raise ::Thrift::ProtocolException.new(::Thrift::ProtocolException::UNKNOWN, 'Invalid value of field provider!')
      end
    end

    ::Thrift::Struct.generate_accessors self
  end

  class GetRSAKeyInfo_result
    include ::Thrift::Struct, ::Thrift::Struct_Union
    SUCCESS = 0
    E = 1

    FIELDS = {
      SUCCESS => {:type => ::Thrift::Types::STRUCT, :name => 'success', :class => ::RSAKey},
      E => {:type => ::Thrift::Types::STRUCT, :name => 'e', :class => ::TalkException}
    }

    def struct_fields; FIELDS; end

    def validate
    end

    ::Thrift::Struct.generate_accessors self
  end

  class GetServerTime_args
    include ::Thrift::Struct, ::Thrift::Struct_Union

    FIELDS = {

    }

    def struct_fields; FIELDS; end

    def validate
    end

    ::Thrift::Struct.generate_accessors self
  end

  class GetServerTime_result
    include ::Thrift::Struct, ::Thrift::Struct_Union
    SUCCESS = 0
    E = 1

    FIELDS = {
      SUCCESS => {:type => ::Thrift::Types::I64, :name => 'success'},
      E => {:type => ::Thrift::Types::STRUCT, :name => 'e', :class => ::TalkException}
    }

    def struct_fields; FIELDS; end

    def validate
    end

    ::Thrift::Struct.generate_accessors self
  end

  class GetSessions_args
    include ::Thrift::Struct, ::Thrift::Struct_Union

    FIELDS = {

    }

    def struct_fields; FIELDS; end

    def validate
    end

    ::Thrift::Struct.generate_accessors self
  end

  class GetSessions_result
    include ::Thrift::Struct, ::Thrift::Struct_Union
    SUCCESS = 0
    E = 1

    FIELDS = {
      SUCCESS => {:type => ::Thrift::Types::LIST, :name => 'success', :element => {:type => ::Thrift::Types::STRUCT, :class => ::LoginSession}},
      E => {:type => ::Thrift::Types::STRUCT, :name => 'e', :class => ::TalkException}
    }

    def struct_fields; FIELDS; end

    def validate
    end

    ::Thrift::Struct.generate_accessors self
  end

  class LeaveGroup_args
    include ::Thrift::Struct, ::Thrift::Struct_Union
    REQSEQ = 1
    GROUPID = 2

    FIELDS = {
      REQSEQ => {:type => ::Thrift::Types::I32, :name => 'reqSeq'},
      GROUPID => {:type => ::Thrift::Types::STRING, :name => 'groupId'}
    }

    def struct_fields; FIELDS; end

    def validate
    end

    ::Thrift::Struct.generate_accessors self
  end

  class LeaveGroup_result
    include ::Thrift::Struct, ::Thrift::Struct_Union
    E = 1

    FIELDS = {
      E => {:type => ::Thrift::Types::STRUCT, :name => 'e', :class => ::TalkException}
    }

    def struct_fields; FIELDS; end

    def validate
    end

    ::Thrift::Struct.generate_accessors self
  end

  class LoginZ_args
    include ::Thrift::Struct, ::Thrift::Struct_Union
    LOGINREQUEST = 2

    FIELDS = {
      LOGINREQUEST => {:type => ::Thrift::Types::STRUCT, :name => 'LoginRequest', :class => ::LoginRequest}
    }

    def struct_fields; FIELDS; end

    def validate
    end

    ::Thrift::Struct.generate_accessors self
  end

  class LoginZ_result
    include ::Thrift::Struct, ::Thrift::Struct_Union
    SUCCESS = 0
    E = 1

    FIELDS = {
      SUCCESS => {:type => ::Thrift::Types::STRUCT, :name => 'success', :class => ::LoginResult},
      E => {:type => ::Thrift::Types::STRUCT, :name => 'e', :class => ::TalkException}
    }

    def struct_fields; FIELDS; end

    def validate
    end

    ::Thrift::Struct.generate_accessors self
  end

  class Logout_args
    include ::Thrift::Struct, ::Thrift::Struct_Union

    FIELDS = {

    }

    def struct_fields; FIELDS; end

    def validate
    end

    ::Thrift::Struct.generate_accessors self
  end

  class Logout_result
    include ::Thrift::Struct, ::Thrift::Struct_Union
    E = 1

    FIELDS = {
      E => {:type => ::Thrift::Types::STRUCT, :name => 'e', :class => ::TalkException}
    }

    def struct_fields; FIELDS; end

    def validate
    end

    ::Thrift::Struct.generate_accessors self
  end

  class LogoutSession_args
    include ::Thrift::Struct, ::Thrift::Struct_Union
    TOKENKEY = 2

    FIELDS = {
      TOKENKEY => {:type => ::Thrift::Types::STRING, :name => 'tokenKey'}
    }

    def struct_fields; FIELDS; end

    def validate
    end

    ::Thrift::Struct.generate_accessors self
  end

  class LogoutSession_result
    include ::Thrift::Struct, ::Thrift::Struct_Union
    E = 1

    FIELDS = {
      E => {:type => ::Thrift::Types::STRUCT, :name => 'e', :class => ::TalkException}
    }

    def struct_fields; FIELDS; end

    def validate
    end

    ::Thrift::Struct.generate_accessors self
  end

  class SendMessage_args
    include ::Thrift::Struct, ::Thrift::Struct_Union
    SEQ = 1
    MESSAGE = 2

    FIELDS = {
      SEQ => {:type => ::Thrift::Types::I32, :name => 'seq'},
      MESSAGE => {:type => ::Thrift::Types::STRUCT, :name => 'message', :class => ::Message}
    }

    def struct_fields; FIELDS; end

    def validate
    end

    ::Thrift::Struct.generate_accessors self
  end

  class SendMessage_result
    include ::Thrift::Struct, ::Thrift::Struct_Union
    SUCCESS = 0
    E = 1

    FIELDS = {
      SUCCESS => {:type => ::Thrift::Types::STRUCT, :name => 'success', :class => ::Message},
      E => {:type => ::Thrift::Types::STRUCT, :name => 'e', :class => ::TalkException}
    }

    def struct_fields; FIELDS; end

    def validate
    end

    ::Thrift::Struct.generate_accessors self
  end

end

