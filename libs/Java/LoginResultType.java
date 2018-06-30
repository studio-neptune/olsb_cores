/**
 * Compiled for SuperSonic Line API Lite
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

public enum LoginResultType implements org.apache.thrift.TEnum {
  SUCCESS(1),
  REQUIRE_QRCODE(2),
  REQUIRE_DEVICE_CONFIRM(3),
  REQUIRE_SMS_CONFIRM(4);

  private final int value;

  private LoginResultType(int value) {
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
  public static LoginResultType findByValue(int value) { 
    switch (value) {
      case 1:
        return SUCCESS;
      case 2:
        return REQUIRE_QRCODE;
      case 3:
        return REQUIRE_DEVICE_CONFIRM;
      case 4:
        return REQUIRE_SMS_CONFIRM;
      default:
        return null;
    }
  }
}