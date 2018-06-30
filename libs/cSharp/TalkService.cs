/**
 * Compiled for SuperSonic Line API Lite
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
using System;
using System.Collections;
using System.Collections.Generic;
using System.Text;
using System.IO;
using Thrift;
using Thrift.Collections;
using System.Runtime.Serialization;
using Thrift.Protocol;
using Thrift.Transport;

public partial class TalkService {
  public interface ISync {
    void acceptGroupInvitation(int reqSeq, string groupId);
    @Group createGroup(int seq, string name, List<string> contactIds);
    string createQrcodeBase64Image(string url, string characterSet, int imageSize, int x, int y, int width, int height);
    Room createRoom(int reqSeq, List<string> contactIds);
    string createSession();
    List<Operation> fetchOperations(long localRev, int count);
    Profile getProfile();
    Dictionary<string, Contact> findAndAddContactsByEmail(int reqSeq, THashSet<string> emails);
    Dictionary<string, Contact> findAndAddContactsByMid(int reqSeq, string mid);
    Dictionary<string, Contact> findAndAddContactsByPhone(int reqSeq, THashSet<string> phones);
    Dictionary<string, Contact> findAndAddContactsByUserid(int reqSeq, string userid);
    Contact findContactByUserid(string userid);
    Contact findContactByUserTicket(string ticketId);
    Dictionary<string, Contact> findContactsByEmail(THashSet<string> emails);
    Dictionary<string, Contact> findContactsByPhone(THashSet<string> phones);
    Ticket generateUserTicket(long expirationTime, int maxUseCount);
    List<string> getAllContactIds();
    List<string> getBlockedContactIds();
    List<string> getBlockedContactIdsByRange(int start, int count);
    List<string> getBlockedRecommendationIds();
    Contact getContact(string id);
    List<Contact> getContacts(List<string> ids);
    @Group getGroup(string groupId);
    List<string> getGroupIdsInvited();
    List<string> getGroupIdsJoined();
    List<@Group> getGroups(List<string> groupIds);
    List<string> getFavoriteMids();
    List<string> getHiddenContactMids();
    long getLastOpRevision();
    Room getRoom(string roomId);
    RSAKey getRSAKeyInfo(IdentityProvider provider);
    long getServerTime();
    List<LoginSession> getSessions();
    void leaveGroup(int reqSeq, string groupId);
    LoginResult loginZ(loginRequest LoginRequest);
    void logout();
    void logoutSession(string tokenKey);
    Message sendMessage(int seq, Message message);
  }

  public interface Iface : ISync {
    #if SILVERLIGHT
    IAsyncResult Begin_acceptGroupInvitation(AsyncCallback callback, object state, int reqSeq, string groupId);
    void End_acceptGroupInvitation(IAsyncResult asyncResult);
    #endif
    #if SILVERLIGHT
    IAsyncResult Begin_createGroup(AsyncCallback callback, object state, int seq, string name, List<string> contactIds);
    @Group End_createGroup(IAsyncResult asyncResult);
    #endif
    #if SILVERLIGHT
    IAsyncResult Begin_createQrcodeBase64Image(AsyncCallback callback, object state, string url, string characterSet, int imageSize, int x, int y, int width, int height);
    string End_createQrcodeBase64Image(IAsyncResult asyncResult);
    #endif
    #if SILVERLIGHT
    IAsyncResult Begin_createRoom(AsyncCallback callback, object state, int reqSeq, List<string> contactIds);
    Room End_createRoom(IAsyncResult asyncResult);
    #endif
    #if SILVERLIGHT
    IAsyncResult Begin_createSession(AsyncCallback callback, object state);
    string End_createSession(IAsyncResult asyncResult);
    #endif
    #if SILVERLIGHT
    IAsyncResult Begin_fetchOperations(AsyncCallback callback, object state, long localRev, int count);
    List<Operation> End_fetchOperations(IAsyncResult asyncResult);
    #endif
    #if SILVERLIGHT
    IAsyncResult Begin_getProfile(AsyncCallback callback, object state);
    Profile End_getProfile(IAsyncResult asyncResult);
    #endif
    #if SILVERLIGHT
    IAsyncResult Begin_findAndAddContactsByEmail(AsyncCallback callback, object state, int reqSeq, THashSet<string> emails);
    Dictionary<string, Contact> End_findAndAddContactsByEmail(IAsyncResult asyncResult);
    #endif
    #if SILVERLIGHT
    IAsyncResult Begin_findAndAddContactsByMid(AsyncCallback callback, object state, int reqSeq, string mid);
    Dictionary<string, Contact> End_findAndAddContactsByMid(IAsyncResult asyncResult);
    #endif
    #if SILVERLIGHT
    IAsyncResult Begin_findAndAddContactsByPhone(AsyncCallback callback, object state, int reqSeq, THashSet<string> phones);
    Dictionary<string, Contact> End_findAndAddContactsByPhone(IAsyncResult asyncResult);
    #endif
    #if SILVERLIGHT
    IAsyncResult Begin_findAndAddContactsByUserid(AsyncCallback callback, object state, int reqSeq, string userid);
    Dictionary<string, Contact> End_findAndAddContactsByUserid(IAsyncResult asyncResult);
    #endif
    #if SILVERLIGHT
    IAsyncResult Begin_findContactByUserid(AsyncCallback callback, object state, string userid);
    Contact End_findContactByUserid(IAsyncResult asyncResult);
    #endif
    #if SILVERLIGHT
    IAsyncResult Begin_findContactByUserTicket(AsyncCallback callback, object state, string ticketId);
    Contact End_findContactByUserTicket(IAsyncResult asyncResult);
    #endif
    #if SILVERLIGHT
    IAsyncResult Begin_findContactsByEmail(AsyncCallback callback, object state, THashSet<string> emails);
    Dictionary<string, Contact> End_findContactsByEmail(IAsyncResult asyncResult);
    #endif
    #if SILVERLIGHT
    IAsyncResult Begin_findContactsByPhone(AsyncCallback callback, object state, THashSet<string> phones);
    Dictionary<string, Contact> End_findContactsByPhone(IAsyncResult asyncResult);
    #endif
    #if SILVERLIGHT
    IAsyncResult Begin_generateUserTicket(AsyncCallback callback, object state, long expirationTime, int maxUseCount);
    Ticket End_generateUserTicket(IAsyncResult asyncResult);
    #endif
    #if SILVERLIGHT
    IAsyncResult Begin_getAllContactIds(AsyncCallback callback, object state);
    List<string> End_getAllContactIds(IAsyncResult asyncResult);
    #endif
    #if SILVERLIGHT
    IAsyncResult Begin_getBlockedContactIds(AsyncCallback callback, object state);
    List<string> End_getBlockedContactIds(IAsyncResult asyncResult);
    #endif
    #if SILVERLIGHT
    IAsyncResult Begin_getBlockedContactIdsByRange(AsyncCallback callback, object state, int start, int count);
    List<string> End_getBlockedContactIdsByRange(IAsyncResult asyncResult);
    #endif
    #if SILVERLIGHT
    IAsyncResult Begin_getBlockedRecommendationIds(AsyncCallback callback, object state);
    List<string> End_getBlockedRecommendationIds(IAsyncResult asyncResult);
    #endif
    #if SILVERLIGHT
    IAsyncResult Begin_getContact(AsyncCallback callback, object state, string id);
    Contact End_getContact(IAsyncResult asyncResult);
    #endif
    #if SILVERLIGHT
    IAsyncResult Begin_getContacts(AsyncCallback callback, object state, List<string> ids);
    List<Contact> End_getContacts(IAsyncResult asyncResult);
    #endif
    #if SILVERLIGHT
    IAsyncResult Begin_getGroup(AsyncCallback callback, object state, string groupId);
    @Group End_getGroup(IAsyncResult asyncResult);
    #endif
    #if SILVERLIGHT
    IAsyncResult Begin_getGroupIdsInvited(AsyncCallback callback, object state);
    List<string> End_getGroupIdsInvited(IAsyncResult asyncResult);
    #endif
    #if SILVERLIGHT
    IAsyncResult Begin_getGroupIdsJoined(AsyncCallback callback, object state);
    List<string> End_getGroupIdsJoined(IAsyncResult asyncResult);
    #endif
    #if SILVERLIGHT
    IAsyncResult Begin_getGroups(AsyncCallback callback, object state, List<string> groupIds);
    List<@Group> End_getGroups(IAsyncResult asyncResult);
    #endif
    #if SILVERLIGHT
    IAsyncResult Begin_getFavoriteMids(AsyncCallback callback, object state);
    List<string> End_getFavoriteMids(IAsyncResult asyncResult);
    #endif
    #if SILVERLIGHT
    IAsyncResult Begin_getHiddenContactMids(AsyncCallback callback, object state);
    List<string> End_getHiddenContactMids(IAsyncResult asyncResult);
    #endif
    #if SILVERLIGHT
    IAsyncResult Begin_getLastOpRevision(AsyncCallback callback, object state);
    long End_getLastOpRevision(IAsyncResult asyncResult);
    #endif
    #if SILVERLIGHT
    IAsyncResult Begin_getRoom(AsyncCallback callback, object state, string roomId);
    Room End_getRoom(IAsyncResult asyncResult);
    #endif
    #if SILVERLIGHT
    IAsyncResult Begin_getRSAKeyInfo(AsyncCallback callback, object state, IdentityProvider provider);
    RSAKey End_getRSAKeyInfo(IAsyncResult asyncResult);
    #endif
    #if SILVERLIGHT
    IAsyncResult Begin_getServerTime(AsyncCallback callback, object state);
    long End_getServerTime(IAsyncResult asyncResult);
    #endif
    #if SILVERLIGHT
    IAsyncResult Begin_getSessions(AsyncCallback callback, object state);
    List<LoginSession> End_getSessions(IAsyncResult asyncResult);
    #endif
    #if SILVERLIGHT
    IAsyncResult Begin_leaveGroup(AsyncCallback callback, object state, int reqSeq, string groupId);
    void End_leaveGroup(IAsyncResult asyncResult);
    #endif
    #if SILVERLIGHT
    IAsyncResult Begin_loginZ(AsyncCallback callback, object state, loginRequest LoginRequest);
    LoginResult End_loginZ(IAsyncResult asyncResult);
    #endif
    #if SILVERLIGHT
    IAsyncResult Begin_logout(AsyncCallback callback, object state);
    void End_logout(IAsyncResult asyncResult);
    #endif
    #if SILVERLIGHT
    IAsyncResult Begin_logoutSession(AsyncCallback callback, object state, string tokenKey);
    void End_logoutSession(IAsyncResult asyncResult);
    #endif
    #if SILVERLIGHT
    IAsyncResult Begin_sendMessage(AsyncCallback callback, object state, int seq, Message message);
    Message End_sendMessage(IAsyncResult asyncResult);
    #endif
  }

  public class Client : IDisposable, Iface {
    public Client(TProtocol prot) : this(prot, prot)
    {
    }

    public Client(TProtocol iprot, TProtocol oprot)
    {
      iprot_ = iprot;
      oprot_ = oprot;
    }

    protected TProtocol iprot_;
    protected TProtocol oprot_;
    protected int seqid_;

    public TProtocol InputProtocol
    {
      get { return iprot_; }
    }
    public TProtocol OutputProtocol
    {
      get { return oprot_; }
    }


    #region " IDisposable Support "
    private bool _IsDisposed;

    // IDisposable
    public void Dispose()
    {
      Dispose(true);
    }
    

    protected virtual void Dispose(bool disposing)
    {
      if (!_IsDisposed)
      {
        if (disposing)
        {
          if (iprot_ != null)
          {
            ((IDisposable)iprot_).Dispose();
          }
          if (oprot_ != null)
          {
            ((IDisposable)oprot_).Dispose();
          }
        }
      }
      _IsDisposed = true;
    }
    #endregion


    
    #if SILVERLIGHT
    public IAsyncResult Begin_acceptGroupInvitation(AsyncCallback callback, object state, int reqSeq, string groupId)
    {
      return send_acceptGroupInvitation(callback, state, reqSeq, groupId);
    }

    public void End_acceptGroupInvitation(IAsyncResult asyncResult)
    {
      oprot_.Transport.EndFlush(asyncResult);
      recv_acceptGroupInvitation();
    }

    #endif

    public void acceptGroupInvitation(int reqSeq, string groupId)
    {
      #if !SILVERLIGHT
      send_acceptGroupInvitation(reqSeq, groupId);
      recv_acceptGroupInvitation();

      #else
      var asyncResult = Begin_acceptGroupInvitation(null, null, reqSeq, groupId);
      End_acceptGroupInvitation(asyncResult);

      #endif
    }
    #if SILVERLIGHT
    public IAsyncResult send_acceptGroupInvitation(AsyncCallback callback, object state, int reqSeq, string groupId)
    #else
    public void send_acceptGroupInvitation(int reqSeq, string groupId)
    #endif
    {
      oprot_.WriteMessageBegin(new TMessage("acceptGroupInvitation", TMessageType.Call, seqid_));
      acceptGroupInvitation_args args = new acceptGroupInvitation_args();
      args.ReqSeq = reqSeq;
      args.GroupId = groupId;
      args.Write(oprot_);
      oprot_.WriteMessageEnd();
      #if SILVERLIGHT
      return oprot_.Transport.BeginFlush(callback, state);
      #else
      oprot_.Transport.Flush();
      #endif
    }

    public void recv_acceptGroupInvitation()
    {
      TMessage msg = iprot_.ReadMessageBegin();
      if (msg.Type == TMessageType.Exception) {
        TApplicationException x = TApplicationException.Read(iprot_);
        iprot_.ReadMessageEnd();
        throw x;
      }
      acceptGroupInvitation_result result = new acceptGroupInvitation_result();
      result.Read(iprot_);
      iprot_.ReadMessageEnd();
      if (result.__isset.e) {
        throw result.E;
      }
      return;
    }

    
    #if SILVERLIGHT
    public IAsyncResult Begin_createGroup(AsyncCallback callback, object state, int seq, string name, List<string> contactIds)
    {
      return send_createGroup(callback, state, seq, name, contactIds);
    }

    public @Group End_createGroup(IAsyncResult asyncResult)
    {
      oprot_.Transport.EndFlush(asyncResult);
      return recv_createGroup();
    }

    #endif

    public @Group createGroup(int seq, string name, List<string> contactIds)
    {
      #if !SILVERLIGHT
      send_createGroup(seq, name, contactIds);
      return recv_createGroup();

      #else
      var asyncResult = Begin_createGroup(null, null, seq, name, contactIds);
      return End_createGroup(asyncResult);

      #endif
    }
    #if SILVERLIGHT
    public IAsyncResult send_createGroup(AsyncCallback callback, object state, int seq, string name, List<string> contactIds)
    #else
    public void send_createGroup(int seq, string name, List<string> contactIds)
    #endif
    {
      oprot_.WriteMessageBegin(new TMessage("createGroup", TMessageType.Call, seqid_));
      createGroup_args args = new createGroup_args();
      args.Seq = seq;
      args.Name = name;
      args.ContactIds = contactIds;
      args.Write(oprot_);
      oprot_.WriteMessageEnd();
      #if SILVERLIGHT
      return oprot_.Transport.BeginFlush(callback, state);
      #else
      oprot_.Transport.Flush();
      #endif
    }

    public @Group recv_createGroup()
    {
      TMessage msg = iprot_.ReadMessageBegin();
      if (msg.Type == TMessageType.Exception) {
        TApplicationException x = TApplicationException.Read(iprot_);
        iprot_.ReadMessageEnd();
        throw x;
      }
      createGroup_result result = new createGroup_result();
      result.Read(iprot_);
      iprot_.ReadMessageEnd();
      if (result.__isset.success) {
        return result.Success;
      }
      if (result.__isset.e) {
        throw result.E;
      }
      throw new TApplicationException(TApplicationException.ExceptionType.MissingResult, "createGroup failed: unknown result");
    }

    
    #if SILVERLIGHT
    public IAsyncResult Begin_createQrcodeBase64Image(AsyncCallback callback, object state, string url, string characterSet, int imageSize, int x, int y, int width, int height)
    {
      return send_createQrcodeBase64Image(callback, state, url, characterSet, imageSize, x, y, width, height);
    }

    public string End_createQrcodeBase64Image(IAsyncResult asyncResult)
    {
      oprot_.Transport.EndFlush(asyncResult);
      return recv_createQrcodeBase64Image();
    }

    #endif

    public string createQrcodeBase64Image(string url, string characterSet, int imageSize, int x, int y, int width, int height)
    {
      #if !SILVERLIGHT
      send_createQrcodeBase64Image(url, characterSet, imageSize, x, y, width, height);
      return recv_createQrcodeBase64Image();

      #else
      var asyncResult = Begin_createQrcodeBase64Image(null, null, url, characterSet, imageSize, x, y, width, height);
      return End_createQrcodeBase64Image(asyncResult);

      #endif
    }
    #if SILVERLIGHT
    public IAsyncResult send_createQrcodeBase64Image(AsyncCallback callback, object state, string url, string characterSet, int imageSize, int x, int y, int width, int height)
    #else
    public void send_createQrcodeBase64Image(string url, string characterSet, int imageSize, int x, int y, int width, int height)
    #endif
    {
      oprot_.WriteMessageBegin(new TMessage("createQrcodeBase64Image", TMessageType.Call, seqid_));
      createQrcodeBase64Image_args args = new createQrcodeBase64Image_args();
      args.Url = url;
      args.CharacterSet = characterSet;
      args.ImageSize = imageSize;
      args.X = x;
      args.Y = y;
      args.Width = width;
      args.Height = height;
      args.Write(oprot_);
      oprot_.WriteMessageEnd();
      #if SILVERLIGHT
      return oprot_.Transport.BeginFlush(callback, state);
      #else
      oprot_.Transport.Flush();
      #endif
    }

    public string recv_createQrcodeBase64Image()
    {
      TMessage msg = iprot_.ReadMessageBegin();
      if (msg.Type == TMessageType.Exception) {
        TApplicationException x = TApplicationException.Read(iprot_);
        iprot_.ReadMessageEnd();
        throw x;
      }
      createQrcodeBase64Image_result result = new createQrcodeBase64Image_result();
      result.Read(iprot_);
      iprot_.ReadMessageEnd();
      if (result.__isset.success) {
        return result.Success;
      }
      if (result.__isset.e) {
        throw result.E;
      }
      throw new TApplicationException(TApplicationException.ExceptionType.MissingResult, "createQrcodeBase64Image failed: unknown result");
    }

    
    #if SILVERLIGHT
    public IAsyncResult Begin_createRoom(AsyncCallback callback, object state, int reqSeq, List<string> contactIds)
    {
      return send_createRoom(callback, state, reqSeq, contactIds);
    }

    public Room End_createRoom(IAsyncResult asyncResult)
    {
      oprot_.Transport.EndFlush(asyncResult);
      return recv_createRoom();
    }

    #endif

    public Room createRoom(int reqSeq, List<string> contactIds)
    {
      #if !SILVERLIGHT
      send_createRoom(reqSeq, contactIds);
      return recv_createRoom();

      #else
      var asyncResult = Begin_createRoom(null, null, reqSeq, contactIds);
      return End_createRoom(asyncResult);

      #endif
    }
    #if SILVERLIGHT
    public IAsyncResult send_createRoom(AsyncCallback callback, object state, int reqSeq, List<string> contactIds)
    #else
    public void send_createRoom(int reqSeq, List<string> contactIds)
    #endif
    {
      oprot_.WriteMessageBegin(new TMessage("createRoom", TMessageType.Call, seqid_));
      createRoom_args args = new createRoom_args();
      args.ReqSeq = reqSeq;
      args.ContactIds = contactIds;
      args.Write(oprot_);
      oprot_.WriteMessageEnd();
      #if SILVERLIGHT
      return oprot_.Transport.BeginFlush(callback, state);
      #else
      oprot_.Transport.Flush();
      #endif
    }

    public Room recv_createRoom()
    {
      TMessage msg = iprot_.ReadMessageBegin();
      if (msg.Type == TMessageType.Exception) {
        TApplicationException x = TApplicationException.Read(iprot_);
        iprot_.ReadMessageEnd();
        throw x;
      }
      createRoom_result result = new createRoom_result();
      result.Read(iprot_);
      iprot_.ReadMessageEnd();
      if (result.__isset.success) {
        return result.Success;
      }
      if (result.__isset.e) {
        throw result.E;
      }
      throw new TApplicationException(TApplicationException.ExceptionType.MissingResult, "createRoom failed: unknown result");
    }

    
    #if SILVERLIGHT
    public IAsyncResult Begin_createSession(AsyncCallback callback, object state)
    {
      return send_createSession(callback, state);
    }

    public string End_createSession(IAsyncResult asyncResult)
    {
      oprot_.Transport.EndFlush(asyncResult);
      return recv_createSession();
    }

    #endif

    public string createSession()
    {
      #if !SILVERLIGHT
      send_createSession();
      return recv_createSession();

      #else
      var asyncResult = Begin_createSession(null, null);
      return End_createSession(asyncResult);

      #endif
    }
    #if SILVERLIGHT
    public IAsyncResult send_createSession(AsyncCallback callback, object state)
    #else
    public void send_createSession()
    #endif
    {
      oprot_.WriteMessageBegin(new TMessage("createSession", TMessageType.Call, seqid_));
      createSession_args args = new createSession_args();
      args.Write(oprot_);
      oprot_.WriteMessageEnd();
      #if SILVERLIGHT
      return oprot_.Transport.BeginFlush(callback, state);
      #else
      oprot_.Transport.Flush();
      #endif
    }

    public string recv_createSession()
    {
      TMessage msg = iprot_.ReadMessageBegin();
      if (msg.Type == TMessageType.Exception) {
        TApplicationException x = TApplicationException.Read(iprot_);
        iprot_.ReadMessageEnd();
        throw x;
      }
      createSession_result result = new createSession_result();
      result.Read(iprot_);
      iprot_.ReadMessageEnd();
      if (result.__isset.success) {
        return result.Success;
      }
      if (result.__isset.e) {
        throw result.E;
      }
      throw new TApplicationException(TApplicationException.ExceptionType.MissingResult, "createSession failed: unknown result");
    }

    
    #if SILVERLIGHT
    public IAsyncResult Begin_fetchOperations(AsyncCallback callback, object state, long localRev, int count)
    {
      return send_fetchOperations(callback, state, localRev, count);
    }

    public List<Operation> End_fetchOperations(IAsyncResult asyncResult)
    {
      oprot_.Transport.EndFlush(asyncResult);
      return recv_fetchOperations();
    }

    #endif

    public List<Operation> fetchOperations(long localRev, int count)
    {
      #if !SILVERLIGHT
      send_fetchOperations(localRev, count);
      return recv_fetchOperations();

      #else
      var asyncResult = Begin_fetchOperations(null, null, localRev, count);
      return End_fetchOperations(asyncResult);

      #endif
    }
    #if SILVERLIGHT
    public IAsyncResult send_fetchOperations(AsyncCallback callback, object state, long localRev, int count)
    #else
    public void send_fetchOperations(long localRev, int count)
    #endif
    {
      oprot_.WriteMessageBegin(new TMessage("fetchOperations", TMessageType.Call, seqid_));
      fetchOperations_args args = new fetchOperations_args();
      args.LocalRev = localRev;
      args.Count = count;
      args.Write(oprot_);
      oprot_.WriteMessageEnd();
      #if SILVERLIGHT
      return oprot_.Transport.BeginFlush(callback, state);
      #else
      oprot_.Transport.Flush();
      #endif
    }

    public List<Operation> recv_fetchOperations()
    {
      TMessage msg = iprot_.ReadMessageBegin();
      if (msg.Type == TMessageType.Exception) {
        TApplicationException x = TApplicationException.Read(iprot_);
        iprot_.ReadMessageEnd();
        throw x;
      }
      fetchOperations_result result = new fetchOperations_result();
      result.Read(iprot_);
      iprot_.ReadMessageEnd();
      if (result.__isset.success) {
        return result.Success;
      }
      if (result.__isset.e) {
        throw result.E;
      }
      throw new TApplicationException(TApplicationException.ExceptionType.MissingResult, "fetchOperations failed: unknown result");
    }

    
    #if SILVERLIGHT
    public IAsyncResult Begin_getProfile(AsyncCallback callback, object state)
    {
      return send_getProfile(callback, state);
    }

    public Profile End_getProfile(IAsyncResult asyncResult)
    {
      oprot_.Transport.EndFlush(asyncResult);
      return recv_getProfile();
    }

    #endif

    public Profile getProfile()
    {
      #if !SILVERLIGHT
      send_getProfile();
      return recv_getProfile();

      #else
      var asyncResult = Begin_getProfile(null, null);
      return End_getProfile(asyncResult);

      #endif
    }
    #if SILVERLIGHT
    public IAsyncResult send_getProfile(AsyncCallback callback, object state)
    #else
    public void send_getProfile()
    #endif
    {
      oprot_.WriteMessageBegin(new TMessage("getProfile", TMessageType.Call, seqid_));
      getProfile_args args = new getProfile_args();
      args.Write(oprot_);
      oprot_.WriteMessageEnd();
      #if SILVERLIGHT
      return oprot_.Transport.BeginFlush(callback, state);
      #else
      oprot_.Transport.Flush();
      #endif
    }

    public Profile recv_getProfile()
    {
      TMessage msg = iprot_.ReadMessageBegin();
      if (msg.Type == TMessageType.Exception) {
        TApplicationException x = TApplicationException.Read(iprot_);
        iprot_.ReadMessageEnd();
        throw x;
      }
      getProfile_result result = new getProfile_result();
      result.Read(iprot_);
      iprot_.ReadMessageEnd();
      if (result.__isset.success) {
        return result.Success;
      }
      if (result.__isset.e) {
        throw result.E;
      }
      throw new TApplicationException(TApplicationException.ExceptionType.MissingResult, "getProfile failed: unknown result");
    }

    
    #if SILVERLIGHT
    public IAsyncResult Begin_findAndAddContactsByEmail(AsyncCallback callback, object state, int reqSeq, THashSet<string> emails)
    {
      return send_findAndAddContactsByEmail(callback, state, reqSeq, emails);
    }

    public Dictionary<string, Contact> End_findAndAddContactsByEmail(IAsyncResult asyncResult)
    {
      oprot_.Transport.EndFlush(asyncResult);
      return recv_findAndAddContactsByEmail();
    }

    #endif

    public Dictionary<string, Contact> findAndAddContactsByEmail(int reqSeq, THashSet<string> emails)
    {
      #if !SILVERLIGHT
      send_findAndAddContactsByEmail(reqSeq, emails);
      return recv_findAndAddContactsByEmail();

      #else
      var asyncResult = Begin_findAndAddContactsByEmail(null, null, reqSeq, emails);
      return End_findAndAddContactsByEmail(asyncResult);

      #endif
    }
    #if SILVERLIGHT
    public IAsyncResult send_findAndAddContactsByEmail(AsyncCallback callback, object state, int reqSeq, THashSet<string> emails)
    #else
    public void send_findAndAddContactsByEmail(int reqSeq, THashSet<string> emails)
    #endif
    {
      oprot_.WriteMessageBegin(new TMessage("findAndAddContactsByEmail", TMessageType.Call, seqid_));
      findAndAddContactsByEmail_args args = new findAndAddContactsByEmail_args();
      args.ReqSeq = reqSeq;
      args.Emails = emails;
      args.Write(oprot_);
      oprot_.WriteMessageEnd();
      #if SILVERLIGHT
      return oprot_.Transport.BeginFlush(callback, state);
      #else
      oprot_.Transport.Flush();
      #endif
    }

    public Dictionary<string, Contact> recv_findAndAddContactsByEmail()
    {
      TMessage msg = iprot_.ReadMessageBegin();
      if (msg.Type == TMessageType.Exception) {
        TApplicationException x = TApplicationException.Read(iprot_);
        iprot_.ReadMessageEnd();
        throw x;
      }
      findAndAddContactsByEmail_result result = new findAndAddContactsByEmail_result();
      result.Read(iprot_);
      iprot_.ReadMessageEnd();
      if (result.__isset.success) {
        return result.Success;
      }
      if (result.__isset.e) {
        throw result.E;
      }
      throw new TApplicationException(TApplicationException.ExceptionType.MissingResult, "findAndAddContactsByEmail failed: unknown result");
    }

    
    #if SILVERLIGHT
    public IAsyncResult Begin_findAndAddContactsByMid(AsyncCallback callback, object state, int reqSeq, string mid)
    {
      return send_findAndAddContactsByMid(callback, state, reqSeq, mid);
    }

    public Dictionary<string, Contact> End_findAndAddContactsByMid(IAsyncResult asyncResult)
    {
      oprot_.Transport.EndFlush(asyncResult);
      return recv_findAndAddContactsByMid();
    }

    #endif

    public Dictionary<string, Contact> findAndAddContactsByMid(int reqSeq, string mid)
    {
      #if !SILVERLIGHT
      send_findAndAddContactsByMid(reqSeq, mid);
      return recv_findAndAddContactsByMid();

      #else
      var asyncResult = Begin_findAndAddContactsByMid(null, null, reqSeq, mid);
      return End_findAndAddContactsByMid(asyncResult);

      #endif
    }
    #if SILVERLIGHT
    public IAsyncResult send_findAndAddContactsByMid(AsyncCallback callback, object state, int reqSeq, string mid)
    #else
    public void send_findAndAddContactsByMid(int reqSeq, string mid)
    #endif
    {
      oprot_.WriteMessageBegin(new TMessage("findAndAddContactsByMid", TMessageType.Call, seqid_));
      findAndAddContactsByMid_args args = new findAndAddContactsByMid_args();
      args.ReqSeq = reqSeq;
      args.Mid = mid;
      args.Write(oprot_);
      oprot_.WriteMessageEnd();
      #if SILVERLIGHT
      return oprot_.Transport.BeginFlush(callback, state);
      #else
      oprot_.Transport.Flush();
      #endif
    }

    public Dictionary<string, Contact> recv_findAndAddContactsByMid()
    {
      TMessage msg = iprot_.ReadMessageBegin();
      if (msg.Type == TMessageType.Exception) {
        TApplicationException x = TApplicationException.Read(iprot_);
        iprot_.ReadMessageEnd();
        throw x;
      }
      findAndAddContactsByMid_result result = new findAndAddContactsByMid_result();
      result.Read(iprot_);
      iprot_.ReadMessageEnd();
      if (result.__isset.success) {
        return result.Success;
      }
      if (result.__isset.e) {
        throw result.E;
      }
      throw new TApplicationException(TApplicationException.ExceptionType.MissingResult, "findAndAddContactsByMid failed: unknown result");
    }

    
    #if SILVERLIGHT
    public IAsyncResult Begin_findAndAddContactsByPhone(AsyncCallback callback, object state, int reqSeq, THashSet<string> phones)
    {
      return send_findAndAddContactsByPhone(callback, state, reqSeq, phones);
    }

    public Dictionary<string, Contact> End_findAndAddContactsByPhone(IAsyncResult asyncResult)
    {
      oprot_.Transport.EndFlush(asyncResult);
      return recv_findAndAddContactsByPhone();
    }

    #endif

    public Dictionary<string, Contact> findAndAddContactsByPhone(int reqSeq, THashSet<string> phones)
    {
      #if !SILVERLIGHT
      send_findAndAddContactsByPhone(reqSeq, phones);
      return recv_findAndAddContactsByPhone();

      #else
      var asyncResult = Begin_findAndAddContactsByPhone(null, null, reqSeq, phones);
      return End_findAndAddContactsByPhone(asyncResult);

      #endif
    }
    #if SILVERLIGHT
    public IAsyncResult send_findAndAddContactsByPhone(AsyncCallback callback, object state, int reqSeq, THashSet<string> phones)
    #else
    public void send_findAndAddContactsByPhone(int reqSeq, THashSet<string> phones)
    #endif
    {
      oprot_.WriteMessageBegin(new TMessage("findAndAddContactsByPhone", TMessageType.Call, seqid_));
      findAndAddContactsByPhone_args args = new findAndAddContactsByPhone_args();
      args.ReqSeq = reqSeq;
      args.Phones = phones;
      args.Write(oprot_);
      oprot_.WriteMessageEnd();
      #if SILVERLIGHT
      return oprot_.Transport.BeginFlush(callback, state);
      #else
      oprot_.Transport.Flush();
      #endif
    }

    public Dictionary<string, Contact> recv_findAndAddContactsByPhone()
    {
      TMessage msg = iprot_.ReadMessageBegin();
      if (msg.Type == TMessageType.Exception) {
        TApplicationException x = TApplicationException.Read(iprot_);
        iprot_.ReadMessageEnd();
        throw x;
      }
      findAndAddContactsByPhone_result result = new findAndAddContactsByPhone_result();
      result.Read(iprot_);
      iprot_.ReadMessageEnd();
      if (result.__isset.success) {
        return result.Success;
      }
      if (result.__isset.e) {
        throw result.E;
      }
      throw new TApplicationException(TApplicationException.ExceptionType.MissingResult, "findAndAddContactsByPhone failed: unknown result");
    }

    
    #if SILVERLIGHT
    public IAsyncResult Begin_findAndAddContactsByUserid(AsyncCallback callback, object state, int reqSeq, string userid)
    {
      return send_findAndAddContactsByUserid(callback, state, reqSeq, userid);
    }

    public Dictionary<string, Contact> End_findAndAddContactsByUserid(IAsyncResult asyncResult)
    {
      oprot_.Transport.EndFlush(asyncResult);
      return recv_findAndAddContactsByUserid();
    }

    #endif

    public Dictionary<string, Contact> findAndAddContactsByUserid(int reqSeq, string userid)
    {
      #if !SILVERLIGHT
      send_findAndAddContactsByUserid(reqSeq, userid);
      return recv_findAndAddContactsByUserid();

      #else
      var asyncResult = Begin_findAndAddContactsByUserid(null, null, reqSeq, userid);
      return End_findAndAddContactsByUserid(asyncResult);

      #endif
    }
    #if SILVERLIGHT
    public IAsyncResult send_findAndAddContactsByUserid(AsyncCallback callback, object state, int reqSeq, string userid)
    #else
    public void send_findAndAddContactsByUserid(int reqSeq, string userid)
    #endif
    {
      oprot_.WriteMessageBegin(new TMessage("findAndAddContactsByUserid", TMessageType.Call, seqid_));
      findAndAddContactsByUserid_args args = new findAndAddContactsByUserid_args();
      args.ReqSeq = reqSeq;
      args.Userid = userid;
      args.Write(oprot_);
      oprot_.WriteMessageEnd();
      #if SILVERLIGHT
      return oprot_.Transport.BeginFlush(callback, state);
      #else
      oprot_.Transport.Flush();
      #endif
    }

    public Dictionary<string, Contact> recv_findAndAddContactsByUserid()
    {
      TMessage msg = iprot_.ReadMessageBegin();
      if (msg.Type == TMessageType.Exception) {
        TApplicationException x = TApplicationException.Read(iprot_);
        iprot_.ReadMessageEnd();
        throw x;
      }
      findAndAddContactsByUserid_result result = new findAndAddContactsByUserid_result();
      result.Read(iprot_);
      iprot_.ReadMessageEnd();
      if (result.__isset.success) {
        return result.Success;
      }
      if (result.__isset.e) {
        throw result.E;
      }
      throw new TApplicationException(TApplicationException.ExceptionType.MissingResult, "findAndAddContactsByUserid failed: unknown result");
    }

    
    #if SILVERLIGHT
    public IAsyncResult Begin_findContactByUserid(AsyncCallback callback, object state, string userid)
    {
      return send_findContactByUserid(callback, state, userid);
    }

    public Contact End_findContactByUserid(IAsyncResult asyncResult)
    {
      oprot_.Transport.EndFlush(asyncResult);
      return recv_findContactByUserid();
    }

    #endif

    public Contact findContactByUserid(string userid)
    {
      #if !SILVERLIGHT
      send_findContactByUserid(userid);
      return recv_findContactByUserid();

      #else
      var asyncResult = Begin_findContactByUserid(null, null, userid);
      return End_findContactByUserid(asyncResult);

      #endif
    }
    #if SILVERLIGHT
    public IAsyncResult send_findContactByUserid(AsyncCallback callback, object state, string userid)
    #else
    public void send_findContactByUserid(string userid)
    #endif
    {
      oprot_.WriteMessageBegin(new TMessage("findContactByUserid", TMessageType.Call, seqid_));
      findContactByUserid_args args = new findContactByUserid_args();
      args.Userid = userid;
      args.Write(oprot_);
      oprot_.WriteMessageEnd();
      #if SILVERLIGHT
      return oprot_.Transport.BeginFlush(callback, state);
      #else
      oprot_.Transport.Flush();
      #endif
    }

    public Contact recv_findContactByUserid()
    {
      TMessage msg = iprot_.ReadMessageBegin();
      if (msg.Type == TMessageType.Exception) {
        TApplicationException x = TApplicationException.Read(iprot_);
        iprot_.ReadMessageEnd();
        throw x;
      }
      findContactByUserid_result result = new findContactByUserid_result();
      result.Read(iprot_);
      iprot_.ReadMessageEnd();
      if (result.__isset.success) {
        return result.Success;
      }
      if (result.__isset.e) {
        throw result.E;
      }
      throw new TApplicationException(TApplicationException.ExceptionType.MissingResult, "findContactByUserid failed: unknown result");
    }

    
    #if SILVERLIGHT
    public IAsyncResult Begin_findContactByUserTicket(AsyncCallback callback, object state, string ticketId)
    {
      return send_findContactByUserTicket(callback, state, ticketId);
    }

    public Contact End_findContactByUserTicket(IAsyncResult asyncResult)
    {
      oprot_.Transport.EndFlush(asyncResult);
      return recv_findContactByUserTicket();
    }

    #endif

    public Contact findContactByUserTicket(string ticketId)
    {
      #if !SILVERLIGHT
      send_findContactByUserTicket(ticketId);
      return recv_findContactByUserTicket();

      #else
      var asyncResult = Begin_findContactByUserTicket(null, null, ticketId);
      return End_findContactByUserTicket(asyncResult);

      #endif
    }
    #if SILVERLIGHT
    public IAsyncResult send_findContactByUserTicket(AsyncCallback callback, object state, string ticketId)
    #else
    public void send_findContactByUserTicket(string ticketId)
    #endif
    {
      oprot_.WriteMessageBegin(new TMessage("findContactByUserTicket", TMessageType.Call, seqid_));
      findContactByUserTicket_args args = new findContactByUserTicket_args();
      args.TicketId = ticketId;
      args.Write(oprot_);
      oprot_.WriteMessageEnd();
      #if SILVERLIGHT
      return oprot_.Transport.BeginFlush(callback, state);
      #else
      oprot_.Transport.Flush();
      #endif
    }

    public Contact recv_findContactByUserTicket()
    {
      TMessage msg = iprot_.ReadMessageBegin();
      if (msg.Type == TMessageType.Exception) {
        TApplicationException x = TApplicationException.Read(iprot_);
        iprot_.ReadMessageEnd();
        throw x;
      }
      findContactByUserTicket_result result = new findContactByUserTicket_result();
      result.Read(iprot_);
      iprot_.ReadMessageEnd();
      if (result.__isset.success) {
        return result.Success;
      }
      if (result.__isset.e) {
        throw result.E;
      }
      throw new TApplicationException(TApplicationException.ExceptionType.MissingResult, "findContactByUserTicket failed: unknown result");
    }

    
    #if SILVERLIGHT
    public IAsyncResult Begin_findContactsByEmail(AsyncCallback callback, object state, THashSet<string> emails)
    {
      return send_findContactsByEmail(callback, state, emails);
    }

    public Dictionary<string, Contact> End_findContactsByEmail(IAsyncResult asyncResult)
    {
      oprot_.Transport.EndFlush(asyncResult);
      return recv_findContactsByEmail();
    }

    #endif

    public Dictionary<string, Contact> findContactsByEmail(THashSet<string> emails)
    {
      #if !SILVERLIGHT
      send_findContactsByEmail(emails);
      return recv_findContactsByEmail();

      #else
      var asyncResult = Begin_findContactsByEmail(null, null, emails);
      return End_findContactsByEmail(asyncResult);

      #endif
    }
    #if SILVERLIGHT
    public IAsyncResult send_findContactsByEmail(AsyncCallback callback, object state, THashSet<string> emails)
    #else
    public void send_findContactsByEmail(THashSet<string> emails)
    #endif
    {
      oprot_.WriteMessageBegin(new TMessage("findContactsByEmail", TMessageType.Call, seqid_));
      findContactsByEmail_args args = new findContactsByEmail_args();
      args.Emails = emails;
      args.Write(oprot_);
      oprot_.WriteMessageEnd();
      #if SILVERLIGHT
      return oprot_.Transport.BeginFlush(callback, state);
      #else
      oprot_.Transport.Flush();
      #endif
    }

    public Dictionary<string, Contact> recv_findContactsByEmail()
    {
      TMessage msg = iprot_.ReadMessageBegin();
      if (msg.Type == TMessageType.Exception) {
        TApplicationException x = TApplicationException.Read(iprot_);
        iprot_.ReadMessageEnd();
        throw x;
      }
      findContactsByEmail_result result = new findContactsByEmail_result();
      result.Read(iprot_);
      iprot_.ReadMessageEnd();
      if (result.__isset.success) {
        return result.Success;
      }
      if (result.__isset.e) {
        throw result.E;
      }
      throw new TApplicationException(TApplicationException.ExceptionType.MissingResult, "findContactsByEmail failed: unknown result");
    }

    
    #if SILVERLIGHT
    public IAsyncResult Begin_findContactsByPhone(AsyncCallback callback, object state, THashSet<string> phones)
    {
      return send_findContactsByPhone(callback, state, phones);
    }

    public Dictionary<string, Contact> End_findContactsByPhone(IAsyncResult asyncResult)
    {
      oprot_.Transport.EndFlush(asyncResult);
      return recv_findContactsByPhone();
    }

    #endif

    public Dictionary<string, Contact> findContactsByPhone(THashSet<string> phones)
    {
      #if !SILVERLIGHT
      send_findContactsByPhone(phones);
      return recv_findContactsByPhone();

      #else
      var asyncResult = Begin_findContactsByPhone(null, null, phones);
      return End_findContactsByPhone(asyncResult);

      #endif
    }
    #if SILVERLIGHT
    public IAsyncResult send_findContactsByPhone(AsyncCallback callback, object state, THashSet<string> phones)
    #else
    public void send_findContactsByPhone(THashSet<string> phones)
    #endif
    {
      oprot_.WriteMessageBegin(new TMessage("findContactsByPhone", TMessageType.Call, seqid_));
      findContactsByPhone_args args = new findContactsByPhone_args();
      args.Phones = phones;
      args.Write(oprot_);
      oprot_.WriteMessageEnd();
      #if SILVERLIGHT
      return oprot_.Transport.BeginFlush(callback, state);
      #else
      oprot_.Transport.Flush();
      #endif
    }

    public Dictionary<string, Contact> recv_findContactsByPhone()
    {
      TMessage msg = iprot_.ReadMessageBegin();
      if (msg.Type == TMessageType.Exception) {
        TApplicationException x = TApplicationException.Read(iprot_);
        iprot_.ReadMessageEnd();
        throw x;
      }
      findContactsByPhone_result result = new findContactsByPhone_result();
      result.Read(iprot_);
      iprot_.ReadMessageEnd();
      if (result.__isset.success) {
        return result.Success;
      }
      if (result.__isset.e) {
        throw result.E;
      }
      throw new TApplicationException(TApplicationException.ExceptionType.MissingResult, "findContactsByPhone failed: unknown result");
    }

    
    #if SILVERLIGHT
    public IAsyncResult Begin_generateUserTicket(AsyncCallback callback, object state, long expirationTime, int maxUseCount)
    {
      return send_generateUserTicket(callback, state, expirationTime, maxUseCount);
    }

    public Ticket End_generateUserTicket(IAsyncResult asyncResult)
    {
      oprot_.Transport.EndFlush(asyncResult);
      return recv_generateUserTicket();
    }

    #endif

    public Ticket generateUserTicket(long expirationTime, int maxUseCount)
    {
      #if !SILVERLIGHT
      send_generateUserTicket(expirationTime, maxUseCount);
      return recv_generateUserTicket();

      #else
      var asyncResult = Begin_generateUserTicket(null, null, expirationTime, maxUseCount);
      return End_generateUserTicket(asyncResult);

      #endif
    }
    #if SILVERLIGHT
    public IAsyncResult send_generateUserTicket(AsyncCallback callback, object state, long expirationTime, int maxUseCount)
    #else
    public void send_generateUserTicket(long expirationTime, int maxUseCount)
    #endif
    {
      oprot_.WriteMessageBegin(new TMessage("generateUserTicket", TMessageType.Call, seqid_));
      generateUserTicket_args args = new generateUserTicket_args();
      args.ExpirationTime = expirationTime;
      args.MaxUseCount = maxUseCount;
      args.Write(oprot_);
      oprot_.WriteMessageEnd();
      #if SILVERLIGHT
      return oprot_.Transport.BeginFlush(callback, state);
      #else
      oprot_.Transport.Flush();
      #endif
    }

    public Ticket recv_generateUserTicket()
    {
      TMessage msg = iprot_.ReadMessageBegin();
      if (msg.Type == TMessageType.Exception) {
        TApplicationException x = TApplicationException.Read(iprot_);
        iprot_.ReadMessageEnd();
        throw x;
      }
      generateUserTicket_result result = new generateUserTicket_result();
      result.Read(iprot_);
      iprot_.ReadMessageEnd();
      if (result.__isset.success) {
        return result.Success;
      }
      if (result.__isset.e) {
        throw result.E;
      }
      throw new TApplicationException(TApplicationException.ExceptionType.MissingResult, "generateUserTicket failed: unknown result");
    }

    
    #if SILVERLIGHT
    public IAsyncResult Begin_getAllContactIds(AsyncCallback callback, object state)
    {
      return send_getAllContactIds(callback, state);
    }

    public List<string> End_getAllContactIds(IAsyncResult asyncResult)
    {
      oprot_.Transport.EndFlush(asyncResult);
      return recv_getAllContactIds();
    }

    #endif

    public List<string> getAllContactIds()
    {
      #if !SILVERLIGHT
      send_getAllContactIds();
      return recv_getAllContactIds();

      #else
      var asyncResult = Begin_getAllContactIds(null, null);
      return End_getAllContactIds(asyncResult);

      #endif
    }
    #if SILVERLIGHT
    public IAsyncResult send_getAllContactIds(AsyncCallback callback, object state)
    #else
    public void send_getAllContactIds()
    #endif
    {
      oprot_.WriteMessageBegin(new TMessage("getAllContactIds", TMessageType.Call, seqid_));
      getAllContactIds_args args = new getAllContactIds_args();
      args.Write(oprot_);
      oprot_.WriteMessageEnd();
      #if SILVERLIGHT
      return oprot_.Transport.BeginFlush(callback, state);
      #else
      oprot_.Transport.Flush();
      #endif
    }

    public List<string> recv_getAllContactIds()
    {
      TMessage msg = iprot_.ReadMessageBegin();
      if (msg.Type == TMessageType.Exception) {
        TApplicationException x = TApplicationException.Read(iprot_);
        iprot_.ReadMessageEnd();
        throw x;
      }
      getAllContactIds_result result = new getAllContactIds_result();
      result.Read(iprot_);
      iprot_.ReadMessageEnd();
      if (result.__isset.success) {
        return result.Success;
      }
      if (result.__isset.e) {
        throw result.E;
      }
      throw new TApplicationException(TApplicationException.ExceptionType.MissingResult, "getAllContactIds failed: unknown result");
    }

    
    #if SILVERLIGHT
    public IAsyncResult Begin_getBlockedContactIds(AsyncCallback callback, object state)
    {
      return send_getBlockedContactIds(callback, state);
    }

    public List<string> End_getBlockedContactIds(IAsyncResult asyncResult)
    {
      oprot_.Transport.EndFlush(asyncResult);
      return recv_getBlockedContactIds();
    }

    #endif

    public List<string> getBlockedContactIds()
    {
      #if !SILVERLIGHT
      send_getBlockedContactIds();
      return recv_getBlockedContactIds();

      #else
      var asyncResult = Begin_getBlockedContactIds(null, null);
      return End_getBlockedContactIds(asyncResult);

      #endif
    }
    #if SILVERLIGHT
    public IAsyncResult send_getBlockedContactIds(AsyncCallback callback, object state)
    #else
    public void send_getBlockedContactIds()
    #endif
    {
      oprot_.WriteMessageBegin(new TMessage("getBlockedContactIds", TMessageType.Call, seqid_));
      getBlockedContactIds_args args = new getBlockedContactIds_args();
      args.Write(oprot_);
      oprot_.WriteMessageEnd();
      #if SILVERLIGHT
      return oprot_.Transport.BeginFlush(callback, state);
      #else
      oprot_.Transport.Flush();
      #endif
    }

    public List<string> recv_getBlockedContactIds()
    {
      TMessage msg = iprot_.ReadMessageBegin();
      if (msg.Type == TMessageType.Exception) {
        TApplicationException x = TApplicationException.Read(iprot_);
        iprot_.ReadMessageEnd();
        throw x;
      }
      getBlockedContactIds_result result = new getBlockedContactIds_result();
      result.Read(iprot_);
      iprot_.ReadMessageEnd();
      if (result.__isset.success) {
        return result.Success;
      }
      if (result.__isset.e) {
        throw result.E;
      }
      throw new TApplicationException(TApplicationException.ExceptionType.MissingResult, "getBlockedContactIds failed: unknown result");
    }

    
    #if SILVERLIGHT
    public IAsyncResult Begin_getBlockedContactIdsByRange(AsyncCallback callback, object state, int start, int count)
    {
      return send_getBlockedContactIdsByRange(callback, state, start, count);
    }

    public List<string> End_getBlockedContactIdsByRange(IAsyncResult asyncResult)
    {
      oprot_.Transport.EndFlush(asyncResult);
      return recv_getBlockedContactIdsByRange();
    }

    #endif

    public List<string> getBlockedContactIdsByRange(int start, int count)
    {
      #if !SILVERLIGHT
      send_getBlockedContactIdsByRange(start, count);
      return recv_getBlockedContactIdsByRange();

      #else
      var asyncResult = Begin_getBlockedContactIdsByRange(null, null, start, count);
      return End_getBlockedContactIdsByRange(asyncResult);

      #endif
    }
    #if SILVERLIGHT
    public IAsyncResult send_getBlockedContactIdsByRange(AsyncCallback callback, object state, int start, int count)
    #else
    public void send_getBlockedContactIdsByRange(int start, int count)
    #endif
    {
      oprot_.WriteMessageBegin(new TMessage("getBlockedContactIdsByRange", TMessageType.Call, seqid_));
      getBlockedContactIdsByRange_args args = new getBlockedContactIdsByRange_args();
      args.Start = start;
      args.Count = count;
      args.Write(oprot_);
      oprot_.WriteMessageEnd();
      #if SILVERLIGHT
      return oprot_.Transport.BeginFlush(callback, state);
      #else
      oprot_.Transport.Flush();
      #endif
    }

    public List<string> recv_getBlockedContactIdsByRange()
    {
      TMessage msg = iprot_.ReadMessageBegin();
      if (msg.Type == TMessageType.Exception) {
        TApplicationException x = TApplicationException.Read(iprot_);
        iprot_.ReadMessageEnd();
        throw x;
      }
      getBlockedContactIdsByRange_result result = new getBlockedContactIdsByRange_result();
      result.Read(iprot_);
      iprot_.ReadMessageEnd();
      if (result.__isset.success) {
        return result.Success;
      }
      if (result.__isset.e) {
        throw result.E;
      }
      throw new TApplicationException(TApplicationException.ExceptionType.MissingResult, "getBlockedContactIdsByRange failed: unknown result");
    }

    
    #if SILVERLIGHT
    public IAsyncResult Begin_getBlockedRecommendationIds(AsyncCallback callback, object state)
    {
      return send_getBlockedRecommendationIds(callback, state);
    }

    public List<string> End_getBlockedRecommendationIds(IAsyncResult asyncResult)
    {
      oprot_.Transport.EndFlush(asyncResult);
      return recv_getBlockedRecommendationIds();
    }

    #endif

    public List<string> getBlockedRecommendationIds()
    {
      #if !SILVERLIGHT
      send_getBlockedRecommendationIds();
      return recv_getBlockedRecommendationIds();

      #else
      var asyncResult = Begin_getBlockedRecommendationIds(null, null);
      return End_getBlockedRecommendationIds(asyncResult);

      #endif
    }
    #if SILVERLIGHT
    public IAsyncResult send_getBlockedRecommendationIds(AsyncCallback callback, object state)
    #else
    public void send_getBlockedRecommendationIds()
    #endif
    {
      oprot_.WriteMessageBegin(new TMessage("getBlockedRecommendationIds", TMessageType.Call, seqid_));
      getBlockedRecommendationIds_args args = new getBlockedRecommendationIds_args();
      args.Write(oprot_);
      oprot_.WriteMessageEnd();
      #if SILVERLIGHT
      return oprot_.Transport.BeginFlush(callback, state);
      #else
      oprot_.Transport.Flush();
      #endif
    }

    public List<string> recv_getBlockedRecommendationIds()
    {
      TMessage msg = iprot_.ReadMessageBegin();
      if (msg.Type == TMessageType.Exception) {
        TApplicationException x = TApplicationException.Read(iprot_);
        iprot_.ReadMessageEnd();
        throw x;
      }
      getBlockedRecommendationIds_result result = new getBlockedRecommendationIds_result();
      result.Read(iprot_);
      iprot_.ReadMessageEnd();
      if (result.__isset.success) {
        return result.Success;
      }
      if (result.__isset.e) {
        throw result.E;
      }
      throw new TApplicationException(TApplicationException.ExceptionType.MissingResult, "getBlockedRecommendationIds failed: unknown result");
    }

    
    #if SILVERLIGHT
    public IAsyncResult Begin_getContact(AsyncCallback callback, object state, string id)
    {
      return send_getContact(callback, state, id);
    }

    public Contact End_getContact(IAsyncResult asyncResult)
    {
      oprot_.Transport.EndFlush(asyncResult);
      return recv_getContact();
    }

    #endif

    public Contact getContact(string id)
    {
      #if !SILVERLIGHT
      send_getContact(id);
      return recv_getContact();

      #else
      var asyncResult = Begin_getContact(null, null, id);
      return End_getContact(asyncResult);

      #endif
    }
    #if SILVERLIGHT
    public IAsyncResult send_getContact(AsyncCallback callback, object state, string id)
    #else
    public void send_getContact(string id)
    #endif
    {
      oprot_.WriteMessageBegin(new TMessage("getContact", TMessageType.Call, seqid_));
      getContact_args args = new getContact_args();
      args.Id = id;
      args.Write(oprot_);
      oprot_.WriteMessageEnd();
      #if SILVERLIGHT
      return oprot_.Transport.BeginFlush(callback, state);
      #else
      oprot_.Transport.Flush();
      #endif
    }

    public Contact recv_getContact()
    {
      TMessage msg = iprot_.ReadMessageBegin();
      if (msg.Type == TMessageType.Exception) {
        TApplicationException x = TApplicationException.Read(iprot_);
        iprot_.ReadMessageEnd();
        throw x;
      }
      getContact_result result = new getContact_result();
      result.Read(iprot_);
      iprot_.ReadMessageEnd();
      if (result.__isset.success) {
        return result.Success;
      }
      if (result.__isset.e) {
        throw result.E;
      }
      throw new TApplicationException(TApplicationException.ExceptionType.MissingResult, "getContact failed: unknown result");
    }

    
    #if SILVERLIGHT
    public IAsyncResult Begin_getContacts(AsyncCallback callback, object state, List<string> ids)
    {
      return send_getContacts(callback, state, ids);
    }

    public List<Contact> End_getContacts(IAsyncResult asyncResult)
    {
      oprot_.Transport.EndFlush(asyncResult);
      return recv_getContacts();
    }

    #endif

    public List<Contact> getContacts(List<string> ids)
    {
      #if !SILVERLIGHT
      send_getContacts(ids);
      return recv_getContacts();

      #else
      var asyncResult = Begin_getContacts(null, null, ids);
      return End_getContacts(asyncResult);

      #endif
    }
    #if SILVERLIGHT
    public IAsyncResult send_getContacts(AsyncCallback callback, object state, List<string> ids)
    #else
    public void send_getContacts(List<string> ids)
    #endif
    {
      oprot_.WriteMessageBegin(new TMessage("getContacts", TMessageType.Call, seqid_));
      getContacts_args args = new getContacts_args();
      args.Ids = ids;
      args.Write(oprot_);
      oprot_.WriteMessageEnd();
      #if SILVERLIGHT
      return oprot_.Transport.BeginFlush(callback, state);
      #else
      oprot_.Transport.Flush();
      #endif
    }

    public List<Contact> recv_getContacts()
    {
      TMessage msg = iprot_.ReadMessageBegin();
      if (msg.Type == TMessageType.Exception) {
        TApplicationException x = TApplicationException.Read(iprot_);
        iprot_.ReadMessageEnd();
        throw x;
      }
      getContacts_result result = new getContacts_result();
      result.Read(iprot_);
      iprot_.ReadMessageEnd();
      if (result.__isset.success) {
        return result.Success;
      }
      if (result.__isset.e) {
        throw result.E;
      }
      throw new TApplicationException(TApplicationException.ExceptionType.MissingResult, "getContacts failed: unknown result");
    }

    
    #if SILVERLIGHT
    public IAsyncResult Begin_getGroup(AsyncCallback callback, object state, string groupId)
    {
      return send_getGroup(callback, state, groupId);
    }

    public @Group End_getGroup(IAsyncResult asyncResult)
    {
      oprot_.Transport.EndFlush(asyncResult);
      return recv_getGroup();
    }

    #endif

    public @Group getGroup(string groupId)
    {
      #if !SILVERLIGHT
      send_getGroup(groupId);
      return recv_getGroup();

      #else
      var asyncResult = Begin_getGroup(null, null, groupId);
      return End_getGroup(asyncResult);

      #endif
    }
    #if SILVERLIGHT
    public IAsyncResult send_getGroup(AsyncCallback callback, object state, string groupId)
    #else
    public void send_getGroup(string groupId)
    #endif
    {
      oprot_.WriteMessageBegin(new TMessage("getGroup", TMessageType.Call, seqid_));
      getGroup_args args = new getGroup_args();
      args.GroupId = groupId;
      args.Write(oprot_);
      oprot_.WriteMessageEnd();
      #if SILVERLIGHT
      return oprot_.Transport.BeginFlush(callback, state);
      #else
      oprot_.Transport.Flush();
      #endif
    }

    public @Group recv_getGroup()
    {
      TMessage msg = iprot_.ReadMessageBegin();
      if (msg.Type == TMessageType.Exception) {
        TApplicationException x = TApplicationException.Read(iprot_);
        iprot_.ReadMessageEnd();
        throw x;
      }
      getGroup_result result = new getGroup_result();
      result.Read(iprot_);
      iprot_.ReadMessageEnd();
      if (result.__isset.success) {
        return result.Success;
      }
      if (result.__isset.e) {
        throw result.E;
      }
      throw new TApplicationException(TApplicationException.ExceptionType.MissingResult, "getGroup failed: unknown result");
    }

    
    #if SILVERLIGHT
    public IAsyncResult Begin_getGroupIdsInvited(AsyncCallback callback, object state)
    {
      return send_getGroupIdsInvited(callback, state);
    }

    public List<string> End_getGroupIdsInvited(IAsyncResult asyncResult)
    {
      oprot_.Transport.EndFlush(asyncResult);
      return recv_getGroupIdsInvited();
    }

    #endif

    public List<string> getGroupIdsInvited()
    {
      #if !SILVERLIGHT
      send_getGroupIdsInvited();
      return recv_getGroupIdsInvited();

      #else
      var asyncResult = Begin_getGroupIdsInvited(null, null);
      return End_getGroupIdsInvited(asyncResult);

      #endif
    }
    #if SILVERLIGHT
    public IAsyncResult send_getGroupIdsInvited(AsyncCallback callback, object state)
    #else
    public void send_getGroupIdsInvited()
    #endif
    {
      oprot_.WriteMessageBegin(new TMessage("getGroupIdsInvited", TMessageType.Call, seqid_));
      getGroupIdsInvited_args args = new getGroupIdsInvited_args();
      args.Write(oprot_);
      oprot_.WriteMessageEnd();
      #if SILVERLIGHT
      return oprot_.Transport.BeginFlush(callback, state);
      #else
      oprot_.Transport.Flush();
      #endif
    }

    public List<string> recv_getGroupIdsInvited()
    {
      TMessage msg = iprot_.ReadMessageBegin();
      if (msg.Type == TMessageType.Exception) {
        TApplicationException x = TApplicationException.Read(iprot_);
        iprot_.ReadMessageEnd();
        throw x;
      }
      getGroupIdsInvited_result result = new getGroupIdsInvited_result();
      result.Read(iprot_);
      iprot_.ReadMessageEnd();
      if (result.__isset.success) {
        return result.Success;
      }
      if (result.__isset.e) {
        throw result.E;
      }
      throw new TApplicationException(TApplicationException.ExceptionType.MissingResult, "getGroupIdsInvited failed: unknown result");
    }

    
    #if SILVERLIGHT
    public IAsyncResult Begin_getGroupIdsJoined(AsyncCallback callback, object state)
    {
      return send_getGroupIdsJoined(callback, state);
    }

    public List<string> End_getGroupIdsJoined(IAsyncResult asyncResult)
    {
      oprot_.Transport.EndFlush(asyncResult);
      return recv_getGroupIdsJoined();
    }

    #endif

    public List<string> getGroupIdsJoined()
    {
      #if !SILVERLIGHT
      send_getGroupIdsJoined();
      return recv_getGroupIdsJoined();

      #else
      var asyncResult = Begin_getGroupIdsJoined(null, null);
      return End_getGroupIdsJoined(asyncResult);

      #endif
    }
    #if SILVERLIGHT
    public IAsyncResult send_getGroupIdsJoined(AsyncCallback callback, object state)
    #else
    public void send_getGroupIdsJoined()
    #endif
    {
      oprot_.WriteMessageBegin(new TMessage("getGroupIdsJoined", TMessageType.Call, seqid_));
      getGroupIdsJoined_args args = new getGroupIdsJoined_args();
      args.Write(oprot_);
      oprot_.WriteMessageEnd();
      #if SILVERLIGHT
      return oprot_.Transport.BeginFlush(callback, state);
      #else
      oprot_.Transport.Flush();
      #endif
    }

    public List<string> recv_getGroupIdsJoined()
    {
      TMessage msg = iprot_.ReadMessageBegin();
      if (msg.Type == TMessageType.Exception) {
        TApplicationException x = TApplicationException.Read(iprot_);
        iprot_.ReadMessageEnd();
        throw x;
      }
      getGroupIdsJoined_result result = new getGroupIdsJoined_result();
      result.Read(iprot_);
      iprot_.ReadMessageEnd();
      if (result.__isset.success) {
        return result.Success;
      }
      if (result.__isset.e) {
        throw result.E;
      }
      throw new TApplicationException(TApplicationException.ExceptionType.MissingResult, "getGroupIdsJoined failed: unknown result");
    }

    
    #if SILVERLIGHT
    public IAsyncResult Begin_getGroups(AsyncCallback callback, object state, List<string> groupIds)
    {
      return send_getGroups(callback, state, groupIds);
    }

    public List<@Group> End_getGroups(IAsyncResult asyncResult)
    {
      oprot_.Transport.EndFlush(asyncResult);
      return recv_getGroups();
    }

    #endif

    public List<@Group> getGroups(List<string> groupIds)
    {
      #if !SILVERLIGHT
      send_getGroups(groupIds);
      return recv_getGroups();

      #else
      var asyncResult = Begin_getGroups(null, null, groupIds);
      return End_getGroups(asyncResult);

      #endif
    }
    #if SILVERLIGHT
    public IAsyncResult send_getGroups(AsyncCallback callback, object state, List<string> groupIds)
    #else
    public void send_getGroups(List<string> groupIds)
    #endif
    {
      oprot_.WriteMessageBegin(new TMessage("getGroups", TMessageType.Call, seqid_));
      getGroups_args args = new getGroups_args();
      args.GroupIds = groupIds;
      args.Write(oprot_);
      oprot_.WriteMessageEnd();
      #if SILVERLIGHT
      return oprot_.Transport.BeginFlush(callback, state);
      #else
      oprot_.Transport.Flush();
      #endif
    }

    public List<@Group> recv_getGroups()
    {
      TMessage msg = iprot_.ReadMessageBegin();
      if (msg.Type == TMessageType.Exception) {
        TApplicationException x = TApplicationException.Read(iprot_);
        iprot_.ReadMessageEnd();
        throw x;
      }
      getGroups_result result = new getGroups_result();
      result.Read(iprot_);
      iprot_.ReadMessageEnd();
      if (result.__isset.success) {
        return result.Success;
      }
      if (result.__isset.e) {
        throw result.E;
      }
      throw new TApplicationException(TApplicationException.ExceptionType.MissingResult, "getGroups failed: unknown result");
    }

    
    #if SILVERLIGHT
    public IAsyncResult Begin_getFavoriteMids(AsyncCallback callback, object state)
    {
      return send_getFavoriteMids(callback, state);
    }

    public List<string> End_getFavoriteMids(IAsyncResult asyncResult)
    {
      oprot_.Transport.EndFlush(asyncResult);
      return recv_getFavoriteMids();
    }

    #endif

    public List<string> getFavoriteMids()
    {
      #if !SILVERLIGHT
      send_getFavoriteMids();
      return recv_getFavoriteMids();

      #else
      var asyncResult = Begin_getFavoriteMids(null, null);
      return End_getFavoriteMids(asyncResult);

      #endif
    }
    #if SILVERLIGHT
    public IAsyncResult send_getFavoriteMids(AsyncCallback callback, object state)
    #else
    public void send_getFavoriteMids()
    #endif
    {
      oprot_.WriteMessageBegin(new TMessage("getFavoriteMids", TMessageType.Call, seqid_));
      getFavoriteMids_args args = new getFavoriteMids_args();
      args.Write(oprot_);
      oprot_.WriteMessageEnd();
      #if SILVERLIGHT
      return oprot_.Transport.BeginFlush(callback, state);
      #else
      oprot_.Transport.Flush();
      #endif
    }

    public List<string> recv_getFavoriteMids()
    {
      TMessage msg = iprot_.ReadMessageBegin();
      if (msg.Type == TMessageType.Exception) {
        TApplicationException x = TApplicationException.Read(iprot_);
        iprot_.ReadMessageEnd();
        throw x;
      }
      getFavoriteMids_result result = new getFavoriteMids_result();
      result.Read(iprot_);
      iprot_.ReadMessageEnd();
      if (result.__isset.success) {
        return result.Success;
      }
      if (result.__isset.e) {
        throw result.E;
      }
      throw new TApplicationException(TApplicationException.ExceptionType.MissingResult, "getFavoriteMids failed: unknown result");
    }

    
    #if SILVERLIGHT
    public IAsyncResult Begin_getHiddenContactMids(AsyncCallback callback, object state)
    {
      return send_getHiddenContactMids(callback, state);
    }

    public List<string> End_getHiddenContactMids(IAsyncResult asyncResult)
    {
      oprot_.Transport.EndFlush(asyncResult);
      return recv_getHiddenContactMids();
    }

    #endif

    public List<string> getHiddenContactMids()
    {
      #if !SILVERLIGHT
      send_getHiddenContactMids();
      return recv_getHiddenContactMids();

      #else
      var asyncResult = Begin_getHiddenContactMids(null, null);
      return End_getHiddenContactMids(asyncResult);

      #endif
    }
    #if SILVERLIGHT
    public IAsyncResult send_getHiddenContactMids(AsyncCallback callback, object state)
    #else
    public void send_getHiddenContactMids()
    #endif
    {
      oprot_.WriteMessageBegin(new TMessage("getHiddenContactMids", TMessageType.Call, seqid_));
      getHiddenContactMids_args args = new getHiddenContactMids_args();
      args.Write(oprot_);
      oprot_.WriteMessageEnd();
      #if SILVERLIGHT
      return oprot_.Transport.BeginFlush(callback, state);
      #else
      oprot_.Transport.Flush();
      #endif
    }

    public List<string> recv_getHiddenContactMids()
    {
      TMessage msg = iprot_.ReadMessageBegin();
      if (msg.Type == TMessageType.Exception) {
        TApplicationException x = TApplicationException.Read(iprot_);
        iprot_.ReadMessageEnd();
        throw x;
      }
      getHiddenContactMids_result result = new getHiddenContactMids_result();
      result.Read(iprot_);
      iprot_.ReadMessageEnd();
      if (result.__isset.success) {
        return result.Success;
      }
      if (result.__isset.e) {
        throw result.E;
      }
      throw new TApplicationException(TApplicationException.ExceptionType.MissingResult, "getHiddenContactMids failed: unknown result");
    }

    
    #if SILVERLIGHT
    public IAsyncResult Begin_getLastOpRevision(AsyncCallback callback, object state)
    {
      return send_getLastOpRevision(callback, state);
    }

    public long End_getLastOpRevision(IAsyncResult asyncResult)
    {
      oprot_.Transport.EndFlush(asyncResult);
      return recv_getLastOpRevision();
    }

    #endif

    public long getLastOpRevision()
    {
      #if !SILVERLIGHT
      send_getLastOpRevision();
      return recv_getLastOpRevision();

      #else
      var asyncResult = Begin_getLastOpRevision(null, null);
      return End_getLastOpRevision(asyncResult);

      #endif
    }
    #if SILVERLIGHT
    public IAsyncResult send_getLastOpRevision(AsyncCallback callback, object state)
    #else
    public void send_getLastOpRevision()
    #endif
    {
      oprot_.WriteMessageBegin(new TMessage("getLastOpRevision", TMessageType.Call, seqid_));
      getLastOpRevision_args args = new getLastOpRevision_args();
      args.Write(oprot_);
      oprot_.WriteMessageEnd();
      #if SILVERLIGHT
      return oprot_.Transport.BeginFlush(callback, state);
      #else
      oprot_.Transport.Flush();
      #endif
    }

    public long recv_getLastOpRevision()
    {
      TMessage msg = iprot_.ReadMessageBegin();
      if (msg.Type == TMessageType.Exception) {
        TApplicationException x = TApplicationException.Read(iprot_);
        iprot_.ReadMessageEnd();
        throw x;
      }
      getLastOpRevision_result result = new getLastOpRevision_result();
      result.Read(iprot_);
      iprot_.ReadMessageEnd();
      if (result.__isset.success) {
        return result.Success;
      }
      if (result.__isset.e) {
        throw result.E;
      }
      throw new TApplicationException(TApplicationException.ExceptionType.MissingResult, "getLastOpRevision failed: unknown result");
    }

    
    #if SILVERLIGHT
    public IAsyncResult Begin_getRoom(AsyncCallback callback, object state, string roomId)
    {
      return send_getRoom(callback, state, roomId);
    }

    public Room End_getRoom(IAsyncResult asyncResult)
    {
      oprot_.Transport.EndFlush(asyncResult);
      return recv_getRoom();
    }

    #endif

    public Room getRoom(string roomId)
    {
      #if !SILVERLIGHT
      send_getRoom(roomId);
      return recv_getRoom();

      #else
      var asyncResult = Begin_getRoom(null, null, roomId);
      return End_getRoom(asyncResult);

      #endif
    }
    #if SILVERLIGHT
    public IAsyncResult send_getRoom(AsyncCallback callback, object state, string roomId)
    #else
    public void send_getRoom(string roomId)
    #endif
    {
      oprot_.WriteMessageBegin(new TMessage("getRoom", TMessageType.Call, seqid_));
      getRoom_args args = new getRoom_args();
      args.RoomId = roomId;
      args.Write(oprot_);
      oprot_.WriteMessageEnd();
      #if SILVERLIGHT
      return oprot_.Transport.BeginFlush(callback, state);
      #else
      oprot_.Transport.Flush();
      #endif
    }

    public Room recv_getRoom()
    {
      TMessage msg = iprot_.ReadMessageBegin();
      if (msg.Type == TMessageType.Exception) {
        TApplicationException x = TApplicationException.Read(iprot_);
        iprot_.ReadMessageEnd();
        throw x;
      }
      getRoom_result result = new getRoom_result();
      result.Read(iprot_);
      iprot_.ReadMessageEnd();
      if (result.__isset.success) {
        return result.Success;
      }
      if (result.__isset.e) {
        throw result.E;
      }
      throw new TApplicationException(TApplicationException.ExceptionType.MissingResult, "getRoom failed: unknown result");
    }

    
    #if SILVERLIGHT
    public IAsyncResult Begin_getRSAKeyInfo(AsyncCallback callback, object state, IdentityProvider provider)
    {
      return send_getRSAKeyInfo(callback, state, provider);
    }

    public RSAKey End_getRSAKeyInfo(IAsyncResult asyncResult)
    {
      oprot_.Transport.EndFlush(asyncResult);
      return recv_getRSAKeyInfo();
    }

    #endif

    public RSAKey getRSAKeyInfo(IdentityProvider provider)
    {
      #if !SILVERLIGHT
      send_getRSAKeyInfo(provider);
      return recv_getRSAKeyInfo();

      #else
      var asyncResult = Begin_getRSAKeyInfo(null, null, provider);
      return End_getRSAKeyInfo(asyncResult);

      #endif
    }
    #if SILVERLIGHT
    public IAsyncResult send_getRSAKeyInfo(AsyncCallback callback, object state, IdentityProvider provider)
    #else
    public void send_getRSAKeyInfo(IdentityProvider provider)
    #endif
    {
      oprot_.WriteMessageBegin(new TMessage("getRSAKeyInfo", TMessageType.Call, seqid_));
      getRSAKeyInfo_args args = new getRSAKeyInfo_args();
      args.Provider = provider;
      args.Write(oprot_);
      oprot_.WriteMessageEnd();
      #if SILVERLIGHT
      return oprot_.Transport.BeginFlush(callback, state);
      #else
      oprot_.Transport.Flush();
      #endif
    }

    public RSAKey recv_getRSAKeyInfo()
    {
      TMessage msg = iprot_.ReadMessageBegin();
      if (msg.Type == TMessageType.Exception) {
        TApplicationException x = TApplicationException.Read(iprot_);
        iprot_.ReadMessageEnd();
        throw x;
      }
      getRSAKeyInfo_result result = new getRSAKeyInfo_result();
      result.Read(iprot_);
      iprot_.ReadMessageEnd();
      if (result.__isset.success) {
        return result.Success;
      }
      if (result.__isset.e) {
        throw result.E;
      }
      throw new TApplicationException(TApplicationException.ExceptionType.MissingResult, "getRSAKeyInfo failed: unknown result");
    }

    
    #if SILVERLIGHT
    public IAsyncResult Begin_getServerTime(AsyncCallback callback, object state)
    {
      return send_getServerTime(callback, state);
    }

    public long End_getServerTime(IAsyncResult asyncResult)
    {
      oprot_.Transport.EndFlush(asyncResult);
      return recv_getServerTime();
    }

    #endif

    public long getServerTime()
    {
      #if !SILVERLIGHT
      send_getServerTime();
      return recv_getServerTime();

      #else
      var asyncResult = Begin_getServerTime(null, null);
      return End_getServerTime(asyncResult);

      #endif
    }
    #if SILVERLIGHT
    public IAsyncResult send_getServerTime(AsyncCallback callback, object state)
    #else
    public void send_getServerTime()
    #endif
    {
      oprot_.WriteMessageBegin(new TMessage("getServerTime", TMessageType.Call, seqid_));
      getServerTime_args args = new getServerTime_args();
      args.Write(oprot_);
      oprot_.WriteMessageEnd();
      #if SILVERLIGHT
      return oprot_.Transport.BeginFlush(callback, state);
      #else
      oprot_.Transport.Flush();
      #endif
    }

    public long recv_getServerTime()
    {
      TMessage msg = iprot_.ReadMessageBegin();
      if (msg.Type == TMessageType.Exception) {
        TApplicationException x = TApplicationException.Read(iprot_);
        iprot_.ReadMessageEnd();
        throw x;
      }
      getServerTime_result result = new getServerTime_result();
      result.Read(iprot_);
      iprot_.ReadMessageEnd();
      if (result.__isset.success) {
        return result.Success;
      }
      if (result.__isset.e) {
        throw result.E;
      }
      throw new TApplicationException(TApplicationException.ExceptionType.MissingResult, "getServerTime failed: unknown result");
    }

    
    #if SILVERLIGHT
    public IAsyncResult Begin_getSessions(AsyncCallback callback, object state)
    {
      return send_getSessions(callback, state);
    }

    public List<LoginSession> End_getSessions(IAsyncResult asyncResult)
    {
      oprot_.Transport.EndFlush(asyncResult);
      return recv_getSessions();
    }

    #endif

    public List<LoginSession> getSessions()
    {
      #if !SILVERLIGHT
      send_getSessions();
      return recv_getSessions();

      #else
      var asyncResult = Begin_getSessions(null, null);
      return End_getSessions(asyncResult);

      #endif
    }
    #if SILVERLIGHT
    public IAsyncResult send_getSessions(AsyncCallback callback, object state)
    #else
    public void send_getSessions()
    #endif
    {
      oprot_.WriteMessageBegin(new TMessage("getSessions", TMessageType.Call, seqid_));
      getSessions_args args = new getSessions_args();
      args.Write(oprot_);
      oprot_.WriteMessageEnd();
      #if SILVERLIGHT
      return oprot_.Transport.BeginFlush(callback, state);
      #else
      oprot_.Transport.Flush();
      #endif
    }

    public List<LoginSession> recv_getSessions()
    {
      TMessage msg = iprot_.ReadMessageBegin();
      if (msg.Type == TMessageType.Exception) {
        TApplicationException x = TApplicationException.Read(iprot_);
        iprot_.ReadMessageEnd();
        throw x;
      }
      getSessions_result result = new getSessions_result();
      result.Read(iprot_);
      iprot_.ReadMessageEnd();
      if (result.__isset.success) {
        return result.Success;
      }
      if (result.__isset.e) {
        throw result.E;
      }
      throw new TApplicationException(TApplicationException.ExceptionType.MissingResult, "getSessions failed: unknown result");
    }

    
    #if SILVERLIGHT
    public IAsyncResult Begin_leaveGroup(AsyncCallback callback, object state, int reqSeq, string groupId)
    {
      return send_leaveGroup(callback, state, reqSeq, groupId);
    }

    public void End_leaveGroup(IAsyncResult asyncResult)
    {
      oprot_.Transport.EndFlush(asyncResult);
      recv_leaveGroup();
    }

    #endif

    public void leaveGroup(int reqSeq, string groupId)
    {
      #if !SILVERLIGHT
      send_leaveGroup(reqSeq, groupId);
      recv_leaveGroup();

      #else
      var asyncResult = Begin_leaveGroup(null, null, reqSeq, groupId);
      End_leaveGroup(asyncResult);

      #endif
    }
    #if SILVERLIGHT
    public IAsyncResult send_leaveGroup(AsyncCallback callback, object state, int reqSeq, string groupId)
    #else
    public void send_leaveGroup(int reqSeq, string groupId)
    #endif
    {
      oprot_.WriteMessageBegin(new TMessage("leaveGroup", TMessageType.Call, seqid_));
      leaveGroup_args args = new leaveGroup_args();
      args.ReqSeq = reqSeq;
      args.GroupId = groupId;
      args.Write(oprot_);
      oprot_.WriteMessageEnd();
      #if SILVERLIGHT
      return oprot_.Transport.BeginFlush(callback, state);
      #else
      oprot_.Transport.Flush();
      #endif
    }

    public void recv_leaveGroup()
    {
      TMessage msg = iprot_.ReadMessageBegin();
      if (msg.Type == TMessageType.Exception) {
        TApplicationException x = TApplicationException.Read(iprot_);
        iprot_.ReadMessageEnd();
        throw x;
      }
      leaveGroup_result result = new leaveGroup_result();
      result.Read(iprot_);
      iprot_.ReadMessageEnd();
      if (result.__isset.e) {
        throw result.E;
      }
      return;
    }

    
    #if SILVERLIGHT
    public IAsyncResult Begin_loginZ(AsyncCallback callback, object state, loginRequest LoginRequest)
    {
      return send_loginZ(callback, state, LoginRequest);
    }

    public LoginResult End_loginZ(IAsyncResult asyncResult)
    {
      oprot_.Transport.EndFlush(asyncResult);
      return recv_loginZ();
    }

    #endif

    public LoginResult loginZ(loginRequest LoginRequest)
    {
      #if !SILVERLIGHT
      send_loginZ(LoginRequest);
      return recv_loginZ();

      #else
      var asyncResult = Begin_loginZ(null, null, LoginRequest);
      return End_loginZ(asyncResult);

      #endif
    }
    #if SILVERLIGHT
    public IAsyncResult send_loginZ(AsyncCallback callback, object state, loginRequest LoginRequest)
    #else
    public void send_loginZ(loginRequest LoginRequest)
    #endif
    {
      oprot_.WriteMessageBegin(new TMessage("loginZ", TMessageType.Call, seqid_));
      loginZ_args args = new loginZ_args();
      args.LoginRequest = LoginRequest;
      args.Write(oprot_);
      oprot_.WriteMessageEnd();
      #if SILVERLIGHT
      return oprot_.Transport.BeginFlush(callback, state);
      #else
      oprot_.Transport.Flush();
      #endif
    }

    public LoginResult recv_loginZ()
    {
      TMessage msg = iprot_.ReadMessageBegin();
      if (msg.Type == TMessageType.Exception) {
        TApplicationException x = TApplicationException.Read(iprot_);
        iprot_.ReadMessageEnd();
        throw x;
      }
      loginZ_result result = new loginZ_result();
      result.Read(iprot_);
      iprot_.ReadMessageEnd();
      if (result.__isset.success) {
        return result.Success;
      }
      if (result.__isset.e) {
        throw result.E;
      }
      throw new TApplicationException(TApplicationException.ExceptionType.MissingResult, "loginZ failed: unknown result");
    }

    
    #if SILVERLIGHT
    public IAsyncResult Begin_logout(AsyncCallback callback, object state)
    {
      return send_logout(callback, state);
    }

    public void End_logout(IAsyncResult asyncResult)
    {
      oprot_.Transport.EndFlush(asyncResult);
      recv_logout();
    }

    #endif

    public void logout()
    {
      #if !SILVERLIGHT
      send_logout();
      recv_logout();

      #else
      var asyncResult = Begin_logout(null, null);
      End_logout(asyncResult);

      #endif
    }
    #if SILVERLIGHT
    public IAsyncResult send_logout(AsyncCallback callback, object state)
    #else
    public void send_logout()
    #endif
    {
      oprot_.WriteMessageBegin(new TMessage("logout", TMessageType.Call, seqid_));
      logout_args args = new logout_args();
      args.Write(oprot_);
      oprot_.WriteMessageEnd();
      #if SILVERLIGHT
      return oprot_.Transport.BeginFlush(callback, state);
      #else
      oprot_.Transport.Flush();
      #endif
    }

    public void recv_logout()
    {
      TMessage msg = iprot_.ReadMessageBegin();
      if (msg.Type == TMessageType.Exception) {
        TApplicationException x = TApplicationException.Read(iprot_);
        iprot_.ReadMessageEnd();
        throw x;
      }
      logout_result result = new logout_result();
      result.Read(iprot_);
      iprot_.ReadMessageEnd();
      if (result.__isset.e) {
        throw result.E;
      }
      return;
    }

    
    #if SILVERLIGHT
    public IAsyncResult Begin_logoutSession(AsyncCallback callback, object state, string tokenKey)
    {
      return send_logoutSession(callback, state, tokenKey);
    }

    public void End_logoutSession(IAsyncResult asyncResult)
    {
      oprot_.Transport.EndFlush(asyncResult);
      recv_logoutSession();
    }

    #endif

    public void logoutSession(string tokenKey)
    {
      #if !SILVERLIGHT
      send_logoutSession(tokenKey);
      recv_logoutSession();

      #else
      var asyncResult = Begin_logoutSession(null, null, tokenKey);
      End_logoutSession(asyncResult);

      #endif
    }
    #if SILVERLIGHT
    public IAsyncResult send_logoutSession(AsyncCallback callback, object state, string tokenKey)
    #else
    public void send_logoutSession(string tokenKey)
    #endif
    {
      oprot_.WriteMessageBegin(new TMessage("logoutSession", TMessageType.Call, seqid_));
      logoutSession_args args = new logoutSession_args();
      args.TokenKey = tokenKey;
      args.Write(oprot_);
      oprot_.WriteMessageEnd();
      #if SILVERLIGHT
      return oprot_.Transport.BeginFlush(callback, state);
      #else
      oprot_.Transport.Flush();
      #endif
    }

    public void recv_logoutSession()
    {
      TMessage msg = iprot_.ReadMessageBegin();
      if (msg.Type == TMessageType.Exception) {
        TApplicationException x = TApplicationException.Read(iprot_);
        iprot_.ReadMessageEnd();
        throw x;
      }
      logoutSession_result result = new logoutSession_result();
      result.Read(iprot_);
      iprot_.ReadMessageEnd();
      if (result.__isset.e) {
        throw result.E;
      }
      return;
    }

    
    #if SILVERLIGHT
    public IAsyncResult Begin_sendMessage(AsyncCallback callback, object state, int seq, Message message)
    {
      return send_sendMessage(callback, state, seq, message);
    }

    public Message End_sendMessage(IAsyncResult asyncResult)
    {
      oprot_.Transport.EndFlush(asyncResult);
      return recv_sendMessage();
    }

    #endif

    public Message sendMessage(int seq, Message message)
    {
      #if !SILVERLIGHT
      send_sendMessage(seq, message);
      return recv_sendMessage();

      #else
      var asyncResult = Begin_sendMessage(null, null, seq, message);
      return End_sendMessage(asyncResult);

      #endif
    }
    #if SILVERLIGHT
    public IAsyncResult send_sendMessage(AsyncCallback callback, object state, int seq, Message message)
    #else
    public void send_sendMessage(int seq, Message message)
    #endif
    {
      oprot_.WriteMessageBegin(new TMessage("sendMessage", TMessageType.Call, seqid_));
      sendMessage_args args = new sendMessage_args();
      args.Seq = seq;
      args.Message = message;
      args.Write(oprot_);
      oprot_.WriteMessageEnd();
      #if SILVERLIGHT
      return oprot_.Transport.BeginFlush(callback, state);
      #else
      oprot_.Transport.Flush();
      #endif
    }

    public Message recv_sendMessage()
    {
      TMessage msg = iprot_.ReadMessageBegin();
      if (msg.Type == TMessageType.Exception) {
        TApplicationException x = TApplicationException.Read(iprot_);
        iprot_.ReadMessageEnd();
        throw x;
      }
      sendMessage_result result = new sendMessage_result();
      result.Read(iprot_);
      iprot_.ReadMessageEnd();
      if (result.__isset.success) {
        return result.Success;
      }
      if (result.__isset.e) {
        throw result.E;
      }
      throw new TApplicationException(TApplicationException.ExceptionType.MissingResult, "sendMessage failed: unknown result");
    }

  }
  public class Processor : TProcessor {
    public Processor(ISync iface)
    {
      iface_ = iface;
      processMap_["acceptGroupInvitation"] = acceptGroupInvitation_Process;
      processMap_["createGroup"] = createGroup_Process;
      processMap_["createQrcodeBase64Image"] = createQrcodeBase64Image_Process;
      processMap_["createRoom"] = createRoom_Process;
      processMap_["createSession"] = createSession_Process;
      processMap_["fetchOperations"] = fetchOperations_Process;
      processMap_["getProfile"] = getProfile_Process;
      processMap_["findAndAddContactsByEmail"] = findAndAddContactsByEmail_Process;
      processMap_["findAndAddContactsByMid"] = findAndAddContactsByMid_Process;
      processMap_["findAndAddContactsByPhone"] = findAndAddContactsByPhone_Process;
      processMap_["findAndAddContactsByUserid"] = findAndAddContactsByUserid_Process;
      processMap_["findContactByUserid"] = findContactByUserid_Process;
      processMap_["findContactByUserTicket"] = findContactByUserTicket_Process;
      processMap_["findContactsByEmail"] = findContactsByEmail_Process;
      processMap_["findContactsByPhone"] = findContactsByPhone_Process;
      processMap_["generateUserTicket"] = generateUserTicket_Process;
      processMap_["getAllContactIds"] = getAllContactIds_Process;
      processMap_["getBlockedContactIds"] = getBlockedContactIds_Process;
      processMap_["getBlockedContactIdsByRange"] = getBlockedContactIdsByRange_Process;
      processMap_["getBlockedRecommendationIds"] = getBlockedRecommendationIds_Process;
      processMap_["getContact"] = getContact_Process;
      processMap_["getContacts"] = getContacts_Process;
      processMap_["getGroup"] = getGroup_Process;
      processMap_["getGroupIdsInvited"] = getGroupIdsInvited_Process;
      processMap_["getGroupIdsJoined"] = getGroupIdsJoined_Process;
      processMap_["getGroups"] = getGroups_Process;
      processMap_["getFavoriteMids"] = getFavoriteMids_Process;
      processMap_["getHiddenContactMids"] = getHiddenContactMids_Process;
      processMap_["getLastOpRevision"] = getLastOpRevision_Process;
      processMap_["getRoom"] = getRoom_Process;
      processMap_["getRSAKeyInfo"] = getRSAKeyInfo_Process;
      processMap_["getServerTime"] = getServerTime_Process;
      processMap_["getSessions"] = getSessions_Process;
      processMap_["leaveGroup"] = leaveGroup_Process;
      processMap_["loginZ"] = loginZ_Process;
      processMap_["logout"] = logout_Process;
      processMap_["logoutSession"] = logoutSession_Process;
      processMap_["sendMessage"] = sendMessage_Process;
    }

    protected delegate void ProcessFunction(int seqid, TProtocol iprot, TProtocol oprot);
    private ISync iface_;
    protected Dictionary<string, ProcessFunction> processMap_ = new Dictionary<string, ProcessFunction>();

    public bool Process(TProtocol iprot, TProtocol oprot)
    {
      try
      {
        TMessage msg = iprot.ReadMessageBegin();
        ProcessFunction fn;
        processMap_.TryGetValue(msg.Name, out fn);
        if (fn == null) {
          TProtocolUtil.Skip(iprot, TType.Struct);
          iprot.ReadMessageEnd();
          TApplicationException x = new TApplicationException (TApplicationException.ExceptionType.UnknownMethod, "Invalid method name: '" + msg.Name + "'");
          oprot.WriteMessageBegin(new TMessage(msg.Name, TMessageType.Exception, msg.SeqID));
          x.Write(oprot);
          oprot.WriteMessageEnd();
          oprot.Transport.Flush();
          return true;
        }
        fn(msg.SeqID, iprot, oprot);
      }
      catch (IOException)
      {
        return false;
      }
      return true;
    }

    public void acceptGroupInvitation_Process(int seqid, TProtocol iprot, TProtocol oprot)
    {
      acceptGroupInvitation_args args = new acceptGroupInvitation_args();
      args.Read(iprot);
      iprot.ReadMessageEnd();
      acceptGroupInvitation_result result = new acceptGroupInvitation_result();
      try
      {
        try
        {
          iface_.acceptGroupInvitation(args.ReqSeq, args.GroupId);
        }
        catch (TalkException e)
        {
          result.E = e;
        }
        oprot.WriteMessageBegin(new TMessage("acceptGroupInvitation", TMessageType.Reply, seqid)); 
        result.Write(oprot);
      }
      catch (TTransportException)
      {
        throw;
      }
      catch (Exception ex)
      {
        Console.Error.WriteLine("Error occurred in processor:");
        Console.Error.WriteLine(ex.ToString());
        TApplicationException x = new TApplicationException      (TApplicationException.ExceptionType.InternalError," Internal error.");
        oprot.WriteMessageBegin(new TMessage("acceptGroupInvitation", TMessageType.Exception, seqid));
        x.Write(oprot);
      }
      oprot.WriteMessageEnd();
      oprot.Transport.Flush();
    }

    public void createGroup_Process(int seqid, TProtocol iprot, TProtocol oprot)
    {
      createGroup_args args = new createGroup_args();
      args.Read(iprot);
      iprot.ReadMessageEnd();
      createGroup_result result = new createGroup_result();
      try
      {
        try
        {
          result.Success = iface_.createGroup(args.Seq, args.Name, args.ContactIds);
        }
        catch (TalkException e)
        {
          result.E = e;
        }
        oprot.WriteMessageBegin(new TMessage("createGroup", TMessageType.Reply, seqid)); 
        result.Write(oprot);
      }
      catch (TTransportException)
      {
        throw;
      }
      catch (Exception ex)
      {
        Console.Error.WriteLine("Error occurred in processor:");
        Console.Error.WriteLine(ex.ToString());
        TApplicationException x = new TApplicationException      (TApplicationException.ExceptionType.InternalError," Internal error.");
        oprot.WriteMessageBegin(new TMessage("createGroup", TMessageType.Exception, seqid));
        x.Write(oprot);
      }
      oprot.WriteMessageEnd();
      oprot.Transport.Flush();
    }

    public void createQrcodeBase64Image_Process(int seqid, TProtocol iprot, TProtocol oprot)
    {
      createQrcodeBase64Image_args args = new createQrcodeBase64Image_args();
      args.Read(iprot);
      iprot.ReadMessageEnd();
      createQrcodeBase64Image_result result = new createQrcodeBase64Image_result();
      try
      {
        try
        {
          result.Success = iface_.createQrcodeBase64Image(args.Url, args.CharacterSet, args.ImageSize, args.X, args.Y, args.Width, args.Height);
        }
        catch (TalkException e)
        {
          result.E = e;
        }
        oprot.WriteMessageBegin(new TMessage("createQrcodeBase64Image", TMessageType.Reply, seqid)); 
        result.Write(oprot);
      }
      catch (TTransportException)
      {
        throw;
      }
      catch (Exception ex)
      {
        Console.Error.WriteLine("Error occurred in processor:");
        Console.Error.WriteLine(ex.ToString());
        TApplicationException x = new TApplicationException      (TApplicationException.ExceptionType.InternalError," Internal error.");
        oprot.WriteMessageBegin(new TMessage("createQrcodeBase64Image", TMessageType.Exception, seqid));
        x.Write(oprot);
      }
      oprot.WriteMessageEnd();
      oprot.Transport.Flush();
    }

    public void createRoom_Process(int seqid, TProtocol iprot, TProtocol oprot)
    {
      createRoom_args args = new createRoom_args();
      args.Read(iprot);
      iprot.ReadMessageEnd();
      createRoom_result result = new createRoom_result();
      try
      {
        try
        {
          result.Success = iface_.createRoom(args.ReqSeq, args.ContactIds);
        }
        catch (TalkException e)
        {
          result.E = e;
        }
        oprot.WriteMessageBegin(new TMessage("createRoom", TMessageType.Reply, seqid)); 
        result.Write(oprot);
      }
      catch (TTransportException)
      {
        throw;
      }
      catch (Exception ex)
      {
        Console.Error.WriteLine("Error occurred in processor:");
        Console.Error.WriteLine(ex.ToString());
        TApplicationException x = new TApplicationException      (TApplicationException.ExceptionType.InternalError," Internal error.");
        oprot.WriteMessageBegin(new TMessage("createRoom", TMessageType.Exception, seqid));
        x.Write(oprot);
      }
      oprot.WriteMessageEnd();
      oprot.Transport.Flush();
    }

    public void createSession_Process(int seqid, TProtocol iprot, TProtocol oprot)
    {
      createSession_args args = new createSession_args();
      args.Read(iprot);
      iprot.ReadMessageEnd();
      createSession_result result = new createSession_result();
      try
      {
        try
        {
          result.Success = iface_.createSession();
        }
        catch (TalkException e)
        {
          result.E = e;
        }
        oprot.WriteMessageBegin(new TMessage("createSession", TMessageType.Reply, seqid)); 
        result.Write(oprot);
      }
      catch (TTransportException)
      {
        throw;
      }
      catch (Exception ex)
      {
        Console.Error.WriteLine("Error occurred in processor:");
        Console.Error.WriteLine(ex.ToString());
        TApplicationException x = new TApplicationException      (TApplicationException.ExceptionType.InternalError," Internal error.");
        oprot.WriteMessageBegin(new TMessage("createSession", TMessageType.Exception, seqid));
        x.Write(oprot);
      }
      oprot.WriteMessageEnd();
      oprot.Transport.Flush();
    }

    public void fetchOperations_Process(int seqid, TProtocol iprot, TProtocol oprot)
    {
      fetchOperations_args args = new fetchOperations_args();
      args.Read(iprot);
      iprot.ReadMessageEnd();
      fetchOperations_result result = new fetchOperations_result();
      try
      {
        try
        {
          result.Success = iface_.fetchOperations(args.LocalRev, args.Count);
        }
        catch (TalkException e)
        {
          result.E = e;
        }
        oprot.WriteMessageBegin(new TMessage("fetchOperations", TMessageType.Reply, seqid)); 
        result.Write(oprot);
      }
      catch (TTransportException)
      {
        throw;
      }
      catch (Exception ex)
      {
        Console.Error.WriteLine("Error occurred in processor:");
        Console.Error.WriteLine(ex.ToString());
        TApplicationException x = new TApplicationException      (TApplicationException.ExceptionType.InternalError," Internal error.");
        oprot.WriteMessageBegin(new TMessage("fetchOperations", TMessageType.Exception, seqid));
        x.Write(oprot);
      }
      oprot.WriteMessageEnd();
      oprot.Transport.Flush();
    }

    public void getProfile_Process(int seqid, TProtocol iprot, TProtocol oprot)
    {
      getProfile_args args = new getProfile_args();
      args.Read(iprot);
      iprot.ReadMessageEnd();
      getProfile_result result = new getProfile_result();
      try
      {
        try
        {
          result.Success = iface_.getProfile();
        }
        catch (TalkException e)
        {
          result.E = e;
        }
        oprot.WriteMessageBegin(new TMessage("getProfile", TMessageType.Reply, seqid)); 
        result.Write(oprot);
      }
      catch (TTransportException)
      {
        throw;
      }
      catch (Exception ex)
      {
        Console.Error.WriteLine("Error occurred in processor:");
        Console.Error.WriteLine(ex.ToString());
        TApplicationException x = new TApplicationException      (TApplicationException.ExceptionType.InternalError," Internal error.");
        oprot.WriteMessageBegin(new TMessage("getProfile", TMessageType.Exception, seqid));
        x.Write(oprot);
      }
      oprot.WriteMessageEnd();
      oprot.Transport.Flush();
    }

    public void findAndAddContactsByEmail_Process(int seqid, TProtocol iprot, TProtocol oprot)
    {
      findAndAddContactsByEmail_args args = new findAndAddContactsByEmail_args();
      args.Read(iprot);
      iprot.ReadMessageEnd();
      findAndAddContactsByEmail_result result = new findAndAddContactsByEmail_result();
      try
      {
        try
        {
          result.Success = iface_.findAndAddContactsByEmail(args.ReqSeq, args.Emails);
        }
        catch (TalkException e)
        {
          result.E = e;
        }
        oprot.WriteMessageBegin(new TMessage("findAndAddContactsByEmail", TMessageType.Reply, seqid)); 
        result.Write(oprot);
      }
      catch (TTransportException)
      {
        throw;
      }
      catch (Exception ex)
      {
        Console.Error.WriteLine("Error occurred in processor:");
        Console.Error.WriteLine(ex.ToString());
        TApplicationException x = new TApplicationException      (TApplicationException.ExceptionType.InternalError," Internal error.");
        oprot.WriteMessageBegin(new TMessage("findAndAddContactsByEmail", TMessageType.Exception, seqid));
        x.Write(oprot);
      }
      oprot.WriteMessageEnd();
      oprot.Transport.Flush();
    }

    public void findAndAddContactsByMid_Process(int seqid, TProtocol iprot, TProtocol oprot)
    {
      findAndAddContactsByMid_args args = new findAndAddContactsByMid_args();
      args.Read(iprot);
      iprot.ReadMessageEnd();
      findAndAddContactsByMid_result result = new findAndAddContactsByMid_result();
      try
      {
        try
        {
          result.Success = iface_.findAndAddContactsByMid(args.ReqSeq, args.Mid);
        }
        catch (TalkException e)
        {
          result.E = e;
        }
        oprot.WriteMessageBegin(new TMessage("findAndAddContactsByMid", TMessageType.Reply, seqid)); 
        result.Write(oprot);
      }
      catch (TTransportException)
      {
        throw;
      }
      catch (Exception ex)
      {
        Console.Error.WriteLine("Error occurred in processor:");
        Console.Error.WriteLine(ex.ToString());
        TApplicationException x = new TApplicationException      (TApplicationException.ExceptionType.InternalError," Internal error.");
        oprot.WriteMessageBegin(new TMessage("findAndAddContactsByMid", TMessageType.Exception, seqid));
        x.Write(oprot);
      }
      oprot.WriteMessageEnd();
      oprot.Transport.Flush();
    }

    public void findAndAddContactsByPhone_Process(int seqid, TProtocol iprot, TProtocol oprot)
    {
      findAndAddContactsByPhone_args args = new findAndAddContactsByPhone_args();
      args.Read(iprot);
      iprot.ReadMessageEnd();
      findAndAddContactsByPhone_result result = new findAndAddContactsByPhone_result();
      try
      {
        try
        {
          result.Success = iface_.findAndAddContactsByPhone(args.ReqSeq, args.Phones);
        }
        catch (TalkException e)
        {
          result.E = e;
        }
        oprot.WriteMessageBegin(new TMessage("findAndAddContactsByPhone", TMessageType.Reply, seqid)); 
        result.Write(oprot);
      }
      catch (TTransportException)
      {
        throw;
      }
      catch (Exception ex)
      {
        Console.Error.WriteLine("Error occurred in processor:");
        Console.Error.WriteLine(ex.ToString());
        TApplicationException x = new TApplicationException      (TApplicationException.ExceptionType.InternalError," Internal error.");
        oprot.WriteMessageBegin(new TMessage("findAndAddContactsByPhone", TMessageType.Exception, seqid));
        x.Write(oprot);
      }
      oprot.WriteMessageEnd();
      oprot.Transport.Flush();
    }

    public void findAndAddContactsByUserid_Process(int seqid, TProtocol iprot, TProtocol oprot)
    {
      findAndAddContactsByUserid_args args = new findAndAddContactsByUserid_args();
      args.Read(iprot);
      iprot.ReadMessageEnd();
      findAndAddContactsByUserid_result result = new findAndAddContactsByUserid_result();
      try
      {
        try
        {
          result.Success = iface_.findAndAddContactsByUserid(args.ReqSeq, args.Userid);
        }
        catch (TalkException e)
        {
          result.E = e;
        }
        oprot.WriteMessageBegin(new TMessage("findAndAddContactsByUserid", TMessageType.Reply, seqid)); 
        result.Write(oprot);
      }
      catch (TTransportException)
      {
        throw;
      }
      catch (Exception ex)
      {
        Console.Error.WriteLine("Error occurred in processor:");
        Console.Error.WriteLine(ex.ToString());
        TApplicationException x = new TApplicationException      (TApplicationException.ExceptionType.InternalError," Internal error.");
        oprot.WriteMessageBegin(new TMessage("findAndAddContactsByUserid", TMessageType.Exception, seqid));
        x.Write(oprot);
      }
      oprot.WriteMessageEnd();
      oprot.Transport.Flush();
    }

    public void findContactByUserid_Process(int seqid, TProtocol iprot, TProtocol oprot)
    {
      findContactByUserid_args args = new findContactByUserid_args();
      args.Read(iprot);
      iprot.ReadMessageEnd();
      findContactByUserid_result result = new findContactByUserid_result();
      try
      {
        try
        {
          result.Success = iface_.findContactByUserid(args.Userid);
        }
        catch (TalkException e)
        {
          result.E = e;
        }
        oprot.WriteMessageBegin(new TMessage("findContactByUserid", TMessageType.Reply, seqid)); 
        result.Write(oprot);
      }
      catch (TTransportException)
      {
        throw;
      }
      catch (Exception ex)
      {
        Console.Error.WriteLine("Error occurred in processor:");
        Console.Error.WriteLine(ex.ToString());
        TApplicationException x = new TApplicationException      (TApplicationException.ExceptionType.InternalError," Internal error.");
        oprot.WriteMessageBegin(new TMessage("findContactByUserid", TMessageType.Exception, seqid));
        x.Write(oprot);
      }
      oprot.WriteMessageEnd();
      oprot.Transport.Flush();
    }

    public void findContactByUserTicket_Process(int seqid, TProtocol iprot, TProtocol oprot)
    {
      findContactByUserTicket_args args = new findContactByUserTicket_args();
      args.Read(iprot);
      iprot.ReadMessageEnd();
      findContactByUserTicket_result result = new findContactByUserTicket_result();
      try
      {
        try
        {
          result.Success = iface_.findContactByUserTicket(args.TicketId);
        }
        catch (TalkException e)
        {
          result.E = e;
        }
        oprot.WriteMessageBegin(new TMessage("findContactByUserTicket", TMessageType.Reply, seqid)); 
        result.Write(oprot);
      }
      catch (TTransportException)
      {
        throw;
      }
      catch (Exception ex)
      {
        Console.Error.WriteLine("Error occurred in processor:");
        Console.Error.WriteLine(ex.ToString());
        TApplicationException x = new TApplicationException      (TApplicationException.ExceptionType.InternalError," Internal error.");
        oprot.WriteMessageBegin(new TMessage("findContactByUserTicket", TMessageType.Exception, seqid));
        x.Write(oprot);
      }
      oprot.WriteMessageEnd();
      oprot.Transport.Flush();
    }

    public void findContactsByEmail_Process(int seqid, TProtocol iprot, TProtocol oprot)
    {
      findContactsByEmail_args args = new findContactsByEmail_args();
      args.Read(iprot);
      iprot.ReadMessageEnd();
      findContactsByEmail_result result = new findContactsByEmail_result();
      try
      {
        try
        {
          result.Success = iface_.findContactsByEmail(args.Emails);
        }
        catch (TalkException e)
        {
          result.E = e;
        }
        oprot.WriteMessageBegin(new TMessage("findContactsByEmail", TMessageType.Reply, seqid)); 
        result.Write(oprot);
      }
      catch (TTransportException)
      {
        throw;
      }
      catch (Exception ex)
      {
        Console.Error.WriteLine("Error occurred in processor:");
        Console.Error.WriteLine(ex.ToString());
        TApplicationException x = new TApplicationException      (TApplicationException.ExceptionType.InternalError," Internal error.");
        oprot.WriteMessageBegin(new TMessage("findContactsByEmail", TMessageType.Exception, seqid));
        x.Write(oprot);
      }
      oprot.WriteMessageEnd();
      oprot.Transport.Flush();
    }

    public void findContactsByPhone_Process(int seqid, TProtocol iprot, TProtocol oprot)
    {
      findContactsByPhone_args args = new findContactsByPhone_args();
      args.Read(iprot);
      iprot.ReadMessageEnd();
      findContactsByPhone_result result = new findContactsByPhone_result();
      try
      {
        try
        {
          result.Success = iface_.findContactsByPhone(args.Phones);
        }
        catch (TalkException e)
        {
          result.E = e;
        }
        oprot.WriteMessageBegin(new TMessage("findContactsByPhone", TMessageType.Reply, seqid)); 
        result.Write(oprot);
      }
      catch (TTransportException)
      {
        throw;
      }
      catch (Exception ex)
      {
        Console.Error.WriteLine("Error occurred in processor:");
        Console.Error.WriteLine(ex.ToString());
        TApplicationException x = new TApplicationException      (TApplicationException.ExceptionType.InternalError," Internal error.");
        oprot.WriteMessageBegin(new TMessage("findContactsByPhone", TMessageType.Exception, seqid));
        x.Write(oprot);
      }
      oprot.WriteMessageEnd();
      oprot.Transport.Flush();
    }

    public void generateUserTicket_Process(int seqid, TProtocol iprot, TProtocol oprot)
    {
      generateUserTicket_args args = new generateUserTicket_args();
      args.Read(iprot);
      iprot.ReadMessageEnd();
      generateUserTicket_result result = new generateUserTicket_result();
      try
      {
        try
        {
          result.Success = iface_.generateUserTicket(args.ExpirationTime, args.MaxUseCount);
        }
        catch (TalkException e)
        {
          result.E = e;
        }
        oprot.WriteMessageBegin(new TMessage("generateUserTicket", TMessageType.Reply, seqid)); 
        result.Write(oprot);
      }
      catch (TTransportException)
      {
        throw;
      }
      catch (Exception ex)
      {
        Console.Error.WriteLine("Error occurred in processor:");
        Console.Error.WriteLine(ex.ToString());
        TApplicationException x = new TApplicationException      (TApplicationException.ExceptionType.InternalError," Internal error.");
        oprot.WriteMessageBegin(new TMessage("generateUserTicket", TMessageType.Exception, seqid));
        x.Write(oprot);
      }
      oprot.WriteMessageEnd();
      oprot.Transport.Flush();
    }

    public void getAllContactIds_Process(int seqid, TProtocol iprot, TProtocol oprot)
    {
      getAllContactIds_args args = new getAllContactIds_args();
      args.Read(iprot);
      iprot.ReadMessageEnd();
      getAllContactIds_result result = new getAllContactIds_result();
      try
      {
        try
        {
          result.Success = iface_.getAllContactIds();
        }
        catch (TalkException e)
        {
          result.E = e;
        }
        oprot.WriteMessageBegin(new TMessage("getAllContactIds", TMessageType.Reply, seqid)); 
        result.Write(oprot);
      }
      catch (TTransportException)
      {
        throw;
      }
      catch (Exception ex)
      {
        Console.Error.WriteLine("Error occurred in processor:");
        Console.Error.WriteLine(ex.ToString());
        TApplicationException x = new TApplicationException      (TApplicationException.ExceptionType.InternalError," Internal error.");
        oprot.WriteMessageBegin(new TMessage("getAllContactIds", TMessageType.Exception, seqid));
        x.Write(oprot);
      }
      oprot.WriteMessageEnd();
      oprot.Transport.Flush();
    }

    public void getBlockedContactIds_Process(int seqid, TProtocol iprot, TProtocol oprot)
    {
      getBlockedContactIds_args args = new getBlockedContactIds_args();
      args.Read(iprot);
      iprot.ReadMessageEnd();
      getBlockedContactIds_result result = new getBlockedContactIds_result();
      try
      {
        try
        {
          result.Success = iface_.getBlockedContactIds();
        }
        catch (TalkException e)
        {
          result.E = e;
        }
        oprot.WriteMessageBegin(new TMessage("getBlockedContactIds", TMessageType.Reply, seqid)); 
        result.Write(oprot);
      }
      catch (TTransportException)
      {
        throw;
      }
      catch (Exception ex)
      {
        Console.Error.WriteLine("Error occurred in processor:");
        Console.Error.WriteLine(ex.ToString());
        TApplicationException x = new TApplicationException      (TApplicationException.ExceptionType.InternalError," Internal error.");
        oprot.WriteMessageBegin(new TMessage("getBlockedContactIds", TMessageType.Exception, seqid));
        x.Write(oprot);
      }
      oprot.WriteMessageEnd();
      oprot.Transport.Flush();
    }

    public void getBlockedContactIdsByRange_Process(int seqid, TProtocol iprot, TProtocol oprot)
    {
      getBlockedContactIdsByRange_args args = new getBlockedContactIdsByRange_args();
      args.Read(iprot);
      iprot.ReadMessageEnd();
      getBlockedContactIdsByRange_result result = new getBlockedContactIdsByRange_result();
      try
      {
        try
        {
          result.Success = iface_.getBlockedContactIdsByRange(args.Start, args.Count);
        }
        catch (TalkException e)
        {
          result.E = e;
        }
        oprot.WriteMessageBegin(new TMessage("getBlockedContactIdsByRange", TMessageType.Reply, seqid)); 
        result.Write(oprot);
      }
      catch (TTransportException)
      {
        throw;
      }
      catch (Exception ex)
      {
        Console.Error.WriteLine("Error occurred in processor:");
        Console.Error.WriteLine(ex.ToString());
        TApplicationException x = new TApplicationException      (TApplicationException.ExceptionType.InternalError," Internal error.");
        oprot.WriteMessageBegin(new TMessage("getBlockedContactIdsByRange", TMessageType.Exception, seqid));
        x.Write(oprot);
      }
      oprot.WriteMessageEnd();
      oprot.Transport.Flush();
    }

    public void getBlockedRecommendationIds_Process(int seqid, TProtocol iprot, TProtocol oprot)
    {
      getBlockedRecommendationIds_args args = new getBlockedRecommendationIds_args();
      args.Read(iprot);
      iprot.ReadMessageEnd();
      getBlockedRecommendationIds_result result = new getBlockedRecommendationIds_result();
      try
      {
        try
        {
          result.Success = iface_.getBlockedRecommendationIds();
        }
        catch (TalkException e)
        {
          result.E = e;
        }
        oprot.WriteMessageBegin(new TMessage("getBlockedRecommendationIds", TMessageType.Reply, seqid)); 
        result.Write(oprot);
      }
      catch (TTransportException)
      {
        throw;
      }
      catch (Exception ex)
      {
        Console.Error.WriteLine("Error occurred in processor:");
        Console.Error.WriteLine(ex.ToString());
        TApplicationException x = new TApplicationException      (TApplicationException.ExceptionType.InternalError," Internal error.");
        oprot.WriteMessageBegin(new TMessage("getBlockedRecommendationIds", TMessageType.Exception, seqid));
        x.Write(oprot);
      }
      oprot.WriteMessageEnd();
      oprot.Transport.Flush();
    }

    public void getContact_Process(int seqid, TProtocol iprot, TProtocol oprot)
    {
      getContact_args args = new getContact_args();
      args.Read(iprot);
      iprot.ReadMessageEnd();
      getContact_result result = new getContact_result();
      try
      {
        try
        {
          result.Success = iface_.getContact(args.Id);
        }
        catch (TalkException e)
        {
          result.E = e;
        }
        oprot.WriteMessageBegin(new TMessage("getContact", TMessageType.Reply, seqid)); 
        result.Write(oprot);
      }
      catch (TTransportException)
      {
        throw;
      }
      catch (Exception ex)
      {
        Console.Error.WriteLine("Error occurred in processor:");
        Console.Error.WriteLine(ex.ToString());
        TApplicationException x = new TApplicationException      (TApplicationException.ExceptionType.InternalError," Internal error.");
        oprot.WriteMessageBegin(new TMessage("getContact", TMessageType.Exception, seqid));
        x.Write(oprot);
      }
      oprot.WriteMessageEnd();
      oprot.Transport.Flush();
    }

    public void getContacts_Process(int seqid, TProtocol iprot, TProtocol oprot)
    {
      getContacts_args args = new getContacts_args();
      args.Read(iprot);
      iprot.ReadMessageEnd();
      getContacts_result result = new getContacts_result();
      try
      {
        try
        {
          result.Success = iface_.getContacts(args.Ids);
        }
        catch (TalkException e)
        {
          result.E = e;
        }
        oprot.WriteMessageBegin(new TMessage("getContacts", TMessageType.Reply, seqid)); 
        result.Write(oprot);
      }
      catch (TTransportException)
      {
        throw;
      }
      catch (Exception ex)
      {
        Console.Error.WriteLine("Error occurred in processor:");
        Console.Error.WriteLine(ex.ToString());
        TApplicationException x = new TApplicationException      (TApplicationException.ExceptionType.InternalError," Internal error.");
        oprot.WriteMessageBegin(new TMessage("getContacts", TMessageType.Exception, seqid));
        x.Write(oprot);
      }
      oprot.WriteMessageEnd();
      oprot.Transport.Flush();
    }

    public void getGroup_Process(int seqid, TProtocol iprot, TProtocol oprot)
    {
      getGroup_args args = new getGroup_args();
      args.Read(iprot);
      iprot.ReadMessageEnd();
      getGroup_result result = new getGroup_result();
      try
      {
        try
        {
          result.Success = iface_.getGroup(args.GroupId);
        }
        catch (TalkException e)
        {
          result.E = e;
        }
        oprot.WriteMessageBegin(new TMessage("getGroup", TMessageType.Reply, seqid)); 
        result.Write(oprot);
      }
      catch (TTransportException)
      {
        throw;
      }
      catch (Exception ex)
      {
        Console.Error.WriteLine("Error occurred in processor:");
        Console.Error.WriteLine(ex.ToString());
        TApplicationException x = new TApplicationException      (TApplicationException.ExceptionType.InternalError," Internal error.");
        oprot.WriteMessageBegin(new TMessage("getGroup", TMessageType.Exception, seqid));
        x.Write(oprot);
      }
      oprot.WriteMessageEnd();
      oprot.Transport.Flush();
    }

    public void getGroupIdsInvited_Process(int seqid, TProtocol iprot, TProtocol oprot)
    {
      getGroupIdsInvited_args args = new getGroupIdsInvited_args();
      args.Read(iprot);
      iprot.ReadMessageEnd();
      getGroupIdsInvited_result result = new getGroupIdsInvited_result();
      try
      {
        try
        {
          result.Success = iface_.getGroupIdsInvited();
        }
        catch (TalkException e)
        {
          result.E = e;
        }
        oprot.WriteMessageBegin(new TMessage("getGroupIdsInvited", TMessageType.Reply, seqid)); 
        result.Write(oprot);
      }
      catch (TTransportException)
      {
        throw;
      }
      catch (Exception ex)
      {
        Console.Error.WriteLine("Error occurred in processor:");
        Console.Error.WriteLine(ex.ToString());
        TApplicationException x = new TApplicationException      (TApplicationException.ExceptionType.InternalError," Internal error.");
        oprot.WriteMessageBegin(new TMessage("getGroupIdsInvited", TMessageType.Exception, seqid));
        x.Write(oprot);
      }
      oprot.WriteMessageEnd();
      oprot.Transport.Flush();
    }

    public void getGroupIdsJoined_Process(int seqid, TProtocol iprot, TProtocol oprot)
    {
      getGroupIdsJoined_args args = new getGroupIdsJoined_args();
      args.Read(iprot);
      iprot.ReadMessageEnd();
      getGroupIdsJoined_result result = new getGroupIdsJoined_result();
      try
      {
        try
        {
          result.Success = iface_.getGroupIdsJoined();
        }
        catch (TalkException e)
        {
          result.E = e;
        }
        oprot.WriteMessageBegin(new TMessage("getGroupIdsJoined", TMessageType.Reply, seqid)); 
        result.Write(oprot);
      }
      catch (TTransportException)
      {
        throw;
      }
      catch (Exception ex)
      {
        Console.Error.WriteLine("Error occurred in processor:");
        Console.Error.WriteLine(ex.ToString());
        TApplicationException x = new TApplicationException      (TApplicationException.ExceptionType.InternalError," Internal error.");
        oprot.WriteMessageBegin(new TMessage("getGroupIdsJoined", TMessageType.Exception, seqid));
        x.Write(oprot);
      }
      oprot.WriteMessageEnd();
      oprot.Transport.Flush();
    }

    public void getGroups_Process(int seqid, TProtocol iprot, TProtocol oprot)
    {
      getGroups_args args = new getGroups_args();
      args.Read(iprot);
      iprot.ReadMessageEnd();
      getGroups_result result = new getGroups_result();
      try
      {
        try
        {
          result.Success = iface_.getGroups(args.GroupIds);
        }
        catch (TalkException e)
        {
          result.E = e;
        }
        oprot.WriteMessageBegin(new TMessage("getGroups", TMessageType.Reply, seqid)); 
        result.Write(oprot);
      }
      catch (TTransportException)
      {
        throw;
      }
      catch (Exception ex)
      {
        Console.Error.WriteLine("Error occurred in processor:");
        Console.Error.WriteLine(ex.ToString());
        TApplicationException x = new TApplicationException      (TApplicationException.ExceptionType.InternalError," Internal error.");
        oprot.WriteMessageBegin(new TMessage("getGroups", TMessageType.Exception, seqid));
        x.Write(oprot);
      }
      oprot.WriteMessageEnd();
      oprot.Transport.Flush();
    }

    public void getFavoriteMids_Process(int seqid, TProtocol iprot, TProtocol oprot)
    {
      getFavoriteMids_args args = new getFavoriteMids_args();
      args.Read(iprot);
      iprot.ReadMessageEnd();
      getFavoriteMids_result result = new getFavoriteMids_result();
      try
      {
        try
        {
          result.Success = iface_.getFavoriteMids();
        }
        catch (TalkException e)
        {
          result.E = e;
        }
        oprot.WriteMessageBegin(new TMessage("getFavoriteMids", TMessageType.Reply, seqid)); 
        result.Write(oprot);
      }
      catch (TTransportException)
      {
        throw;
      }
      catch (Exception ex)
      {
        Console.Error.WriteLine("Error occurred in processor:");
        Console.Error.WriteLine(ex.ToString());
        TApplicationException x = new TApplicationException      (TApplicationException.ExceptionType.InternalError," Internal error.");
        oprot.WriteMessageBegin(new TMessage("getFavoriteMids", TMessageType.Exception, seqid));
        x.Write(oprot);
      }
      oprot.WriteMessageEnd();
      oprot.Transport.Flush();
    }

    public void getHiddenContactMids_Process(int seqid, TProtocol iprot, TProtocol oprot)
    {
      getHiddenContactMids_args args = new getHiddenContactMids_args();
      args.Read(iprot);
      iprot.ReadMessageEnd();
      getHiddenContactMids_result result = new getHiddenContactMids_result();
      try
      {
        try
        {
          result.Success = iface_.getHiddenContactMids();
        }
        catch (TalkException e)
        {
          result.E = e;
        }
        oprot.WriteMessageBegin(new TMessage("getHiddenContactMids", TMessageType.Reply, seqid)); 
        result.Write(oprot);
      }
      catch (TTransportException)
      {
        throw;
      }
      catch (Exception ex)
      {
        Console.Error.WriteLine("Error occurred in processor:");
        Console.Error.WriteLine(ex.ToString());
        TApplicationException x = new TApplicationException      (TApplicationException.ExceptionType.InternalError," Internal error.");
        oprot.WriteMessageBegin(new TMessage("getHiddenContactMids", TMessageType.Exception, seqid));
        x.Write(oprot);
      }
      oprot.WriteMessageEnd();
      oprot.Transport.Flush();
    }

    public void getLastOpRevision_Process(int seqid, TProtocol iprot, TProtocol oprot)
    {
      getLastOpRevision_args args = new getLastOpRevision_args();
      args.Read(iprot);
      iprot.ReadMessageEnd();
      getLastOpRevision_result result = new getLastOpRevision_result();
      try
      {
        try
        {
          result.Success = iface_.getLastOpRevision();
        }
        catch (TalkException e)
        {
          result.E = e;
        }
        oprot.WriteMessageBegin(new TMessage("getLastOpRevision", TMessageType.Reply, seqid)); 
        result.Write(oprot);
      }
      catch (TTransportException)
      {
        throw;
      }
      catch (Exception ex)
      {
        Console.Error.WriteLine("Error occurred in processor:");
        Console.Error.WriteLine(ex.ToString());
        TApplicationException x = new TApplicationException      (TApplicationException.ExceptionType.InternalError," Internal error.");
        oprot.WriteMessageBegin(new TMessage("getLastOpRevision", TMessageType.Exception, seqid));
        x.Write(oprot);
      }
      oprot.WriteMessageEnd();
      oprot.Transport.Flush();
    }

    public void getRoom_Process(int seqid, TProtocol iprot, TProtocol oprot)
    {
      getRoom_args args = new getRoom_args();
      args.Read(iprot);
      iprot.ReadMessageEnd();
      getRoom_result result = new getRoom_result();
      try
      {
        try
        {
          result.Success = iface_.getRoom(args.RoomId);
        }
        catch (TalkException e)
        {
          result.E = e;
        }
        oprot.WriteMessageBegin(new TMessage("getRoom", TMessageType.Reply, seqid)); 
        result.Write(oprot);
      }
      catch (TTransportException)
      {
        throw;
      }
      catch (Exception ex)
      {
        Console.Error.WriteLine("Error occurred in processor:");
        Console.Error.WriteLine(ex.ToString());
        TApplicationException x = new TApplicationException      (TApplicationException.ExceptionType.InternalError," Internal error.");
        oprot.WriteMessageBegin(new TMessage("getRoom", TMessageType.Exception, seqid));
        x.Write(oprot);
      }
      oprot.WriteMessageEnd();
      oprot.Transport.Flush();
    }

    public void getRSAKeyInfo_Process(int seqid, TProtocol iprot, TProtocol oprot)
    {
      getRSAKeyInfo_args args = new getRSAKeyInfo_args();
      args.Read(iprot);
      iprot.ReadMessageEnd();
      getRSAKeyInfo_result result = new getRSAKeyInfo_result();
      try
      {
        try
        {
          result.Success = iface_.getRSAKeyInfo(args.Provider);
        }
        catch (TalkException e)
        {
          result.E = e;
        }
        oprot.WriteMessageBegin(new TMessage("getRSAKeyInfo", TMessageType.Reply, seqid)); 
        result.Write(oprot);
      }
      catch (TTransportException)
      {
        throw;
      }
      catch (Exception ex)
      {
        Console.Error.WriteLine("Error occurred in processor:");
        Console.Error.WriteLine(ex.ToString());
        TApplicationException x = new TApplicationException      (TApplicationException.ExceptionType.InternalError," Internal error.");
        oprot.WriteMessageBegin(new TMessage("getRSAKeyInfo", TMessageType.Exception, seqid));
        x.Write(oprot);
      }
      oprot.WriteMessageEnd();
      oprot.Transport.Flush();
    }

    public void getServerTime_Process(int seqid, TProtocol iprot, TProtocol oprot)
    {
      getServerTime_args args = new getServerTime_args();
      args.Read(iprot);
      iprot.ReadMessageEnd();
      getServerTime_result result = new getServerTime_result();
      try
      {
        try
        {
          result.Success = iface_.getServerTime();
        }
        catch (TalkException e)
        {
          result.E = e;
        }
        oprot.WriteMessageBegin(new TMessage("getServerTime", TMessageType.Reply, seqid)); 
        result.Write(oprot);
      }
      catch (TTransportException)
      {
        throw;
      }
      catch (Exception ex)
      {
        Console.Error.WriteLine("Error occurred in processor:");
        Console.Error.WriteLine(ex.ToString());
        TApplicationException x = new TApplicationException      (TApplicationException.ExceptionType.InternalError," Internal error.");
        oprot.WriteMessageBegin(new TMessage("getServerTime", TMessageType.Exception, seqid));
        x.Write(oprot);
      }
      oprot.WriteMessageEnd();
      oprot.Transport.Flush();
    }

    public void getSessions_Process(int seqid, TProtocol iprot, TProtocol oprot)
    {
      getSessions_args args = new getSessions_args();
      args.Read(iprot);
      iprot.ReadMessageEnd();
      getSessions_result result = new getSessions_result();
      try
      {
        try
        {
          result.Success = iface_.getSessions();
        }
        catch (TalkException e)
        {
          result.E = e;
        }
        oprot.WriteMessageBegin(new TMessage("getSessions", TMessageType.Reply, seqid)); 
        result.Write(oprot);
      }
      catch (TTransportException)
      {
        throw;
      }
      catch (Exception ex)
      {
        Console.Error.WriteLine("Error occurred in processor:");
        Console.Error.WriteLine(ex.ToString());
        TApplicationException x = new TApplicationException      (TApplicationException.ExceptionType.InternalError," Internal error.");
        oprot.WriteMessageBegin(new TMessage("getSessions", TMessageType.Exception, seqid));
        x.Write(oprot);
      }
      oprot.WriteMessageEnd();
      oprot.Transport.Flush();
    }

    public void leaveGroup_Process(int seqid, TProtocol iprot, TProtocol oprot)
    {
      leaveGroup_args args = new leaveGroup_args();
      args.Read(iprot);
      iprot.ReadMessageEnd();
      leaveGroup_result result = new leaveGroup_result();
      try
      {
        try
        {
          iface_.leaveGroup(args.ReqSeq, args.GroupId);
        }
        catch (TalkException e)
        {
          result.E = e;
        }
        oprot.WriteMessageBegin(new TMessage("leaveGroup", TMessageType.Reply, seqid)); 
        result.Write(oprot);
      }
      catch (TTransportException)
      {
        throw;
      }
      catch (Exception ex)
      {
        Console.Error.WriteLine("Error occurred in processor:");
        Console.Error.WriteLine(ex.ToString());
        TApplicationException x = new TApplicationException      (TApplicationException.ExceptionType.InternalError," Internal error.");
        oprot.WriteMessageBegin(new TMessage("leaveGroup", TMessageType.Exception, seqid));
        x.Write(oprot);
      }
      oprot.WriteMessageEnd();
      oprot.Transport.Flush();
    }

    public void loginZ_Process(int seqid, TProtocol iprot, TProtocol oprot)
    {
      loginZ_args args = new loginZ_args();
      args.Read(iprot);
      iprot.ReadMessageEnd();
      loginZ_result result = new loginZ_result();
      try
      {
        try
        {
          result.Success = iface_.loginZ(args.LoginRequest);
        }
        catch (TalkException e)
        {
          result.E = e;
        }
        oprot.WriteMessageBegin(new TMessage("loginZ", TMessageType.Reply, seqid)); 
        result.Write(oprot);
      }
      catch (TTransportException)
      {
        throw;
      }
      catch (Exception ex)
      {
        Console.Error.WriteLine("Error occurred in processor:");
        Console.Error.WriteLine(ex.ToString());
        TApplicationException x = new TApplicationException      (TApplicationException.ExceptionType.InternalError," Internal error.");
        oprot.WriteMessageBegin(new TMessage("loginZ", TMessageType.Exception, seqid));
        x.Write(oprot);
      }
      oprot.WriteMessageEnd();
      oprot.Transport.Flush();
    }

    public void logout_Process(int seqid, TProtocol iprot, TProtocol oprot)
    {
      logout_args args = new logout_args();
      args.Read(iprot);
      iprot.ReadMessageEnd();
      logout_result result = new logout_result();
      try
      {
        try
        {
          iface_.logout();
        }
        catch (TalkException e)
        {
          result.E = e;
        }
        oprot.WriteMessageBegin(new TMessage("logout", TMessageType.Reply, seqid)); 
        result.Write(oprot);
      }
      catch (TTransportException)
      {
        throw;
      }
      catch (Exception ex)
      {
        Console.Error.WriteLine("Error occurred in processor:");
        Console.Error.WriteLine(ex.ToString());
        TApplicationException x = new TApplicationException      (TApplicationException.ExceptionType.InternalError," Internal error.");
        oprot.WriteMessageBegin(new TMessage("logout", TMessageType.Exception, seqid));
        x.Write(oprot);
      }
      oprot.WriteMessageEnd();
      oprot.Transport.Flush();
    }

    public void logoutSession_Process(int seqid, TProtocol iprot, TProtocol oprot)
    {
      logoutSession_args args = new logoutSession_args();
      args.Read(iprot);
      iprot.ReadMessageEnd();
      logoutSession_result result = new logoutSession_result();
      try
      {
        try
        {
          iface_.logoutSession(args.TokenKey);
        }
        catch (TalkException e)
        {
          result.E = e;
        }
        oprot.WriteMessageBegin(new TMessage("logoutSession", TMessageType.Reply, seqid)); 
        result.Write(oprot);
      }
      catch (TTransportException)
      {
        throw;
      }
      catch (Exception ex)
      {
        Console.Error.WriteLine("Error occurred in processor:");
        Console.Error.WriteLine(ex.ToString());
        TApplicationException x = new TApplicationException      (TApplicationException.ExceptionType.InternalError," Internal error.");
        oprot.WriteMessageBegin(new TMessage("logoutSession", TMessageType.Exception, seqid));
        x.Write(oprot);
      }
      oprot.WriteMessageEnd();
      oprot.Transport.Flush();
    }

    public void sendMessage_Process(int seqid, TProtocol iprot, TProtocol oprot)
    {
      sendMessage_args args = new sendMessage_args();
      args.Read(iprot);
      iprot.ReadMessageEnd();
      sendMessage_result result = new sendMessage_result();
      try
      {
        try
        {
          result.Success = iface_.sendMessage(args.Seq, args.Message);
        }
        catch (TalkException e)
        {
          result.E = e;
        }
        oprot.WriteMessageBegin(new TMessage("sendMessage", TMessageType.Reply, seqid)); 
        result.Write(oprot);
      }
      catch (TTransportException)
      {
        throw;
      }
      catch (Exception ex)
      {
        Console.Error.WriteLine("Error occurred in processor:");
        Console.Error.WriteLine(ex.ToString());
        TApplicationException x = new TApplicationException      (TApplicationException.ExceptionType.InternalError," Internal error.");
        oprot.WriteMessageBegin(new TMessage("sendMessage", TMessageType.Exception, seqid));
        x.Write(oprot);
      }
      oprot.WriteMessageEnd();
      oprot.Transport.Flush();
    }

  }


  #if !SILVERLIGHT
  [Serializable]
  #endif
  public partial class acceptGroupInvitation_args : TBase
  {
    private int _reqSeq;
    private string _groupId;

    public int ReqSeq
    {
      get
      {
        return _reqSeq;
      }
      set
      {
        __isset.reqSeq = true;
        this._reqSeq = value;
      }
    }

    public string GroupId
    {
      get
      {
        return _groupId;
      }
      set
      {
        __isset.groupId = true;
        this._groupId = value;
      }
    }


    public Isset __isset;
    #if !SILVERLIGHT
    [Serializable]
    #endif
    public struct Isset {
      public bool reqSeq;
      public bool groupId;
    }

    public acceptGroupInvitation_args() {
    }

    public void Read (TProtocol iprot)
    {
      iprot.IncrementRecursionDepth();
      try
      {
        TField field;
        iprot.ReadStructBegin();
        while (true)
        {
          field = iprot.ReadFieldBegin();
          if (field.Type == TType.Stop) { 
            break;
          }
          switch (field.ID)
          {
            case 1:
              if (field.Type == TType.I32) {
                ReqSeq = iprot.ReadI32();
              } else { 
                TProtocolUtil.Skip(iprot, field.Type);
              }
              break;
            case 2:
              if (field.Type == TType.String) {
                GroupId = iprot.ReadString();
              } else { 
                TProtocolUtil.Skip(iprot, field.Type);
              }
              break;
            default: 
              TProtocolUtil.Skip(iprot, field.Type);
              break;
          }
          iprot.ReadFieldEnd();
        }
        iprot.ReadStructEnd();
      }
      finally
      {
        iprot.DecrementRecursionDepth();
      }
    }

    public void Write(TProtocol oprot) {
      oprot.IncrementRecursionDepth();
      try
      {
        TStruct struc = new TStruct("acceptGroupInvitation_args");
        oprot.WriteStructBegin(struc);
        TField field = new TField();
        if (__isset.reqSeq) {
          field.Name = "reqSeq";
          field.Type = TType.I32;
          field.ID = 1;
          oprot.WriteFieldBegin(field);
          oprot.WriteI32(ReqSeq);
          oprot.WriteFieldEnd();
        }
        if (GroupId != null && __isset.groupId) {
          field.Name = "groupId";
          field.Type = TType.String;
          field.ID = 2;
          oprot.WriteFieldBegin(field);
          oprot.WriteString(GroupId);
          oprot.WriteFieldEnd();
        }
        oprot.WriteFieldStop();
        oprot.WriteStructEnd();
      }
      finally
      {
        oprot.DecrementRecursionDepth();
      }
    }

    public override string ToString() {
      StringBuilder __sb = new StringBuilder("acceptGroupInvitation_args(");
      bool __first = true;
      if (__isset.reqSeq) {
        if(!__first) { __sb.Append(", "); }
        __first = false;
        __sb.Append("ReqSeq: ");
        __sb.Append(ReqSeq);
      }
      if (GroupId != null && __isset.groupId) {
        if(!__first) { __sb.Append(", "); }
        __first = false;
        __sb.Append("GroupId: ");
        __sb.Append(GroupId);
      }
      __sb.Append(")");
      return __sb.ToString();
    }

  }


  #if !SILVERLIGHT
  [Serializable]
  #endif
  public partial class acceptGroupInvitation_result : TBase
  {
    private TalkException _e;

    public TalkException E
    {
      get
      {
        return _e;
      }
      set
      {
        __isset.e = true;
        this._e = value;
      }
    }


    public Isset __isset;
    #if !SILVERLIGHT
    [Serializable]
    #endif
    public struct Isset {
      public bool e;
    }

    public acceptGroupInvitation_result() {
    }

    public void Read (TProtocol iprot)
    {
      iprot.IncrementRecursionDepth();
      try
      {
        TField field;
        iprot.ReadStructBegin();
        while (true)
        {
          field = iprot.ReadFieldBegin();
          if (field.Type == TType.Stop) { 
            break;
          }
          switch (field.ID)
          {
            case 1:
              if (field.Type == TType.Struct) {
                E = new TalkException();
                E.Read(iprot);
              } else { 
                TProtocolUtil.Skip(iprot, field.Type);
              }
              break;
            default: 
              TProtocolUtil.Skip(iprot, field.Type);
              break;
          }
          iprot.ReadFieldEnd();
        }
        iprot.ReadStructEnd();
      }
      finally
      {
        iprot.DecrementRecursionDepth();
      }
    }

    public void Write(TProtocol oprot) {
      oprot.IncrementRecursionDepth();
      try
      {
        TStruct struc = new TStruct("acceptGroupInvitation_result");
        oprot.WriteStructBegin(struc);
        TField field = new TField();

        if (this.__isset.e) {
          if (E != null) {
            field.Name = "E";
            field.Type = TType.Struct;
            field.ID = 1;
            oprot.WriteFieldBegin(field);
            E.Write(oprot);
            oprot.WriteFieldEnd();
          }
        }
        oprot.WriteFieldStop();
        oprot.WriteStructEnd();
      }
      finally
      {
        oprot.DecrementRecursionDepth();
      }
    }

    public override string ToString() {
      StringBuilder __sb = new StringBuilder("acceptGroupInvitation_result(");
      bool __first = true;
      if (E != null && __isset.e) {
        if(!__first) { __sb.Append(", "); }
        __first = false;
        __sb.Append("E: ");
        __sb.Append(E== null ? "<null>" : E.ToString());
      }
      __sb.Append(")");
      return __sb.ToString();
    }

  }


  #if !SILVERLIGHT
  [Serializable]
  #endif
  public partial class createGroup_args : TBase
  {
    private int _seq;
    private string _name;
    private List<string> _contactIds;

    public int Seq
    {
      get
      {
        return _seq;
      }
      set
      {
        __isset.seq = true;
        this._seq = value;
      }
    }

    public string Name
    {
      get
      {
        return _name;
      }
      set
      {
        __isset.name = true;
        this._name = value;
      }
    }

    public List<string> ContactIds
    {
      get
      {
        return _contactIds;
      }
      set
      {
        __isset.contactIds = true;
        this._contactIds = value;
      }
    }


    public Isset __isset;
    #if !SILVERLIGHT
    [Serializable]
    #endif
    public struct Isset {
      public bool seq;
      public bool name;
      public bool contactIds;
    }

    public createGroup_args() {
    }

    public void Read (TProtocol iprot)
    {
      iprot.IncrementRecursionDepth();
      try
      {
        TField field;
        iprot.ReadStructBegin();
        while (true)
        {
          field = iprot.ReadFieldBegin();
          if (field.Type == TType.Stop) { 
            break;
          }
          switch (field.ID)
          {
            case 1:
              if (field.Type == TType.I32) {
                Seq = iprot.ReadI32();
              } else { 
                TProtocolUtil.Skip(iprot, field.Type);
              }
              break;
            case 2:
              if (field.Type == TType.String) {
                Name = iprot.ReadString();
              } else { 
                TProtocolUtil.Skip(iprot, field.Type);
              }
              break;
            case 3:
              if (field.Type == TType.List) {
                {
                  ContactIds = new List<string>();
                  TList _list30 = iprot.ReadListBegin();
                  for( int _i31 = 0; _i31 < _list30.Count; ++_i31)
                  {
                    string _elem32;
                    _elem32 = iprot.ReadString();
                    ContactIds.Add(_elem32);
                  }
                  iprot.ReadListEnd();
                }
              } else { 
                TProtocolUtil.Skip(iprot, field.Type);
              }
              break;
            default: 
              TProtocolUtil.Skip(iprot, field.Type);
              break;
          }
          iprot.ReadFieldEnd();
        }
        iprot.ReadStructEnd();
      }
      finally
      {
        iprot.DecrementRecursionDepth();
      }
    }

    public void Write(TProtocol oprot) {
      oprot.IncrementRecursionDepth();
      try
      {
        TStruct struc = new TStruct("createGroup_args");
        oprot.WriteStructBegin(struc);
        TField field = new TField();
        if (__isset.seq) {
          field.Name = "seq";
          field.Type = TType.I32;
          field.ID = 1;
          oprot.WriteFieldBegin(field);
          oprot.WriteI32(Seq);
          oprot.WriteFieldEnd();
        }
        if (Name != null && __isset.name) {
          field.Name = "name";
          field.Type = TType.String;
          field.ID = 2;
          oprot.WriteFieldBegin(field);
          oprot.WriteString(Name);
          oprot.WriteFieldEnd();
        }
        if (ContactIds != null && __isset.contactIds) {
          field.Name = "contactIds";
          field.Type = TType.List;
          field.ID = 3;
          oprot.WriteFieldBegin(field);
          {
            oprot.WriteListBegin(new TList(TType.String, ContactIds.Count));
            foreach (string _iter33 in ContactIds)
            {
              oprot.WriteString(_iter33);
            }
            oprot.WriteListEnd();
          }
          oprot.WriteFieldEnd();
        }
        oprot.WriteFieldStop();
        oprot.WriteStructEnd();
      }
      finally
      {
        oprot.DecrementRecursionDepth();
      }
    }

    public override string ToString() {
      StringBuilder __sb = new StringBuilder("createGroup_args(");
      bool __first = true;
      if (__isset.seq) {
        if(!__first) { __sb.Append(", "); }
        __first = false;
        __sb.Append("Seq: ");
        __sb.Append(Seq);
      }
      if (Name != null && __isset.name) {
        if(!__first) { __sb.Append(", "); }
        __first = false;
        __sb.Append("Name: ");
        __sb.Append(Name);
      }
      if (ContactIds != null && __isset.contactIds) {
        if(!__first) { __sb.Append(", "); }
        __first = false;
        __sb.Append("ContactIds: ");
        __sb.Append(ContactIds);
      }
      __sb.Append(")");
      return __sb.ToString();
    }

  }


  #if !SILVERLIGHT
  [Serializable]
  #endif
  public partial class createGroup_result : TBase
  {
    private @Group _success;
    private TalkException _e;

    public @Group Success
    {
      get
      {
        return _success;
      }
      set
      {
        __isset.success = true;
        this._success = value;
      }
    }

    public TalkException E
    {
      get
      {
        return _e;
      }
      set
      {
        __isset.e = true;
        this._e = value;
      }
    }


    public Isset __isset;
    #if !SILVERLIGHT
    [Serializable]
    #endif
    public struct Isset {
      public bool success;
      public bool e;
    }

    public createGroup_result() {
    }

    public void Read (TProtocol iprot)
    {
      iprot.IncrementRecursionDepth();
      try
      {
        TField field;
        iprot.ReadStructBegin();
        while (true)
        {
          field = iprot.ReadFieldBegin();
          if (field.Type == TType.Stop) { 
            break;
          }
          switch (field.ID)
          {
            case 0:
              if (field.Type == TType.Struct) {
                Success = new @Group();
                Success.Read(iprot);
              } else { 
                TProtocolUtil.Skip(iprot, field.Type);
              }
              break;
            case 1:
              if (field.Type == TType.Struct) {
                E = new TalkException();
                E.Read(iprot);
              } else { 
                TProtocolUtil.Skip(iprot, field.Type);
              }
              break;
            default: 
              TProtocolUtil.Skip(iprot, field.Type);
              break;
          }
          iprot.ReadFieldEnd();
        }
        iprot.ReadStructEnd();
      }
      finally
      {
        iprot.DecrementRecursionDepth();
      }
    }

    public void Write(TProtocol oprot) {
      oprot.IncrementRecursionDepth();
      try
      {
        TStruct struc = new TStruct("createGroup_result");
        oprot.WriteStructBegin(struc);
        TField field = new TField();

        if (this.__isset.success) {
          if (Success != null) {
            field.Name = "Success";
            field.Type = TType.Struct;
            field.ID = 0;
            oprot.WriteFieldBegin(field);
            Success.Write(oprot);
            oprot.WriteFieldEnd();
          }
        } else if (this.__isset.e) {
          if (E != null) {
            field.Name = "E";
            field.Type = TType.Struct;
            field.ID = 1;
            oprot.WriteFieldBegin(field);
            E.Write(oprot);
            oprot.WriteFieldEnd();
          }
        }
        oprot.WriteFieldStop();
        oprot.WriteStructEnd();
      }
      finally
      {
        oprot.DecrementRecursionDepth();
      }
    }

    public override string ToString() {
      StringBuilder __sb = new StringBuilder("createGroup_result(");
      bool __first = true;
      if (Success != null && __isset.success) {
        if(!__first) { __sb.Append(", "); }
        __first = false;
        __sb.Append("Success: ");
        __sb.Append(Success== null ? "<null>" : Success.ToString());
      }
      if (E != null && __isset.e) {
        if(!__first) { __sb.Append(", "); }
        __first = false;
        __sb.Append("E: ");
        __sb.Append(E== null ? "<null>" : E.ToString());
      }
      __sb.Append(")");
      return __sb.ToString();
    }

  }


  #if !SILVERLIGHT
  [Serializable]
  #endif
  public partial class createQrcodeBase64Image_args : TBase
  {
    private string _url;
    private string _characterSet;
    private int _imageSize;
    private int _x;
    private int _y;
    private int _width;
    private int _height;

    public string Url
    {
      get
      {
        return _url;
      }
      set
      {
        __isset.url = true;
        this._url = value;
      }
    }

    public string CharacterSet
    {
      get
      {
        return _characterSet;
      }
      set
      {
        __isset.characterSet = true;
        this._characterSet = value;
      }
    }

    public int ImageSize
    {
      get
      {
        return _imageSize;
      }
      set
      {
        __isset.imageSize = true;
        this._imageSize = value;
      }
    }

    public int X
    {
      get
      {
        return _x;
      }
      set
      {
        __isset.x = true;
        this._x = value;
      }
    }

    public int Y
    {
      get
      {
        return _y;
      }
      set
      {
        __isset.y = true;
        this._y = value;
      }
    }

    public int Width
    {
      get
      {
        return _width;
      }
      set
      {
        __isset.width = true;
        this._width = value;
      }
    }

    public int Height
    {
      get
      {
        return _height;
      }
      set
      {
        __isset.height = true;
        this._height = value;
      }
    }


    public Isset __isset;
    #if !SILVERLIGHT
    [Serializable]
    #endif
    public struct Isset {
      public bool url;
      public bool characterSet;
      public bool imageSize;
      public bool x;
      public bool y;
      public bool width;
      public bool height;
    }

    public createQrcodeBase64Image_args() {
    }

    public void Read (TProtocol iprot)
    {
      iprot.IncrementRecursionDepth();
      try
      {
        TField field;
        iprot.ReadStructBegin();
        while (true)
        {
          field = iprot.ReadFieldBegin();
          if (field.Type == TType.Stop) { 
            break;
          }
          switch (field.ID)
          {
            case 2:
              if (field.Type == TType.String) {
                Url = iprot.ReadString();
              } else { 
                TProtocolUtil.Skip(iprot, field.Type);
              }
              break;
            case 3:
              if (field.Type == TType.String) {
                CharacterSet = iprot.ReadString();
              } else { 
                TProtocolUtil.Skip(iprot, field.Type);
              }
              break;
            case 4:
              if (field.Type == TType.I32) {
                ImageSize = iprot.ReadI32();
              } else { 
                TProtocolUtil.Skip(iprot, field.Type);
              }
              break;
            case 5:
              if (field.Type == TType.I32) {
                X = iprot.ReadI32();
              } else { 
                TProtocolUtil.Skip(iprot, field.Type);
              }
              break;
            case 6:
              if (field.Type == TType.I32) {
                Y = iprot.ReadI32();
              } else { 
                TProtocolUtil.Skip(iprot, field.Type);
              }
              break;
            case 7:
              if (field.Type == TType.I32) {
                Width = iprot.ReadI32();
              } else { 
                TProtocolUtil.Skip(iprot, field.Type);
              }
              break;
            case 8:
              if (field.Type == TType.I32) {
                Height = iprot.ReadI32();
              } else { 
                TProtocolUtil.Skip(iprot, field.Type);
              }
              break;
            default: 
              TProtocolUtil.Skip(iprot, field.Type);
              break;
          }
          iprot.ReadFieldEnd();
        }
        iprot.ReadStructEnd();
      }
      finally
      {
        iprot.DecrementRecursionDepth();
      }
    }

    public void Write(TProtocol oprot) {
      oprot.IncrementRecursionDepth();
      try
      {
        TStruct struc = new TStruct("createQrcodeBase64Image_args");
        oprot.WriteStructBegin(struc);
        TField field = new TField();
        if (Url != null && __isset.url) {
          field.Name = "url";
          field.Type = TType.String;
          field.ID = 2;
          oprot.WriteFieldBegin(field);
          oprot.WriteString(Url);
          oprot.WriteFieldEnd();
        }
        if (CharacterSet != null && __isset.characterSet) {
          field.Name = "characterSet";
          field.Type = TType.String;
          field.ID = 3;
          oprot.WriteFieldBegin(field);
          oprot.WriteString(CharacterSet);
          oprot.WriteFieldEnd();
        }
        if (__isset.imageSize) {
          field.Name = "imageSize";
          field.Type = TType.I32;
          field.ID = 4;
          oprot.WriteFieldBegin(field);
          oprot.WriteI32(ImageSize);
          oprot.WriteFieldEnd();
        }
        if (__isset.x) {
          field.Name = "x";
          field.Type = TType.I32;
          field.ID = 5;
          oprot.WriteFieldBegin(field);
          oprot.WriteI32(X);
          oprot.WriteFieldEnd();
        }
        if (__isset.y) {
          field.Name = "y";
          field.Type = TType.I32;
          field.ID = 6;
          oprot.WriteFieldBegin(field);
          oprot.WriteI32(Y);
          oprot.WriteFieldEnd();
        }
        if (__isset.width) {
          field.Name = "width";
          field.Type = TType.I32;
          field.ID = 7;
          oprot.WriteFieldBegin(field);
          oprot.WriteI32(Width);
          oprot.WriteFieldEnd();
        }
        if (__isset.height) {
          field.Name = "height";
          field.Type = TType.I32;
          field.ID = 8;
          oprot.WriteFieldBegin(field);
          oprot.WriteI32(Height);
          oprot.WriteFieldEnd();
        }
        oprot.WriteFieldStop();
        oprot.WriteStructEnd();
      }
      finally
      {
        oprot.DecrementRecursionDepth();
      }
    }

    public override string ToString() {
      StringBuilder __sb = new StringBuilder("createQrcodeBase64Image_args(");
      bool __first = true;
      if (Url != null && __isset.url) {
        if(!__first) { __sb.Append(", "); }
        __first = false;
        __sb.Append("Url: ");
        __sb.Append(Url);
      }
      if (CharacterSet != null && __isset.characterSet) {
        if(!__first) { __sb.Append(", "); }
        __first = false;
        __sb.Append("CharacterSet: ");
        __sb.Append(CharacterSet);
      }
      if (__isset.imageSize) {
        if(!__first) { __sb.Append(", "); }
        __first = false;
        __sb.Append("ImageSize: ");
        __sb.Append(ImageSize);
      }
      if (__isset.x) {
        if(!__first) { __sb.Append(", "); }
        __first = false;
        __sb.Append("X: ");
        __sb.Append(X);
      }
      if (__isset.y) {
        if(!__first) { __sb.Append(", "); }
        __first = false;
        __sb.Append("Y: ");
        __sb.Append(Y);
      }
      if (__isset.width) {
        if(!__first) { __sb.Append(", "); }
        __first = false;
        __sb.Append("Width: ");
        __sb.Append(Width);
      }
      if (__isset.height) {
        if(!__first) { __sb.Append(", "); }
        __first = false;
        __sb.Append("Height: ");
        __sb.Append(Height);
      }
      __sb.Append(")");
      return __sb.ToString();
    }

  }


  #if !SILVERLIGHT
  [Serializable]
  #endif
  public partial class createQrcodeBase64Image_result : TBase
  {
    private string _success;
    private TalkException _e;

    public string Success
    {
      get
      {
        return _success;
      }
      set
      {
        __isset.success = true;
        this._success = value;
      }
    }

    public TalkException E
    {
      get
      {
        return _e;
      }
      set
      {
        __isset.e = true;
        this._e = value;
      }
    }


    public Isset __isset;
    #if !SILVERLIGHT
    [Serializable]
    #endif
    public struct Isset {
      public bool success;
      public bool e;
    }

    public createQrcodeBase64Image_result() {
    }

    public void Read (TProtocol iprot)
    {
      iprot.IncrementRecursionDepth();
      try
      {
        TField field;
        iprot.ReadStructBegin();
        while (true)
        {
          field = iprot.ReadFieldBegin();
          if (field.Type == TType.Stop) { 
            break;
          }
          switch (field.ID)
          {
            case 0:
              if (field.Type == TType.String) {
                Success = iprot.ReadString();
              } else { 
                TProtocolUtil.Skip(iprot, field.Type);
              }
              break;
            case 1:
              if (field.Type == TType.Struct) {
                E = new TalkException();
                E.Read(iprot);
              } else { 
                TProtocolUtil.Skip(iprot, field.Type);
              }
              break;
            default: 
              TProtocolUtil.Skip(iprot, field.Type);
              break;
          }
          iprot.ReadFieldEnd();
        }
        iprot.ReadStructEnd();
      }
      finally
      {
        iprot.DecrementRecursionDepth();
      }
    }

    public void Write(TProtocol oprot) {
      oprot.IncrementRecursionDepth();
      try
      {
        TStruct struc = new TStruct("createQrcodeBase64Image_result");
        oprot.WriteStructBegin(struc);
        TField field = new TField();

        if (this.__isset.success) {
          if (Success != null) {
            field.Name = "Success";
            field.Type = TType.String;
            field.ID = 0;
            oprot.WriteFieldBegin(field);
            oprot.WriteString(Success);
            oprot.WriteFieldEnd();
          }
        } else if (this.__isset.e) {
          if (E != null) {
            field.Name = "E";
            field.Type = TType.Struct;
            field.ID = 1;
            oprot.WriteFieldBegin(field);
            E.Write(oprot);
            oprot.WriteFieldEnd();
          }
        }
        oprot.WriteFieldStop();
        oprot.WriteStructEnd();
      }
      finally
      {
        oprot.DecrementRecursionDepth();
      }
    }

    public override string ToString() {
      StringBuilder __sb = new StringBuilder("createQrcodeBase64Image_result(");
      bool __first = true;
      if (Success != null && __isset.success) {
        if(!__first) { __sb.Append(", "); }
        __first = false;
        __sb.Append("Success: ");
        __sb.Append(Success);
      }
      if (E != null && __isset.e) {
        if(!__first) { __sb.Append(", "); }
        __first = false;
        __sb.Append("E: ");
        __sb.Append(E== null ? "<null>" : E.ToString());
      }
      __sb.Append(")");
      return __sb.ToString();
    }

  }


  #if !SILVERLIGHT
  [Serializable]
  #endif
  public partial class createRoom_args : TBase
  {
    private int _reqSeq;
    private List<string> _contactIds;

    public int ReqSeq
    {
      get
      {
        return _reqSeq;
      }
      set
      {
        __isset.reqSeq = true;
        this._reqSeq = value;
      }
    }

    public List<string> ContactIds
    {
      get
      {
        return _contactIds;
      }
      set
      {
        __isset.contactIds = true;
        this._contactIds = value;
      }
    }


    public Isset __isset;
    #if !SILVERLIGHT
    [Serializable]
    #endif
    public struct Isset {
      public bool reqSeq;
      public bool contactIds;
    }

    public createRoom_args() {
    }

    public void Read (TProtocol iprot)
    {
      iprot.IncrementRecursionDepth();
      try
      {
        TField field;
        iprot.ReadStructBegin();
        while (true)
        {
          field = iprot.ReadFieldBegin();
          if (field.Type == TType.Stop) { 
            break;
          }
          switch (field.ID)
          {
            case 1:
              if (field.Type == TType.I32) {
                ReqSeq = iprot.ReadI32();
              } else { 
                TProtocolUtil.Skip(iprot, field.Type);
              }
              break;
            case 2:
              if (field.Type == TType.List) {
                {
                  ContactIds = new List<string>();
                  TList _list34 = iprot.ReadListBegin();
                  for( int _i35 = 0; _i35 < _list34.Count; ++_i35)
                  {
                    string _elem36;
                    _elem36 = iprot.ReadString();
                    ContactIds.Add(_elem36);
                  }
                  iprot.ReadListEnd();
                }
              } else { 
                TProtocolUtil.Skip(iprot, field.Type);
              }
              break;
            default: 
              TProtocolUtil.Skip(iprot, field.Type);
              break;
          }
          iprot.ReadFieldEnd();
        }
        iprot.ReadStructEnd();
      }
      finally
      {
        iprot.DecrementRecursionDepth();
      }
    }

    public void Write(TProtocol oprot) {
      oprot.IncrementRecursionDepth();
      try
      {
        TStruct struc = new TStruct("createRoom_args");
        oprot.WriteStructBegin(struc);
        TField field = new TField();
        if (__isset.reqSeq) {
          field.Name = "reqSeq";
          field.Type = TType.I32;
          field.ID = 1;
          oprot.WriteFieldBegin(field);
          oprot.WriteI32(ReqSeq);
          oprot.WriteFieldEnd();
        }
        if (ContactIds != null && __isset.contactIds) {
          field.Name = "contactIds";
          field.Type = TType.List;
          field.ID = 2;
          oprot.WriteFieldBegin(field);
          {
            oprot.WriteListBegin(new TList(TType.String, ContactIds.Count));
            foreach (string _iter37 in ContactIds)
            {
              oprot.WriteString(_iter37);
            }
            oprot.WriteListEnd();
          }
          oprot.WriteFieldEnd();
        }
        oprot.WriteFieldStop();
        oprot.WriteStructEnd();
      }
      finally
      {
        oprot.DecrementRecursionDepth();
      }
    }

    public override string ToString() {
      StringBuilder __sb = new StringBuilder("createRoom_args(");
      bool __first = true;
      if (__isset.reqSeq) {
        if(!__first) { __sb.Append(", "); }
        __first = false;
        __sb.Append("ReqSeq: ");
        __sb.Append(ReqSeq);
      }
      if (ContactIds != null && __isset.contactIds) {
        if(!__first) { __sb.Append(", "); }
        __first = false;
        __sb.Append("ContactIds: ");
        __sb.Append(ContactIds);
      }
      __sb.Append(")");
      return __sb.ToString();
    }

  }


  #if !SILVERLIGHT
  [Serializable]
  #endif
  public partial class createRoom_result : TBase
  {
    private Room _success;
    private TalkException _e;

    public Room Success
    {
      get
      {
        return _success;
      }
      set
      {
        __isset.success = true;
        this._success = value;
      }
    }

    public TalkException E
    {
      get
      {
        return _e;
      }
      set
      {
        __isset.e = true;
        this._e = value;
      }
    }


    public Isset __isset;
    #if !SILVERLIGHT
    [Serializable]
    #endif
    public struct Isset {
      public bool success;
      public bool e;
    }

    public createRoom_result() {
    }

    public void Read (TProtocol iprot)
    {
      iprot.IncrementRecursionDepth();
      try
      {
        TField field;
        iprot.ReadStructBegin();
        while (true)
        {
          field = iprot.ReadFieldBegin();
          if (field.Type == TType.Stop) { 
            break;
          }
          switch (field.ID)
          {
            case 0:
              if (field.Type == TType.Struct) {
                Success = new Room();
                Success.Read(iprot);
              } else { 
                TProtocolUtil.Skip(iprot, field.Type);
              }
              break;
            case 1:
              if (field.Type == TType.Struct) {
                E = new TalkException();
                E.Read(iprot);
              } else { 
                TProtocolUtil.Skip(iprot, field.Type);
              }
              break;
            default: 
              TProtocolUtil.Skip(iprot, field.Type);
              break;
          }
          iprot.ReadFieldEnd();
        }
        iprot.ReadStructEnd();
      }
      finally
      {
        iprot.DecrementRecursionDepth();
      }
    }

    public void Write(TProtocol oprot) {
      oprot.IncrementRecursionDepth();
      try
      {
        TStruct struc = new TStruct("createRoom_result");
        oprot.WriteStructBegin(struc);
        TField field = new TField();

        if (this.__isset.success) {
          if (Success != null) {
            field.Name = "Success";
            field.Type = TType.Struct;
            field.ID = 0;
            oprot.WriteFieldBegin(field);
            Success.Write(oprot);
            oprot.WriteFieldEnd();
          }
        } else if (this.__isset.e) {
          if (E != null) {
            field.Name = "E";
            field.Type = TType.Struct;
            field.ID = 1;
            oprot.WriteFieldBegin(field);
            E.Write(oprot);
            oprot.WriteFieldEnd();
          }
        }
        oprot.WriteFieldStop();
        oprot.WriteStructEnd();
      }
      finally
      {
        oprot.DecrementRecursionDepth();
      }
    }

    public override string ToString() {
      StringBuilder __sb = new StringBuilder("createRoom_result(");
      bool __first = true;
      if (Success != null && __isset.success) {
        if(!__first) { __sb.Append(", "); }
        __first = false;
        __sb.Append("Success: ");
        __sb.Append(Success== null ? "<null>" : Success.ToString());
      }
      if (E != null && __isset.e) {
        if(!__first) { __sb.Append(", "); }
        __first = false;
        __sb.Append("E: ");
        __sb.Append(E== null ? "<null>" : E.ToString());
      }
      __sb.Append(")");
      return __sb.ToString();
    }

  }


  #if !SILVERLIGHT
  [Serializable]
  #endif
  public partial class createSession_args : TBase
  {

    public createSession_args() {
    }

    public void Read (TProtocol iprot)
    {
      iprot.IncrementRecursionDepth();
      try
      {
        TField field;
        iprot.ReadStructBegin();
        while (true)
        {
          field = iprot.ReadFieldBegin();
          if (field.Type == TType.Stop) { 
            break;
          }
          switch (field.ID)
          {
            default: 
              TProtocolUtil.Skip(iprot, field.Type);
              break;
          }
          iprot.ReadFieldEnd();
        }
        iprot.ReadStructEnd();
      }
      finally
      {
        iprot.DecrementRecursionDepth();
      }
    }

    public void Write(TProtocol oprot) {
      oprot.IncrementRecursionDepth();
      try
      {
        TStruct struc = new TStruct("createSession_args");
        oprot.WriteStructBegin(struc);
        oprot.WriteFieldStop();
        oprot.WriteStructEnd();
      }
      finally
      {
        oprot.DecrementRecursionDepth();
      }
    }

    public override string ToString() {
      StringBuilder __sb = new StringBuilder("createSession_args(");
      __sb.Append(")");
      return __sb.ToString();
    }

  }


  #if !SILVERLIGHT
  [Serializable]
  #endif
  public partial class createSession_result : TBase
  {
    private string _success;
    private TalkException _e;

    public string Success
    {
      get
      {
        return _success;
      }
      set
      {
        __isset.success = true;
        this._success = value;
      }
    }

    public TalkException E
    {
      get
      {
        return _e;
      }
      set
      {
        __isset.e = true;
        this._e = value;
      }
    }


    public Isset __isset;
    #if !SILVERLIGHT
    [Serializable]
    #endif
    public struct Isset {
      public bool success;
      public bool e;
    }

    public createSession_result() {
    }

    public void Read (TProtocol iprot)
    {
      iprot.IncrementRecursionDepth();
      try
      {
        TField field;
        iprot.ReadStructBegin();
        while (true)
        {
          field = iprot.ReadFieldBegin();
          if (field.Type == TType.Stop) { 
            break;
          }
          switch (field.ID)
          {
            case 0:
              if (field.Type == TType.String) {
                Success = iprot.ReadString();
              } else { 
                TProtocolUtil.Skip(iprot, field.Type);
              }
              break;
            case 1:
              if (field.Type == TType.Struct) {
                E = new TalkException();
                E.Read(iprot);
              } else { 
                TProtocolUtil.Skip(iprot, field.Type);
              }
              break;
            default: 
              TProtocolUtil.Skip(iprot, field.Type);
              break;
          }
          iprot.ReadFieldEnd();
        }
        iprot.ReadStructEnd();
      }
      finally
      {
        iprot.DecrementRecursionDepth();
      }
    }

    public void Write(TProtocol oprot) {
      oprot.IncrementRecursionDepth();
      try
      {
        TStruct struc = new TStruct("createSession_result");
        oprot.WriteStructBegin(struc);
        TField field = new TField();

        if (this.__isset.success) {
          if (Success != null) {
            field.Name = "Success";
            field.Type = TType.String;
            field.ID = 0;
            oprot.WriteFieldBegin(field);
            oprot.WriteString(Success);
            oprot.WriteFieldEnd();
          }
        } else if (this.__isset.e) {
          if (E != null) {
            field.Name = "E";
            field.Type = TType.Struct;
            field.ID = 1;
            oprot.WriteFieldBegin(field);
            E.Write(oprot);
            oprot.WriteFieldEnd();
          }
        }
        oprot.WriteFieldStop();
        oprot.WriteStructEnd();
      }
      finally
      {
        oprot.DecrementRecursionDepth();
      }
    }

    public override string ToString() {
      StringBuilder __sb = new StringBuilder("createSession_result(");
      bool __first = true;
      if (Success != null && __isset.success) {
        if(!__first) { __sb.Append(", "); }
        __first = false;
        __sb.Append("Success: ");
        __sb.Append(Success);
      }
      if (E != null && __isset.e) {
        if(!__first) { __sb.Append(", "); }
        __first = false;
        __sb.Append("E: ");
        __sb.Append(E== null ? "<null>" : E.ToString());
      }
      __sb.Append(")");
      return __sb.ToString();
    }

  }


  #if !SILVERLIGHT
  [Serializable]
  #endif
  public partial class fetchOperations_args : TBase
  {
    private long _localRev;
    private int _count;

    public long LocalRev
    {
      get
      {
        return _localRev;
      }
      set
      {
        __isset.localRev = true;
        this._localRev = value;
      }
    }

    public int Count
    {
      get
      {
        return _count;
      }
      set
      {
        __isset.count = true;
        this._count = value;
      }
    }


    public Isset __isset;
    #if !SILVERLIGHT
    [Serializable]
    #endif
    public struct Isset {
      public bool localRev;
      public bool count;
    }

    public fetchOperations_args() {
    }

    public void Read (TProtocol iprot)
    {
      iprot.IncrementRecursionDepth();
      try
      {
        TField field;
        iprot.ReadStructBegin();
        while (true)
        {
          field = iprot.ReadFieldBegin();
          if (field.Type == TType.Stop) { 
            break;
          }
          switch (field.ID)
          {
            case 2:
              if (field.Type == TType.I64) {
                LocalRev = iprot.ReadI64();
              } else { 
                TProtocolUtil.Skip(iprot, field.Type);
              }
              break;
            case 3:
              if (field.Type == TType.I32) {
                Count = iprot.ReadI32();
              } else { 
                TProtocolUtil.Skip(iprot, field.Type);
              }
              break;
            default: 
              TProtocolUtil.Skip(iprot, field.Type);
              break;
          }
          iprot.ReadFieldEnd();
        }
        iprot.ReadStructEnd();
      }
      finally
      {
        iprot.DecrementRecursionDepth();
      }
    }

    public void Write(TProtocol oprot) {
      oprot.IncrementRecursionDepth();
      try
      {
        TStruct struc = new TStruct("fetchOperations_args");
        oprot.WriteStructBegin(struc);
        TField field = new TField();
        if (__isset.localRev) {
          field.Name = "localRev";
          field.Type = TType.I64;
          field.ID = 2;
          oprot.WriteFieldBegin(field);
          oprot.WriteI64(LocalRev);
          oprot.WriteFieldEnd();
        }
        if (__isset.count) {
          field.Name = "count";
          field.Type = TType.I32;
          field.ID = 3;
          oprot.WriteFieldBegin(field);
          oprot.WriteI32(Count);
          oprot.WriteFieldEnd();
        }
        oprot.WriteFieldStop();
        oprot.WriteStructEnd();
      }
      finally
      {
        oprot.DecrementRecursionDepth();
      }
    }

    public override string ToString() {
      StringBuilder __sb = new StringBuilder("fetchOperations_args(");
      bool __first = true;
      if (__isset.localRev) {
        if(!__first) { __sb.Append(", "); }
        __first = false;
        __sb.Append("LocalRev: ");
        __sb.Append(LocalRev);
      }
      if (__isset.count) {
        if(!__first) { __sb.Append(", "); }
        __first = false;
        __sb.Append("Count: ");
        __sb.Append(Count);
      }
      __sb.Append(")");
      return __sb.ToString();
    }

  }


  #if !SILVERLIGHT
  [Serializable]
  #endif
  public partial class fetchOperations_result : TBase
  {
    private List<Operation> _success;
    private TalkException _e;

    public List<Operation> Success
    {
      get
      {
        return _success;
      }
      set
      {
        __isset.success = true;
        this._success = value;
      }
    }

    public TalkException E
    {
      get
      {
        return _e;
      }
      set
      {
        __isset.e = true;
        this._e = value;
      }
    }


    public Isset __isset;
    #if !SILVERLIGHT
    [Serializable]
    #endif
    public struct Isset {
      public bool success;
      public bool e;
    }

    public fetchOperations_result() {
    }

    public void Read (TProtocol iprot)
    {
      iprot.IncrementRecursionDepth();
      try
      {
        TField field;
        iprot.ReadStructBegin();
        while (true)
        {
          field = iprot.ReadFieldBegin();
          if (field.Type == TType.Stop) { 
            break;
          }
          switch (field.ID)
          {
            case 0:
              if (field.Type == TType.List) {
                {
                  Success = new List<Operation>();
                  TList _list38 = iprot.ReadListBegin();
                  for( int _i39 = 0; _i39 < _list38.Count; ++_i39)
                  {
                    Operation _elem40;
                    _elem40 = new Operation();
                    _elem40.Read(iprot);
                    Success.Add(_elem40);
                  }
                  iprot.ReadListEnd();
                }
              } else { 
                TProtocolUtil.Skip(iprot, field.Type);
              }
              break;
            case 1:
              if (field.Type == TType.Struct) {
                E = new TalkException();
                E.Read(iprot);
              } else { 
                TProtocolUtil.Skip(iprot, field.Type);
              }
              break;
            default: 
              TProtocolUtil.Skip(iprot, field.Type);
              break;
          }
          iprot.ReadFieldEnd();
        }
        iprot.ReadStructEnd();
      }
      finally
      {
        iprot.DecrementRecursionDepth();
      }
    }

    public void Write(TProtocol oprot) {
      oprot.IncrementRecursionDepth();
      try
      {
        TStruct struc = new TStruct("fetchOperations_result");
        oprot.WriteStructBegin(struc);
        TField field = new TField();

        if (this.__isset.success) {
          if (Success != null) {
            field.Name = "Success";
            field.Type = TType.List;
            field.ID = 0;
            oprot.WriteFieldBegin(field);
            {
              oprot.WriteListBegin(new TList(TType.Struct, Success.Count));
              foreach (Operation _iter41 in Success)
              {
                _iter41.Write(oprot);
              }
              oprot.WriteListEnd();
            }
            oprot.WriteFieldEnd();
          }
        } else if (this.__isset.e) {
          if (E != null) {
            field.Name = "E";
            field.Type = TType.Struct;
            field.ID = 1;
            oprot.WriteFieldBegin(field);
            E.Write(oprot);
            oprot.WriteFieldEnd();
          }
        }
        oprot.WriteFieldStop();
        oprot.WriteStructEnd();
      }
      finally
      {
        oprot.DecrementRecursionDepth();
      }
    }

    public override string ToString() {
      StringBuilder __sb = new StringBuilder("fetchOperations_result(");
      bool __first = true;
      if (Success != null && __isset.success) {
        if(!__first) { __sb.Append(", "); }
        __first = false;
        __sb.Append("Success: ");
        __sb.Append(Success);
      }
      if (E != null && __isset.e) {
        if(!__first) { __sb.Append(", "); }
        __first = false;
        __sb.Append("E: ");
        __sb.Append(E== null ? "<null>" : E.ToString());
      }
      __sb.Append(")");
      return __sb.ToString();
    }

  }


  #if !SILVERLIGHT
  [Serializable]
  #endif
  public partial class getProfile_args : TBase
  {

    public getProfile_args() {
    }

    public void Read (TProtocol iprot)
    {
      iprot.IncrementRecursionDepth();
      try
      {
        TField field;
        iprot.ReadStructBegin();
        while (true)
        {
          field = iprot.ReadFieldBegin();
          if (field.Type == TType.Stop) { 
            break;
          }
          switch (field.ID)
          {
            default: 
              TProtocolUtil.Skip(iprot, field.Type);
              break;
          }
          iprot.ReadFieldEnd();
        }
        iprot.ReadStructEnd();
      }
      finally
      {
        iprot.DecrementRecursionDepth();
      }
    }

    public void Write(TProtocol oprot) {
      oprot.IncrementRecursionDepth();
      try
      {
        TStruct struc = new TStruct("getProfile_args");
        oprot.WriteStructBegin(struc);
        oprot.WriteFieldStop();
        oprot.WriteStructEnd();
      }
      finally
      {
        oprot.DecrementRecursionDepth();
      }
    }

    public override string ToString() {
      StringBuilder __sb = new StringBuilder("getProfile_args(");
      __sb.Append(")");
      return __sb.ToString();
    }

  }


  #if !SILVERLIGHT
  [Serializable]
  #endif
  public partial class getProfile_result : TBase
  {
    private Profile _success;
    private TalkException _e;

    public Profile Success
    {
      get
      {
        return _success;
      }
      set
      {
        __isset.success = true;
        this._success = value;
      }
    }

    public TalkException E
    {
      get
      {
        return _e;
      }
      set
      {
        __isset.e = true;
        this._e = value;
      }
    }


    public Isset __isset;
    #if !SILVERLIGHT
    [Serializable]
    #endif
    public struct Isset {
      public bool success;
      public bool e;
    }

    public getProfile_result() {
    }

    public void Read (TProtocol iprot)
    {
      iprot.IncrementRecursionDepth();
      try
      {
        TField field;
        iprot.ReadStructBegin();
        while (true)
        {
          field = iprot.ReadFieldBegin();
          if (field.Type == TType.Stop) { 
            break;
          }
          switch (field.ID)
          {
            case 0:
              if (field.Type == TType.Struct) {
                Success = new Profile();
                Success.Read(iprot);
              } else { 
                TProtocolUtil.Skip(iprot, field.Type);
              }
              break;
            case 1:
              if (field.Type == TType.Struct) {
                E = new TalkException();
                E.Read(iprot);
              } else { 
                TProtocolUtil.Skip(iprot, field.Type);
              }
              break;
            default: 
              TProtocolUtil.Skip(iprot, field.Type);
              break;
          }
          iprot.ReadFieldEnd();
        }
        iprot.ReadStructEnd();
      }
      finally
      {
        iprot.DecrementRecursionDepth();
      }
    }

    public void Write(TProtocol oprot) {
      oprot.IncrementRecursionDepth();
      try
      {
        TStruct struc = new TStruct("getProfile_result");
        oprot.WriteStructBegin(struc);
        TField field = new TField();

        if (this.__isset.success) {
          if (Success != null) {
            field.Name = "Success";
            field.Type = TType.Struct;
            field.ID = 0;
            oprot.WriteFieldBegin(field);
            Success.Write(oprot);
            oprot.WriteFieldEnd();
          }
        } else if (this.__isset.e) {
          if (E != null) {
            field.Name = "E";
            field.Type = TType.Struct;
            field.ID = 1;
            oprot.WriteFieldBegin(field);
            E.Write(oprot);
            oprot.WriteFieldEnd();
          }
        }
        oprot.WriteFieldStop();
        oprot.WriteStructEnd();
      }
      finally
      {
        oprot.DecrementRecursionDepth();
      }
    }

    public override string ToString() {
      StringBuilder __sb = new StringBuilder("getProfile_result(");
      bool __first = true;
      if (Success != null && __isset.success) {
        if(!__first) { __sb.Append(", "); }
        __first = false;
        __sb.Append("Success: ");
        __sb.Append(Success== null ? "<null>" : Success.ToString());
      }
      if (E != null && __isset.e) {
        if(!__first) { __sb.Append(", "); }
        __first = false;
        __sb.Append("E: ");
        __sb.Append(E== null ? "<null>" : E.ToString());
      }
      __sb.Append(")");
      return __sb.ToString();
    }

  }


  #if !SILVERLIGHT
  [Serializable]
  #endif
  public partial class findAndAddContactsByEmail_args : TBase
  {
    private int _reqSeq;
    private THashSet<string> _emails;

    public int ReqSeq
    {
      get
      {
        return _reqSeq;
      }
      set
      {
        __isset.reqSeq = true;
        this._reqSeq = value;
      }
    }

    public THashSet<string> Emails
    {
      get
      {
        return _emails;
      }
      set
      {
        __isset.emails = true;
        this._emails = value;
      }
    }


    public Isset __isset;
    #if !SILVERLIGHT
    [Serializable]
    #endif
    public struct Isset {
      public bool reqSeq;
      public bool emails;
    }

    public findAndAddContactsByEmail_args() {
    }

    public void Read (TProtocol iprot)
    {
      iprot.IncrementRecursionDepth();
      try
      {
        TField field;
        iprot.ReadStructBegin();
        while (true)
        {
          field = iprot.ReadFieldBegin();
          if (field.Type == TType.Stop) { 
            break;
          }
          switch (field.ID)
          {
            case 1:
              if (field.Type == TType.I32) {
                ReqSeq = iprot.ReadI32();
              } else { 
                TProtocolUtil.Skip(iprot, field.Type);
              }
              break;
            case 2:
              if (field.Type == TType.Set) {
                {
                  Emails = new THashSet<string>();
                  TSet _set42 = iprot.ReadSetBegin();
                  for( int _i43 = 0; _i43 < _set42.Count; ++_i43)
                  {
                    string _elem44;
                    _elem44 = iprot.ReadString();
                    Emails.Add(_elem44);
                  }
                  iprot.ReadSetEnd();
                }
              } else { 
                TProtocolUtil.Skip(iprot, field.Type);
              }
              break;
            default: 
              TProtocolUtil.Skip(iprot, field.Type);
              break;
          }
          iprot.ReadFieldEnd();
        }
        iprot.ReadStructEnd();
      }
      finally
      {
        iprot.DecrementRecursionDepth();
      }
    }

    public void Write(TProtocol oprot) {
      oprot.IncrementRecursionDepth();
      try
      {
        TStruct struc = new TStruct("findAndAddContactsByEmail_args");
        oprot.WriteStructBegin(struc);
        TField field = new TField();
        if (__isset.reqSeq) {
          field.Name = "reqSeq";
          field.Type = TType.I32;
          field.ID = 1;
          oprot.WriteFieldBegin(field);
          oprot.WriteI32(ReqSeq);
          oprot.WriteFieldEnd();
        }
        if (Emails != null && __isset.emails) {
          field.Name = "emails";
          field.Type = TType.Set;
          field.ID = 2;
          oprot.WriteFieldBegin(field);
          {
            oprot.WriteSetBegin(new TSet(TType.String, Emails.Count));
            foreach (string _iter45 in Emails)
            {
              oprot.WriteString(_iter45);
            }
            oprot.WriteSetEnd();
          }
          oprot.WriteFieldEnd();
        }
        oprot.WriteFieldStop();
        oprot.WriteStructEnd();
      }
      finally
      {
        oprot.DecrementRecursionDepth();
      }
    }

    public override string ToString() {
      StringBuilder __sb = new StringBuilder("findAndAddContactsByEmail_args(");
      bool __first = true;
      if (__isset.reqSeq) {
        if(!__first) { __sb.Append(", "); }
        __first = false;
        __sb.Append("ReqSeq: ");
        __sb.Append(ReqSeq);
      }
      if (Emails != null && __isset.emails) {
        if(!__first) { __sb.Append(", "); }
        __first = false;
        __sb.Append("Emails: ");
        __sb.Append(Emails);
      }
      __sb.Append(")");
      return __sb.ToString();
    }

  }


  #if !SILVERLIGHT
  [Serializable]
  #endif
  public partial class findAndAddContactsByEmail_result : TBase
  {
    private Dictionary<string, Contact> _success;
    private TalkException _e;

    public Dictionary<string, Contact> Success
    {
      get
      {
        return _success;
      }
      set
      {
        __isset.success = true;
        this._success = value;
      }
    }

    public TalkException E
    {
      get
      {
        return _e;
      }
      set
      {
        __isset.e = true;
        this._e = value;
      }
    }


    public Isset __isset;
    #if !SILVERLIGHT
    [Serializable]
    #endif
    public struct Isset {
      public bool success;
      public bool e;
    }

    public findAndAddContactsByEmail_result() {
    }

    public void Read (TProtocol iprot)
    {
      iprot.IncrementRecursionDepth();
      try
      {
        TField field;
        iprot.ReadStructBegin();
        while (true)
        {
          field = iprot.ReadFieldBegin();
          if (field.Type == TType.Stop) { 
            break;
          }
          switch (field.ID)
          {
            case 0:
              if (field.Type == TType.Map) {
                {
                  Success = new Dictionary<string, Contact>();
                  TMap _map46 = iprot.ReadMapBegin();
                  for( int _i47 = 0; _i47 < _map46.Count; ++_i47)
                  {
                    string _key48;
                    Contact _val49;
                    _key48 = iprot.ReadString();
                    _val49 = new Contact();
                    _val49.Read(iprot);
                    Success[_key48] = _val49;
                  }
                  iprot.ReadMapEnd();
                }
              } else { 
                TProtocolUtil.Skip(iprot, field.Type);
              }
              break;
            case 1:
              if (field.Type == TType.Struct) {
                E = new TalkException();
                E.Read(iprot);
              } else { 
                TProtocolUtil.Skip(iprot, field.Type);
              }
              break;
            default: 
              TProtocolUtil.Skip(iprot, field.Type);
              break;
          }
          iprot.ReadFieldEnd();
        }
        iprot.ReadStructEnd();
      }
      finally
      {
        iprot.DecrementRecursionDepth();
      }
    }

    public void Write(TProtocol oprot) {
      oprot.IncrementRecursionDepth();
      try
      {
        TStruct struc = new TStruct("findAndAddContactsByEmail_result");
        oprot.WriteStructBegin(struc);
        TField field = new TField();

        if (this.__isset.success) {
          if (Success != null) {
            field.Name = "Success";
            field.Type = TType.Map;
            field.ID = 0;
            oprot.WriteFieldBegin(field);
            {
              oprot.WriteMapBegin(new TMap(TType.String, TType.Struct, Success.Count));
              foreach (string _iter50 in Success.Keys)
              {
                oprot.WriteString(_iter50);
                Success[_iter50].Write(oprot);
              }
              oprot.WriteMapEnd();
            }
            oprot.WriteFieldEnd();
          }
        } else if (this.__isset.e) {
          if (E != null) {
            field.Name = "E";
            field.Type = TType.Struct;
            field.ID = 1;
            oprot.WriteFieldBegin(field);
            E.Write(oprot);
            oprot.WriteFieldEnd();
          }
        }
        oprot.WriteFieldStop();
        oprot.WriteStructEnd();
      }
      finally
      {
        oprot.DecrementRecursionDepth();
      }
    }

    public override string ToString() {
      StringBuilder __sb = new StringBuilder("findAndAddContactsByEmail_result(");
      bool __first = true;
      if (Success != null && __isset.success) {
        if(!__first) { __sb.Append(", "); }
        __first = false;
        __sb.Append("Success: ");
        __sb.Append(Success);
      }
      if (E != null && __isset.e) {
        if(!__first) { __sb.Append(", "); }
        __first = false;
        __sb.Append("E: ");
        __sb.Append(E== null ? "<null>" : E.ToString());
      }
      __sb.Append(")");
      return __sb.ToString();
    }

  }


  #if !SILVERLIGHT
  [Serializable]
  #endif
  public partial class findAndAddContactsByMid_args : TBase
  {
    private int _reqSeq;
    private string _mid;

    public int ReqSeq
    {
      get
      {
        return _reqSeq;
      }
      set
      {
        __isset.reqSeq = true;
        this._reqSeq = value;
      }
    }

    public string Mid
    {
      get
      {
        return _mid;
      }
      set
      {
        __isset.mid = true;
        this._mid = value;
      }
    }


    public Isset __isset;
    #if !SILVERLIGHT
    [Serializable]
    #endif
    public struct Isset {
      public bool reqSeq;
      public bool mid;
    }

    public findAndAddContactsByMid_args() {
    }

    public void Read (TProtocol iprot)
    {
      iprot.IncrementRecursionDepth();
      try
      {
        TField field;
        iprot.ReadStructBegin();
        while (true)
        {
          field = iprot.ReadFieldBegin();
          if (field.Type == TType.Stop) { 
            break;
          }
          switch (field.ID)
          {
            case 1:
              if (field.Type == TType.I32) {
                ReqSeq = iprot.ReadI32();
              } else { 
                TProtocolUtil.Skip(iprot, field.Type);
              }
              break;
            case 2:
              if (field.Type == TType.String) {
                Mid = iprot.ReadString();
              } else { 
                TProtocolUtil.Skip(iprot, field.Type);
              }
              break;
            default: 
              TProtocolUtil.Skip(iprot, field.Type);
              break;
          }
          iprot.ReadFieldEnd();
        }
        iprot.ReadStructEnd();
      }
      finally
      {
        iprot.DecrementRecursionDepth();
      }
    }

    public void Write(TProtocol oprot) {
      oprot.IncrementRecursionDepth();
      try
      {
        TStruct struc = new TStruct("findAndAddContactsByMid_args");
        oprot.WriteStructBegin(struc);
        TField field = new TField();
        if (__isset.reqSeq) {
          field.Name = "reqSeq";
          field.Type = TType.I32;
          field.ID = 1;
          oprot.WriteFieldBegin(field);
          oprot.WriteI32(ReqSeq);
          oprot.WriteFieldEnd();
        }
        if (Mid != null && __isset.mid) {
          field.Name = "mid";
          field.Type = TType.String;
          field.ID = 2;
          oprot.WriteFieldBegin(field);
          oprot.WriteString(Mid);
          oprot.WriteFieldEnd();
        }
        oprot.WriteFieldStop();
        oprot.WriteStructEnd();
      }
      finally
      {
        oprot.DecrementRecursionDepth();
      }
    }

    public override string ToString() {
      StringBuilder __sb = new StringBuilder("findAndAddContactsByMid_args(");
      bool __first = true;
      if (__isset.reqSeq) {
        if(!__first) { __sb.Append(", "); }
        __first = false;
        __sb.Append("ReqSeq: ");
        __sb.Append(ReqSeq);
      }
      if (Mid != null && __isset.mid) {
        if(!__first) { __sb.Append(", "); }
        __first = false;
        __sb.Append("Mid: ");
        __sb.Append(Mid);
      }
      __sb.Append(")");
      return __sb.ToString();
    }

  }


  #if !SILVERLIGHT
  [Serializable]
  #endif
  public partial class findAndAddContactsByMid_result : TBase
  {
    private Dictionary<string, Contact> _success;
    private TalkException _e;

    public Dictionary<string, Contact> Success
    {
      get
      {
        return _success;
      }
      set
      {
        __isset.success = true;
        this._success = value;
      }
    }

    public TalkException E
    {
      get
      {
        return _e;
      }
      set
      {
        __isset.e = true;
        this._e = value;
      }
    }


    public Isset __isset;
    #if !SILVERLIGHT
    [Serializable]
    #endif
    public struct Isset {
      public bool success;
      public bool e;
    }

    public findAndAddContactsByMid_result() {
    }

    public void Read (TProtocol iprot)
    {
      iprot.IncrementRecursionDepth();
      try
      {
        TField field;
        iprot.ReadStructBegin();
        while (true)
        {
          field = iprot.ReadFieldBegin();
          if (field.Type == TType.Stop) { 
            break;
          }
          switch (field.ID)
          {
            case 0:
              if (field.Type == TType.Map) {
                {
                  Success = new Dictionary<string, Contact>();
                  TMap _map51 = iprot.ReadMapBegin();
                  for( int _i52 = 0; _i52 < _map51.Count; ++_i52)
                  {
                    string _key53;
                    Contact _val54;
                    _key53 = iprot.ReadString();
                    _val54 = new Contact();
                    _val54.Read(iprot);
                    Success[_key53] = _val54;
                  }
                  iprot.ReadMapEnd();
                }
              } else { 
                TProtocolUtil.Skip(iprot, field.Type);
              }
              break;
            case 1:
              if (field.Type == TType.Struct) {
                E = new TalkException();
                E.Read(iprot);
              } else { 
                TProtocolUtil.Skip(iprot, field.Type);
              }
              break;
            default: 
              TProtocolUtil.Skip(iprot, field.Type);
              break;
          }
          iprot.ReadFieldEnd();
        }
        iprot.ReadStructEnd();
      }
      finally
      {
        iprot.DecrementRecursionDepth();
      }
    }

    public void Write(TProtocol oprot) {
      oprot.IncrementRecursionDepth();
      try
      {
        TStruct struc = new TStruct("findAndAddContactsByMid_result");
        oprot.WriteStructBegin(struc);
        TField field = new TField();

        if (this.__isset.success) {
          if (Success != null) {
            field.Name = "Success";
            field.Type = TType.Map;
            field.ID = 0;
            oprot.WriteFieldBegin(field);
            {
              oprot.WriteMapBegin(new TMap(TType.String, TType.Struct, Success.Count));
              foreach (string _iter55 in Success.Keys)
              {
                oprot.WriteString(_iter55);
                Success[_iter55].Write(oprot);
              }
              oprot.WriteMapEnd();
            }
            oprot.WriteFieldEnd();
          }
        } else if (this.__isset.e) {
          if (E != null) {
            field.Name = "E";
            field.Type = TType.Struct;
            field.ID = 1;
            oprot.WriteFieldBegin(field);
            E.Write(oprot);
            oprot.WriteFieldEnd();
          }
        }
        oprot.WriteFieldStop();
        oprot.WriteStructEnd();
      }
      finally
      {
        oprot.DecrementRecursionDepth();
      }
    }

    public override string ToString() {
      StringBuilder __sb = new StringBuilder("findAndAddContactsByMid_result(");
      bool __first = true;
      if (Success != null && __isset.success) {
        if(!__first) { __sb.Append(", "); }
        __first = false;
        __sb.Append("Success: ");
        __sb.Append(Success);
      }
      if (E != null && __isset.e) {
        if(!__first) { __sb.Append(", "); }
        __first = false;
        __sb.Append("E: ");
        __sb.Append(E== null ? "<null>" : E.ToString());
      }
      __sb.Append(")");
      return __sb.ToString();
    }

  }


  #if !SILVERLIGHT
  [Serializable]
  #endif
  public partial class findAndAddContactsByPhone_args : TBase
  {
    private int _reqSeq;
    private THashSet<string> _phones;

    public int ReqSeq
    {
      get
      {
        return _reqSeq;
      }
      set
      {
        __isset.reqSeq = true;
        this._reqSeq = value;
      }
    }

    public THashSet<string> Phones
    {
      get
      {
        return _phones;
      }
      set
      {
        __isset.phones = true;
        this._phones = value;
      }
    }


    public Isset __isset;
    #if !SILVERLIGHT
    [Serializable]
    #endif
    public struct Isset {
      public bool reqSeq;
      public bool phones;
    }

    public findAndAddContactsByPhone_args() {
    }

    public void Read (TProtocol iprot)
    {
      iprot.IncrementRecursionDepth();
      try
      {
        TField field;
        iprot.ReadStructBegin();
        while (true)
        {
          field = iprot.ReadFieldBegin();
          if (field.Type == TType.Stop) { 
            break;
          }
          switch (field.ID)
          {
            case 1:
              if (field.Type == TType.I32) {
                ReqSeq = iprot.ReadI32();
              } else { 
                TProtocolUtil.Skip(iprot, field.Type);
              }
              break;
            case 2:
              if (field.Type == TType.Set) {
                {
                  Phones = new THashSet<string>();
                  TSet _set56 = iprot.ReadSetBegin();
                  for( int _i57 = 0; _i57 < _set56.Count; ++_i57)
                  {
                    string _elem58;
                    _elem58 = iprot.ReadString();
                    Phones.Add(_elem58);
                  }
                  iprot.ReadSetEnd();
                }
              } else { 
                TProtocolUtil.Skip(iprot, field.Type);
              }
              break;
            default: 
              TProtocolUtil.Skip(iprot, field.Type);
              break;
          }
          iprot.ReadFieldEnd();
        }
        iprot.ReadStructEnd();
      }
      finally
      {
        iprot.DecrementRecursionDepth();
      }
    }

    public void Write(TProtocol oprot) {
      oprot.IncrementRecursionDepth();
      try
      {
        TStruct struc = new TStruct("findAndAddContactsByPhone_args");
        oprot.WriteStructBegin(struc);
        TField field = new TField();
        if (__isset.reqSeq) {
          field.Name = "reqSeq";
          field.Type = TType.I32;
          field.ID = 1;
          oprot.WriteFieldBegin(field);
          oprot.WriteI32(ReqSeq);
          oprot.WriteFieldEnd();
        }
        if (Phones != null && __isset.phones) {
          field.Name = "phones";
          field.Type = TType.Set;
          field.ID = 2;
          oprot.WriteFieldBegin(field);
          {
            oprot.WriteSetBegin(new TSet(TType.String, Phones.Count));
            foreach (string _iter59 in Phones)
            {
              oprot.WriteString(_iter59);
            }
            oprot.WriteSetEnd();
          }
          oprot.WriteFieldEnd();
        }
        oprot.WriteFieldStop();
        oprot.WriteStructEnd();
      }
      finally
      {
        oprot.DecrementRecursionDepth();
      }
    }

    public override string ToString() {
      StringBuilder __sb = new StringBuilder("findAndAddContactsByPhone_args(");
      bool __first = true;
      if (__isset.reqSeq) {
        if(!__first) { __sb.Append(", "); }
        __first = false;
        __sb.Append("ReqSeq: ");
        __sb.Append(ReqSeq);
      }
      if (Phones != null && __isset.phones) {
        if(!__first) { __sb.Append(", "); }
        __first = false;
        __sb.Append("Phones: ");
        __sb.Append(Phones);
      }
      __sb.Append(")");
      return __sb.ToString();
    }

  }


  #if !SILVERLIGHT
  [Serializable]
  #endif
  public partial class findAndAddContactsByPhone_result : TBase
  {
    private Dictionary<string, Contact> _success;
    private TalkException _e;

    public Dictionary<string, Contact> Success
    {
      get
      {
        return _success;
      }
      set
      {
        __isset.success = true;
        this._success = value;
      }
    }

    public TalkException E
    {
      get
      {
        return _e;
      }
      set
      {
        __isset.e = true;
        this._e = value;
      }
    }


    public Isset __isset;
    #if !SILVERLIGHT
    [Serializable]
    #endif
    public struct Isset {
      public bool success;
      public bool e;
    }

    public findAndAddContactsByPhone_result() {
    }

    public void Read (TProtocol iprot)
    {
      iprot.IncrementRecursionDepth();
      try
      {
        TField field;
        iprot.ReadStructBegin();
        while (true)
        {
          field = iprot.ReadFieldBegin();
          if (field.Type == TType.Stop) { 
            break;
          }
          switch (field.ID)
          {
            case 0:
              if (field.Type == TType.Map) {
                {
                  Success = new Dictionary<string, Contact>();
                  TMap _map60 = iprot.ReadMapBegin();
                  for( int _i61 = 0; _i61 < _map60.Count; ++_i61)
                  {
                    string _key62;
                    Contact _val63;
                    _key62 = iprot.ReadString();
                    _val63 = new Contact();
                    _val63.Read(iprot);
                    Success[_key62] = _val63;
                  }
                  iprot.ReadMapEnd();
                }
              } else { 
                TProtocolUtil.Skip(iprot, field.Type);
              }
              break;
            case 1:
              if (field.Type == TType.Struct) {
                E = new TalkException();
                E.Read(iprot);
              } else { 
                TProtocolUtil.Skip(iprot, field.Type);
              }
              break;
            default: 
              TProtocolUtil.Skip(iprot, field.Type);
              break;
          }
          iprot.ReadFieldEnd();
        }
        iprot.ReadStructEnd();
      }
      finally
      {
        iprot.DecrementRecursionDepth();
      }
    }

    public void Write(TProtocol oprot) {
      oprot.IncrementRecursionDepth();
      try
      {
        TStruct struc = new TStruct("findAndAddContactsByPhone_result");
        oprot.WriteStructBegin(struc);
        TField field = new TField();

        if (this.__isset.success) {
          if (Success != null) {
            field.Name = "Success";
            field.Type = TType.Map;
            field.ID = 0;
            oprot.WriteFieldBegin(field);
            {
              oprot.WriteMapBegin(new TMap(TType.String, TType.Struct, Success.Count));
              foreach (string _iter64 in Success.Keys)
              {
                oprot.WriteString(_iter64);
                Success[_iter64].Write(oprot);
              }
              oprot.WriteMapEnd();
            }
            oprot.WriteFieldEnd();
          }
        } else if (this.__isset.e) {
          if (E != null) {
            field.Name = "E";
            field.Type = TType.Struct;
            field.ID = 1;
            oprot.WriteFieldBegin(field);
            E.Write(oprot);
            oprot.WriteFieldEnd();
          }
        }
        oprot.WriteFieldStop();
        oprot.WriteStructEnd();
      }
      finally
      {
        oprot.DecrementRecursionDepth();
      }
    }

    public override string ToString() {
      StringBuilder __sb = new StringBuilder("findAndAddContactsByPhone_result(");
      bool __first = true;
      if (Success != null && __isset.success) {
        if(!__first) { __sb.Append(", "); }
        __first = false;
        __sb.Append("Success: ");
        __sb.Append(Success);
      }
      if (E != null && __isset.e) {
        if(!__first) { __sb.Append(", "); }
        __first = false;
        __sb.Append("E: ");
        __sb.Append(E== null ? "<null>" : E.ToString());
      }
      __sb.Append(")");
      return __sb.ToString();
    }

  }


  #if !SILVERLIGHT
  [Serializable]
  #endif
  public partial class findAndAddContactsByUserid_args : TBase
  {
    private int _reqSeq;
    private string _userid;

    public int ReqSeq
    {
      get
      {
        return _reqSeq;
      }
      set
      {
        __isset.reqSeq = true;
        this._reqSeq = value;
      }
    }

    public string Userid
    {
      get
      {
        return _userid;
      }
      set
      {
        __isset.userid = true;
        this._userid = value;
      }
    }


    public Isset __isset;
    #if !SILVERLIGHT
    [Serializable]
    #endif
    public struct Isset {
      public bool reqSeq;
      public bool userid;
    }

    public findAndAddContactsByUserid_args() {
    }

    public void Read (TProtocol iprot)
    {
      iprot.IncrementRecursionDepth();
      try
      {
        TField field;
        iprot.ReadStructBegin();
        while (true)
        {
          field = iprot.ReadFieldBegin();
          if (field.Type == TType.Stop) { 
            break;
          }
          switch (field.ID)
          {
            case 1:
              if (field.Type == TType.I32) {
                ReqSeq = iprot.ReadI32();
              } else { 
                TProtocolUtil.Skip(iprot, field.Type);
              }
              break;
            case 2:
              if (field.Type == TType.String) {
                Userid = iprot.ReadString();
              } else { 
                TProtocolUtil.Skip(iprot, field.Type);
              }
              break;
            default: 
              TProtocolUtil.Skip(iprot, field.Type);
              break;
          }
          iprot.ReadFieldEnd();
        }
        iprot.ReadStructEnd();
      }
      finally
      {
        iprot.DecrementRecursionDepth();
      }
    }

    public void Write(TProtocol oprot) {
      oprot.IncrementRecursionDepth();
      try
      {
        TStruct struc = new TStruct("findAndAddContactsByUserid_args");
        oprot.WriteStructBegin(struc);
        TField field = new TField();
        if (__isset.reqSeq) {
          field.Name = "reqSeq";
          field.Type = TType.I32;
          field.ID = 1;
          oprot.WriteFieldBegin(field);
          oprot.WriteI32(ReqSeq);
          oprot.WriteFieldEnd();
        }
        if (Userid != null && __isset.userid) {
          field.Name = "userid";
          field.Type = TType.String;
          field.ID = 2;
          oprot.WriteFieldBegin(field);
          oprot.WriteString(Userid);
          oprot.WriteFieldEnd();
        }
        oprot.WriteFieldStop();
        oprot.WriteStructEnd();
      }
      finally
      {
        oprot.DecrementRecursionDepth();
      }
    }

    public override string ToString() {
      StringBuilder __sb = new StringBuilder("findAndAddContactsByUserid_args(");
      bool __first = true;
      if (__isset.reqSeq) {
        if(!__first) { __sb.Append(", "); }
        __first = false;
        __sb.Append("ReqSeq: ");
        __sb.Append(ReqSeq);
      }
      if (Userid != null && __isset.userid) {
        if(!__first) { __sb.Append(", "); }
        __first = false;
        __sb.Append("Userid: ");
        __sb.Append(Userid);
      }
      __sb.Append(")");
      return __sb.ToString();
    }

  }


  #if !SILVERLIGHT
  [Serializable]
  #endif
  public partial class findAndAddContactsByUserid_result : TBase
  {
    private Dictionary<string, Contact> _success;
    private TalkException _e;

    public Dictionary<string, Contact> Success
    {
      get
      {
        return _success;
      }
      set
      {
        __isset.success = true;
        this._success = value;
      }
    }

    public TalkException E
    {
      get
      {
        return _e;
      }
      set
      {
        __isset.e = true;
        this._e = value;
      }
    }


    public Isset __isset;
    #if !SILVERLIGHT
    [Serializable]
    #endif
    public struct Isset {
      public bool success;
      public bool e;
    }

    public findAndAddContactsByUserid_result() {
    }

    public void Read (TProtocol iprot)
    {
      iprot.IncrementRecursionDepth();
      try
      {
        TField field;
        iprot.ReadStructBegin();
        while (true)
        {
          field = iprot.ReadFieldBegin();
          if (field.Type == TType.Stop) { 
            break;
          }
          switch (field.ID)
          {
            case 0:
              if (field.Type == TType.Map) {
                {
                  Success = new Dictionary<string, Contact>();
                  TMap _map65 = iprot.ReadMapBegin();
                  for( int _i66 = 0; _i66 < _map65.Count; ++_i66)
                  {
                    string _key67;
                    Contact _val68;
                    _key67 = iprot.ReadString();
                    _val68 = new Contact();
                    _val68.Read(iprot);
                    Success[_key67] = _val68;
                  }
                  iprot.ReadMapEnd();
                }
              } else { 
                TProtocolUtil.Skip(iprot, field.Type);
              }
              break;
            case 1:
              if (field.Type == TType.Struct) {
                E = new TalkException();
                E.Read(iprot);
              } else { 
                TProtocolUtil.Skip(iprot, field.Type);
              }
              break;
            default: 
              TProtocolUtil.Skip(iprot, field.Type);
              break;
          }
          iprot.ReadFieldEnd();
        }
        iprot.ReadStructEnd();
      }
      finally
      {
        iprot.DecrementRecursionDepth();
      }
    }

    public void Write(TProtocol oprot) {
      oprot.IncrementRecursionDepth();
      try
      {
        TStruct struc = new TStruct("findAndAddContactsByUserid_result");
        oprot.WriteStructBegin(struc);
        TField field = new TField();

        if (this.__isset.success) {
          if (Success != null) {
            field.Name = "Success";
            field.Type = TType.Map;
            field.ID = 0;
            oprot.WriteFieldBegin(field);
            {
              oprot.WriteMapBegin(new TMap(TType.String, TType.Struct, Success.Count));
              foreach (string _iter69 in Success.Keys)
              {
                oprot.WriteString(_iter69);
                Success[_iter69].Write(oprot);
              }
              oprot.WriteMapEnd();
            }
            oprot.WriteFieldEnd();
          }
        } else if (this.__isset.e) {
          if (E != null) {
            field.Name = "E";
            field.Type = TType.Struct;
            field.ID = 1;
            oprot.WriteFieldBegin(field);
            E.Write(oprot);
            oprot.WriteFieldEnd();
          }
        }
        oprot.WriteFieldStop();
        oprot.WriteStructEnd();
      }
      finally
      {
        oprot.DecrementRecursionDepth();
      }
    }

    public override string ToString() {
      StringBuilder __sb = new StringBuilder("findAndAddContactsByUserid_result(");
      bool __first = true;
      if (Success != null && __isset.success) {
        if(!__first) { __sb.Append(", "); }
        __first = false;
        __sb.Append("Success: ");
        __sb.Append(Success);
      }
      if (E != null && __isset.e) {
        if(!__first) { __sb.Append(", "); }
        __first = false;
        __sb.Append("E: ");
        __sb.Append(E== null ? "<null>" : E.ToString());
      }
      __sb.Append(")");
      return __sb.ToString();
    }

  }


  #if !SILVERLIGHT
  [Serializable]
  #endif
  public partial class findContactByUserid_args : TBase
  {
    private string _userid;

    public string Userid
    {
      get
      {
        return _userid;
      }
      set
      {
        __isset.userid = true;
        this._userid = value;
      }
    }


    public Isset __isset;
    #if !SILVERLIGHT
    [Serializable]
    #endif
    public struct Isset {
      public bool userid;
    }

    public findContactByUserid_args() {
    }

    public void Read (TProtocol iprot)
    {
      iprot.IncrementRecursionDepth();
      try
      {
        TField field;
        iprot.ReadStructBegin();
        while (true)
        {
          field = iprot.ReadFieldBegin();
          if (field.Type == TType.Stop) { 
            break;
          }
          switch (field.ID)
          {
            case 2:
              if (field.Type == TType.String) {
                Userid = iprot.ReadString();
              } else { 
                TProtocolUtil.Skip(iprot, field.Type);
              }
              break;
            default: 
              TProtocolUtil.Skip(iprot, field.Type);
              break;
          }
          iprot.ReadFieldEnd();
        }
        iprot.ReadStructEnd();
      }
      finally
      {
        iprot.DecrementRecursionDepth();
      }
    }

    public void Write(TProtocol oprot) {
      oprot.IncrementRecursionDepth();
      try
      {
        TStruct struc = new TStruct("findContactByUserid_args");
        oprot.WriteStructBegin(struc);
        TField field = new TField();
        if (Userid != null && __isset.userid) {
          field.Name = "userid";
          field.Type = TType.String;
          field.ID = 2;
          oprot.WriteFieldBegin(field);
          oprot.WriteString(Userid);
          oprot.WriteFieldEnd();
        }
        oprot.WriteFieldStop();
        oprot.WriteStructEnd();
      }
      finally
      {
        oprot.DecrementRecursionDepth();
      }
    }

    public override string ToString() {
      StringBuilder __sb = new StringBuilder("findContactByUserid_args(");
      bool __first = true;
      if (Userid != null && __isset.userid) {
        if(!__first) { __sb.Append(", "); }
        __first = false;
        __sb.Append("Userid: ");
        __sb.Append(Userid);
      }
      __sb.Append(")");
      return __sb.ToString();
    }

  }


  #if !SILVERLIGHT
  [Serializable]
  #endif
  public partial class findContactByUserid_result : TBase
  {
    private Contact _success;
    private TalkException _e;

    public Contact Success
    {
      get
      {
        return _success;
      }
      set
      {
        __isset.success = true;
        this._success = value;
      }
    }

    public TalkException E
    {
      get
      {
        return _e;
      }
      set
      {
        __isset.e = true;
        this._e = value;
      }
    }


    public Isset __isset;
    #if !SILVERLIGHT
    [Serializable]
    #endif
    public struct Isset {
      public bool success;
      public bool e;
    }

    public findContactByUserid_result() {
    }

    public void Read (TProtocol iprot)
    {
      iprot.IncrementRecursionDepth();
      try
      {
        TField field;
        iprot.ReadStructBegin();
        while (true)
        {
          field = iprot.ReadFieldBegin();
          if (field.Type == TType.Stop) { 
            break;
          }
          switch (field.ID)
          {
            case 0:
              if (field.Type == TType.Struct) {
                Success = new Contact();
                Success.Read(iprot);
              } else { 
                TProtocolUtil.Skip(iprot, field.Type);
              }
              break;
            case 1:
              if (field.Type == TType.Struct) {
                E = new TalkException();
                E.Read(iprot);
              } else { 
                TProtocolUtil.Skip(iprot, field.Type);
              }
              break;
            default: 
              TProtocolUtil.Skip(iprot, field.Type);
              break;
          }
          iprot.ReadFieldEnd();
        }
        iprot.ReadStructEnd();
      }
      finally
      {
        iprot.DecrementRecursionDepth();
      }
    }

    public void Write(TProtocol oprot) {
      oprot.IncrementRecursionDepth();
      try
      {
        TStruct struc = new TStruct("findContactByUserid_result");
        oprot.WriteStructBegin(struc);
        TField field = new TField();

        if (this.__isset.success) {
          if (Success != null) {
            field.Name = "Success";
            field.Type = TType.Struct;
            field.ID = 0;
            oprot.WriteFieldBegin(field);
            Success.Write(oprot);
            oprot.WriteFieldEnd();
          }
        } else if (this.__isset.e) {
          if (E != null) {
            field.Name = "E";
            field.Type = TType.Struct;
            field.ID = 1;
            oprot.WriteFieldBegin(field);
            E.Write(oprot);
            oprot.WriteFieldEnd();
          }
        }
        oprot.WriteFieldStop();
        oprot.WriteStructEnd();
      }
      finally
      {
        oprot.DecrementRecursionDepth();
      }
    }

    public override string ToString() {
      StringBuilder __sb = new StringBuilder("findContactByUserid_result(");
      bool __first = true;
      if (Success != null && __isset.success) {
        if(!__first) { __sb.Append(", "); }
        __first = false;
        __sb.Append("Success: ");
        __sb.Append(Success== null ? "<null>" : Success.ToString());
      }
      if (E != null && __isset.e) {
        if(!__first) { __sb.Append(", "); }
        __first = false;
        __sb.Append("E: ");
        __sb.Append(E== null ? "<null>" : E.ToString());
      }
      __sb.Append(")");
      return __sb.ToString();
    }

  }


  #if !SILVERLIGHT
  [Serializable]
  #endif
  public partial class findContactByUserTicket_args : TBase
  {
    private string _ticketId;

    public string TicketId
    {
      get
      {
        return _ticketId;
      }
      set
      {
        __isset.ticketId = true;
        this._ticketId = value;
      }
    }


    public Isset __isset;
    #if !SILVERLIGHT
    [Serializable]
    #endif
    public struct Isset {
      public bool ticketId;
    }

    public findContactByUserTicket_args() {
    }

    public void Read (TProtocol iprot)
    {
      iprot.IncrementRecursionDepth();
      try
      {
        TField field;
        iprot.ReadStructBegin();
        while (true)
        {
          field = iprot.ReadFieldBegin();
          if (field.Type == TType.Stop) { 
            break;
          }
          switch (field.ID)
          {
            case 2:
              if (field.Type == TType.String) {
                TicketId = iprot.ReadString();
              } else { 
                TProtocolUtil.Skip(iprot, field.Type);
              }
              break;
            default: 
              TProtocolUtil.Skip(iprot, field.Type);
              break;
          }
          iprot.ReadFieldEnd();
        }
        iprot.ReadStructEnd();
      }
      finally
      {
        iprot.DecrementRecursionDepth();
      }
    }

    public void Write(TProtocol oprot) {
      oprot.IncrementRecursionDepth();
      try
      {
        TStruct struc = new TStruct("findContactByUserTicket_args");
        oprot.WriteStructBegin(struc);
        TField field = new TField();
        if (TicketId != null && __isset.ticketId) {
          field.Name = "ticketId";
          field.Type = TType.String;
          field.ID = 2;
          oprot.WriteFieldBegin(field);
          oprot.WriteString(TicketId);
          oprot.WriteFieldEnd();
        }
        oprot.WriteFieldStop();
        oprot.WriteStructEnd();
      }
      finally
      {
        oprot.DecrementRecursionDepth();
      }
    }

    public override string ToString() {
      StringBuilder __sb = new StringBuilder("findContactByUserTicket_args(");
      bool __first = true;
      if (TicketId != null && __isset.ticketId) {
        if(!__first) { __sb.Append(", "); }
        __first = false;
        __sb.Append("TicketId: ");
        __sb.Append(TicketId);
      }
      __sb.Append(")");
      return __sb.ToString();
    }

  }


  #if !SILVERLIGHT
  [Serializable]
  #endif
  public partial class findContactByUserTicket_result : TBase
  {
    private Contact _success;
    private TalkException _e;

    public Contact Success
    {
      get
      {
        return _success;
      }
      set
      {
        __isset.success = true;
        this._success = value;
      }
    }

    public TalkException E
    {
      get
      {
        return _e;
      }
      set
      {
        __isset.e = true;
        this._e = value;
      }
    }


    public Isset __isset;
    #if !SILVERLIGHT
    [Serializable]
    #endif
    public struct Isset {
      public bool success;
      public bool e;
    }

    public findContactByUserTicket_result() {
    }

    public void Read (TProtocol iprot)
    {
      iprot.IncrementRecursionDepth();
      try
      {
        TField field;
        iprot.ReadStructBegin();
        while (true)
        {
          field = iprot.ReadFieldBegin();
          if (field.Type == TType.Stop) { 
            break;
          }
          switch (field.ID)
          {
            case 0:
              if (field.Type == TType.Struct) {
                Success = new Contact();
                Success.Read(iprot);
              } else { 
                TProtocolUtil.Skip(iprot, field.Type);
              }
              break;
            case 1:
              if (field.Type == TType.Struct) {
                E = new TalkException();
                E.Read(iprot);
              } else { 
                TProtocolUtil.Skip(iprot, field.Type);
              }
              break;
            default: 
              TProtocolUtil.Skip(iprot, field.Type);
              break;
          }
          iprot.ReadFieldEnd();
        }
        iprot.ReadStructEnd();
      }
      finally
      {
        iprot.DecrementRecursionDepth();
      }
    }

    public void Write(TProtocol oprot) {
      oprot.IncrementRecursionDepth();
      try
      {
        TStruct struc = new TStruct("findContactByUserTicket_result");
        oprot.WriteStructBegin(struc);
        TField field = new TField();

        if (this.__isset.success) {
          if (Success != null) {
            field.Name = "Success";
            field.Type = TType.Struct;
            field.ID = 0;
            oprot.WriteFieldBegin(field);
            Success.Write(oprot);
            oprot.WriteFieldEnd();
          }
        } else if (this.__isset.e) {
          if (E != null) {
            field.Name = "E";
            field.Type = TType.Struct;
            field.ID = 1;
            oprot.WriteFieldBegin(field);
            E.Write(oprot);
            oprot.WriteFieldEnd();
          }
        }
        oprot.WriteFieldStop();
        oprot.WriteStructEnd();
      }
      finally
      {
        oprot.DecrementRecursionDepth();
      }
    }

    public override string ToString() {
      StringBuilder __sb = new StringBuilder("findContactByUserTicket_result(");
      bool __first = true;
      if (Success != null && __isset.success) {
        if(!__first) { __sb.Append(", "); }
        __first = false;
        __sb.Append("Success: ");
        __sb.Append(Success== null ? "<null>" : Success.ToString());
      }
      if (E != null && __isset.e) {
        if(!__first) { __sb.Append(", "); }
        __first = false;
        __sb.Append("E: ");
        __sb.Append(E== null ? "<null>" : E.ToString());
      }
      __sb.Append(")");
      return __sb.ToString();
    }

  }


  #if !SILVERLIGHT
  [Serializable]
  #endif
  public partial class findContactsByEmail_args : TBase
  {
    private THashSet<string> _emails;

    public THashSet<string> Emails
    {
      get
      {
        return _emails;
      }
      set
      {
        __isset.emails = true;
        this._emails = value;
      }
    }


    public Isset __isset;
    #if !SILVERLIGHT
    [Serializable]
    #endif
    public struct Isset {
      public bool emails;
    }

    public findContactsByEmail_args() {
    }

    public void Read (TProtocol iprot)
    {
      iprot.IncrementRecursionDepth();
      try
      {
        TField field;
        iprot.ReadStructBegin();
        while (true)
        {
          field = iprot.ReadFieldBegin();
          if (field.Type == TType.Stop) { 
            break;
          }
          switch (field.ID)
          {
            case 2:
              if (field.Type == TType.Set) {
                {
                  Emails = new THashSet<string>();
                  TSet _set70 = iprot.ReadSetBegin();
                  for( int _i71 = 0; _i71 < _set70.Count; ++_i71)
                  {
                    string _elem72;
                    _elem72 = iprot.ReadString();
                    Emails.Add(_elem72);
                  }
                  iprot.ReadSetEnd();
                }
              } else { 
                TProtocolUtil.Skip(iprot, field.Type);
              }
              break;
            default: 
              TProtocolUtil.Skip(iprot, field.Type);
              break;
          }
          iprot.ReadFieldEnd();
        }
        iprot.ReadStructEnd();
      }
      finally
      {
        iprot.DecrementRecursionDepth();
      }
    }

    public void Write(TProtocol oprot) {
      oprot.IncrementRecursionDepth();
      try
      {
        TStruct struc = new TStruct("findContactsByEmail_args");
        oprot.WriteStructBegin(struc);
        TField field = new TField();
        if (Emails != null && __isset.emails) {
          field.Name = "emails";
          field.Type = TType.Set;
          field.ID = 2;
          oprot.WriteFieldBegin(field);
          {
            oprot.WriteSetBegin(new TSet(TType.String, Emails.Count));
            foreach (string _iter73 in Emails)
            {
              oprot.WriteString(_iter73);
            }
            oprot.WriteSetEnd();
          }
          oprot.WriteFieldEnd();
        }
        oprot.WriteFieldStop();
        oprot.WriteStructEnd();
      }
      finally
      {
        oprot.DecrementRecursionDepth();
      }
    }

    public override string ToString() {
      StringBuilder __sb = new StringBuilder("findContactsByEmail_args(");
      bool __first = true;
      if (Emails != null && __isset.emails) {
        if(!__first) { __sb.Append(", "); }
        __first = false;
        __sb.Append("Emails: ");
        __sb.Append(Emails);
      }
      __sb.Append(")");
      return __sb.ToString();
    }

  }


  #if !SILVERLIGHT
  [Serializable]
  #endif
  public partial class findContactsByEmail_result : TBase
  {
    private Dictionary<string, Contact> _success;
    private TalkException _e;

    public Dictionary<string, Contact> Success
    {
      get
      {
        return _success;
      }
      set
      {
        __isset.success = true;
        this._success = value;
      }
    }

    public TalkException E
    {
      get
      {
        return _e;
      }
      set
      {
        __isset.e = true;
        this._e = value;
      }
    }


    public Isset __isset;
    #if !SILVERLIGHT
    [Serializable]
    #endif
    public struct Isset {
      public bool success;
      public bool e;
    }

    public findContactsByEmail_result() {
    }

    public void Read (TProtocol iprot)
    {
      iprot.IncrementRecursionDepth();
      try
      {
        TField field;
        iprot.ReadStructBegin();
        while (true)
        {
          field = iprot.ReadFieldBegin();
          if (field.Type == TType.Stop) { 
            break;
          }
          switch (field.ID)
          {
            case 0:
              if (field.Type == TType.Map) {
                {
                  Success = new Dictionary<string, Contact>();
                  TMap _map74 = iprot.ReadMapBegin();
                  for( int _i75 = 0; _i75 < _map74.Count; ++_i75)
                  {
                    string _key76;
                    Contact _val77;
                    _key76 = iprot.ReadString();
                    _val77 = new Contact();
                    _val77.Read(iprot);
                    Success[_key76] = _val77;
                  }
                  iprot.ReadMapEnd();
                }
              } else { 
                TProtocolUtil.Skip(iprot, field.Type);
              }
              break;
            case 1:
              if (field.Type == TType.Struct) {
                E = new TalkException();
                E.Read(iprot);
              } else { 
                TProtocolUtil.Skip(iprot, field.Type);
              }
              break;
            default: 
              TProtocolUtil.Skip(iprot, field.Type);
              break;
          }
          iprot.ReadFieldEnd();
        }
        iprot.ReadStructEnd();
      }
      finally
      {
        iprot.DecrementRecursionDepth();
      }
    }

    public void Write(TProtocol oprot) {
      oprot.IncrementRecursionDepth();
      try
      {
        TStruct struc = new TStruct("findContactsByEmail_result");
        oprot.WriteStructBegin(struc);
        TField field = new TField();

        if (this.__isset.success) {
          if (Success != null) {
            field.Name = "Success";
            field.Type = TType.Map;
            field.ID = 0;
            oprot.WriteFieldBegin(field);
            {
              oprot.WriteMapBegin(new TMap(TType.String, TType.Struct, Success.Count));
              foreach (string _iter78 in Success.Keys)
              {
                oprot.WriteString(_iter78);
                Success[_iter78].Write(oprot);
              }
              oprot.WriteMapEnd();
            }
            oprot.WriteFieldEnd();
          }
        } else if (this.__isset.e) {
          if (E != null) {
            field.Name = "E";
            field.Type = TType.Struct;
            field.ID = 1;
            oprot.WriteFieldBegin(field);
            E.Write(oprot);
            oprot.WriteFieldEnd();
          }
        }
        oprot.WriteFieldStop();
        oprot.WriteStructEnd();
      }
      finally
      {
        oprot.DecrementRecursionDepth();
      }
    }

    public override string ToString() {
      StringBuilder __sb = new StringBuilder("findContactsByEmail_result(");
      bool __first = true;
      if (Success != null && __isset.success) {
        if(!__first) { __sb.Append(", "); }
        __first = false;
        __sb.Append("Success: ");
        __sb.Append(Success);
      }
      if (E != null && __isset.e) {
        if(!__first) { __sb.Append(", "); }
        __first = false;
        __sb.Append("E: ");
        __sb.Append(E== null ? "<null>" : E.ToString());
      }
      __sb.Append(")");
      return __sb.ToString();
    }

  }


  #if !SILVERLIGHT
  [Serializable]
  #endif
  public partial class findContactsByPhone_args : TBase
  {
    private THashSet<string> _phones;

    public THashSet<string> Phones
    {
      get
      {
        return _phones;
      }
      set
      {
        __isset.phones = true;
        this._phones = value;
      }
    }


    public Isset __isset;
    #if !SILVERLIGHT
    [Serializable]
    #endif
    public struct Isset {
      public bool phones;
    }

    public findContactsByPhone_args() {
    }

    public void Read (TProtocol iprot)
    {
      iprot.IncrementRecursionDepth();
      try
      {
        TField field;
        iprot.ReadStructBegin();
        while (true)
        {
          field = iprot.ReadFieldBegin();
          if (field.Type == TType.Stop) { 
            break;
          }
          switch (field.ID)
          {
            case 2:
              if (field.Type == TType.Set) {
                {
                  Phones = new THashSet<string>();
                  TSet _set79 = iprot.ReadSetBegin();
                  for( int _i80 = 0; _i80 < _set79.Count; ++_i80)
                  {
                    string _elem81;
                    _elem81 = iprot.ReadString();
                    Phones.Add(_elem81);
                  }
                  iprot.ReadSetEnd();
                }
              } else { 
                TProtocolUtil.Skip(iprot, field.Type);
              }
              break;
            default: 
              TProtocolUtil.Skip(iprot, field.Type);
              break;
          }
          iprot.ReadFieldEnd();
        }
        iprot.ReadStructEnd();
      }
      finally
      {
        iprot.DecrementRecursionDepth();
      }
    }

    public void Write(TProtocol oprot) {
      oprot.IncrementRecursionDepth();
      try
      {
        TStruct struc = new TStruct("findContactsByPhone_args");
        oprot.WriteStructBegin(struc);
        TField field = new TField();
        if (Phones != null && __isset.phones) {
          field.Name = "phones";
          field.Type = TType.Set;
          field.ID = 2;
          oprot.WriteFieldBegin(field);
          {
            oprot.WriteSetBegin(new TSet(TType.String, Phones.Count));
            foreach (string _iter82 in Phones)
            {
              oprot.WriteString(_iter82);
            }
            oprot.WriteSetEnd();
          }
          oprot.WriteFieldEnd();
        }
        oprot.WriteFieldStop();
        oprot.WriteStructEnd();
      }
      finally
      {
        oprot.DecrementRecursionDepth();
      }
    }

    public override string ToString() {
      StringBuilder __sb = new StringBuilder("findContactsByPhone_args(");
      bool __first = true;
      if (Phones != null && __isset.phones) {
        if(!__first) { __sb.Append(", "); }
        __first = false;
        __sb.Append("Phones: ");
        __sb.Append(Phones);
      }
      __sb.Append(")");
      return __sb.ToString();
    }

  }


  #if !SILVERLIGHT
  [Serializable]
  #endif
  public partial class findContactsByPhone_result : TBase
  {
    private Dictionary<string, Contact> _success;
    private TalkException _e;

    public Dictionary<string, Contact> Success
    {
      get
      {
        return _success;
      }
      set
      {
        __isset.success = true;
        this._success = value;
      }
    }

    public TalkException E
    {
      get
      {
        return _e;
      }
      set
      {
        __isset.e = true;
        this._e = value;
      }
    }


    public Isset __isset;
    #if !SILVERLIGHT
    [Serializable]
    #endif
    public struct Isset {
      public bool success;
      public bool e;
    }

    public findContactsByPhone_result() {
    }

    public void Read (TProtocol iprot)
    {
      iprot.IncrementRecursionDepth();
      try
      {
        TField field;
        iprot.ReadStructBegin();
        while (true)
        {
          field = iprot.ReadFieldBegin();
          if (field.Type == TType.Stop) { 
            break;
          }
          switch (field.ID)
          {
            case 0:
              if (field.Type == TType.Map) {
                {
                  Success = new Dictionary<string, Contact>();
                  TMap _map83 = iprot.ReadMapBegin();
                  for( int _i84 = 0; _i84 < _map83.Count; ++_i84)
                  {
                    string _key85;
                    Contact _val86;
                    _key85 = iprot.ReadString();
                    _val86 = new Contact();
                    _val86.Read(iprot);
                    Success[_key85] = _val86;
                  }
                  iprot.ReadMapEnd();
                }
              } else { 
                TProtocolUtil.Skip(iprot, field.Type);
              }
              break;
            case 1:
              if (field.Type == TType.Struct) {
                E = new TalkException();
                E.Read(iprot);
              } else { 
                TProtocolUtil.Skip(iprot, field.Type);
              }
              break;
            default: 
              TProtocolUtil.Skip(iprot, field.Type);
              break;
          }
          iprot.ReadFieldEnd();
        }
        iprot.ReadStructEnd();
      }
      finally
      {
        iprot.DecrementRecursionDepth();
      }
    }

    public void Write(TProtocol oprot) {
      oprot.IncrementRecursionDepth();
      try
      {
        TStruct struc = new TStruct("findContactsByPhone_result");
        oprot.WriteStructBegin(struc);
        TField field = new TField();

        if (this.__isset.success) {
          if (Success != null) {
            field.Name = "Success";
            field.Type = TType.Map;
            field.ID = 0;
            oprot.WriteFieldBegin(field);
            {
              oprot.WriteMapBegin(new TMap(TType.String, TType.Struct, Success.Count));
              foreach (string _iter87 in Success.Keys)
              {
                oprot.WriteString(_iter87);
                Success[_iter87].Write(oprot);
              }
              oprot.WriteMapEnd();
            }
            oprot.WriteFieldEnd();
          }
        } else if (this.__isset.e) {
          if (E != null) {
            field.Name = "E";
            field.Type = TType.Struct;
            field.ID = 1;
            oprot.WriteFieldBegin(field);
            E.Write(oprot);
            oprot.WriteFieldEnd();
          }
        }
        oprot.WriteFieldStop();
        oprot.WriteStructEnd();
      }
      finally
      {
        oprot.DecrementRecursionDepth();
      }
    }

    public override string ToString() {
      StringBuilder __sb = new StringBuilder("findContactsByPhone_result(");
      bool __first = true;
      if (Success != null && __isset.success) {
        if(!__first) { __sb.Append(", "); }
        __first = false;
        __sb.Append("Success: ");
        __sb.Append(Success);
      }
      if (E != null && __isset.e) {
        if(!__first) { __sb.Append(", "); }
        __first = false;
        __sb.Append("E: ");
        __sb.Append(E== null ? "<null>" : E.ToString());
      }
      __sb.Append(")");
      return __sb.ToString();
    }

  }


  #if !SILVERLIGHT
  [Serializable]
  #endif
  public partial class generateUserTicket_args : TBase
  {
    private long _expirationTime;
    private int _maxUseCount;

    public long ExpirationTime
    {
      get
      {
        return _expirationTime;
      }
      set
      {
        __isset.expirationTime = true;
        this._expirationTime = value;
      }
    }

    public int MaxUseCount
    {
      get
      {
        return _maxUseCount;
      }
      set
      {
        __isset.maxUseCount = true;
        this._maxUseCount = value;
      }
    }


    public Isset __isset;
    #if !SILVERLIGHT
    [Serializable]
    #endif
    public struct Isset {
      public bool expirationTime;
      public bool maxUseCount;
    }

    public generateUserTicket_args() {
    }

    public void Read (TProtocol iprot)
    {
      iprot.IncrementRecursionDepth();
      try
      {
        TField field;
        iprot.ReadStructBegin();
        while (true)
        {
          field = iprot.ReadFieldBegin();
          if (field.Type == TType.Stop) { 
            break;
          }
          switch (field.ID)
          {
            case 3:
              if (field.Type == TType.I64) {
                ExpirationTime = iprot.ReadI64();
              } else { 
                TProtocolUtil.Skip(iprot, field.Type);
              }
              break;
            case 4:
              if (field.Type == TType.I32) {
                MaxUseCount = iprot.ReadI32();
              } else { 
                TProtocolUtil.Skip(iprot, field.Type);
              }
              break;
            default: 
              TProtocolUtil.Skip(iprot, field.Type);
              break;
          }
          iprot.ReadFieldEnd();
        }
        iprot.ReadStructEnd();
      }
      finally
      {
        iprot.DecrementRecursionDepth();
      }
    }

    public void Write(TProtocol oprot) {
      oprot.IncrementRecursionDepth();
      try
      {
        TStruct struc = new TStruct("generateUserTicket_args");
        oprot.WriteStructBegin(struc);
        TField field = new TField();
        if (__isset.expirationTime) {
          field.Name = "expirationTime";
          field.Type = TType.I64;
          field.ID = 3;
          oprot.WriteFieldBegin(field);
          oprot.WriteI64(ExpirationTime);
          oprot.WriteFieldEnd();
        }
        if (__isset.maxUseCount) {
          field.Name = "maxUseCount";
          field.Type = TType.I32;
          field.ID = 4;
          oprot.WriteFieldBegin(field);
          oprot.WriteI32(MaxUseCount);
          oprot.WriteFieldEnd();
        }
        oprot.WriteFieldStop();
        oprot.WriteStructEnd();
      }
      finally
      {
        oprot.DecrementRecursionDepth();
      }
    }

    public override string ToString() {
      StringBuilder __sb = new StringBuilder("generateUserTicket_args(");
      bool __first = true;
      if (__isset.expirationTime) {
        if(!__first) { __sb.Append(", "); }
        __first = false;
        __sb.Append("ExpirationTime: ");
        __sb.Append(ExpirationTime);
      }
      if (__isset.maxUseCount) {
        if(!__first) { __sb.Append(", "); }
        __first = false;
        __sb.Append("MaxUseCount: ");
        __sb.Append(MaxUseCount);
      }
      __sb.Append(")");
      return __sb.ToString();
    }

  }


  #if !SILVERLIGHT
  [Serializable]
  #endif
  public partial class generateUserTicket_result : TBase
  {
    private Ticket _success;
    private TalkException _e;

    public Ticket Success
    {
      get
      {
        return _success;
      }
      set
      {
        __isset.success = true;
        this._success = value;
      }
    }

    public TalkException E
    {
      get
      {
        return _e;
      }
      set
      {
        __isset.e = true;
        this._e = value;
      }
    }


    public Isset __isset;
    #if !SILVERLIGHT
    [Serializable]
    #endif
    public struct Isset {
      public bool success;
      public bool e;
    }

    public generateUserTicket_result() {
    }

    public void Read (TProtocol iprot)
    {
      iprot.IncrementRecursionDepth();
      try
      {
        TField field;
        iprot.ReadStructBegin();
        while (true)
        {
          field = iprot.ReadFieldBegin();
          if (field.Type == TType.Stop) { 
            break;
          }
          switch (field.ID)
          {
            case 0:
              if (field.Type == TType.Struct) {
                Success = new Ticket();
                Success.Read(iprot);
              } else { 
                TProtocolUtil.Skip(iprot, field.Type);
              }
              break;
            case 1:
              if (field.Type == TType.Struct) {
                E = new TalkException();
                E.Read(iprot);
              } else { 
                TProtocolUtil.Skip(iprot, field.Type);
              }
              break;
            default: 
              TProtocolUtil.Skip(iprot, field.Type);
              break;
          }
          iprot.ReadFieldEnd();
        }
        iprot.ReadStructEnd();
      }
      finally
      {
        iprot.DecrementRecursionDepth();
      }
    }

    public void Write(TProtocol oprot) {
      oprot.IncrementRecursionDepth();
      try
      {
        TStruct struc = new TStruct("generateUserTicket_result");
        oprot.WriteStructBegin(struc);
        TField field = new TField();

        if (this.__isset.success) {
          if (Success != null) {
            field.Name = "Success";
            field.Type = TType.Struct;
            field.ID = 0;
            oprot.WriteFieldBegin(field);
            Success.Write(oprot);
            oprot.WriteFieldEnd();
          }
        } else if (this.__isset.e) {
          if (E != null) {
            field.Name = "E";
            field.Type = TType.Struct;
            field.ID = 1;
            oprot.WriteFieldBegin(field);
            E.Write(oprot);
            oprot.WriteFieldEnd();
          }
        }
        oprot.WriteFieldStop();
        oprot.WriteStructEnd();
      }
      finally
      {
        oprot.DecrementRecursionDepth();
      }
    }

    public override string ToString() {
      StringBuilder __sb = new StringBuilder("generateUserTicket_result(");
      bool __first = true;
      if (Success != null && __isset.success) {
        if(!__first) { __sb.Append(", "); }
        __first = false;
        __sb.Append("Success: ");
        __sb.Append(Success== null ? "<null>" : Success.ToString());
      }
      if (E != null && __isset.e) {
        if(!__first) { __sb.Append(", "); }
        __first = false;
        __sb.Append("E: ");
        __sb.Append(E== null ? "<null>" : E.ToString());
      }
      __sb.Append(")");
      return __sb.ToString();
    }

  }


  #if !SILVERLIGHT
  [Serializable]
  #endif
  public partial class getAllContactIds_args : TBase
  {

    public getAllContactIds_args() {
    }

    public void Read (TProtocol iprot)
    {
      iprot.IncrementRecursionDepth();
      try
      {
        TField field;
        iprot.ReadStructBegin();
        while (true)
        {
          field = iprot.ReadFieldBegin();
          if (field.Type == TType.Stop) { 
            break;
          }
          switch (field.ID)
          {
            default: 
              TProtocolUtil.Skip(iprot, field.Type);
              break;
          }
          iprot.ReadFieldEnd();
        }
        iprot.ReadStructEnd();
      }
      finally
      {
        iprot.DecrementRecursionDepth();
      }
    }

    public void Write(TProtocol oprot) {
      oprot.IncrementRecursionDepth();
      try
      {
        TStruct struc = new TStruct("getAllContactIds_args");
        oprot.WriteStructBegin(struc);
        oprot.WriteFieldStop();
        oprot.WriteStructEnd();
      }
      finally
      {
        oprot.DecrementRecursionDepth();
      }
    }

    public override string ToString() {
      StringBuilder __sb = new StringBuilder("getAllContactIds_args(");
      __sb.Append(")");
      return __sb.ToString();
    }

  }


  #if !SILVERLIGHT
  [Serializable]
  #endif
  public partial class getAllContactIds_result : TBase
  {
    private List<string> _success;
    private TalkException _e;

    public List<string> Success
    {
      get
      {
        return _success;
      }
      set
      {
        __isset.success = true;
        this._success = value;
      }
    }

    public TalkException E
    {
      get
      {
        return _e;
      }
      set
      {
        __isset.e = true;
        this._e = value;
      }
    }


    public Isset __isset;
    #if !SILVERLIGHT
    [Serializable]
    #endif
    public struct Isset {
      public bool success;
      public bool e;
    }

    public getAllContactIds_result() {
    }

    public void Read (TProtocol iprot)
    {
      iprot.IncrementRecursionDepth();
      try
      {
        TField field;
        iprot.ReadStructBegin();
        while (true)
        {
          field = iprot.ReadFieldBegin();
          if (field.Type == TType.Stop) { 
            break;
          }
          switch (field.ID)
          {
            case 0:
              if (field.Type == TType.List) {
                {
                  Success = new List<string>();
                  TList _list88 = iprot.ReadListBegin();
                  for( int _i89 = 0; _i89 < _list88.Count; ++_i89)
                  {
                    string _elem90;
                    _elem90 = iprot.ReadString();
                    Success.Add(_elem90);
                  }
                  iprot.ReadListEnd();
                }
              } else { 
                TProtocolUtil.Skip(iprot, field.Type);
              }
              break;
            case 1:
              if (field.Type == TType.Struct) {
                E = new TalkException();
                E.Read(iprot);
              } else { 
                TProtocolUtil.Skip(iprot, field.Type);
              }
              break;
            default: 
              TProtocolUtil.Skip(iprot, field.Type);
              break;
          }
          iprot.ReadFieldEnd();
        }
        iprot.ReadStructEnd();
      }
      finally
      {
        iprot.DecrementRecursionDepth();
      }
    }

    public void Write(TProtocol oprot) {
      oprot.IncrementRecursionDepth();
      try
      {
        TStruct struc = new TStruct("getAllContactIds_result");
        oprot.WriteStructBegin(struc);
        TField field = new TField();

        if (this.__isset.success) {
          if (Success != null) {
            field.Name = "Success";
            field.Type = TType.List;
            field.ID = 0;
            oprot.WriteFieldBegin(field);
            {
              oprot.WriteListBegin(new TList(TType.String, Success.Count));
              foreach (string _iter91 in Success)
              {
                oprot.WriteString(_iter91);
              }
              oprot.WriteListEnd();
            }
            oprot.WriteFieldEnd();
          }
        } else if (this.__isset.e) {
          if (E != null) {
            field.Name = "E";
            field.Type = TType.Struct;
            field.ID = 1;
            oprot.WriteFieldBegin(field);
            E.Write(oprot);
            oprot.WriteFieldEnd();
          }
        }
        oprot.WriteFieldStop();
        oprot.WriteStructEnd();
      }
      finally
      {
        oprot.DecrementRecursionDepth();
      }
    }

    public override string ToString() {
      StringBuilder __sb = new StringBuilder("getAllContactIds_result(");
      bool __first = true;
      if (Success != null && __isset.success) {
        if(!__first) { __sb.Append(", "); }
        __first = false;
        __sb.Append("Success: ");
        __sb.Append(Success);
      }
      if (E != null && __isset.e) {
        if(!__first) { __sb.Append(", "); }
        __first = false;
        __sb.Append("E: ");
        __sb.Append(E== null ? "<null>" : E.ToString());
      }
      __sb.Append(")");
      return __sb.ToString();
    }

  }


  #if !SILVERLIGHT
  [Serializable]
  #endif
  public partial class getBlockedContactIds_args : TBase
  {

    public getBlockedContactIds_args() {
    }

    public void Read (TProtocol iprot)
    {
      iprot.IncrementRecursionDepth();
      try
      {
        TField field;
        iprot.ReadStructBegin();
        while (true)
        {
          field = iprot.ReadFieldBegin();
          if (field.Type == TType.Stop) { 
            break;
          }
          switch (field.ID)
          {
            default: 
              TProtocolUtil.Skip(iprot, field.Type);
              break;
          }
          iprot.ReadFieldEnd();
        }
        iprot.ReadStructEnd();
      }
      finally
      {
        iprot.DecrementRecursionDepth();
      }
    }

    public void Write(TProtocol oprot) {
      oprot.IncrementRecursionDepth();
      try
      {
        TStruct struc = new TStruct("getBlockedContactIds_args");
        oprot.WriteStructBegin(struc);
        oprot.WriteFieldStop();
        oprot.WriteStructEnd();
      }
      finally
      {
        oprot.DecrementRecursionDepth();
      }
    }

    public override string ToString() {
      StringBuilder __sb = new StringBuilder("getBlockedContactIds_args(");
      __sb.Append(")");
      return __sb.ToString();
    }

  }


  #if !SILVERLIGHT
  [Serializable]
  #endif
  public partial class getBlockedContactIds_result : TBase
  {
    private List<string> _success;
    private TalkException _e;

    public List<string> Success
    {
      get
      {
        return _success;
      }
      set
      {
        __isset.success = true;
        this._success = value;
      }
    }

    public TalkException E
    {
      get
      {
        return _e;
      }
      set
      {
        __isset.e = true;
        this._e = value;
      }
    }


    public Isset __isset;
    #if !SILVERLIGHT
    [Serializable]
    #endif
    public struct Isset {
      public bool success;
      public bool e;
    }

    public getBlockedContactIds_result() {
    }

    public void Read (TProtocol iprot)
    {
      iprot.IncrementRecursionDepth();
      try
      {
        TField field;
        iprot.ReadStructBegin();
        while (true)
        {
          field = iprot.ReadFieldBegin();
          if (field.Type == TType.Stop) { 
            break;
          }
          switch (field.ID)
          {
            case 0:
              if (field.Type == TType.List) {
                {
                  Success = new List<string>();
                  TList _list92 = iprot.ReadListBegin();
                  for( int _i93 = 0; _i93 < _list92.Count; ++_i93)
                  {
                    string _elem94;
                    _elem94 = iprot.ReadString();
                    Success.Add(_elem94);
                  }
                  iprot.ReadListEnd();
                }
              } else { 
                TProtocolUtil.Skip(iprot, field.Type);
              }
              break;
            case 1:
              if (field.Type == TType.Struct) {
                E = new TalkException();
                E.Read(iprot);
              } else { 
                TProtocolUtil.Skip(iprot, field.Type);
              }
              break;
            default: 
              TProtocolUtil.Skip(iprot, field.Type);
              break;
          }
          iprot.ReadFieldEnd();
        }
        iprot.ReadStructEnd();
      }
      finally
      {
        iprot.DecrementRecursionDepth();
      }
    }

    public void Write(TProtocol oprot) {
      oprot.IncrementRecursionDepth();
      try
      {
        TStruct struc = new TStruct("getBlockedContactIds_result");
        oprot.WriteStructBegin(struc);
        TField field = new TField();

        if (this.__isset.success) {
          if (Success != null) {
            field.Name = "Success";
            field.Type = TType.List;
            field.ID = 0;
            oprot.WriteFieldBegin(field);
            {
              oprot.WriteListBegin(new TList(TType.String, Success.Count));
              foreach (string _iter95 in Success)
              {
                oprot.WriteString(_iter95);
              }
              oprot.WriteListEnd();
            }
            oprot.WriteFieldEnd();
          }
        } else if (this.__isset.e) {
          if (E != null) {
            field.Name = "E";
            field.Type = TType.Struct;
            field.ID = 1;
            oprot.WriteFieldBegin(field);
            E.Write(oprot);
            oprot.WriteFieldEnd();
          }
        }
        oprot.WriteFieldStop();
        oprot.WriteStructEnd();
      }
      finally
      {
        oprot.DecrementRecursionDepth();
      }
    }

    public override string ToString() {
      StringBuilder __sb = new StringBuilder("getBlockedContactIds_result(");
      bool __first = true;
      if (Success != null && __isset.success) {
        if(!__first) { __sb.Append(", "); }
        __first = false;
        __sb.Append("Success: ");
        __sb.Append(Success);
      }
      if (E != null && __isset.e) {
        if(!__first) { __sb.Append(", "); }
        __first = false;
        __sb.Append("E: ");
        __sb.Append(E== null ? "<null>" : E.ToString());
      }
      __sb.Append(")");
      return __sb.ToString();
    }

  }


  #if !SILVERLIGHT
  [Serializable]
  #endif
  public partial class getBlockedContactIdsByRange_args : TBase
  {
    private int _start;
    private int _count;

    public int Start
    {
      get
      {
        return _start;
      }
      set
      {
        __isset.start = true;
        this._start = value;
      }
    }

    public int Count
    {
      get
      {
        return _count;
      }
      set
      {
        __isset.count = true;
        this._count = value;
      }
    }


    public Isset __isset;
    #if !SILVERLIGHT
    [Serializable]
    #endif
    public struct Isset {
      public bool start;
      public bool count;
    }

    public getBlockedContactIdsByRange_args() {
    }

    public void Read (TProtocol iprot)
    {
      iprot.IncrementRecursionDepth();
      try
      {
        TField field;
        iprot.ReadStructBegin();
        while (true)
        {
          field = iprot.ReadFieldBegin();
          if (field.Type == TType.Stop) { 
            break;
          }
          switch (field.ID)
          {
            case 2:
              if (field.Type == TType.I32) {
                Start = iprot.ReadI32();
              } else { 
                TProtocolUtil.Skip(iprot, field.Type);
              }
              break;
            case 3:
              if (field.Type == TType.I32) {
                Count = iprot.ReadI32();
              } else { 
                TProtocolUtil.Skip(iprot, field.Type);
              }
              break;
            default: 
              TProtocolUtil.Skip(iprot, field.Type);
              break;
          }
          iprot.ReadFieldEnd();
        }
        iprot.ReadStructEnd();
      }
      finally
      {
        iprot.DecrementRecursionDepth();
      }
    }

    public void Write(TProtocol oprot) {
      oprot.IncrementRecursionDepth();
      try
      {
        TStruct struc = new TStruct("getBlockedContactIdsByRange_args");
        oprot.WriteStructBegin(struc);
        TField field = new TField();
        if (__isset.start) {
          field.Name = "start";
          field.Type = TType.I32;
          field.ID = 2;
          oprot.WriteFieldBegin(field);
          oprot.WriteI32(Start);
          oprot.WriteFieldEnd();
        }
        if (__isset.count) {
          field.Name = "count";
          field.Type = TType.I32;
          field.ID = 3;
          oprot.WriteFieldBegin(field);
          oprot.WriteI32(Count);
          oprot.WriteFieldEnd();
        }
        oprot.WriteFieldStop();
        oprot.WriteStructEnd();
      }
      finally
      {
        oprot.DecrementRecursionDepth();
      }
    }

    public override string ToString() {
      StringBuilder __sb = new StringBuilder("getBlockedContactIdsByRange_args(");
      bool __first = true;
      if (__isset.start) {
        if(!__first) { __sb.Append(", "); }
        __first = false;
        __sb.Append("Start: ");
        __sb.Append(Start);
      }
      if (__isset.count) {
        if(!__first) { __sb.Append(", "); }
        __first = false;
        __sb.Append("Count: ");
        __sb.Append(Count);
      }
      __sb.Append(")");
      return __sb.ToString();
    }

  }


  #if !SILVERLIGHT
  [Serializable]
  #endif
  public partial class getBlockedContactIdsByRange_result : TBase
  {
    private List<string> _success;
    private TalkException _e;

    public List<string> Success
    {
      get
      {
        return _success;
      }
      set
      {
        __isset.success = true;
        this._success = value;
      }
    }

    public TalkException E
    {
      get
      {
        return _e;
      }
      set
      {
        __isset.e = true;
        this._e = value;
      }
    }


    public Isset __isset;
    #if !SILVERLIGHT
    [Serializable]
    #endif
    public struct Isset {
      public bool success;
      public bool e;
    }

    public getBlockedContactIdsByRange_result() {
    }

    public void Read (TProtocol iprot)
    {
      iprot.IncrementRecursionDepth();
      try
      {
        TField field;
        iprot.ReadStructBegin();
        while (true)
        {
          field = iprot.ReadFieldBegin();
          if (field.Type == TType.Stop) { 
            break;
          }
          switch (field.ID)
          {
            case 0:
              if (field.Type == TType.List) {
                {
                  Success = new List<string>();
                  TList _list96 = iprot.ReadListBegin();
                  for( int _i97 = 0; _i97 < _list96.Count; ++_i97)
                  {
                    string _elem98;
                    _elem98 = iprot.ReadString();
                    Success.Add(_elem98);
                  }
                  iprot.ReadListEnd();
                }
              } else { 
                TProtocolUtil.Skip(iprot, field.Type);
              }
              break;
            case 1:
              if (field.Type == TType.Struct) {
                E = new TalkException();
                E.Read(iprot);
              } else { 
                TProtocolUtil.Skip(iprot, field.Type);
              }
              break;
            default: 
              TProtocolUtil.Skip(iprot, field.Type);
              break;
          }
          iprot.ReadFieldEnd();
        }
        iprot.ReadStructEnd();
      }
      finally
      {
        iprot.DecrementRecursionDepth();
      }
    }

    public void Write(TProtocol oprot) {
      oprot.IncrementRecursionDepth();
      try
      {
        TStruct struc = new TStruct("getBlockedContactIdsByRange_result");
        oprot.WriteStructBegin(struc);
        TField field = new TField();

        if (this.__isset.success) {
          if (Success != null) {
            field.Name = "Success";
            field.Type = TType.List;
            field.ID = 0;
            oprot.WriteFieldBegin(field);
            {
              oprot.WriteListBegin(new TList(TType.String, Success.Count));
              foreach (string _iter99 in Success)
              {
                oprot.WriteString(_iter99);
              }
              oprot.WriteListEnd();
            }
            oprot.WriteFieldEnd();
          }
        } else if (this.__isset.e) {
          if (E != null) {
            field.Name = "E";
            field.Type = TType.Struct;
            field.ID = 1;
            oprot.WriteFieldBegin(field);
            E.Write(oprot);
            oprot.WriteFieldEnd();
          }
        }
        oprot.WriteFieldStop();
        oprot.WriteStructEnd();
      }
      finally
      {
        oprot.DecrementRecursionDepth();
      }
    }

    public override string ToString() {
      StringBuilder __sb = new StringBuilder("getBlockedContactIdsByRange_result(");
      bool __first = true;
      if (Success != null && __isset.success) {
        if(!__first) { __sb.Append(", "); }
        __first = false;
        __sb.Append("Success: ");
        __sb.Append(Success);
      }
      if (E != null && __isset.e) {
        if(!__first) { __sb.Append(", "); }
        __first = false;
        __sb.Append("E: ");
        __sb.Append(E== null ? "<null>" : E.ToString());
      }
      __sb.Append(")");
      return __sb.ToString();
    }

  }


  #if !SILVERLIGHT
  [Serializable]
  #endif
  public partial class getBlockedRecommendationIds_args : TBase
  {

    public getBlockedRecommendationIds_args() {
    }

    public void Read (TProtocol iprot)
    {
      iprot.IncrementRecursionDepth();
      try
      {
        TField field;
        iprot.ReadStructBegin();
        while (true)
        {
          field = iprot.ReadFieldBegin();
          if (field.Type == TType.Stop) { 
            break;
          }
          switch (field.ID)
          {
            default: 
              TProtocolUtil.Skip(iprot, field.Type);
              break;
          }
          iprot.ReadFieldEnd();
        }
        iprot.ReadStructEnd();
      }
      finally
      {
        iprot.DecrementRecursionDepth();
      }
    }

    public void Write(TProtocol oprot) {
      oprot.IncrementRecursionDepth();
      try
      {
        TStruct struc = new TStruct("getBlockedRecommendationIds_args");
        oprot.WriteStructBegin(struc);
        oprot.WriteFieldStop();
        oprot.WriteStructEnd();
      }
      finally
      {
        oprot.DecrementRecursionDepth();
      }
    }

    public override string ToString() {
      StringBuilder __sb = new StringBuilder("getBlockedRecommendationIds_args(");
      __sb.Append(")");
      return __sb.ToString();
    }

  }


  #if !SILVERLIGHT
  [Serializable]
  #endif
  public partial class getBlockedRecommendationIds_result : TBase
  {
    private List<string> _success;
    private TalkException _e;

    public List<string> Success
    {
      get
      {
        return _success;
      }
      set
      {
        __isset.success = true;
        this._success = value;
      }
    }

    public TalkException E
    {
      get
      {
        return _e;
      }
      set
      {
        __isset.e = true;
        this._e = value;
      }
    }


    public Isset __isset;
    #if !SILVERLIGHT
    [Serializable]
    #endif
    public struct Isset {
      public bool success;
      public bool e;
    }

    public getBlockedRecommendationIds_result() {
    }

    public void Read (TProtocol iprot)
    {
      iprot.IncrementRecursionDepth();
      try
      {
        TField field;
        iprot.ReadStructBegin();
        while (true)
        {
          field = iprot.ReadFieldBegin();
          if (field.Type == TType.Stop) { 
            break;
          }
          switch (field.ID)
          {
            case 0:
              if (field.Type == TType.List) {
                {
                  Success = new List<string>();
                  TList _list100 = iprot.ReadListBegin();
                  for( int _i101 = 0; _i101 < _list100.Count; ++_i101)
                  {
                    string _elem102;
                    _elem102 = iprot.ReadString();
                    Success.Add(_elem102);
                  }
                  iprot.ReadListEnd();
                }
              } else { 
                TProtocolUtil.Skip(iprot, field.Type);
              }
              break;
            case 1:
              if (field.Type == TType.Struct) {
                E = new TalkException();
                E.Read(iprot);
              } else { 
                TProtocolUtil.Skip(iprot, field.Type);
              }
              break;
            default: 
              TProtocolUtil.Skip(iprot, field.Type);
              break;
          }
          iprot.ReadFieldEnd();
        }
        iprot.ReadStructEnd();
      }
      finally
      {
        iprot.DecrementRecursionDepth();
      }
    }

    public void Write(TProtocol oprot) {
      oprot.IncrementRecursionDepth();
      try
      {
        TStruct struc = new TStruct("getBlockedRecommendationIds_result");
        oprot.WriteStructBegin(struc);
        TField field = new TField();

        if (this.__isset.success) {
          if (Success != null) {
            field.Name = "Success";
            field.Type = TType.List;
            field.ID = 0;
            oprot.WriteFieldBegin(field);
            {
              oprot.WriteListBegin(new TList(TType.String, Success.Count));
              foreach (string _iter103 in Success)
              {
                oprot.WriteString(_iter103);
              }
              oprot.WriteListEnd();
            }
            oprot.WriteFieldEnd();
          }
        } else if (this.__isset.e) {
          if (E != null) {
            field.Name = "E";
            field.Type = TType.Struct;
            field.ID = 1;
            oprot.WriteFieldBegin(field);
            E.Write(oprot);
            oprot.WriteFieldEnd();
          }
        }
        oprot.WriteFieldStop();
        oprot.WriteStructEnd();
      }
      finally
      {
        oprot.DecrementRecursionDepth();
      }
    }

    public override string ToString() {
      StringBuilder __sb = new StringBuilder("getBlockedRecommendationIds_result(");
      bool __first = true;
      if (Success != null && __isset.success) {
        if(!__first) { __sb.Append(", "); }
        __first = false;
        __sb.Append("Success: ");
        __sb.Append(Success);
      }
      if (E != null && __isset.e) {
        if(!__first) { __sb.Append(", "); }
        __first = false;
        __sb.Append("E: ");
        __sb.Append(E== null ? "<null>" : E.ToString());
      }
      __sb.Append(")");
      return __sb.ToString();
    }

  }


  #if !SILVERLIGHT
  [Serializable]
  #endif
  public partial class getContact_args : TBase
  {
    private string _id;

    public string Id
    {
      get
      {
        return _id;
      }
      set
      {
        __isset.id = true;
        this._id = value;
      }
    }


    public Isset __isset;
    #if !SILVERLIGHT
    [Serializable]
    #endif
    public struct Isset {
      public bool id;
    }

    public getContact_args() {
    }

    public void Read (TProtocol iprot)
    {
      iprot.IncrementRecursionDepth();
      try
      {
        TField field;
        iprot.ReadStructBegin();
        while (true)
        {
          field = iprot.ReadFieldBegin();
          if (field.Type == TType.Stop) { 
            break;
          }
          switch (field.ID)
          {
            case 2:
              if (field.Type == TType.String) {
                Id = iprot.ReadString();
              } else { 
                TProtocolUtil.Skip(iprot, field.Type);
              }
              break;
            default: 
              TProtocolUtil.Skip(iprot, field.Type);
              break;
          }
          iprot.ReadFieldEnd();
        }
        iprot.ReadStructEnd();
      }
      finally
      {
        iprot.DecrementRecursionDepth();
      }
    }

    public void Write(TProtocol oprot) {
      oprot.IncrementRecursionDepth();
      try
      {
        TStruct struc = new TStruct("getContact_args");
        oprot.WriteStructBegin(struc);
        TField field = new TField();
        if (Id != null && __isset.id) {
          field.Name = "id";
          field.Type = TType.String;
          field.ID = 2;
          oprot.WriteFieldBegin(field);
          oprot.WriteString(Id);
          oprot.WriteFieldEnd();
        }
        oprot.WriteFieldStop();
        oprot.WriteStructEnd();
      }
      finally
      {
        oprot.DecrementRecursionDepth();
      }
    }

    public override string ToString() {
      StringBuilder __sb = new StringBuilder("getContact_args(");
      bool __first = true;
      if (Id != null && __isset.id) {
        if(!__first) { __sb.Append(", "); }
        __first = false;
        __sb.Append("Id: ");
        __sb.Append(Id);
      }
      __sb.Append(")");
      return __sb.ToString();
    }

  }


  #if !SILVERLIGHT
  [Serializable]
  #endif
  public partial class getContact_result : TBase
  {
    private Contact _success;
    private TalkException _e;

    public Contact Success
    {
      get
      {
        return _success;
      }
      set
      {
        __isset.success = true;
        this._success = value;
      }
    }

    public TalkException E
    {
      get
      {
        return _e;
      }
      set
      {
        __isset.e = true;
        this._e = value;
      }
    }


    public Isset __isset;
    #if !SILVERLIGHT
    [Serializable]
    #endif
    public struct Isset {
      public bool success;
      public bool e;
    }

    public getContact_result() {
    }

    public void Read (TProtocol iprot)
    {
      iprot.IncrementRecursionDepth();
      try
      {
        TField field;
        iprot.ReadStructBegin();
        while (true)
        {
          field = iprot.ReadFieldBegin();
          if (field.Type == TType.Stop) { 
            break;
          }
          switch (field.ID)
          {
            case 0:
              if (field.Type == TType.Struct) {
                Success = new Contact();
                Success.Read(iprot);
              } else { 
                TProtocolUtil.Skip(iprot, field.Type);
              }
              break;
            case 1:
              if (field.Type == TType.Struct) {
                E = new TalkException();
                E.Read(iprot);
              } else { 
                TProtocolUtil.Skip(iprot, field.Type);
              }
              break;
            default: 
              TProtocolUtil.Skip(iprot, field.Type);
              break;
          }
          iprot.ReadFieldEnd();
        }
        iprot.ReadStructEnd();
      }
      finally
      {
        iprot.DecrementRecursionDepth();
      }
    }

    public void Write(TProtocol oprot) {
      oprot.IncrementRecursionDepth();
      try
      {
        TStruct struc = new TStruct("getContact_result");
        oprot.WriteStructBegin(struc);
        TField field = new TField();

        if (this.__isset.success) {
          if (Success != null) {
            field.Name = "Success";
            field.Type = TType.Struct;
            field.ID = 0;
            oprot.WriteFieldBegin(field);
            Success.Write(oprot);
            oprot.WriteFieldEnd();
          }
        } else if (this.__isset.e) {
          if (E != null) {
            field.Name = "E";
            field.Type = TType.Struct;
            field.ID = 1;
            oprot.WriteFieldBegin(field);
            E.Write(oprot);
            oprot.WriteFieldEnd();
          }
        }
        oprot.WriteFieldStop();
        oprot.WriteStructEnd();
      }
      finally
      {
        oprot.DecrementRecursionDepth();
      }
    }

    public override string ToString() {
      StringBuilder __sb = new StringBuilder("getContact_result(");
      bool __first = true;
      if (Success != null && __isset.success) {
        if(!__first) { __sb.Append(", "); }
        __first = false;
        __sb.Append("Success: ");
        __sb.Append(Success== null ? "<null>" : Success.ToString());
      }
      if (E != null && __isset.e) {
        if(!__first) { __sb.Append(", "); }
        __first = false;
        __sb.Append("E: ");
        __sb.Append(E== null ? "<null>" : E.ToString());
      }
      __sb.Append(")");
      return __sb.ToString();
    }

  }


  #if !SILVERLIGHT
  [Serializable]
  #endif
  public partial class getContacts_args : TBase
  {
    private List<string> _ids;

    public List<string> Ids
    {
      get
      {
        return _ids;
      }
      set
      {
        __isset.ids = true;
        this._ids = value;
      }
    }


    public Isset __isset;
    #if !SILVERLIGHT
    [Serializable]
    #endif
    public struct Isset {
      public bool ids;
    }

    public getContacts_args() {
    }

    public void Read (TProtocol iprot)
    {
      iprot.IncrementRecursionDepth();
      try
      {
        TField field;
        iprot.ReadStructBegin();
        while (true)
        {
          field = iprot.ReadFieldBegin();
          if (field.Type == TType.Stop) { 
            break;
          }
          switch (field.ID)
          {
            case 2:
              if (field.Type == TType.List) {
                {
                  Ids = new List<string>();
                  TList _list104 = iprot.ReadListBegin();
                  for( int _i105 = 0; _i105 < _list104.Count; ++_i105)
                  {
                    string _elem106;
                    _elem106 = iprot.ReadString();
                    Ids.Add(_elem106);
                  }
                  iprot.ReadListEnd();
                }
              } else { 
                TProtocolUtil.Skip(iprot, field.Type);
              }
              break;
            default: 
              TProtocolUtil.Skip(iprot, field.Type);
              break;
          }
          iprot.ReadFieldEnd();
        }
        iprot.ReadStructEnd();
      }
      finally
      {
        iprot.DecrementRecursionDepth();
      }
    }

    public void Write(TProtocol oprot) {
      oprot.IncrementRecursionDepth();
      try
      {
        TStruct struc = new TStruct("getContacts_args");
        oprot.WriteStructBegin(struc);
        TField field = new TField();
        if (Ids != null && __isset.ids) {
          field.Name = "ids";
          field.Type = TType.List;
          field.ID = 2;
          oprot.WriteFieldBegin(field);
          {
            oprot.WriteListBegin(new TList(TType.String, Ids.Count));
            foreach (string _iter107 in Ids)
            {
              oprot.WriteString(_iter107);
            }
            oprot.WriteListEnd();
          }
          oprot.WriteFieldEnd();
        }
        oprot.WriteFieldStop();
        oprot.WriteStructEnd();
      }
      finally
      {
        oprot.DecrementRecursionDepth();
      }
    }

    public override string ToString() {
      StringBuilder __sb = new StringBuilder("getContacts_args(");
      bool __first = true;
      if (Ids != null && __isset.ids) {
        if(!__first) { __sb.Append(", "); }
        __first = false;
        __sb.Append("Ids: ");
        __sb.Append(Ids);
      }
      __sb.Append(")");
      return __sb.ToString();
    }

  }


  #if !SILVERLIGHT
  [Serializable]
  #endif
  public partial class getContacts_result : TBase
  {
    private List<Contact> _success;
    private TalkException _e;

    public List<Contact> Success
    {
      get
      {
        return _success;
      }
      set
      {
        __isset.success = true;
        this._success = value;
      }
    }

    public TalkException E
    {
      get
      {
        return _e;
      }
      set
      {
        __isset.e = true;
        this._e = value;
      }
    }


    public Isset __isset;
    #if !SILVERLIGHT
    [Serializable]
    #endif
    public struct Isset {
      public bool success;
      public bool e;
    }

    public getContacts_result() {
    }

    public void Read (TProtocol iprot)
    {
      iprot.IncrementRecursionDepth();
      try
      {
        TField field;
        iprot.ReadStructBegin();
        while (true)
        {
          field = iprot.ReadFieldBegin();
          if (field.Type == TType.Stop) { 
            break;
          }
          switch (field.ID)
          {
            case 0:
              if (field.Type == TType.List) {
                {
                  Success = new List<Contact>();
                  TList _list108 = iprot.ReadListBegin();
                  for( int _i109 = 0; _i109 < _list108.Count; ++_i109)
                  {
                    Contact _elem110;
                    _elem110 = new Contact();
                    _elem110.Read(iprot);
                    Success.Add(_elem110);
                  }
                  iprot.ReadListEnd();
                }
              } else { 
                TProtocolUtil.Skip(iprot, field.Type);
              }
              break;
            case 1:
              if (field.Type == TType.Struct) {
                E = new TalkException();
                E.Read(iprot);
              } else { 
                TProtocolUtil.Skip(iprot, field.Type);
              }
              break;
            default: 
              TProtocolUtil.Skip(iprot, field.Type);
              break;
          }
          iprot.ReadFieldEnd();
        }
        iprot.ReadStructEnd();
      }
      finally
      {
        iprot.DecrementRecursionDepth();
      }
    }

    public void Write(TProtocol oprot) {
      oprot.IncrementRecursionDepth();
      try
      {
        TStruct struc = new TStruct("getContacts_result");
        oprot.WriteStructBegin(struc);
        TField field = new TField();

        if (this.__isset.success) {
          if (Success != null) {
            field.Name = "Success";
            field.Type = TType.List;
            field.ID = 0;
            oprot.WriteFieldBegin(field);
            {
              oprot.WriteListBegin(new TList(TType.Struct, Success.Count));
              foreach (Contact _iter111 in Success)
              {
                _iter111.Write(oprot);
              }
              oprot.WriteListEnd();
            }
            oprot.WriteFieldEnd();
          }
        } else if (this.__isset.e) {
          if (E != null) {
            field.Name = "E";
            field.Type = TType.Struct;
            field.ID = 1;
            oprot.WriteFieldBegin(field);
            E.Write(oprot);
            oprot.WriteFieldEnd();
          }
        }
        oprot.WriteFieldStop();
        oprot.WriteStructEnd();
      }
      finally
      {
        oprot.DecrementRecursionDepth();
      }
    }

    public override string ToString() {
      StringBuilder __sb = new StringBuilder("getContacts_result(");
      bool __first = true;
      if (Success != null && __isset.success) {
        if(!__first) { __sb.Append(", "); }
        __first = false;
        __sb.Append("Success: ");
        __sb.Append(Success);
      }
      if (E != null && __isset.e) {
        if(!__first) { __sb.Append(", "); }
        __first = false;
        __sb.Append("E: ");
        __sb.Append(E== null ? "<null>" : E.ToString());
      }
      __sb.Append(")");
      return __sb.ToString();
    }

  }


  #if !SILVERLIGHT
  [Serializable]
  #endif
  public partial class getGroup_args : TBase
  {
    private string _groupId;

    public string GroupId
    {
      get
      {
        return _groupId;
      }
      set
      {
        __isset.groupId = true;
        this._groupId = value;
      }
    }


    public Isset __isset;
    #if !SILVERLIGHT
    [Serializable]
    #endif
    public struct Isset {
      public bool groupId;
    }

    public getGroup_args() {
    }

    public void Read (TProtocol iprot)
    {
      iprot.IncrementRecursionDepth();
      try
      {
        TField field;
        iprot.ReadStructBegin();
        while (true)
        {
          field = iprot.ReadFieldBegin();
          if (field.Type == TType.Stop) { 
            break;
          }
          switch (field.ID)
          {
            case 2:
              if (field.Type == TType.String) {
                GroupId = iprot.ReadString();
              } else { 
                TProtocolUtil.Skip(iprot, field.Type);
              }
              break;
            default: 
              TProtocolUtil.Skip(iprot, field.Type);
              break;
          }
          iprot.ReadFieldEnd();
        }
        iprot.ReadStructEnd();
      }
      finally
      {
        iprot.DecrementRecursionDepth();
      }
    }

    public void Write(TProtocol oprot) {
      oprot.IncrementRecursionDepth();
      try
      {
        TStruct struc = new TStruct("getGroup_args");
        oprot.WriteStructBegin(struc);
        TField field = new TField();
        if (GroupId != null && __isset.groupId) {
          field.Name = "groupId";
          field.Type = TType.String;
          field.ID = 2;
          oprot.WriteFieldBegin(field);
          oprot.WriteString(GroupId);
          oprot.WriteFieldEnd();
        }
        oprot.WriteFieldStop();
        oprot.WriteStructEnd();
      }
      finally
      {
        oprot.DecrementRecursionDepth();
      }
    }

    public override string ToString() {
      StringBuilder __sb = new StringBuilder("getGroup_args(");
      bool __first = true;
      if (GroupId != null && __isset.groupId) {
        if(!__first) { __sb.Append(", "); }
        __first = false;
        __sb.Append("GroupId: ");
        __sb.Append(GroupId);
      }
      __sb.Append(")");
      return __sb.ToString();
    }

  }


  #if !SILVERLIGHT
  [Serializable]
  #endif
  public partial class getGroup_result : TBase
  {
    private @Group _success;
    private TalkException _e;

    public @Group Success
    {
      get
      {
        return _success;
      }
      set
      {
        __isset.success = true;
        this._success = value;
      }
    }

    public TalkException E
    {
      get
      {
        return _e;
      }
      set
      {
        __isset.e = true;
        this._e = value;
      }
    }


    public Isset __isset;
    #if !SILVERLIGHT
    [Serializable]
    #endif
    public struct Isset {
      public bool success;
      public bool e;
    }

    public getGroup_result() {
    }

    public void Read (TProtocol iprot)
    {
      iprot.IncrementRecursionDepth();
      try
      {
        TField field;
        iprot.ReadStructBegin();
        while (true)
        {
          field = iprot.ReadFieldBegin();
          if (field.Type == TType.Stop) { 
            break;
          }
          switch (field.ID)
          {
            case 0:
              if (field.Type == TType.Struct) {
                Success = new @Group();
                Success.Read(iprot);
              } else { 
                TProtocolUtil.Skip(iprot, field.Type);
              }
              break;
            case 1:
              if (field.Type == TType.Struct) {
                E = new TalkException();
                E.Read(iprot);
              } else { 
                TProtocolUtil.Skip(iprot, field.Type);
              }
              break;
            default: 
              TProtocolUtil.Skip(iprot, field.Type);
              break;
          }
          iprot.ReadFieldEnd();
        }
        iprot.ReadStructEnd();
      }
      finally
      {
        iprot.DecrementRecursionDepth();
      }
    }

    public void Write(TProtocol oprot) {
      oprot.IncrementRecursionDepth();
      try
      {
        TStruct struc = new TStruct("getGroup_result");
        oprot.WriteStructBegin(struc);
        TField field = new TField();

        if (this.__isset.success) {
          if (Success != null) {
            field.Name = "Success";
            field.Type = TType.Struct;
            field.ID = 0;
            oprot.WriteFieldBegin(field);
            Success.Write(oprot);
            oprot.WriteFieldEnd();
          }
        } else if (this.__isset.e) {
          if (E != null) {
            field.Name = "E";
            field.Type = TType.Struct;
            field.ID = 1;
            oprot.WriteFieldBegin(field);
            E.Write(oprot);
            oprot.WriteFieldEnd();
          }
        }
        oprot.WriteFieldStop();
        oprot.WriteStructEnd();
      }
      finally
      {
        oprot.DecrementRecursionDepth();
      }
    }

    public override string ToString() {
      StringBuilder __sb = new StringBuilder("getGroup_result(");
      bool __first = true;
      if (Success != null && __isset.success) {
        if(!__first) { __sb.Append(", "); }
        __first = false;
        __sb.Append("Success: ");
        __sb.Append(Success== null ? "<null>" : Success.ToString());
      }
      if (E != null && __isset.e) {
        if(!__first) { __sb.Append(", "); }
        __first = false;
        __sb.Append("E: ");
        __sb.Append(E== null ? "<null>" : E.ToString());
      }
      __sb.Append(")");
      return __sb.ToString();
    }

  }


  #if !SILVERLIGHT
  [Serializable]
  #endif
  public partial class getGroupIdsInvited_args : TBase
  {

    public getGroupIdsInvited_args() {
    }

    public void Read (TProtocol iprot)
    {
      iprot.IncrementRecursionDepth();
      try
      {
        TField field;
        iprot.ReadStructBegin();
        while (true)
        {
          field = iprot.ReadFieldBegin();
          if (field.Type == TType.Stop) { 
            break;
          }
          switch (field.ID)
          {
            default: 
              TProtocolUtil.Skip(iprot, field.Type);
              break;
          }
          iprot.ReadFieldEnd();
        }
        iprot.ReadStructEnd();
      }
      finally
      {
        iprot.DecrementRecursionDepth();
      }
    }

    public void Write(TProtocol oprot) {
      oprot.IncrementRecursionDepth();
      try
      {
        TStruct struc = new TStruct("getGroupIdsInvited_args");
        oprot.WriteStructBegin(struc);
        oprot.WriteFieldStop();
        oprot.WriteStructEnd();
      }
      finally
      {
        oprot.DecrementRecursionDepth();
      }
    }

    public override string ToString() {
      StringBuilder __sb = new StringBuilder("getGroupIdsInvited_args(");
      __sb.Append(")");
      return __sb.ToString();
    }

  }


  #if !SILVERLIGHT
  [Serializable]
  #endif
  public partial class getGroupIdsInvited_result : TBase
  {
    private List<string> _success;
    private TalkException _e;

    public List<string> Success
    {
      get
      {
        return _success;
      }
      set
      {
        __isset.success = true;
        this._success = value;
      }
    }

    public TalkException E
    {
      get
      {
        return _e;
      }
      set
      {
        __isset.e = true;
        this._e = value;
      }
    }


    public Isset __isset;
    #if !SILVERLIGHT
    [Serializable]
    #endif
    public struct Isset {
      public bool success;
      public bool e;
    }

    public getGroupIdsInvited_result() {
    }

    public void Read (TProtocol iprot)
    {
      iprot.IncrementRecursionDepth();
      try
      {
        TField field;
        iprot.ReadStructBegin();
        while (true)
        {
          field = iprot.ReadFieldBegin();
          if (field.Type == TType.Stop) { 
            break;
          }
          switch (field.ID)
          {
            case 0:
              if (field.Type == TType.List) {
                {
                  Success = new List<string>();
                  TList _list112 = iprot.ReadListBegin();
                  for( int _i113 = 0; _i113 < _list112.Count; ++_i113)
                  {
                    string _elem114;
                    _elem114 = iprot.ReadString();
                    Success.Add(_elem114);
                  }
                  iprot.ReadListEnd();
                }
              } else { 
                TProtocolUtil.Skip(iprot, field.Type);
              }
              break;
            case 1:
              if (field.Type == TType.Struct) {
                E = new TalkException();
                E.Read(iprot);
              } else { 
                TProtocolUtil.Skip(iprot, field.Type);
              }
              break;
            default: 
              TProtocolUtil.Skip(iprot, field.Type);
              break;
          }
          iprot.ReadFieldEnd();
        }
        iprot.ReadStructEnd();
      }
      finally
      {
        iprot.DecrementRecursionDepth();
      }
    }

    public void Write(TProtocol oprot) {
      oprot.IncrementRecursionDepth();
      try
      {
        TStruct struc = new TStruct("getGroupIdsInvited_result");
        oprot.WriteStructBegin(struc);
        TField field = new TField();

        if (this.__isset.success) {
          if (Success != null) {
            field.Name = "Success";
            field.Type = TType.List;
            field.ID = 0;
            oprot.WriteFieldBegin(field);
            {
              oprot.WriteListBegin(new TList(TType.String, Success.Count));
              foreach (string _iter115 in Success)
              {
                oprot.WriteString(_iter115);
              }
              oprot.WriteListEnd();
            }
            oprot.WriteFieldEnd();
          }
        } else if (this.__isset.e) {
          if (E != null) {
            field.Name = "E";
            field.Type = TType.Struct;
            field.ID = 1;
            oprot.WriteFieldBegin(field);
            E.Write(oprot);
            oprot.WriteFieldEnd();
          }
        }
        oprot.WriteFieldStop();
        oprot.WriteStructEnd();
      }
      finally
      {
        oprot.DecrementRecursionDepth();
      }
    }

    public override string ToString() {
      StringBuilder __sb = new StringBuilder("getGroupIdsInvited_result(");
      bool __first = true;
      if (Success != null && __isset.success) {
        if(!__first) { __sb.Append(", "); }
        __first = false;
        __sb.Append("Success: ");
        __sb.Append(Success);
      }
      if (E != null && __isset.e) {
        if(!__first) { __sb.Append(", "); }
        __first = false;
        __sb.Append("E: ");
        __sb.Append(E== null ? "<null>" : E.ToString());
      }
      __sb.Append(")");
      return __sb.ToString();
    }

  }


  #if !SILVERLIGHT
  [Serializable]
  #endif
  public partial class getGroupIdsJoined_args : TBase
  {

    public getGroupIdsJoined_args() {
    }

    public void Read (TProtocol iprot)
    {
      iprot.IncrementRecursionDepth();
      try
      {
        TField field;
        iprot.ReadStructBegin();
        while (true)
        {
          field = iprot.ReadFieldBegin();
          if (field.Type == TType.Stop) { 
            break;
          }
          switch (field.ID)
          {
            default: 
              TProtocolUtil.Skip(iprot, field.Type);
              break;
          }
          iprot.ReadFieldEnd();
        }
        iprot.ReadStructEnd();
      }
      finally
      {
        iprot.DecrementRecursionDepth();
      }
    }

    public void Write(TProtocol oprot) {
      oprot.IncrementRecursionDepth();
      try
      {
        TStruct struc = new TStruct("getGroupIdsJoined_args");
        oprot.WriteStructBegin(struc);
        oprot.WriteFieldStop();
        oprot.WriteStructEnd();
      }
      finally
      {
        oprot.DecrementRecursionDepth();
      }
    }

    public override string ToString() {
      StringBuilder __sb = new StringBuilder("getGroupIdsJoined_args(");
      __sb.Append(")");
      return __sb.ToString();
    }

  }


  #if !SILVERLIGHT
  [Serializable]
  #endif
  public partial class getGroupIdsJoined_result : TBase
  {
    private List<string> _success;
    private TalkException _e;

    public List<string> Success
    {
      get
      {
        return _success;
      }
      set
      {
        __isset.success = true;
        this._success = value;
      }
    }

    public TalkException E
    {
      get
      {
        return _e;
      }
      set
      {
        __isset.e = true;
        this._e = value;
      }
    }


    public Isset __isset;
    #if !SILVERLIGHT
    [Serializable]
    #endif
    public struct Isset {
      public bool success;
      public bool e;
    }

    public getGroupIdsJoined_result() {
    }

    public void Read (TProtocol iprot)
    {
      iprot.IncrementRecursionDepth();
      try
      {
        TField field;
        iprot.ReadStructBegin();
        while (true)
        {
          field = iprot.ReadFieldBegin();
          if (field.Type == TType.Stop) { 
            break;
          }
          switch (field.ID)
          {
            case 0:
              if (field.Type == TType.List) {
                {
                  Success = new List<string>();
                  TList _list116 = iprot.ReadListBegin();
                  for( int _i117 = 0; _i117 < _list116.Count; ++_i117)
                  {
                    string _elem118;
                    _elem118 = iprot.ReadString();
                    Success.Add(_elem118);
                  }
                  iprot.ReadListEnd();
                }
              } else { 
                TProtocolUtil.Skip(iprot, field.Type);
              }
              break;
            case 1:
              if (field.Type == TType.Struct) {
                E = new TalkException();
                E.Read(iprot);
              } else { 
                TProtocolUtil.Skip(iprot, field.Type);
              }
              break;
            default: 
              TProtocolUtil.Skip(iprot, field.Type);
              break;
          }
          iprot.ReadFieldEnd();
        }
        iprot.ReadStructEnd();
      }
      finally
      {
        iprot.DecrementRecursionDepth();
      }
    }

    public void Write(TProtocol oprot) {
      oprot.IncrementRecursionDepth();
      try
      {
        TStruct struc = new TStruct("getGroupIdsJoined_result");
        oprot.WriteStructBegin(struc);
        TField field = new TField();

        if (this.__isset.success) {
          if (Success != null) {
            field.Name = "Success";
            field.Type = TType.List;
            field.ID = 0;
            oprot.WriteFieldBegin(field);
            {
              oprot.WriteListBegin(new TList(TType.String, Success.Count));
              foreach (string _iter119 in Success)
              {
                oprot.WriteString(_iter119);
              }
              oprot.WriteListEnd();
            }
            oprot.WriteFieldEnd();
          }
        } else if (this.__isset.e) {
          if (E != null) {
            field.Name = "E";
            field.Type = TType.Struct;
            field.ID = 1;
            oprot.WriteFieldBegin(field);
            E.Write(oprot);
            oprot.WriteFieldEnd();
          }
        }
        oprot.WriteFieldStop();
        oprot.WriteStructEnd();
      }
      finally
      {
        oprot.DecrementRecursionDepth();
      }
    }

    public override string ToString() {
      StringBuilder __sb = new StringBuilder("getGroupIdsJoined_result(");
      bool __first = true;
      if (Success != null && __isset.success) {
        if(!__first) { __sb.Append(", "); }
        __first = false;
        __sb.Append("Success: ");
        __sb.Append(Success);
      }
      if (E != null && __isset.e) {
        if(!__first) { __sb.Append(", "); }
        __first = false;
        __sb.Append("E: ");
        __sb.Append(E== null ? "<null>" : E.ToString());
      }
      __sb.Append(")");
      return __sb.ToString();
    }

  }


  #if !SILVERLIGHT
  [Serializable]
  #endif
  public partial class getGroups_args : TBase
  {
    private List<string> _groupIds;

    public List<string> GroupIds
    {
      get
      {
        return _groupIds;
      }
      set
      {
        __isset.groupIds = true;
        this._groupIds = value;
      }
    }


    public Isset __isset;
    #if !SILVERLIGHT
    [Serializable]
    #endif
    public struct Isset {
      public bool groupIds;
    }

    public getGroups_args() {
    }

    public void Read (TProtocol iprot)
    {
      iprot.IncrementRecursionDepth();
      try
      {
        TField field;
        iprot.ReadStructBegin();
        while (true)
        {
          field = iprot.ReadFieldBegin();
          if (field.Type == TType.Stop) { 
            break;
          }
          switch (field.ID)
          {
            case 2:
              if (field.Type == TType.List) {
                {
                  GroupIds = new List<string>();
                  TList _list120 = iprot.ReadListBegin();
                  for( int _i121 = 0; _i121 < _list120.Count; ++_i121)
                  {
                    string _elem122;
                    _elem122 = iprot.ReadString();
                    GroupIds.Add(_elem122);
                  }
                  iprot.ReadListEnd();
                }
              } else { 
                TProtocolUtil.Skip(iprot, field.Type);
              }
              break;
            default: 
              TProtocolUtil.Skip(iprot, field.Type);
              break;
          }
          iprot.ReadFieldEnd();
        }
        iprot.ReadStructEnd();
      }
      finally
      {
        iprot.DecrementRecursionDepth();
      }
    }

    public void Write(TProtocol oprot) {
      oprot.IncrementRecursionDepth();
      try
      {
        TStruct struc = new TStruct("getGroups_args");
        oprot.WriteStructBegin(struc);
        TField field = new TField();
        if (GroupIds != null && __isset.groupIds) {
          field.Name = "groupIds";
          field.Type = TType.List;
          field.ID = 2;
          oprot.WriteFieldBegin(field);
          {
            oprot.WriteListBegin(new TList(TType.String, GroupIds.Count));
            foreach (string _iter123 in GroupIds)
            {
              oprot.WriteString(_iter123);
            }
            oprot.WriteListEnd();
          }
          oprot.WriteFieldEnd();
        }
        oprot.WriteFieldStop();
        oprot.WriteStructEnd();
      }
      finally
      {
        oprot.DecrementRecursionDepth();
      }
    }

    public override string ToString() {
      StringBuilder __sb = new StringBuilder("getGroups_args(");
      bool __first = true;
      if (GroupIds != null && __isset.groupIds) {
        if(!__first) { __sb.Append(", "); }
        __first = false;
        __sb.Append("GroupIds: ");
        __sb.Append(GroupIds);
      }
      __sb.Append(")");
      return __sb.ToString();
    }

  }


  #if !SILVERLIGHT
  [Serializable]
  #endif
  public partial class getGroups_result : TBase
  {
    private List<@Group> _success;
    private TalkException _e;

    public List<@Group> Success
    {
      get
      {
        return _success;
      }
      set
      {
        __isset.success = true;
        this._success = value;
      }
    }

    public TalkException E
    {
      get
      {
        return _e;
      }
      set
      {
        __isset.e = true;
        this._e = value;
      }
    }


    public Isset __isset;
    #if !SILVERLIGHT
    [Serializable]
    #endif
    public struct Isset {
      public bool success;
      public bool e;
    }

    public getGroups_result() {
    }

    public void Read (TProtocol iprot)
    {
      iprot.IncrementRecursionDepth();
      try
      {
        TField field;
        iprot.ReadStructBegin();
        while (true)
        {
          field = iprot.ReadFieldBegin();
          if (field.Type == TType.Stop) { 
            break;
          }
          switch (field.ID)
          {
            case 0:
              if (field.Type == TType.List) {
                {
                  Success = new List<@Group>();
                  TList _list124 = iprot.ReadListBegin();
                  for( int _i125 = 0; _i125 < _list124.Count; ++_i125)
                  {
                    @Group _elem126;
                    _elem126 = new @Group();
                    _elem126.Read(iprot);
                    Success.Add(_elem126);
                  }
                  iprot.ReadListEnd();
                }
              } else { 
                TProtocolUtil.Skip(iprot, field.Type);
              }
              break;
            case 1:
              if (field.Type == TType.Struct) {
                E = new TalkException();
                E.Read(iprot);
              } else { 
                TProtocolUtil.Skip(iprot, field.Type);
              }
              break;
            default: 
              TProtocolUtil.Skip(iprot, field.Type);
              break;
          }
          iprot.ReadFieldEnd();
        }
        iprot.ReadStructEnd();
      }
      finally
      {
        iprot.DecrementRecursionDepth();
      }
    }

    public void Write(TProtocol oprot) {
      oprot.IncrementRecursionDepth();
      try
      {
        TStruct struc = new TStruct("getGroups_result");
        oprot.WriteStructBegin(struc);
        TField field = new TField();

        if (this.__isset.success) {
          if (Success != null) {
            field.Name = "Success";
            field.Type = TType.List;
            field.ID = 0;
            oprot.WriteFieldBegin(field);
            {
              oprot.WriteListBegin(new TList(TType.Struct, Success.Count));
              foreach (@Group _iter127 in Success)
              {
                _iter127.Write(oprot);
              }
              oprot.WriteListEnd();
            }
            oprot.WriteFieldEnd();
          }
        } else if (this.__isset.e) {
          if (E != null) {
            field.Name = "E";
            field.Type = TType.Struct;
            field.ID = 1;
            oprot.WriteFieldBegin(field);
            E.Write(oprot);
            oprot.WriteFieldEnd();
          }
        }
        oprot.WriteFieldStop();
        oprot.WriteStructEnd();
      }
      finally
      {
        oprot.DecrementRecursionDepth();
      }
    }

    public override string ToString() {
      StringBuilder __sb = new StringBuilder("getGroups_result(");
      bool __first = true;
      if (Success != null && __isset.success) {
        if(!__first) { __sb.Append(", "); }
        __first = false;
        __sb.Append("Success: ");
        __sb.Append(Success);
      }
      if (E != null && __isset.e) {
        if(!__first) { __sb.Append(", "); }
        __first = false;
        __sb.Append("E: ");
        __sb.Append(E== null ? "<null>" : E.ToString());
      }
      __sb.Append(")");
      return __sb.ToString();
    }

  }


  #if !SILVERLIGHT
  [Serializable]
  #endif
  public partial class getFavoriteMids_args : TBase
  {

    public getFavoriteMids_args() {
    }

    public void Read (TProtocol iprot)
    {
      iprot.IncrementRecursionDepth();
      try
      {
        TField field;
        iprot.ReadStructBegin();
        while (true)
        {
          field = iprot.ReadFieldBegin();
          if (field.Type == TType.Stop) { 
            break;
          }
          switch (field.ID)
          {
            default: 
              TProtocolUtil.Skip(iprot, field.Type);
              break;
          }
          iprot.ReadFieldEnd();
        }
        iprot.ReadStructEnd();
      }
      finally
      {
        iprot.DecrementRecursionDepth();
      }
    }

    public void Write(TProtocol oprot) {
      oprot.IncrementRecursionDepth();
      try
      {
        TStruct struc = new TStruct("getFavoriteMids_args");
        oprot.WriteStructBegin(struc);
        oprot.WriteFieldStop();
        oprot.WriteStructEnd();
      }
      finally
      {
        oprot.DecrementRecursionDepth();
      }
    }

    public override string ToString() {
      StringBuilder __sb = new StringBuilder("getFavoriteMids_args(");
      __sb.Append(")");
      return __sb.ToString();
    }

  }


  #if !SILVERLIGHT
  [Serializable]
  #endif
  public partial class getFavoriteMids_result : TBase
  {
    private List<string> _success;
    private TalkException _e;

    public List<string> Success
    {
      get
      {
        return _success;
      }
      set
      {
        __isset.success = true;
        this._success = value;
      }
    }

    public TalkException E
    {
      get
      {
        return _e;
      }
      set
      {
        __isset.e = true;
        this._e = value;
      }
    }


    public Isset __isset;
    #if !SILVERLIGHT
    [Serializable]
    #endif
    public struct Isset {
      public bool success;
      public bool e;
    }

    public getFavoriteMids_result() {
    }

    public void Read (TProtocol iprot)
    {
      iprot.IncrementRecursionDepth();
      try
      {
        TField field;
        iprot.ReadStructBegin();
        while (true)
        {
          field = iprot.ReadFieldBegin();
          if (field.Type == TType.Stop) { 
            break;
          }
          switch (field.ID)
          {
            case 0:
              if (field.Type == TType.List) {
                {
                  Success = new List<string>();
                  TList _list128 = iprot.ReadListBegin();
                  for( int _i129 = 0; _i129 < _list128.Count; ++_i129)
                  {
                    string _elem130;
                    _elem130 = iprot.ReadString();
                    Success.Add(_elem130);
                  }
                  iprot.ReadListEnd();
                }
              } else { 
                TProtocolUtil.Skip(iprot, field.Type);
              }
              break;
            case 1:
              if (field.Type == TType.Struct) {
                E = new TalkException();
                E.Read(iprot);
              } else { 
                TProtocolUtil.Skip(iprot, field.Type);
              }
              break;
            default: 
              TProtocolUtil.Skip(iprot, field.Type);
              break;
          }
          iprot.ReadFieldEnd();
        }
        iprot.ReadStructEnd();
      }
      finally
      {
        iprot.DecrementRecursionDepth();
      }
    }

    public void Write(TProtocol oprot) {
      oprot.IncrementRecursionDepth();
      try
      {
        TStruct struc = new TStruct("getFavoriteMids_result");
        oprot.WriteStructBegin(struc);
        TField field = new TField();

        if (this.__isset.success) {
          if (Success != null) {
            field.Name = "Success";
            field.Type = TType.List;
            field.ID = 0;
            oprot.WriteFieldBegin(field);
            {
              oprot.WriteListBegin(new TList(TType.String, Success.Count));
              foreach (string _iter131 in Success)
              {
                oprot.WriteString(_iter131);
              }
              oprot.WriteListEnd();
            }
            oprot.WriteFieldEnd();
          }
        } else if (this.__isset.e) {
          if (E != null) {
            field.Name = "E";
            field.Type = TType.Struct;
            field.ID = 1;
            oprot.WriteFieldBegin(field);
            E.Write(oprot);
            oprot.WriteFieldEnd();
          }
        }
        oprot.WriteFieldStop();
        oprot.WriteStructEnd();
      }
      finally
      {
        oprot.DecrementRecursionDepth();
      }
    }

    public override string ToString() {
      StringBuilder __sb = new StringBuilder("getFavoriteMids_result(");
      bool __first = true;
      if (Success != null && __isset.success) {
        if(!__first) { __sb.Append(", "); }
        __first = false;
        __sb.Append("Success: ");
        __sb.Append(Success);
      }
      if (E != null && __isset.e) {
        if(!__first) { __sb.Append(", "); }
        __first = false;
        __sb.Append("E: ");
        __sb.Append(E== null ? "<null>" : E.ToString());
      }
      __sb.Append(")");
      return __sb.ToString();
    }

  }


  #if !SILVERLIGHT
  [Serializable]
  #endif
  public partial class getHiddenContactMids_args : TBase
  {

    public getHiddenContactMids_args() {
    }

    public void Read (TProtocol iprot)
    {
      iprot.IncrementRecursionDepth();
      try
      {
        TField field;
        iprot.ReadStructBegin();
        while (true)
        {
          field = iprot.ReadFieldBegin();
          if (field.Type == TType.Stop) { 
            break;
          }
          switch (field.ID)
          {
            default: 
              TProtocolUtil.Skip(iprot, field.Type);
              break;
          }
          iprot.ReadFieldEnd();
        }
        iprot.ReadStructEnd();
      }
      finally
      {
        iprot.DecrementRecursionDepth();
      }
    }

    public void Write(TProtocol oprot) {
      oprot.IncrementRecursionDepth();
      try
      {
        TStruct struc = new TStruct("getHiddenContactMids_args");
        oprot.WriteStructBegin(struc);
        oprot.WriteFieldStop();
        oprot.WriteStructEnd();
      }
      finally
      {
        oprot.DecrementRecursionDepth();
      }
    }

    public override string ToString() {
      StringBuilder __sb = new StringBuilder("getHiddenContactMids_args(");
      __sb.Append(")");
      return __sb.ToString();
    }

  }


  #if !SILVERLIGHT
  [Serializable]
  #endif
  public partial class getHiddenContactMids_result : TBase
  {
    private List<string> _success;
    private TalkException _e;

    public List<string> Success
    {
      get
      {
        return _success;
      }
      set
      {
        __isset.success = true;
        this._success = value;
      }
    }

    public TalkException E
    {
      get
      {
        return _e;
      }
      set
      {
        __isset.e = true;
        this._e = value;
      }
    }


    public Isset __isset;
    #if !SILVERLIGHT
    [Serializable]
    #endif
    public struct Isset {
      public bool success;
      public bool e;
    }

    public getHiddenContactMids_result() {
    }

    public void Read (TProtocol iprot)
    {
      iprot.IncrementRecursionDepth();
      try
      {
        TField field;
        iprot.ReadStructBegin();
        while (true)
        {
          field = iprot.ReadFieldBegin();
          if (field.Type == TType.Stop) { 
            break;
          }
          switch (field.ID)
          {
            case 0:
              if (field.Type == TType.List) {
                {
                  Success = new List<string>();
                  TList _list132 = iprot.ReadListBegin();
                  for( int _i133 = 0; _i133 < _list132.Count; ++_i133)
                  {
                    string _elem134;
                    _elem134 = iprot.ReadString();
                    Success.Add(_elem134);
                  }
                  iprot.ReadListEnd();
                }
              } else { 
                TProtocolUtil.Skip(iprot, field.Type);
              }
              break;
            case 1:
              if (field.Type == TType.Struct) {
                E = new TalkException();
                E.Read(iprot);
              } else { 
                TProtocolUtil.Skip(iprot, field.Type);
              }
              break;
            default: 
              TProtocolUtil.Skip(iprot, field.Type);
              break;
          }
          iprot.ReadFieldEnd();
        }
        iprot.ReadStructEnd();
      }
      finally
      {
        iprot.DecrementRecursionDepth();
      }
    }

    public void Write(TProtocol oprot) {
      oprot.IncrementRecursionDepth();
      try
      {
        TStruct struc = new TStruct("getHiddenContactMids_result");
        oprot.WriteStructBegin(struc);
        TField field = new TField();

        if (this.__isset.success) {
          if (Success != null) {
            field.Name = "Success";
            field.Type = TType.List;
            field.ID = 0;
            oprot.WriteFieldBegin(field);
            {
              oprot.WriteListBegin(new TList(TType.String, Success.Count));
              foreach (string _iter135 in Success)
              {
                oprot.WriteString(_iter135);
              }
              oprot.WriteListEnd();
            }
            oprot.WriteFieldEnd();
          }
        } else if (this.__isset.e) {
          if (E != null) {
            field.Name = "E";
            field.Type = TType.Struct;
            field.ID = 1;
            oprot.WriteFieldBegin(field);
            E.Write(oprot);
            oprot.WriteFieldEnd();
          }
        }
        oprot.WriteFieldStop();
        oprot.WriteStructEnd();
      }
      finally
      {
        oprot.DecrementRecursionDepth();
      }
    }

    public override string ToString() {
      StringBuilder __sb = new StringBuilder("getHiddenContactMids_result(");
      bool __first = true;
      if (Success != null && __isset.success) {
        if(!__first) { __sb.Append(", "); }
        __first = false;
        __sb.Append("Success: ");
        __sb.Append(Success);
      }
      if (E != null && __isset.e) {
        if(!__first) { __sb.Append(", "); }
        __first = false;
        __sb.Append("E: ");
        __sb.Append(E== null ? "<null>" : E.ToString());
      }
      __sb.Append(")");
      return __sb.ToString();
    }

  }


  #if !SILVERLIGHT
  [Serializable]
  #endif
  public partial class getLastOpRevision_args : TBase
  {

    public getLastOpRevision_args() {
    }

    public void Read (TProtocol iprot)
    {
      iprot.IncrementRecursionDepth();
      try
      {
        TField field;
        iprot.ReadStructBegin();
        while (true)
        {
          field = iprot.ReadFieldBegin();
          if (field.Type == TType.Stop) { 
            break;
          }
          switch (field.ID)
          {
            default: 
              TProtocolUtil.Skip(iprot, field.Type);
              break;
          }
          iprot.ReadFieldEnd();
        }
        iprot.ReadStructEnd();
      }
      finally
      {
        iprot.DecrementRecursionDepth();
      }
    }

    public void Write(TProtocol oprot) {
      oprot.IncrementRecursionDepth();
      try
      {
        TStruct struc = new TStruct("getLastOpRevision_args");
        oprot.WriteStructBegin(struc);
        oprot.WriteFieldStop();
        oprot.WriteStructEnd();
      }
      finally
      {
        oprot.DecrementRecursionDepth();
      }
    }

    public override string ToString() {
      StringBuilder __sb = new StringBuilder("getLastOpRevision_args(");
      __sb.Append(")");
      return __sb.ToString();
    }

  }


  #if !SILVERLIGHT
  [Serializable]
  #endif
  public partial class getLastOpRevision_result : TBase
  {
    private long _success;
    private TalkException _e;

    public long Success
    {
      get
      {
        return _success;
      }
      set
      {
        __isset.success = true;
        this._success = value;
      }
    }

    public TalkException E
    {
      get
      {
        return _e;
      }
      set
      {
        __isset.e = true;
        this._e = value;
      }
    }


    public Isset __isset;
    #if !SILVERLIGHT
    [Serializable]
    #endif
    public struct Isset {
      public bool success;
      public bool e;
    }

    public getLastOpRevision_result() {
    }

    public void Read (TProtocol iprot)
    {
      iprot.IncrementRecursionDepth();
      try
      {
        TField field;
        iprot.ReadStructBegin();
        while (true)
        {
          field = iprot.ReadFieldBegin();
          if (field.Type == TType.Stop) { 
            break;
          }
          switch (field.ID)
          {
            case 0:
              if (field.Type == TType.I64) {
                Success = iprot.ReadI64();
              } else { 
                TProtocolUtil.Skip(iprot, field.Type);
              }
              break;
            case 1:
              if (field.Type == TType.Struct) {
                E = new TalkException();
                E.Read(iprot);
              } else { 
                TProtocolUtil.Skip(iprot, field.Type);
              }
              break;
            default: 
              TProtocolUtil.Skip(iprot, field.Type);
              break;
          }
          iprot.ReadFieldEnd();
        }
        iprot.ReadStructEnd();
      }
      finally
      {
        iprot.DecrementRecursionDepth();
      }
    }

    public void Write(TProtocol oprot) {
      oprot.IncrementRecursionDepth();
      try
      {
        TStruct struc = new TStruct("getLastOpRevision_result");
        oprot.WriteStructBegin(struc);
        TField field = new TField();

        if (this.__isset.success) {
          field.Name = "Success";
          field.Type = TType.I64;
          field.ID = 0;
          oprot.WriteFieldBegin(field);
          oprot.WriteI64(Success);
          oprot.WriteFieldEnd();
        } else if (this.__isset.e) {
          if (E != null) {
            field.Name = "E";
            field.Type = TType.Struct;
            field.ID = 1;
            oprot.WriteFieldBegin(field);
            E.Write(oprot);
            oprot.WriteFieldEnd();
          }
        }
        oprot.WriteFieldStop();
        oprot.WriteStructEnd();
      }
      finally
      {
        oprot.DecrementRecursionDepth();
      }
    }

    public override string ToString() {
      StringBuilder __sb = new StringBuilder("getLastOpRevision_result(");
      bool __first = true;
      if (__isset.success) {
        if(!__first) { __sb.Append(", "); }
        __first = false;
        __sb.Append("Success: ");
        __sb.Append(Success);
      }
      if (E != null && __isset.e) {
        if(!__first) { __sb.Append(", "); }
        __first = false;
        __sb.Append("E: ");
        __sb.Append(E== null ? "<null>" : E.ToString());
      }
      __sb.Append(")");
      return __sb.ToString();
    }

  }


  #if !SILVERLIGHT
  [Serializable]
  #endif
  public partial class getRoom_args : TBase
  {
    private string _roomId;

    public string RoomId
    {
      get
      {
        return _roomId;
      }
      set
      {
        __isset.roomId = true;
        this._roomId = value;
      }
    }


    public Isset __isset;
    #if !SILVERLIGHT
    [Serializable]
    #endif
    public struct Isset {
      public bool roomId;
    }

    public getRoom_args() {
    }

    public void Read (TProtocol iprot)
    {
      iprot.IncrementRecursionDepth();
      try
      {
        TField field;
        iprot.ReadStructBegin();
        while (true)
        {
          field = iprot.ReadFieldBegin();
          if (field.Type == TType.Stop) { 
            break;
          }
          switch (field.ID)
          {
            case 2:
              if (field.Type == TType.String) {
                RoomId = iprot.ReadString();
              } else { 
                TProtocolUtil.Skip(iprot, field.Type);
              }
              break;
            default: 
              TProtocolUtil.Skip(iprot, field.Type);
              break;
          }
          iprot.ReadFieldEnd();
        }
        iprot.ReadStructEnd();
      }
      finally
      {
        iprot.DecrementRecursionDepth();
      }
    }

    public void Write(TProtocol oprot) {
      oprot.IncrementRecursionDepth();
      try
      {
        TStruct struc = new TStruct("getRoom_args");
        oprot.WriteStructBegin(struc);
        TField field = new TField();
        if (RoomId != null && __isset.roomId) {
          field.Name = "roomId";
          field.Type = TType.String;
          field.ID = 2;
          oprot.WriteFieldBegin(field);
          oprot.WriteString(RoomId);
          oprot.WriteFieldEnd();
        }
        oprot.WriteFieldStop();
        oprot.WriteStructEnd();
      }
      finally
      {
        oprot.DecrementRecursionDepth();
      }
    }

    public override string ToString() {
      StringBuilder __sb = new StringBuilder("getRoom_args(");
      bool __first = true;
      if (RoomId != null && __isset.roomId) {
        if(!__first) { __sb.Append(", "); }
        __first = false;
        __sb.Append("RoomId: ");
        __sb.Append(RoomId);
      }
      __sb.Append(")");
      return __sb.ToString();
    }

  }


  #if !SILVERLIGHT
  [Serializable]
  #endif
  public partial class getRoom_result : TBase
  {
    private Room _success;
    private TalkException _e;

    public Room Success
    {
      get
      {
        return _success;
      }
      set
      {
        __isset.success = true;
        this._success = value;
      }
    }

    public TalkException E
    {
      get
      {
        return _e;
      }
      set
      {
        __isset.e = true;
        this._e = value;
      }
    }


    public Isset __isset;
    #if !SILVERLIGHT
    [Serializable]
    #endif
    public struct Isset {
      public bool success;
      public bool e;
    }

    public getRoom_result() {
    }

    public void Read (TProtocol iprot)
    {
      iprot.IncrementRecursionDepth();
      try
      {
        TField field;
        iprot.ReadStructBegin();
        while (true)
        {
          field = iprot.ReadFieldBegin();
          if (field.Type == TType.Stop) { 
            break;
          }
          switch (field.ID)
          {
            case 0:
              if (field.Type == TType.Struct) {
                Success = new Room();
                Success.Read(iprot);
              } else { 
                TProtocolUtil.Skip(iprot, field.Type);
              }
              break;
            case 1:
              if (field.Type == TType.Struct) {
                E = new TalkException();
                E.Read(iprot);
              } else { 
                TProtocolUtil.Skip(iprot, field.Type);
              }
              break;
            default: 
              TProtocolUtil.Skip(iprot, field.Type);
              break;
          }
          iprot.ReadFieldEnd();
        }
        iprot.ReadStructEnd();
      }
      finally
      {
        iprot.DecrementRecursionDepth();
      }
    }

    public void Write(TProtocol oprot) {
      oprot.IncrementRecursionDepth();
      try
      {
        TStruct struc = new TStruct("getRoom_result");
        oprot.WriteStructBegin(struc);
        TField field = new TField();

        if (this.__isset.success) {
          if (Success != null) {
            field.Name = "Success";
            field.Type = TType.Struct;
            field.ID = 0;
            oprot.WriteFieldBegin(field);
            Success.Write(oprot);
            oprot.WriteFieldEnd();
          }
        } else if (this.__isset.e) {
          if (E != null) {
            field.Name = "E";
            field.Type = TType.Struct;
            field.ID = 1;
            oprot.WriteFieldBegin(field);
            E.Write(oprot);
            oprot.WriteFieldEnd();
          }
        }
        oprot.WriteFieldStop();
        oprot.WriteStructEnd();
      }
      finally
      {
        oprot.DecrementRecursionDepth();
      }
    }

    public override string ToString() {
      StringBuilder __sb = new StringBuilder("getRoom_result(");
      bool __first = true;
      if (Success != null && __isset.success) {
        if(!__first) { __sb.Append(", "); }
        __first = false;
        __sb.Append("Success: ");
        __sb.Append(Success== null ? "<null>" : Success.ToString());
      }
      if (E != null && __isset.e) {
        if(!__first) { __sb.Append(", "); }
        __first = false;
        __sb.Append("E: ");
        __sb.Append(E== null ? "<null>" : E.ToString());
      }
      __sb.Append(")");
      return __sb.ToString();
    }

  }


  #if !SILVERLIGHT
  [Serializable]
  #endif
  public partial class getRSAKeyInfo_args : TBase
  {
    private IdentityProvider _provider;

    /// <summary>
    /// 
    /// <seealso cref="IdentityProvider"/>
    /// </summary>
    public IdentityProvider Provider
    {
      get
      {
        return _provider;
      }
      set
      {
        __isset.provider = true;
        this._provider = value;
      }
    }


    public Isset __isset;
    #if !SILVERLIGHT
    [Serializable]
    #endif
    public struct Isset {
      public bool provider;
    }

    public getRSAKeyInfo_args() {
    }

    public void Read (TProtocol iprot)
    {
      iprot.IncrementRecursionDepth();
      try
      {
        TField field;
        iprot.ReadStructBegin();
        while (true)
        {
          field = iprot.ReadFieldBegin();
          if (field.Type == TType.Stop) { 
            break;
          }
          switch (field.ID)
          {
            case 2:
              if (field.Type == TType.I32) {
                Provider = (IdentityProvider)iprot.ReadI32();
              } else { 
                TProtocolUtil.Skip(iprot, field.Type);
              }
              break;
            default: 
              TProtocolUtil.Skip(iprot, field.Type);
              break;
          }
          iprot.ReadFieldEnd();
        }
        iprot.ReadStructEnd();
      }
      finally
      {
        iprot.DecrementRecursionDepth();
      }
    }

    public void Write(TProtocol oprot) {
      oprot.IncrementRecursionDepth();
      try
      {
        TStruct struc = new TStruct("getRSAKeyInfo_args");
        oprot.WriteStructBegin(struc);
        TField field = new TField();
        if (__isset.provider) {
          field.Name = "provider";
          field.Type = TType.I32;
          field.ID = 2;
          oprot.WriteFieldBegin(field);
          oprot.WriteI32((int)Provider);
          oprot.WriteFieldEnd();
        }
        oprot.WriteFieldStop();
        oprot.WriteStructEnd();
      }
      finally
      {
        oprot.DecrementRecursionDepth();
      }
    }

    public override string ToString() {
      StringBuilder __sb = new StringBuilder("getRSAKeyInfo_args(");
      bool __first = true;
      if (__isset.provider) {
        if(!__first) { __sb.Append(", "); }
        __first = false;
        __sb.Append("Provider: ");
        __sb.Append(Provider);
      }
      __sb.Append(")");
      return __sb.ToString();
    }

  }


  #if !SILVERLIGHT
  [Serializable]
  #endif
  public partial class getRSAKeyInfo_result : TBase
  {
    private RSAKey _success;
    private TalkException _e;

    public RSAKey Success
    {
      get
      {
        return _success;
      }
      set
      {
        __isset.success = true;
        this._success = value;
      }
    }

    public TalkException E
    {
      get
      {
        return _e;
      }
      set
      {
        __isset.e = true;
        this._e = value;
      }
    }


    public Isset __isset;
    #if !SILVERLIGHT
    [Serializable]
    #endif
    public struct Isset {
      public bool success;
      public bool e;
    }

    public getRSAKeyInfo_result() {
    }

    public void Read (TProtocol iprot)
    {
      iprot.IncrementRecursionDepth();
      try
      {
        TField field;
        iprot.ReadStructBegin();
        while (true)
        {
          field = iprot.ReadFieldBegin();
          if (field.Type == TType.Stop) { 
            break;
          }
          switch (field.ID)
          {
            case 0:
              if (field.Type == TType.Struct) {
                Success = new RSAKey();
                Success.Read(iprot);
              } else { 
                TProtocolUtil.Skip(iprot, field.Type);
              }
              break;
            case 1:
              if (field.Type == TType.Struct) {
                E = new TalkException();
                E.Read(iprot);
              } else { 
                TProtocolUtil.Skip(iprot, field.Type);
              }
              break;
            default: 
              TProtocolUtil.Skip(iprot, field.Type);
              break;
          }
          iprot.ReadFieldEnd();
        }
        iprot.ReadStructEnd();
      }
      finally
      {
        iprot.DecrementRecursionDepth();
      }
    }

    public void Write(TProtocol oprot) {
      oprot.IncrementRecursionDepth();
      try
      {
        TStruct struc = new TStruct("getRSAKeyInfo_result");
        oprot.WriteStructBegin(struc);
        TField field = new TField();

        if (this.__isset.success) {
          if (Success != null) {
            field.Name = "Success";
            field.Type = TType.Struct;
            field.ID = 0;
            oprot.WriteFieldBegin(field);
            Success.Write(oprot);
            oprot.WriteFieldEnd();
          }
        } else if (this.__isset.e) {
          if (E != null) {
            field.Name = "E";
            field.Type = TType.Struct;
            field.ID = 1;
            oprot.WriteFieldBegin(field);
            E.Write(oprot);
            oprot.WriteFieldEnd();
          }
        }
        oprot.WriteFieldStop();
        oprot.WriteStructEnd();
      }
      finally
      {
        oprot.DecrementRecursionDepth();
      }
    }

    public override string ToString() {
      StringBuilder __sb = new StringBuilder("getRSAKeyInfo_result(");
      bool __first = true;
      if (Success != null && __isset.success) {
        if(!__first) { __sb.Append(", "); }
        __first = false;
        __sb.Append("Success: ");
        __sb.Append(Success== null ? "<null>" : Success.ToString());
      }
      if (E != null && __isset.e) {
        if(!__first) { __sb.Append(", "); }
        __first = false;
        __sb.Append("E: ");
        __sb.Append(E== null ? "<null>" : E.ToString());
      }
      __sb.Append(")");
      return __sb.ToString();
    }

  }


  #if !SILVERLIGHT
  [Serializable]
  #endif
  public partial class getServerTime_args : TBase
  {

    public getServerTime_args() {
    }

    public void Read (TProtocol iprot)
    {
      iprot.IncrementRecursionDepth();
      try
      {
        TField field;
        iprot.ReadStructBegin();
        while (true)
        {
          field = iprot.ReadFieldBegin();
          if (field.Type == TType.Stop) { 
            break;
          }
          switch (field.ID)
          {
            default: 
              TProtocolUtil.Skip(iprot, field.Type);
              break;
          }
          iprot.ReadFieldEnd();
        }
        iprot.ReadStructEnd();
      }
      finally
      {
        iprot.DecrementRecursionDepth();
      }
    }

    public void Write(TProtocol oprot) {
      oprot.IncrementRecursionDepth();
      try
      {
        TStruct struc = new TStruct("getServerTime_args");
        oprot.WriteStructBegin(struc);
        oprot.WriteFieldStop();
        oprot.WriteStructEnd();
      }
      finally
      {
        oprot.DecrementRecursionDepth();
      }
    }

    public override string ToString() {
      StringBuilder __sb = new StringBuilder("getServerTime_args(");
      __sb.Append(")");
      return __sb.ToString();
    }

  }


  #if !SILVERLIGHT
  [Serializable]
  #endif
  public partial class getServerTime_result : TBase
  {
    private long _success;
    private TalkException _e;

    public long Success
    {
      get
      {
        return _success;
      }
      set
      {
        __isset.success = true;
        this._success = value;
      }
    }

    public TalkException E
    {
      get
      {
        return _e;
      }
      set
      {
        __isset.e = true;
        this._e = value;
      }
    }


    public Isset __isset;
    #if !SILVERLIGHT
    [Serializable]
    #endif
    public struct Isset {
      public bool success;
      public bool e;
    }

    public getServerTime_result() {
    }

    public void Read (TProtocol iprot)
    {
      iprot.IncrementRecursionDepth();
      try
      {
        TField field;
        iprot.ReadStructBegin();
        while (true)
        {
          field = iprot.ReadFieldBegin();
          if (field.Type == TType.Stop) { 
            break;
          }
          switch (field.ID)
          {
            case 0:
              if (field.Type == TType.I64) {
                Success = iprot.ReadI64();
              } else { 
                TProtocolUtil.Skip(iprot, field.Type);
              }
              break;
            case 1:
              if (field.Type == TType.Struct) {
                E = new TalkException();
                E.Read(iprot);
              } else { 
                TProtocolUtil.Skip(iprot, field.Type);
              }
              break;
            default: 
              TProtocolUtil.Skip(iprot, field.Type);
              break;
          }
          iprot.ReadFieldEnd();
        }
        iprot.ReadStructEnd();
      }
      finally
      {
        iprot.DecrementRecursionDepth();
      }
    }

    public void Write(TProtocol oprot) {
      oprot.IncrementRecursionDepth();
      try
      {
        TStruct struc = new TStruct("getServerTime_result");
        oprot.WriteStructBegin(struc);
        TField field = new TField();

        if (this.__isset.success) {
          field.Name = "Success";
          field.Type = TType.I64;
          field.ID = 0;
          oprot.WriteFieldBegin(field);
          oprot.WriteI64(Success);
          oprot.WriteFieldEnd();
        } else if (this.__isset.e) {
          if (E != null) {
            field.Name = "E";
            field.Type = TType.Struct;
            field.ID = 1;
            oprot.WriteFieldBegin(field);
            E.Write(oprot);
            oprot.WriteFieldEnd();
          }
        }
        oprot.WriteFieldStop();
        oprot.WriteStructEnd();
      }
      finally
      {
        oprot.DecrementRecursionDepth();
      }
    }

    public override string ToString() {
      StringBuilder __sb = new StringBuilder("getServerTime_result(");
      bool __first = true;
      if (__isset.success) {
        if(!__first) { __sb.Append(", "); }
        __first = false;
        __sb.Append("Success: ");
        __sb.Append(Success);
      }
      if (E != null && __isset.e) {
        if(!__first) { __sb.Append(", "); }
        __first = false;
        __sb.Append("E: ");
        __sb.Append(E== null ? "<null>" : E.ToString());
      }
      __sb.Append(")");
      return __sb.ToString();
    }

  }


  #if !SILVERLIGHT
  [Serializable]
  #endif
  public partial class getSessions_args : TBase
  {

    public getSessions_args() {
    }

    public void Read (TProtocol iprot)
    {
      iprot.IncrementRecursionDepth();
      try
      {
        TField field;
        iprot.ReadStructBegin();
        while (true)
        {
          field = iprot.ReadFieldBegin();
          if (field.Type == TType.Stop) { 
            break;
          }
          switch (field.ID)
          {
            default: 
              TProtocolUtil.Skip(iprot, field.Type);
              break;
          }
          iprot.ReadFieldEnd();
        }
        iprot.ReadStructEnd();
      }
      finally
      {
        iprot.DecrementRecursionDepth();
      }
    }

    public void Write(TProtocol oprot) {
      oprot.IncrementRecursionDepth();
      try
      {
        TStruct struc = new TStruct("getSessions_args");
        oprot.WriteStructBegin(struc);
        oprot.WriteFieldStop();
        oprot.WriteStructEnd();
      }
      finally
      {
        oprot.DecrementRecursionDepth();
      }
    }

    public override string ToString() {
      StringBuilder __sb = new StringBuilder("getSessions_args(");
      __sb.Append(")");
      return __sb.ToString();
    }

  }


  #if !SILVERLIGHT
  [Serializable]
  #endif
  public partial class getSessions_result : TBase
  {
    private List<LoginSession> _success;
    private TalkException _e;

    public List<LoginSession> Success
    {
      get
      {
        return _success;
      }
      set
      {
        __isset.success = true;
        this._success = value;
      }
    }

    public TalkException E
    {
      get
      {
        return _e;
      }
      set
      {
        __isset.e = true;
        this._e = value;
      }
    }


    public Isset __isset;
    #if !SILVERLIGHT
    [Serializable]
    #endif
    public struct Isset {
      public bool success;
      public bool e;
    }

    public getSessions_result() {
    }

    public void Read (TProtocol iprot)
    {
      iprot.IncrementRecursionDepth();
      try
      {
        TField field;
        iprot.ReadStructBegin();
        while (true)
        {
          field = iprot.ReadFieldBegin();
          if (field.Type == TType.Stop) { 
            break;
          }
          switch (field.ID)
          {
            case 0:
              if (field.Type == TType.List) {
                {
                  Success = new List<LoginSession>();
                  TList _list136 = iprot.ReadListBegin();
                  for( int _i137 = 0; _i137 < _list136.Count; ++_i137)
                  {
                    LoginSession _elem138;
                    _elem138 = new LoginSession();
                    _elem138.Read(iprot);
                    Success.Add(_elem138);
                  }
                  iprot.ReadListEnd();
                }
              } else { 
                TProtocolUtil.Skip(iprot, field.Type);
              }
              break;
            case 1:
              if (field.Type == TType.Struct) {
                E = new TalkException();
                E.Read(iprot);
              } else { 
                TProtocolUtil.Skip(iprot, field.Type);
              }
              break;
            default: 
              TProtocolUtil.Skip(iprot, field.Type);
              break;
          }
          iprot.ReadFieldEnd();
        }
        iprot.ReadStructEnd();
      }
      finally
      {
        iprot.DecrementRecursionDepth();
      }
    }

    public void Write(TProtocol oprot) {
      oprot.IncrementRecursionDepth();
      try
      {
        TStruct struc = new TStruct("getSessions_result");
        oprot.WriteStructBegin(struc);
        TField field = new TField();

        if (this.__isset.success) {
          if (Success != null) {
            field.Name = "Success";
            field.Type = TType.List;
            field.ID = 0;
            oprot.WriteFieldBegin(field);
            {
              oprot.WriteListBegin(new TList(TType.Struct, Success.Count));
              foreach (LoginSession _iter139 in Success)
              {
                _iter139.Write(oprot);
              }
              oprot.WriteListEnd();
            }
            oprot.WriteFieldEnd();
          }
        } else if (this.__isset.e) {
          if (E != null) {
            field.Name = "E";
            field.Type = TType.Struct;
            field.ID = 1;
            oprot.WriteFieldBegin(field);
            E.Write(oprot);
            oprot.WriteFieldEnd();
          }
        }
        oprot.WriteFieldStop();
        oprot.WriteStructEnd();
      }
      finally
      {
        oprot.DecrementRecursionDepth();
      }
    }

    public override string ToString() {
      StringBuilder __sb = new StringBuilder("getSessions_result(");
      bool __first = true;
      if (Success != null && __isset.success) {
        if(!__first) { __sb.Append(", "); }
        __first = false;
        __sb.Append("Success: ");
        __sb.Append(Success);
      }
      if (E != null && __isset.e) {
        if(!__first) { __sb.Append(", "); }
        __first = false;
        __sb.Append("E: ");
        __sb.Append(E== null ? "<null>" : E.ToString());
      }
      __sb.Append(")");
      return __sb.ToString();
    }

  }


  #if !SILVERLIGHT
  [Serializable]
  #endif
  public partial class leaveGroup_args : TBase
  {
    private int _reqSeq;
    private string _groupId;

    public int ReqSeq
    {
      get
      {
        return _reqSeq;
      }
      set
      {
        __isset.reqSeq = true;
        this._reqSeq = value;
      }
    }

    public string GroupId
    {
      get
      {
        return _groupId;
      }
      set
      {
        __isset.groupId = true;
        this._groupId = value;
      }
    }


    public Isset __isset;
    #if !SILVERLIGHT
    [Serializable]
    #endif
    public struct Isset {
      public bool reqSeq;
      public bool groupId;
    }

    public leaveGroup_args() {
    }

    public void Read (TProtocol iprot)
    {
      iprot.IncrementRecursionDepth();
      try
      {
        TField field;
        iprot.ReadStructBegin();
        while (true)
        {
          field = iprot.ReadFieldBegin();
          if (field.Type == TType.Stop) { 
            break;
          }
          switch (field.ID)
          {
            case 1:
              if (field.Type == TType.I32) {
                ReqSeq = iprot.ReadI32();
              } else { 
                TProtocolUtil.Skip(iprot, field.Type);
              }
              break;
            case 2:
              if (field.Type == TType.String) {
                GroupId = iprot.ReadString();
              } else { 
                TProtocolUtil.Skip(iprot, field.Type);
              }
              break;
            default: 
              TProtocolUtil.Skip(iprot, field.Type);
              break;
          }
          iprot.ReadFieldEnd();
        }
        iprot.ReadStructEnd();
      }
      finally
      {
        iprot.DecrementRecursionDepth();
      }
    }

    public void Write(TProtocol oprot) {
      oprot.IncrementRecursionDepth();
      try
      {
        TStruct struc = new TStruct("leaveGroup_args");
        oprot.WriteStructBegin(struc);
        TField field = new TField();
        if (__isset.reqSeq) {
          field.Name = "reqSeq";
          field.Type = TType.I32;
          field.ID = 1;
          oprot.WriteFieldBegin(field);
          oprot.WriteI32(ReqSeq);
          oprot.WriteFieldEnd();
        }
        if (GroupId != null && __isset.groupId) {
          field.Name = "groupId";
          field.Type = TType.String;
          field.ID = 2;
          oprot.WriteFieldBegin(field);
          oprot.WriteString(GroupId);
          oprot.WriteFieldEnd();
        }
        oprot.WriteFieldStop();
        oprot.WriteStructEnd();
      }
      finally
      {
        oprot.DecrementRecursionDepth();
      }
    }

    public override string ToString() {
      StringBuilder __sb = new StringBuilder("leaveGroup_args(");
      bool __first = true;
      if (__isset.reqSeq) {
        if(!__first) { __sb.Append(", "); }
        __first = false;
        __sb.Append("ReqSeq: ");
        __sb.Append(ReqSeq);
      }
      if (GroupId != null && __isset.groupId) {
        if(!__first) { __sb.Append(", "); }
        __first = false;
        __sb.Append("GroupId: ");
        __sb.Append(GroupId);
      }
      __sb.Append(")");
      return __sb.ToString();
    }

  }


  #if !SILVERLIGHT
  [Serializable]
  #endif
  public partial class leaveGroup_result : TBase
  {
    private TalkException _e;

    public TalkException E
    {
      get
      {
        return _e;
      }
      set
      {
        __isset.e = true;
        this._e = value;
      }
    }


    public Isset __isset;
    #if !SILVERLIGHT
    [Serializable]
    #endif
    public struct Isset {
      public bool e;
    }

    public leaveGroup_result() {
    }

    public void Read (TProtocol iprot)
    {
      iprot.IncrementRecursionDepth();
      try
      {
        TField field;
        iprot.ReadStructBegin();
        while (true)
        {
          field = iprot.ReadFieldBegin();
          if (field.Type == TType.Stop) { 
            break;
          }
          switch (field.ID)
          {
            case 1:
              if (field.Type == TType.Struct) {
                E = new TalkException();
                E.Read(iprot);
              } else { 
                TProtocolUtil.Skip(iprot, field.Type);
              }
              break;
            default: 
              TProtocolUtil.Skip(iprot, field.Type);
              break;
          }
          iprot.ReadFieldEnd();
        }
        iprot.ReadStructEnd();
      }
      finally
      {
        iprot.DecrementRecursionDepth();
      }
    }

    public void Write(TProtocol oprot) {
      oprot.IncrementRecursionDepth();
      try
      {
        TStruct struc = new TStruct("leaveGroup_result");
        oprot.WriteStructBegin(struc);
        TField field = new TField();

        if (this.__isset.e) {
          if (E != null) {
            field.Name = "E";
            field.Type = TType.Struct;
            field.ID = 1;
            oprot.WriteFieldBegin(field);
            E.Write(oprot);
            oprot.WriteFieldEnd();
          }
        }
        oprot.WriteFieldStop();
        oprot.WriteStructEnd();
      }
      finally
      {
        oprot.DecrementRecursionDepth();
      }
    }

    public override string ToString() {
      StringBuilder __sb = new StringBuilder("leaveGroup_result(");
      bool __first = true;
      if (E != null && __isset.e) {
        if(!__first) { __sb.Append(", "); }
        __first = false;
        __sb.Append("E: ");
        __sb.Append(E== null ? "<null>" : E.ToString());
      }
      __sb.Append(")");
      return __sb.ToString();
    }

  }


  #if !SILVERLIGHT
  [Serializable]
  #endif
  public partial class loginZ_args : TBase
  {
    private loginRequest _LoginRequest;

    public loginRequest LoginRequest
    {
      get
      {
        return _LoginRequest;
      }
      set
      {
        __isset.LoginRequest = true;
        this._LoginRequest = value;
      }
    }


    public Isset __isset;
    #if !SILVERLIGHT
    [Serializable]
    #endif
    public struct Isset {
      public bool LoginRequest;
    }

    public loginZ_args() {
    }

    public void Read (TProtocol iprot)
    {
      iprot.IncrementRecursionDepth();
      try
      {
        TField field;
        iprot.ReadStructBegin();
        while (true)
        {
          field = iprot.ReadFieldBegin();
          if (field.Type == TType.Stop) { 
            break;
          }
          switch (field.ID)
          {
            case 2:
              if (field.Type == TType.Struct) {
                LoginRequest = new loginRequest();
                LoginRequest.Read(iprot);
              } else { 
                TProtocolUtil.Skip(iprot, field.Type);
              }
              break;
            default: 
              TProtocolUtil.Skip(iprot, field.Type);
              break;
          }
          iprot.ReadFieldEnd();
        }
        iprot.ReadStructEnd();
      }
      finally
      {
        iprot.DecrementRecursionDepth();
      }
    }

    public void Write(TProtocol oprot) {
      oprot.IncrementRecursionDepth();
      try
      {
        TStruct struc = new TStruct("loginZ_args");
        oprot.WriteStructBegin(struc);
        TField field = new TField();
        if (LoginRequest != null && __isset.LoginRequest) {
          field.Name = "LoginRequest";
          field.Type = TType.Struct;
          field.ID = 2;
          oprot.WriteFieldBegin(field);
          LoginRequest.Write(oprot);
          oprot.WriteFieldEnd();
        }
        oprot.WriteFieldStop();
        oprot.WriteStructEnd();
      }
      finally
      {
        oprot.DecrementRecursionDepth();
      }
    }

    public override string ToString() {
      StringBuilder __sb = new StringBuilder("loginZ_args(");
      bool __first = true;
      if (LoginRequest != null && __isset.LoginRequest) {
        if(!__first) { __sb.Append(", "); }
        __first = false;
        __sb.Append("LoginRequest: ");
        __sb.Append(LoginRequest== null ? "<null>" : LoginRequest.ToString());
      }
      __sb.Append(")");
      return __sb.ToString();
    }

  }


  #if !SILVERLIGHT
  [Serializable]
  #endif
  public partial class loginZ_result : TBase
  {
    private LoginResult _success;
    private TalkException _e;

    public LoginResult Success
    {
      get
      {
        return _success;
      }
      set
      {
        __isset.success = true;
        this._success = value;
      }
    }

    public TalkException E
    {
      get
      {
        return _e;
      }
      set
      {
        __isset.e = true;
        this._e = value;
      }
    }


    public Isset __isset;
    #if !SILVERLIGHT
    [Serializable]
    #endif
    public struct Isset {
      public bool success;
      public bool e;
    }

    public loginZ_result() {
    }

    public void Read (TProtocol iprot)
    {
      iprot.IncrementRecursionDepth();
      try
      {
        TField field;
        iprot.ReadStructBegin();
        while (true)
        {
          field = iprot.ReadFieldBegin();
          if (field.Type == TType.Stop) { 
            break;
          }
          switch (field.ID)
          {
            case 0:
              if (field.Type == TType.Struct) {
                Success = new LoginResult();
                Success.Read(iprot);
              } else { 
                TProtocolUtil.Skip(iprot, field.Type);
              }
              break;
            case 1:
              if (field.Type == TType.Struct) {
                E = new TalkException();
                E.Read(iprot);
              } else { 
                TProtocolUtil.Skip(iprot, field.Type);
              }
              break;
            default: 
              TProtocolUtil.Skip(iprot, field.Type);
              break;
          }
          iprot.ReadFieldEnd();
        }
        iprot.ReadStructEnd();
      }
      finally
      {
        iprot.DecrementRecursionDepth();
      }
    }

    public void Write(TProtocol oprot) {
      oprot.IncrementRecursionDepth();
      try
      {
        TStruct struc = new TStruct("loginZ_result");
        oprot.WriteStructBegin(struc);
        TField field = new TField();

        if (this.__isset.success) {
          if (Success != null) {
            field.Name = "Success";
            field.Type = TType.Struct;
            field.ID = 0;
            oprot.WriteFieldBegin(field);
            Success.Write(oprot);
            oprot.WriteFieldEnd();
          }
        } else if (this.__isset.e) {
          if (E != null) {
            field.Name = "E";
            field.Type = TType.Struct;
            field.ID = 1;
            oprot.WriteFieldBegin(field);
            E.Write(oprot);
            oprot.WriteFieldEnd();
          }
        }
        oprot.WriteFieldStop();
        oprot.WriteStructEnd();
      }
      finally
      {
        oprot.DecrementRecursionDepth();
      }
    }

    public override string ToString() {
      StringBuilder __sb = new StringBuilder("loginZ_result(");
      bool __first = true;
      if (Success != null && __isset.success) {
        if(!__first) { __sb.Append(", "); }
        __first = false;
        __sb.Append("Success: ");
        __sb.Append(Success== null ? "<null>" : Success.ToString());
      }
      if (E != null && __isset.e) {
        if(!__first) { __sb.Append(", "); }
        __first = false;
        __sb.Append("E: ");
        __sb.Append(E== null ? "<null>" : E.ToString());
      }
      __sb.Append(")");
      return __sb.ToString();
    }

  }


  #if !SILVERLIGHT
  [Serializable]
  #endif
  public partial class logout_args : TBase
  {

    public logout_args() {
    }

    public void Read (TProtocol iprot)
    {
      iprot.IncrementRecursionDepth();
      try
      {
        TField field;
        iprot.ReadStructBegin();
        while (true)
        {
          field = iprot.ReadFieldBegin();
          if (field.Type == TType.Stop) { 
            break;
          }
          switch (field.ID)
          {
            default: 
              TProtocolUtil.Skip(iprot, field.Type);
              break;
          }
          iprot.ReadFieldEnd();
        }
        iprot.ReadStructEnd();
      }
      finally
      {
        iprot.DecrementRecursionDepth();
      }
    }

    public void Write(TProtocol oprot) {
      oprot.IncrementRecursionDepth();
      try
      {
        TStruct struc = new TStruct("logout_args");
        oprot.WriteStructBegin(struc);
        oprot.WriteFieldStop();
        oprot.WriteStructEnd();
      }
      finally
      {
        oprot.DecrementRecursionDepth();
      }
    }

    public override string ToString() {
      StringBuilder __sb = new StringBuilder("logout_args(");
      __sb.Append(")");
      return __sb.ToString();
    }

  }


  #if !SILVERLIGHT
  [Serializable]
  #endif
  public partial class logout_result : TBase
  {
    private TalkException _e;

    public TalkException E
    {
      get
      {
        return _e;
      }
      set
      {
        __isset.e = true;
        this._e = value;
      }
    }


    public Isset __isset;
    #if !SILVERLIGHT
    [Serializable]
    #endif
    public struct Isset {
      public bool e;
    }

    public logout_result() {
    }

    public void Read (TProtocol iprot)
    {
      iprot.IncrementRecursionDepth();
      try
      {
        TField field;
        iprot.ReadStructBegin();
        while (true)
        {
          field = iprot.ReadFieldBegin();
          if (field.Type == TType.Stop) { 
            break;
          }
          switch (field.ID)
          {
            case 1:
              if (field.Type == TType.Struct) {
                E = new TalkException();
                E.Read(iprot);
              } else { 
                TProtocolUtil.Skip(iprot, field.Type);
              }
              break;
            default: 
              TProtocolUtil.Skip(iprot, field.Type);
              break;
          }
          iprot.ReadFieldEnd();
        }
        iprot.ReadStructEnd();
      }
      finally
      {
        iprot.DecrementRecursionDepth();
      }
    }

    public void Write(TProtocol oprot) {
      oprot.IncrementRecursionDepth();
      try
      {
        TStruct struc = new TStruct("logout_result");
        oprot.WriteStructBegin(struc);
        TField field = new TField();

        if (this.__isset.e) {
          if (E != null) {
            field.Name = "E";
            field.Type = TType.Struct;
            field.ID = 1;
            oprot.WriteFieldBegin(field);
            E.Write(oprot);
            oprot.WriteFieldEnd();
          }
        }
        oprot.WriteFieldStop();
        oprot.WriteStructEnd();
      }
      finally
      {
        oprot.DecrementRecursionDepth();
      }
    }

    public override string ToString() {
      StringBuilder __sb = new StringBuilder("logout_result(");
      bool __first = true;
      if (E != null && __isset.e) {
        if(!__first) { __sb.Append(", "); }
        __first = false;
        __sb.Append("E: ");
        __sb.Append(E== null ? "<null>" : E.ToString());
      }
      __sb.Append(")");
      return __sb.ToString();
    }

  }


  #if !SILVERLIGHT
  [Serializable]
  #endif
  public partial class logoutSession_args : TBase
  {
    private string _tokenKey;

    public string TokenKey
    {
      get
      {
        return _tokenKey;
      }
      set
      {
        __isset.tokenKey = true;
        this._tokenKey = value;
      }
    }


    public Isset __isset;
    #if !SILVERLIGHT
    [Serializable]
    #endif
    public struct Isset {
      public bool tokenKey;
    }

    public logoutSession_args() {
    }

    public void Read (TProtocol iprot)
    {
      iprot.IncrementRecursionDepth();
      try
      {
        TField field;
        iprot.ReadStructBegin();
        while (true)
        {
          field = iprot.ReadFieldBegin();
          if (field.Type == TType.Stop) { 
            break;
          }
          switch (field.ID)
          {
            case 2:
              if (field.Type == TType.String) {
                TokenKey = iprot.ReadString();
              } else { 
                TProtocolUtil.Skip(iprot, field.Type);
              }
              break;
            default: 
              TProtocolUtil.Skip(iprot, field.Type);
              break;
          }
          iprot.ReadFieldEnd();
        }
        iprot.ReadStructEnd();
      }
      finally
      {
        iprot.DecrementRecursionDepth();
      }
    }

    public void Write(TProtocol oprot) {
      oprot.IncrementRecursionDepth();
      try
      {
        TStruct struc = new TStruct("logoutSession_args");
        oprot.WriteStructBegin(struc);
        TField field = new TField();
        if (TokenKey != null && __isset.tokenKey) {
          field.Name = "tokenKey";
          field.Type = TType.String;
          field.ID = 2;
          oprot.WriteFieldBegin(field);
          oprot.WriteString(TokenKey);
          oprot.WriteFieldEnd();
        }
        oprot.WriteFieldStop();
        oprot.WriteStructEnd();
      }
      finally
      {
        oprot.DecrementRecursionDepth();
      }
    }

    public override string ToString() {
      StringBuilder __sb = new StringBuilder("logoutSession_args(");
      bool __first = true;
      if (TokenKey != null && __isset.tokenKey) {
        if(!__first) { __sb.Append(", "); }
        __first = false;
        __sb.Append("TokenKey: ");
        __sb.Append(TokenKey);
      }
      __sb.Append(")");
      return __sb.ToString();
    }

  }


  #if !SILVERLIGHT
  [Serializable]
  #endif
  public partial class logoutSession_result : TBase
  {
    private TalkException _e;

    public TalkException E
    {
      get
      {
        return _e;
      }
      set
      {
        __isset.e = true;
        this._e = value;
      }
    }


    public Isset __isset;
    #if !SILVERLIGHT
    [Serializable]
    #endif
    public struct Isset {
      public bool e;
    }

    public logoutSession_result() {
    }

    public void Read (TProtocol iprot)
    {
      iprot.IncrementRecursionDepth();
      try
      {
        TField field;
        iprot.ReadStructBegin();
        while (true)
        {
          field = iprot.ReadFieldBegin();
          if (field.Type == TType.Stop) { 
            break;
          }
          switch (field.ID)
          {
            case 1:
              if (field.Type == TType.Struct) {
                E = new TalkException();
                E.Read(iprot);
              } else { 
                TProtocolUtil.Skip(iprot, field.Type);
              }
              break;
            default: 
              TProtocolUtil.Skip(iprot, field.Type);
              break;
          }
          iprot.ReadFieldEnd();
        }
        iprot.ReadStructEnd();
      }
      finally
      {
        iprot.DecrementRecursionDepth();
      }
    }

    public void Write(TProtocol oprot) {
      oprot.IncrementRecursionDepth();
      try
      {
        TStruct struc = new TStruct("logoutSession_result");
        oprot.WriteStructBegin(struc);
        TField field = new TField();

        if (this.__isset.e) {
          if (E != null) {
            field.Name = "E";
            field.Type = TType.Struct;
            field.ID = 1;
            oprot.WriteFieldBegin(field);
            E.Write(oprot);
            oprot.WriteFieldEnd();
          }
        }
        oprot.WriteFieldStop();
        oprot.WriteStructEnd();
      }
      finally
      {
        oprot.DecrementRecursionDepth();
      }
    }

    public override string ToString() {
      StringBuilder __sb = new StringBuilder("logoutSession_result(");
      bool __first = true;
      if (E != null && __isset.e) {
        if(!__first) { __sb.Append(", "); }
        __first = false;
        __sb.Append("E: ");
        __sb.Append(E== null ? "<null>" : E.ToString());
      }
      __sb.Append(")");
      return __sb.ToString();
    }

  }


  #if !SILVERLIGHT
  [Serializable]
  #endif
  public partial class sendMessage_args : TBase
  {
    private int _seq;
    private Message _message;

    public int Seq
    {
      get
      {
        return _seq;
      }
      set
      {
        __isset.seq = true;
        this._seq = value;
      }
    }

    public Message Message
    {
      get
      {
        return _message;
      }
      set
      {
        __isset.message = true;
        this._message = value;
      }
    }


    public Isset __isset;
    #if !SILVERLIGHT
    [Serializable]
    #endif
    public struct Isset {
      public bool seq;
      public bool message;
    }

    public sendMessage_args() {
    }

    public void Read (TProtocol iprot)
    {
      iprot.IncrementRecursionDepth();
      try
      {
        TField field;
        iprot.ReadStructBegin();
        while (true)
        {
          field = iprot.ReadFieldBegin();
          if (field.Type == TType.Stop) { 
            break;
          }
          switch (field.ID)
          {
            case 1:
              if (field.Type == TType.I32) {
                Seq = iprot.ReadI32();
              } else { 
                TProtocolUtil.Skip(iprot, field.Type);
              }
              break;
            case 2:
              if (field.Type == TType.Struct) {
                Message = new Message();
                Message.Read(iprot);
              } else { 
                TProtocolUtil.Skip(iprot, field.Type);
              }
              break;
            default: 
              TProtocolUtil.Skip(iprot, field.Type);
              break;
          }
          iprot.ReadFieldEnd();
        }
        iprot.ReadStructEnd();
      }
      finally
      {
        iprot.DecrementRecursionDepth();
      }
    }

    public void Write(TProtocol oprot) {
      oprot.IncrementRecursionDepth();
      try
      {
        TStruct struc = new TStruct("sendMessage_args");
        oprot.WriteStructBegin(struc);
        TField field = new TField();
        if (__isset.seq) {
          field.Name = "seq";
          field.Type = TType.I32;
          field.ID = 1;
          oprot.WriteFieldBegin(field);
          oprot.WriteI32(Seq);
          oprot.WriteFieldEnd();
        }
        if (Message != null && __isset.message) {
          field.Name = "message";
          field.Type = TType.Struct;
          field.ID = 2;
          oprot.WriteFieldBegin(field);
          Message.Write(oprot);
          oprot.WriteFieldEnd();
        }
        oprot.WriteFieldStop();
        oprot.WriteStructEnd();
      }
      finally
      {
        oprot.DecrementRecursionDepth();
      }
    }

    public override string ToString() {
      StringBuilder __sb = new StringBuilder("sendMessage_args(");
      bool __first = true;
      if (__isset.seq) {
        if(!__first) { __sb.Append(", "); }
        __first = false;
        __sb.Append("Seq: ");
        __sb.Append(Seq);
      }
      if (Message != null && __isset.message) {
        if(!__first) { __sb.Append(", "); }
        __first = false;
        __sb.Append("Message: ");
        __sb.Append(Message== null ? "<null>" : Message.ToString());
      }
      __sb.Append(")");
      return __sb.ToString();
    }

  }


  #if !SILVERLIGHT
  [Serializable]
  #endif
  public partial class sendMessage_result : TBase
  {
    private Message _success;
    private TalkException _e;

    public Message Success
    {
      get
      {
        return _success;
      }
      set
      {
        __isset.success = true;
        this._success = value;
      }
    }

    public TalkException E
    {
      get
      {
        return _e;
      }
      set
      {
        __isset.e = true;
        this._e = value;
      }
    }


    public Isset __isset;
    #if !SILVERLIGHT
    [Serializable]
    #endif
    public struct Isset {
      public bool success;
      public bool e;
    }

    public sendMessage_result() {
    }

    public void Read (TProtocol iprot)
    {
      iprot.IncrementRecursionDepth();
      try
      {
        TField field;
        iprot.ReadStructBegin();
        while (true)
        {
          field = iprot.ReadFieldBegin();
          if (field.Type == TType.Stop) { 
            break;
          }
          switch (field.ID)
          {
            case 0:
              if (field.Type == TType.Struct) {
                Success = new Message();
                Success.Read(iprot);
              } else { 
                TProtocolUtil.Skip(iprot, field.Type);
              }
              break;
            case 1:
              if (field.Type == TType.Struct) {
                E = new TalkException();
                E.Read(iprot);
              } else { 
                TProtocolUtil.Skip(iprot, field.Type);
              }
              break;
            default: 
              TProtocolUtil.Skip(iprot, field.Type);
              break;
          }
          iprot.ReadFieldEnd();
        }
        iprot.ReadStructEnd();
      }
      finally
      {
        iprot.DecrementRecursionDepth();
      }
    }

    public void Write(TProtocol oprot) {
      oprot.IncrementRecursionDepth();
      try
      {
        TStruct struc = new TStruct("sendMessage_result");
        oprot.WriteStructBegin(struc);
        TField field = new TField();

        if (this.__isset.success) {
          if (Success != null) {
            field.Name = "Success";
            field.Type = TType.Struct;
            field.ID = 0;
            oprot.WriteFieldBegin(field);
            Success.Write(oprot);
            oprot.WriteFieldEnd();
          }
        } else if (this.__isset.e) {
          if (E != null) {
            field.Name = "E";
            field.Type = TType.Struct;
            field.ID = 1;
            oprot.WriteFieldBegin(field);
            E.Write(oprot);
            oprot.WriteFieldEnd();
          }
        }
        oprot.WriteFieldStop();
        oprot.WriteStructEnd();
      }
      finally
      {
        oprot.DecrementRecursionDepth();
      }
    }

    public override string ToString() {
      StringBuilder __sb = new StringBuilder("sendMessage_result(");
      bool __first = true;
      if (Success != null && __isset.success) {
        if(!__first) { __sb.Append(", "); }
        __first = false;
        __sb.Append("Success: ");
        __sb.Append(Success== null ? "<null>" : Success.ToString());
      }
      if (E != null && __isset.e) {
        if(!__first) { __sb.Append(", "); }
        __first = false;
        __sb.Append("E: ");
        __sb.Append(E== null ? "<null>" : E.ToString());
      }
      __sb.Append(")");
      return __sb.ToString();
    }

  }

}
