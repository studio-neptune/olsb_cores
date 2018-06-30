/**
 * Compiled for SuperSonic Line API Lite
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

public enum OpStatus implements org.apache.thrift.TEnum {
  NORMAL(0),
  ALERT_DISABLED(1),
  ALWAYS(2);

  private final int value;

  private OpStatus(int value) {
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
  public static OpStatus findByValue(int value) { 
    switch (value) {
      case 0:
        return NORMAL;
      case 1:
        return ALERT_DISABLED;
      case 2:
        return ALWAYS;
      default:
        return null;
    }
  }
}