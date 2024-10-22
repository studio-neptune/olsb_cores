/**
 * Autogenerated by Thrift Compiler (0.14.0)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
@SuppressWarnings({"cast", "rawtypes", "serial", "unchecked", "unused"})
@javax.annotation.Generated(value = "Autogenerated by Thrift Compiler (0.14.0)", date = "2019-11-06")
public class UniversalNotificationService {

  public interface Iface {

    public void notify(GlobalEvent event) throws UniversalNotificationServiceException, org.apache.thrift.TException;

  }

  public interface AsyncIface {

    public void notify(GlobalEvent event, org.apache.thrift.async.AsyncMethodCallback<Void> resultHandler) throws org.apache.thrift.TException;

  }

  public static class Client extends org.apache.thrift.TServiceClient implements Iface {
    public static class Factory implements org.apache.thrift.TServiceClientFactory<Client> {
      public Factory() {}
      public Client getClient(org.apache.thrift.protocol.TProtocol prot) {
        return new Client(prot);
      }
      public Client getClient(org.apache.thrift.protocol.TProtocol iprot, org.apache.thrift.protocol.TProtocol oprot) {
        return new Client(iprot, oprot);
      }
    }

    public Client(org.apache.thrift.protocol.TProtocol prot)
    {
      super(prot, prot);
    }

    public Client(org.apache.thrift.protocol.TProtocol iprot, org.apache.thrift.protocol.TProtocol oprot) {
      super(iprot, oprot);
    }

    public void notify(GlobalEvent event) throws UniversalNotificationServiceException, org.apache.thrift.TException
    {
      send_notify(event);
      recv_notify();
    }

    public void send_notify(GlobalEvent event) throws org.apache.thrift.TException
    {
      notify_args args = new notify_args();
      args.setEvent(event);
      sendBase("notify", args);
    }

    public void recv_notify() throws UniversalNotificationServiceException, org.apache.thrift.TException
    {
      notify_result result = new notify_result();
      receiveBase(result, "notify");
      if (result.e != null) {
        throw result.e;
      }
      return;
    }

  }
  public static class AsyncClient extends org.apache.thrift.async.TAsyncClient implements AsyncIface {
    public static class Factory implements org.apache.thrift.async.TAsyncClientFactory<AsyncClient> {
      private org.apache.thrift.async.TAsyncClientManager clientManager;
      private org.apache.thrift.protocol.TProtocolFactory protocolFactory;
      public Factory(org.apache.thrift.async.TAsyncClientManager clientManager, org.apache.thrift.protocol.TProtocolFactory protocolFactory) {
        this.clientManager = clientManager;
        this.protocolFactory = protocolFactory;
      }
      public AsyncClient getAsyncClient(org.apache.thrift.transport.TNonblockingTransport transport) {
        return new AsyncClient(protocolFactory, clientManager, transport);
      }
    }

    public AsyncClient(org.apache.thrift.protocol.TProtocolFactory protocolFactory, org.apache.thrift.async.TAsyncClientManager clientManager, org.apache.thrift.transport.TNonblockingTransport transport) {
      super(protocolFactory, clientManager, transport);
    }

    public void notify(GlobalEvent event, org.apache.thrift.async.AsyncMethodCallback<Void> resultHandler) throws org.apache.thrift.TException {
      checkReady();
      notify_call method_call = new notify_call(event, resultHandler, this, ___protocolFactory, ___transport);
      this.___currentMethod = method_call;
      ___manager.call(method_call);
    }

    public static class notify_call extends org.apache.thrift.async.TAsyncMethodCall<Void> {
      private GlobalEvent event;
      public notify_call(GlobalEvent event, org.apache.thrift.async.AsyncMethodCallback<Void> resultHandler, org.apache.thrift.async.TAsyncClient client, org.apache.thrift.protocol.TProtocolFactory protocolFactory, org.apache.thrift.transport.TNonblockingTransport transport) throws org.apache.thrift.TException {
        super(client, protocolFactory, transport, resultHandler, false);
        this.event = event;
      }

      public void write_args(org.apache.thrift.protocol.TProtocol prot) throws org.apache.thrift.TException {
        prot.writeMessageBegin(new org.apache.thrift.protocol.TMessage("notify", org.apache.thrift.protocol.TMessageType.CALL, 0));
        notify_args args = new notify_args();
        args.setEvent(event);
        args.write(prot);
        prot.writeMessageEnd();
      }

      public Void getResult() throws UniversalNotificationServiceException, org.apache.thrift.TException {
        if (getState() != org.apache.thrift.async.TAsyncMethodCall.State.RESPONSE_READ) {
          throw new java.lang.IllegalStateException("Method call not finished!");
        }
        org.apache.thrift.transport.TMemoryInputTransport memoryTransport = new org.apache.thrift.transport.TMemoryInputTransport(getFrameBuffer().array());
        org.apache.thrift.protocol.TProtocol prot = client.getProtocolFactory().getProtocol(memoryTransport);
        return null;
      }
    }

  }

  public static class Processor<I extends Iface> extends org.apache.thrift.TBaseProcessor<I> implements org.apache.thrift.TProcessor {
    private static final org.slf4j.Logger _LOGGER = org.slf4j.LoggerFactory.getLogger(Processor.class.getName());
    public Processor(I iface) {
      super(iface, getProcessMap(new java.util.HashMap<java.lang.String, org.apache.thrift.ProcessFunction<I, ? extends org.apache.thrift.TBase>>()));
    }

    protected Processor(I iface, java.util.Map<java.lang.String, org.apache.thrift.ProcessFunction<I, ? extends org.apache.thrift.TBase>> processMap) {
      super(iface, getProcessMap(processMap));
    }

    private static <I extends Iface> java.util.Map<java.lang.String,  org.apache.thrift.ProcessFunction<I, ? extends org.apache.thrift.TBase>> getProcessMap(java.util.Map<java.lang.String, org.apache.thrift.ProcessFunction<I, ? extends  org.apache.thrift.TBase>> processMap) {
      processMap.put("notify", new notify());
      return processMap;
    }

    public static class notify<I extends Iface> extends org.apache.thrift.ProcessFunction<I, notify_args> {
      public notify() {
        super("notify");
      }

      public notify_args getEmptyArgsInstance() {
        return new notify_args();
      }

      protected boolean isOneway() {
        return false;
      }

      @Override
      protected boolean rethrowUnhandledExceptions() {
        return false;
      }

      public notify_result getResult(I iface, notify_args args) throws org.apache.thrift.TException {
        notify_result result = new notify_result();
        try {
          iface.notify(args.event);
        } catch (UniversalNotificationServiceException e) {
          result.e = e;
        }
        return result;
      }
    }

  }

  public static class AsyncProcessor<I extends AsyncIface> extends org.apache.thrift.TBaseAsyncProcessor<I> {
    private static final org.slf4j.Logger _LOGGER = org.slf4j.LoggerFactory.getLogger(AsyncProcessor.class.getName());
    public AsyncProcessor(I iface) {
      super(iface, getProcessMap(new java.util.HashMap<java.lang.String, org.apache.thrift.AsyncProcessFunction<I, ? extends org.apache.thrift.TBase, ?>>()));
    }

    protected AsyncProcessor(I iface, java.util.Map<java.lang.String,  org.apache.thrift.AsyncProcessFunction<I, ? extends  org.apache.thrift.TBase, ?>> processMap) {
      super(iface, getProcessMap(processMap));
    }

    private static <I extends AsyncIface> java.util.Map<java.lang.String,  org.apache.thrift.AsyncProcessFunction<I, ? extends  org.apache.thrift.TBase,?>> getProcessMap(java.util.Map<java.lang.String,  org.apache.thrift.AsyncProcessFunction<I, ? extends  org.apache.thrift.TBase, ?>> processMap) {
      processMap.put("notify", new notify());
      return processMap;
    }

    public static class notify<I extends AsyncIface> extends org.apache.thrift.AsyncProcessFunction<I, notify_args, Void> {
      public notify() {
        super("notify");
      }

      public notify_args getEmptyArgsInstance() {
        return new notify_args();
      }

      public org.apache.thrift.async.AsyncMethodCallback<Void> getResultHandler(final org.apache.thrift.server.AbstractNonblockingServer.AsyncFrameBuffer fb, final int seqid) {
        final org.apache.thrift.AsyncProcessFunction fcall = this;
        return new org.apache.thrift.async.AsyncMethodCallback<Void>() { 
          public void onComplete(Void o) {
            notify_result result = new notify_result();
            try {
              fcall.sendResponse(fb, result, org.apache.thrift.protocol.TMessageType.REPLY,seqid);
            } catch (org.apache.thrift.transport.TTransportException e) {
              _LOGGER.error("TTransportException writing to internal frame buffer", e);
              fb.close();
            } catch (java.lang.Exception e) {
              _LOGGER.error("Exception writing to internal frame buffer", e);
              onError(e);
            }
          }
          public void onError(java.lang.Exception e) {
            byte msgType = org.apache.thrift.protocol.TMessageType.REPLY;
            org.apache.thrift.TSerializable msg;
            notify_result result = new notify_result();
            if (e instanceof UniversalNotificationServiceException) {
              result.e = (UniversalNotificationServiceException) e;
              result.setEIsSet(true);
              msg = result;
            } else if (e instanceof org.apache.thrift.transport.TTransportException) {
              _LOGGER.error("TTransportException inside handler", e);
              fb.close();
              return;
            } else if (e instanceof org.apache.thrift.TApplicationException) {
              _LOGGER.error("TApplicationException inside handler", e);
              msgType = org.apache.thrift.protocol.TMessageType.EXCEPTION;
              msg = (org.apache.thrift.TApplicationException)e;
            } else {
              _LOGGER.error("Exception inside handler", e);
              msgType = org.apache.thrift.protocol.TMessageType.EXCEPTION;
              msg = new org.apache.thrift.TApplicationException(org.apache.thrift.TApplicationException.INTERNAL_ERROR, e.getMessage());
            }
            try {
              fcall.sendResponse(fb,msg,msgType,seqid);
            } catch (java.lang.Exception ex) {
              _LOGGER.error("Exception writing to internal frame buffer", ex);
              fb.close();
            }
          }
        };
      }

      protected boolean isOneway() {
        return false;
      }

      public void start(I iface, notify_args args, org.apache.thrift.async.AsyncMethodCallback<Void> resultHandler) throws org.apache.thrift.TException {
        iface.notify(args.event,resultHandler);
      }
    }

  }

  public static class notify_args implements org.apache.thrift.TBase<notify_args, notify_args._Fields>, java.io.Serializable, Cloneable, Comparable<notify_args>   {
    private static final org.apache.thrift.protocol.TStruct STRUCT_DESC = new org.apache.thrift.protocol.TStruct("notify_args");

    private static final org.apache.thrift.protocol.TField EVENT_FIELD_DESC = new org.apache.thrift.protocol.TField("event", org.apache.thrift.protocol.TType.STRUCT, (short)2);

    private static final org.apache.thrift.scheme.SchemeFactory STANDARD_SCHEME_FACTORY = new notify_argsStandardSchemeFactory();
    private static final org.apache.thrift.scheme.SchemeFactory TUPLE_SCHEME_FACTORY = new notify_argsTupleSchemeFactory();

    public @org.apache.thrift.annotation.Nullable GlobalEvent event; // required

    /** The set of fields this struct contains, along with convenience methods for finding and manipulating them. */
    public enum _Fields implements org.apache.thrift.TFieldIdEnum {
      EVENT((short)2, "event");

      private static final java.util.Map<java.lang.String, _Fields> byName = new java.util.HashMap<java.lang.String, _Fields>();

      static {
        for (_Fields field : java.util.EnumSet.allOf(_Fields.class)) {
          byName.put(field.getFieldName(), field);
        }
      }

      /**
       * Find the _Fields constant that matches fieldId, or null if its not found.
       */
      @org.apache.thrift.annotation.Nullable
      public static _Fields findByThriftId(int fieldId) {
        switch(fieldId) {
          case 2: // EVENT
            return EVENT;
          default:
            return null;
        }
      }

      /**
       * Find the _Fields constant that matches fieldId, throwing an exception
       * if it is not found.
       */
      public static _Fields findByThriftIdOrThrow(int fieldId) {
        _Fields fields = findByThriftId(fieldId);
        if (fields == null) throw new java.lang.IllegalArgumentException("Field " + fieldId + " doesn't exist!");
        return fields;
      }

      /**
       * Find the _Fields constant that matches name, or null if its not found.
       */
      @org.apache.thrift.annotation.Nullable
      public static _Fields findByName(java.lang.String name) {
        return byName.get(name);
      }

      private final short _thriftId;
      private final java.lang.String _fieldName;

      _Fields(short thriftId, java.lang.String fieldName) {
        _thriftId = thriftId;
        _fieldName = fieldName;
      }

      public short getThriftFieldId() {
        return _thriftId;
      }

      public java.lang.String getFieldName() {
        return _fieldName;
      }
    }

    // isset id assignments
    public static final java.util.Map<_Fields, org.apache.thrift.meta_data.FieldMetaData> metaDataMap;
    static {
      java.util.Map<_Fields, org.apache.thrift.meta_data.FieldMetaData> tmpMap = new java.util.EnumMap<_Fields, org.apache.thrift.meta_data.FieldMetaData>(_Fields.class);
      tmpMap.put(_Fields.EVENT, new org.apache.thrift.meta_data.FieldMetaData("event", org.apache.thrift.TFieldRequirementType.DEFAULT, 
          new org.apache.thrift.meta_data.StructMetaData(org.apache.thrift.protocol.TType.STRUCT, GlobalEvent.class)));
      metaDataMap = java.util.Collections.unmodifiableMap(tmpMap);
      org.apache.thrift.meta_data.FieldMetaData.addStructMetaDataMap(notify_args.class, metaDataMap);
    }

    public notify_args() {
    }

    public notify_args(
      GlobalEvent event)
    {
      this();
      this.event = event;
    }

    /**
     * Performs a deep copy on <i>other</i>.
     */
    public notify_args(notify_args other) {
      if (other.isSetEvent()) {
        this.event = new GlobalEvent(other.event);
      }
    }

    public notify_args deepCopy() {
      return new notify_args(this);
    }

    @Override
    public void clear() {
      this.event = null;
    }

    @org.apache.thrift.annotation.Nullable
    public GlobalEvent getEvent() {
      return this.event;
    }

    public notify_args setEvent(@org.apache.thrift.annotation.Nullable GlobalEvent event) {
      this.event = event;
      return this;
    }

    public void unsetEvent() {
      this.event = null;
    }

    /** Returns true if field event is set (has been assigned a value) and false otherwise */
    public boolean isSetEvent() {
      return this.event != null;
    }

    public void setEventIsSet(boolean value) {
      if (!value) {
        this.event = null;
      }
    }

    public void setFieldValue(_Fields field, @org.apache.thrift.annotation.Nullable java.lang.Object value) {
      switch (field) {
      case EVENT:
        if (value == null) {
          unsetEvent();
        } else {
          setEvent((GlobalEvent)value);
        }
        break;

      }
    }

    @org.apache.thrift.annotation.Nullable
    public java.lang.Object getFieldValue(_Fields field) {
      switch (field) {
      case EVENT:
        return getEvent();

      }
      throw new java.lang.IllegalStateException();
    }

    /** Returns true if field corresponding to fieldID is set (has been assigned a value) and false otherwise */
    public boolean isSet(_Fields field) {
      if (field == null) {
        throw new java.lang.IllegalArgumentException();
      }

      switch (field) {
      case EVENT:
        return isSetEvent();
      }
      throw new java.lang.IllegalStateException();
    }

    @Override
    public boolean equals(java.lang.Object that) {
      if (that == null)
        return false;
      if (that instanceof notify_args)
        return this.equals((notify_args)that);
      return false;
    }

    public boolean equals(notify_args that) {
      if (that == null)
        return false;
      if (this == that)
        return true;

      boolean this_present_event = true && this.isSetEvent();
      boolean that_present_event = true && that.isSetEvent();
      if (this_present_event || that_present_event) {
        if (!(this_present_event && that_present_event))
          return false;
        if (!this.event.equals(that.event))
          return false;
      }

      return true;
    }

    @Override
    public int hashCode() {
      int hashCode = 1;

      hashCode = hashCode * 8191 + ((isSetEvent()) ? 131071 : 524287);
      if (isSetEvent())
        hashCode = hashCode * 8191 + event.hashCode();

      return hashCode;
    }

    @Override
    public int compareTo(notify_args other) {
      if (!getClass().equals(other.getClass())) {
        return getClass().getName().compareTo(other.getClass().getName());
      }

      int lastComparison = 0;

      lastComparison = java.lang.Boolean.valueOf(isSetEvent()).compareTo(other.isSetEvent());
      if (lastComparison != 0) {
        return lastComparison;
      }
      if (isSetEvent()) {
        lastComparison = org.apache.thrift.TBaseHelper.compareTo(this.event, other.event);
        if (lastComparison != 0) {
          return lastComparison;
        }
      }
      return 0;
    }

    @org.apache.thrift.annotation.Nullable
    public _Fields fieldForId(int fieldId) {
      return _Fields.findByThriftId(fieldId);
    }

    public void read(org.apache.thrift.protocol.TProtocol iprot) throws org.apache.thrift.TException {
      scheme(iprot).read(iprot, this);
    }

    public void write(org.apache.thrift.protocol.TProtocol oprot) throws org.apache.thrift.TException {
      scheme(oprot).write(oprot, this);
    }

    @Override
    public java.lang.String toString() {
      java.lang.StringBuilder sb = new java.lang.StringBuilder("notify_args(");
      boolean first = true;

      sb.append("event:");
      if (this.event == null) {
        sb.append("null");
      } else {
        sb.append(this.event);
      }
      first = false;
      sb.append(")");
      return sb.toString();
    }

    public void validate() throws org.apache.thrift.TException {
      // check for required fields
      // check for sub-struct validity
      if (event != null) {
        event.validate();
      }
    }

    private void writeObject(java.io.ObjectOutputStream out) throws java.io.IOException {
      try {
        write(new org.apache.thrift.protocol.TCompactProtocol(new org.apache.thrift.transport.TIOStreamTransport(out)));
      } catch (org.apache.thrift.TException te) {
        throw new java.io.IOException(te);
      }
    }

    private void readObject(java.io.ObjectInputStream in) throws java.io.IOException, java.lang.ClassNotFoundException {
      try {
        read(new org.apache.thrift.protocol.TCompactProtocol(new org.apache.thrift.transport.TIOStreamTransport(in)));
      } catch (org.apache.thrift.TException te) {
        throw new java.io.IOException(te);
      }
    }

    private static class notify_argsStandardSchemeFactory implements org.apache.thrift.scheme.SchemeFactory {
      public notify_argsStandardScheme getScheme() {
        return new notify_argsStandardScheme();
      }
    }

    private static class notify_argsStandardScheme extends org.apache.thrift.scheme.StandardScheme<notify_args> {

      public void read(org.apache.thrift.protocol.TProtocol iprot, notify_args struct) throws org.apache.thrift.TException {
        org.apache.thrift.protocol.TField schemeField;
        iprot.readStructBegin();
        while (true)
        {
          schemeField = iprot.readFieldBegin();
          if (schemeField.type == org.apache.thrift.protocol.TType.STOP) { 
            break;
          }
          switch (schemeField.id) {
            case 2: // EVENT
              if (schemeField.type == org.apache.thrift.protocol.TType.STRUCT) {
                struct.event = new GlobalEvent();
                struct.event.read(iprot);
                struct.setEventIsSet(true);
              } else { 
                org.apache.thrift.protocol.TProtocolUtil.skip(iprot, schemeField.type);
              }
              break;
            default:
              org.apache.thrift.protocol.TProtocolUtil.skip(iprot, schemeField.type);
          }
          iprot.readFieldEnd();
        }
        iprot.readStructEnd();

        // check for required fields of primitive type, which can't be checked in the validate method
        struct.validate();
      }

      public void write(org.apache.thrift.protocol.TProtocol oprot, notify_args struct) throws org.apache.thrift.TException {
        struct.validate();

        oprot.writeStructBegin(STRUCT_DESC);
        if (struct.event != null) {
          oprot.writeFieldBegin(EVENT_FIELD_DESC);
          struct.event.write(oprot);
          oprot.writeFieldEnd();
        }
        oprot.writeFieldStop();
        oprot.writeStructEnd();
      }

    }

    private static class notify_argsTupleSchemeFactory implements org.apache.thrift.scheme.SchemeFactory {
      public notify_argsTupleScheme getScheme() {
        return new notify_argsTupleScheme();
      }
    }

    private static class notify_argsTupleScheme extends org.apache.thrift.scheme.TupleScheme<notify_args> {

      @Override
      public void write(org.apache.thrift.protocol.TProtocol prot, notify_args struct) throws org.apache.thrift.TException {
        org.apache.thrift.protocol.TTupleProtocol oprot = (org.apache.thrift.protocol.TTupleProtocol) prot;
        java.util.BitSet optionals = new java.util.BitSet();
        if (struct.isSetEvent()) {
          optionals.set(0);
        }
        oprot.writeBitSet(optionals, 1);
        if (struct.isSetEvent()) {
          struct.event.write(oprot);
        }
      }

      @Override
      public void read(org.apache.thrift.protocol.TProtocol prot, notify_args struct) throws org.apache.thrift.TException {
        org.apache.thrift.protocol.TTupleProtocol iprot = (org.apache.thrift.protocol.TTupleProtocol) prot;
        java.util.BitSet incoming = iprot.readBitSet(1);
        if (incoming.get(0)) {
          struct.event = new GlobalEvent();
          struct.event.read(iprot);
          struct.setEventIsSet(true);
        }
      }
    }

    private static <S extends org.apache.thrift.scheme.IScheme> S scheme(org.apache.thrift.protocol.TProtocol proto) {
      return (org.apache.thrift.scheme.StandardScheme.class.equals(proto.getScheme()) ? STANDARD_SCHEME_FACTORY : TUPLE_SCHEME_FACTORY).getScheme();
    }
  }

  public static class notify_result implements org.apache.thrift.TBase<notify_result, notify_result._Fields>, java.io.Serializable, Cloneable, Comparable<notify_result>   {
    private static final org.apache.thrift.protocol.TStruct STRUCT_DESC = new org.apache.thrift.protocol.TStruct("notify_result");

    private static final org.apache.thrift.protocol.TField E_FIELD_DESC = new org.apache.thrift.protocol.TField("e", org.apache.thrift.protocol.TType.STRUCT, (short)1);

    private static final org.apache.thrift.scheme.SchemeFactory STANDARD_SCHEME_FACTORY = new notify_resultStandardSchemeFactory();
    private static final org.apache.thrift.scheme.SchemeFactory TUPLE_SCHEME_FACTORY = new notify_resultTupleSchemeFactory();

    public @org.apache.thrift.annotation.Nullable UniversalNotificationServiceException e; // required

    /** The set of fields this struct contains, along with convenience methods for finding and manipulating them. */
    public enum _Fields implements org.apache.thrift.TFieldIdEnum {
      E((short)1, "e");

      private static final java.util.Map<java.lang.String, _Fields> byName = new java.util.HashMap<java.lang.String, _Fields>();

      static {
        for (_Fields field : java.util.EnumSet.allOf(_Fields.class)) {
          byName.put(field.getFieldName(), field);
        }
      }

      /**
       * Find the _Fields constant that matches fieldId, or null if its not found.
       */
      @org.apache.thrift.annotation.Nullable
      public static _Fields findByThriftId(int fieldId) {
        switch(fieldId) {
          case 1: // E
            return E;
          default:
            return null;
        }
      }

      /**
       * Find the _Fields constant that matches fieldId, throwing an exception
       * if it is not found.
       */
      public static _Fields findByThriftIdOrThrow(int fieldId) {
        _Fields fields = findByThriftId(fieldId);
        if (fields == null) throw new java.lang.IllegalArgumentException("Field " + fieldId + " doesn't exist!");
        return fields;
      }

      /**
       * Find the _Fields constant that matches name, or null if its not found.
       */
      @org.apache.thrift.annotation.Nullable
      public static _Fields findByName(java.lang.String name) {
        return byName.get(name);
      }

      private final short _thriftId;
      private final java.lang.String _fieldName;

      _Fields(short thriftId, java.lang.String fieldName) {
        _thriftId = thriftId;
        _fieldName = fieldName;
      }

      public short getThriftFieldId() {
        return _thriftId;
      }

      public java.lang.String getFieldName() {
        return _fieldName;
      }
    }

    // isset id assignments
    public static final java.util.Map<_Fields, org.apache.thrift.meta_data.FieldMetaData> metaDataMap;
    static {
      java.util.Map<_Fields, org.apache.thrift.meta_data.FieldMetaData> tmpMap = new java.util.EnumMap<_Fields, org.apache.thrift.meta_data.FieldMetaData>(_Fields.class);
      tmpMap.put(_Fields.E, new org.apache.thrift.meta_data.FieldMetaData("e", org.apache.thrift.TFieldRequirementType.DEFAULT, 
          new org.apache.thrift.meta_data.StructMetaData(org.apache.thrift.protocol.TType.STRUCT, UniversalNotificationServiceException.class)));
      metaDataMap = java.util.Collections.unmodifiableMap(tmpMap);
      org.apache.thrift.meta_data.FieldMetaData.addStructMetaDataMap(notify_result.class, metaDataMap);
    }

    public notify_result() {
    }

    public notify_result(
      UniversalNotificationServiceException e)
    {
      this();
      this.e = e;
    }

    /**
     * Performs a deep copy on <i>other</i>.
     */
    public notify_result(notify_result other) {
      if (other.isSetE()) {
        this.e = new UniversalNotificationServiceException(other.e);
      }
    }

    public notify_result deepCopy() {
      return new notify_result(this);
    }

    @Override
    public void clear() {
      this.e = null;
    }

    @org.apache.thrift.annotation.Nullable
    public UniversalNotificationServiceException getE() {
      return this.e;
    }

    public notify_result setE(@org.apache.thrift.annotation.Nullable UniversalNotificationServiceException e) {
      this.e = e;
      return this;
    }

    public void unsetE() {
      this.e = null;
    }

    /** Returns true if field e is set (has been assigned a value) and false otherwise */
    public boolean isSetE() {
      return this.e != null;
    }

    public void setEIsSet(boolean value) {
      if (!value) {
        this.e = null;
      }
    }

    public void setFieldValue(_Fields field, @org.apache.thrift.annotation.Nullable java.lang.Object value) {
      switch (field) {
      case E:
        if (value == null) {
          unsetE();
        } else {
          setE((UniversalNotificationServiceException)value);
        }
        break;

      }
    }

    @org.apache.thrift.annotation.Nullable
    public java.lang.Object getFieldValue(_Fields field) {
      switch (field) {
      case E:
        return getE();

      }
      throw new java.lang.IllegalStateException();
    }

    /** Returns true if field corresponding to fieldID is set (has been assigned a value) and false otherwise */
    public boolean isSet(_Fields field) {
      if (field == null) {
        throw new java.lang.IllegalArgumentException();
      }

      switch (field) {
      case E:
        return isSetE();
      }
      throw new java.lang.IllegalStateException();
    }

    @Override
    public boolean equals(java.lang.Object that) {
      if (that == null)
        return false;
      if (that instanceof notify_result)
        return this.equals((notify_result)that);
      return false;
    }

    public boolean equals(notify_result that) {
      if (that == null)
        return false;
      if (this == that)
        return true;

      boolean this_present_e = true && this.isSetE();
      boolean that_present_e = true && that.isSetE();
      if (this_present_e || that_present_e) {
        if (!(this_present_e && that_present_e))
          return false;
        if (!this.e.equals(that.e))
          return false;
      }

      return true;
    }

    @Override
    public int hashCode() {
      int hashCode = 1;

      hashCode = hashCode * 8191 + ((isSetE()) ? 131071 : 524287);
      if (isSetE())
        hashCode = hashCode * 8191 + e.hashCode();

      return hashCode;
    }

    @Override
    public int compareTo(notify_result other) {
      if (!getClass().equals(other.getClass())) {
        return getClass().getName().compareTo(other.getClass().getName());
      }

      int lastComparison = 0;

      lastComparison = java.lang.Boolean.valueOf(isSetE()).compareTo(other.isSetE());
      if (lastComparison != 0) {
        return lastComparison;
      }
      if (isSetE()) {
        lastComparison = org.apache.thrift.TBaseHelper.compareTo(this.e, other.e);
        if (lastComparison != 0) {
          return lastComparison;
        }
      }
      return 0;
    }

    @org.apache.thrift.annotation.Nullable
    public _Fields fieldForId(int fieldId) {
      return _Fields.findByThriftId(fieldId);
    }

    public void read(org.apache.thrift.protocol.TProtocol iprot) throws org.apache.thrift.TException {
      scheme(iprot).read(iprot, this);
    }

    public void write(org.apache.thrift.protocol.TProtocol oprot) throws org.apache.thrift.TException {
      scheme(oprot).write(oprot, this);
      }

    @Override
    public java.lang.String toString() {
      java.lang.StringBuilder sb = new java.lang.StringBuilder("notify_result(");
      boolean first = true;

      sb.append("e:");
      if (this.e == null) {
        sb.append("null");
      } else {
        sb.append(this.e);
      }
      first = false;
      sb.append(")");
      return sb.toString();
    }

    public void validate() throws org.apache.thrift.TException {
      // check for required fields
      // check for sub-struct validity
    }

    private void writeObject(java.io.ObjectOutputStream out) throws java.io.IOException {
      try {
        write(new org.apache.thrift.protocol.TCompactProtocol(new org.apache.thrift.transport.TIOStreamTransport(out)));
      } catch (org.apache.thrift.TException te) {
        throw new java.io.IOException(te);
      }
    }

    private void readObject(java.io.ObjectInputStream in) throws java.io.IOException, java.lang.ClassNotFoundException {
      try {
        read(new org.apache.thrift.protocol.TCompactProtocol(new org.apache.thrift.transport.TIOStreamTransport(in)));
      } catch (org.apache.thrift.TException te) {
        throw new java.io.IOException(te);
      }
    }

    private static class notify_resultStandardSchemeFactory implements org.apache.thrift.scheme.SchemeFactory {
      public notify_resultStandardScheme getScheme() {
        return new notify_resultStandardScheme();
      }
    }

    private static class notify_resultStandardScheme extends org.apache.thrift.scheme.StandardScheme<notify_result> {

      public void read(org.apache.thrift.protocol.TProtocol iprot, notify_result struct) throws org.apache.thrift.TException {
        org.apache.thrift.protocol.TField schemeField;
        iprot.readStructBegin();
        while (true)
        {
          schemeField = iprot.readFieldBegin();
          if (schemeField.type == org.apache.thrift.protocol.TType.STOP) { 
            break;
          }
          switch (schemeField.id) {
            case 1: // E
              if (schemeField.type == org.apache.thrift.protocol.TType.STRUCT) {
                struct.e = new UniversalNotificationServiceException();
                struct.e.read(iprot);
                struct.setEIsSet(true);
              } else { 
                org.apache.thrift.protocol.TProtocolUtil.skip(iprot, schemeField.type);
              }
              break;
            default:
              org.apache.thrift.protocol.TProtocolUtil.skip(iprot, schemeField.type);
          }
          iprot.readFieldEnd();
        }
        iprot.readStructEnd();

        // check for required fields of primitive type, which can't be checked in the validate method
        struct.validate();
      }

      public void write(org.apache.thrift.protocol.TProtocol oprot, notify_result struct) throws org.apache.thrift.TException {
        struct.validate();

        oprot.writeStructBegin(STRUCT_DESC);
        if (struct.e != null) {
          oprot.writeFieldBegin(E_FIELD_DESC);
          struct.e.write(oprot);
          oprot.writeFieldEnd();
        }
        oprot.writeFieldStop();
        oprot.writeStructEnd();
      }

    }

    private static class notify_resultTupleSchemeFactory implements org.apache.thrift.scheme.SchemeFactory {
      public notify_resultTupleScheme getScheme() {
        return new notify_resultTupleScheme();
      }
    }

    private static class notify_resultTupleScheme extends org.apache.thrift.scheme.TupleScheme<notify_result> {

      @Override
      public void write(org.apache.thrift.protocol.TProtocol prot, notify_result struct) throws org.apache.thrift.TException {
        org.apache.thrift.protocol.TTupleProtocol oprot = (org.apache.thrift.protocol.TTupleProtocol) prot;
        java.util.BitSet optionals = new java.util.BitSet();
        if (struct.isSetE()) {
          optionals.set(0);
        }
        oprot.writeBitSet(optionals, 1);
        if (struct.isSetE()) {
          struct.e.write(oprot);
        }
      }

      @Override
      public void read(org.apache.thrift.protocol.TProtocol prot, notify_result struct) throws org.apache.thrift.TException {
        org.apache.thrift.protocol.TTupleProtocol iprot = (org.apache.thrift.protocol.TTupleProtocol) prot;
        java.util.BitSet incoming = iprot.readBitSet(1);
        if (incoming.get(0)) {
          struct.e = new UniversalNotificationServiceException();
          struct.e.read(iprot);
          struct.setEIsSet(true);
        }
      }
    }

    private static <S extends org.apache.thrift.scheme.IScheme> S scheme(org.apache.thrift.protocol.TProtocol proto) {
      return (org.apache.thrift.scheme.StandardScheme.class.equals(proto.getScheme()) ? STANDARD_SCHEME_FACTORY : TUPLE_SCHEME_FACTORY).getScheme();
    }
  }

}
