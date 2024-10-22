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
public partial class SimpleChannelClient : TBase
{
  private string _applicationType;
  private string _applicationVersion;
  private string _locale;

  public string ApplicationType
  {
    get
    {
      return _applicationType;
    }
    set
    {
      __isset.applicationType = true;
      this._applicationType = value;
    }
  }

  public string ApplicationVersion
  {
    get
    {
      return _applicationVersion;
    }
    set
    {
      __isset.applicationVersion = true;
      this._applicationVersion = value;
    }
  }

  public string Locale
  {
    get
    {
      return _locale;
    }
    set
    {
      __isset.locale = true;
      this._locale = value;
    }
  }


  public Isset __isset;
  #if !SILVERLIGHT
  [Serializable]
  #endif
  public struct Isset {
    public bool applicationType;
    public bool applicationVersion;
    public bool locale;
  }

  public SimpleChannelClient() {
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
              ApplicationType = iprot.ReadString();
            } else { 
              TProtocolUtil.Skip(iprot, field.Type);
            }
            break;
          case 2:
            if (field.Type == TType.String) {
              ApplicationVersion = iprot.ReadString();
            } else { 
              TProtocolUtil.Skip(iprot, field.Type);
            }
            break;
          case 3:
            if (field.Type == TType.String) {
              Locale = iprot.ReadString();
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
      TStruct struc = new TStruct("SimpleChannelClient");
      oprot.WriteStructBegin(struc);
      TField field = new TField();
      if (ApplicationType != null && __isset.applicationType) {
        field.Name = "applicationType";
        field.Type = TType.String;
        field.ID = 1;
        oprot.WriteFieldBegin(field);
        oprot.WriteString(ApplicationType);
        oprot.WriteFieldEnd();
      }
      if (ApplicationVersion != null && __isset.applicationVersion) {
        field.Name = "applicationVersion";
        field.Type = TType.String;
        field.ID = 2;
        oprot.WriteFieldBegin(field);
        oprot.WriteString(ApplicationVersion);
        oprot.WriteFieldEnd();
      }
      if (Locale != null && __isset.locale) {
        field.Name = "locale";
        field.Type = TType.String;
        field.ID = 3;
        oprot.WriteFieldBegin(field);
        oprot.WriteString(Locale);
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
    StringBuilder __sb = new StringBuilder("SimpleChannelClient(");
    bool __first = true;
    if (ApplicationType != null && __isset.applicationType) {
      if(!__first) { __sb.Append(", "); }
      __first = false;
      __sb.Append("ApplicationType: ");
      __sb.Append(ApplicationType);
    }
    if (ApplicationVersion != null && __isset.applicationVersion) {
      if(!__first) { __sb.Append(", "); }
      __first = false;
      __sb.Append("ApplicationVersion: ");
      __sb.Append(ApplicationVersion);
    }
    if (Locale != null && __isset.locale) {
      if(!__first) { __sb.Append(", "); }
      __first = false;
      __sb.Append("Locale: ");
      __sb.Append(Locale);
    }
    __sb.Append(")");
    return __sb.ToString();
  }

}

