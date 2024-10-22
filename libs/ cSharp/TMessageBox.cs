/**
 * Autogenerated by Thrift Compiler (0.14.0)
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


#if !SILVERLIGHT
[Serializable]
#endif
public partial class TMessageBox : TBase
{
  private string _id;
  private string _channelId;
  private long _lastSeq;
  private long _unreadCount;
  private long _lastModifiedTime;
  private int _status;
  private MIDType _midType;
  private List<Message> _lastMessages;

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

  public string ChannelId
  {
    get
    {
      return _channelId;
    }
    set
    {
      __isset.channelId = true;
      this._channelId = value;
    }
  }

  public long LastSeq
  {
    get
    {
      return _lastSeq;
    }
    set
    {
      __isset.lastSeq = true;
      this._lastSeq = value;
    }
  }

  public long UnreadCount
  {
    get
    {
      return _unreadCount;
    }
    set
    {
      __isset.unreadCount = true;
      this._unreadCount = value;
    }
  }

  public long LastModifiedTime
  {
    get
    {
      return _lastModifiedTime;
    }
    set
    {
      __isset.lastModifiedTime = true;
      this._lastModifiedTime = value;
    }
  }

  public int Status
  {
    get
    {
      return _status;
    }
    set
    {
      __isset.status = true;
      this._status = value;
    }
  }

  /// <summary>
  /// 
  /// <seealso cref="MIDType"/>
  /// </summary>
  public MIDType MidType
  {
    get
    {
      return _midType;
    }
    set
    {
      __isset.midType = true;
      this._midType = value;
    }
  }

  public List<Message> LastMessages
  {
    get
    {
      return _lastMessages;
    }
    set
    {
      __isset.lastMessages = true;
      this._lastMessages = value;
    }
  }


  public Isset __isset;
  #if !SILVERLIGHT
  [Serializable]
  #endif
  public struct Isset {
    public bool id;
    public bool channelId;
    public bool lastSeq;
    public bool unreadCount;
    public bool lastModifiedTime;
    public bool status;
    public bool midType;
    public bool lastMessages;
  }

  public TMessageBox() {
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
            if (field.Type == TType.String) {
              Id = iprot.ReadString();
            } else { 
              TProtocolUtil.Skip(iprot, field.Type);
            }
            break;
          case 2:
            if (field.Type == TType.String) {
              ChannelId = iprot.ReadString();
            } else { 
              TProtocolUtil.Skip(iprot, field.Type);
            }
            break;
          case 5:
            if (field.Type == TType.I64) {
              LastSeq = iprot.ReadI64();
            } else { 
              TProtocolUtil.Skip(iprot, field.Type);
            }
            break;
          case 6:
            if (field.Type == TType.I64) {
              UnreadCount = iprot.ReadI64();
            } else { 
              TProtocolUtil.Skip(iprot, field.Type);
            }
            break;
          case 7:
            if (field.Type == TType.I64) {
              LastModifiedTime = iprot.ReadI64();
            } else { 
              TProtocolUtil.Skip(iprot, field.Type);
            }
            break;
          case 8:
            if (field.Type == TType.I32) {
              Status = iprot.ReadI32();
            } else { 
              TProtocolUtil.Skip(iprot, field.Type);
            }
            break;
          case 9:
            if (field.Type == TType.I32) {
              MidType = (MIDType)iprot.ReadI32();
            } else { 
              TProtocolUtil.Skip(iprot, field.Type);
            }
            break;
          case 10:
            if (field.Type == TType.List) {
              {
                LastMessages = new List<Message>();
                TList _list163 = iprot.ReadListBegin();
                for( int _i164 = 0; _i164 < _list163.Count; ++_i164)
                {
                  Message _elem165;
                  _elem165 = new Message();
                  _elem165.Read(iprot);
                  LastMessages.Add(_elem165);
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
      TStruct struc = new TStruct("TMessageBox");
      oprot.WriteStructBegin(struc);
      TField field = new TField();
      if (Id != null && __isset.id) {
        field.Name = "id";
        field.Type = TType.String;
        field.ID = 1;
        oprot.WriteFieldBegin(field);
        oprot.WriteString(Id);
        oprot.WriteFieldEnd();
      }
      if (ChannelId != null && __isset.channelId) {
        field.Name = "channelId";
        field.Type = TType.String;
        field.ID = 2;
        oprot.WriteFieldBegin(field);
        oprot.WriteString(ChannelId);
        oprot.WriteFieldEnd();
      }
      if (__isset.lastSeq) {
        field.Name = "lastSeq";
        field.Type = TType.I64;
        field.ID = 5;
        oprot.WriteFieldBegin(field);
        oprot.WriteI64(LastSeq);
        oprot.WriteFieldEnd();
      }
      if (__isset.unreadCount) {
        field.Name = "unreadCount";
        field.Type = TType.I64;
        field.ID = 6;
        oprot.WriteFieldBegin(field);
        oprot.WriteI64(UnreadCount);
        oprot.WriteFieldEnd();
      }
      if (__isset.lastModifiedTime) {
        field.Name = "lastModifiedTime";
        field.Type = TType.I64;
        field.ID = 7;
        oprot.WriteFieldBegin(field);
        oprot.WriteI64(LastModifiedTime);
        oprot.WriteFieldEnd();
      }
      if (__isset.status) {
        field.Name = "status";
        field.Type = TType.I32;
        field.ID = 8;
        oprot.WriteFieldBegin(field);
        oprot.WriteI32(Status);
        oprot.WriteFieldEnd();
      }
      if (__isset.midType) {
        field.Name = "midType";
        field.Type = TType.I32;
        field.ID = 9;
        oprot.WriteFieldBegin(field);
        oprot.WriteI32((int)MidType);
        oprot.WriteFieldEnd();
      }
      if (LastMessages != null && __isset.lastMessages) {
        field.Name = "lastMessages";
        field.Type = TType.List;
        field.ID = 10;
        oprot.WriteFieldBegin(field);
        {
          oprot.WriteListBegin(new TList(TType.Struct, LastMessages.Count));
          foreach (Message _iter166 in LastMessages)
          {
            _iter166.Write(oprot);
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
    StringBuilder __sb = new StringBuilder("TMessageBox(");
    bool __first = true;
    if (Id != null && __isset.id) {
      if(!__first) { __sb.Append(", "); }
      __first = false;
      __sb.Append("Id: ");
      __sb.Append(Id);
    }
    if (ChannelId != null && __isset.channelId) {
      if(!__first) { __sb.Append(", "); }
      __first = false;
      __sb.Append("ChannelId: ");
      __sb.Append(ChannelId);
    }
    if (__isset.lastSeq) {
      if(!__first) { __sb.Append(", "); }
      __first = false;
      __sb.Append("LastSeq: ");
      __sb.Append(LastSeq);
    }
    if (__isset.unreadCount) {
      if(!__first) { __sb.Append(", "); }
      __first = false;
      __sb.Append("UnreadCount: ");
      __sb.Append(UnreadCount);
    }
    if (__isset.lastModifiedTime) {
      if(!__first) { __sb.Append(", "); }
      __first = false;
      __sb.Append("LastModifiedTime: ");
      __sb.Append(LastModifiedTime);
    }
    if (__isset.status) {
      if(!__first) { __sb.Append(", "); }
      __first = false;
      __sb.Append("Status: ");
      __sb.Append(Status);
    }
    if (__isset.midType) {
      if(!__first) { __sb.Append(", "); }
      __first = false;
      __sb.Append("MidType: ");
      __sb.Append(MidType);
    }
    if (LastMessages != null && __isset.lastMessages) {
      if(!__first) { __sb.Append(", "); }
      __first = false;
      __sb.Append("LastMessages: ");
      __sb.Append(LastMessages);
    }
    __sb.Append(")");
    return __sb.ToString();
  }

}

