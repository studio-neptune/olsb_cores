/**
 * Autogenerated by Thrift Compiler (0.14.0)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
public class PaymentPgType implements org.apache.thrift.TEnum {

  public static final PaymentPgType PAYMENT_PG_NONE = new PaymentPgType(0);
  public static final PaymentPgType PAYMENT_PG_AU = new PaymentPgType(1);
  public static final PaymentPgType PAYMENT_PG_AL = new PaymentPgType(2);

  private final int value;

  private PaymentPgType(int value) {
    this.value = value;
  }

  /**
   * Get the integer value of this enum value, as defined in the Thrift IDL.
   */
  public int getValue() {
    return value;
  }

  /**
   * Find a the enum type by its integer value, as defined in the Thrift IDL.
   * @return null if the value is not found.
   */
  public static PaymentPgType findByValue(int value) { 
    switch (value) {
      case 0:
        return PAYMENT_PG_NONE;
      case 1:
        return PAYMENT_PG_AU;
      case 2:
        return PAYMENT_PG_AL;
      default:
        return null;
    }
  }
}
