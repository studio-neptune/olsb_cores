/**
 * Autogenerated by Thrift Compiler (0.14.0)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

@javax.annotation.Generated(value = "Autogenerated by Thrift Compiler (0.14.0)", date = "2019-11-06")
public enum SpammerReason implements org.apache.thrift.TEnum {
  OTHER(0),
  ADVERTISING(1),
  GENDER_HARASSMENT(2),
  HARASSMENT(3);

  private final int value;

  private SpammerReason(int value) {
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
  @org.apache.thrift.annotation.Nullable
  public static SpammerReason findByValue(int value) { 
    switch (value) {
      case 0:
        return OTHER;
      case 1:
        return ADVERTISING;
      case 2:
        return GENDER_HARASSMENT;
      case 3:
        return HARASSMENT;
      default:
        return null;
    }
  }
}