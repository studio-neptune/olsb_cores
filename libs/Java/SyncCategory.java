/**
 * Autogenerated by Thrift Compiler (0.14.0)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

@javax.annotation.Generated(value = "Autogenerated by Thrift Compiler (0.14.0)", date = "2019-11-06")
public enum SyncCategory implements org.apache.thrift.TEnum {
  PROFILE(0),
  SETTINGS(1),
  OPS(2),
  CONTACT(3),
  RECOMMEND(4),
  BLOCK(5),
  GROUP(6),
  ROOM(7),
  NOTIFICATION(8);

  private final int value;

  private SyncCategory(int value) {
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
  public static SyncCategory findByValue(int value) { 
    switch (value) {
      case 0:
        return PROFILE;
      case 1:
        return SETTINGS;
      case 2:
        return OPS;
      case 3:
        return CONTACT;
      case 4:
        return RECOMMEND;
      case 5:
        return BLOCK;
      case 6:
        return GROUP;
      case 7:
        return ROOM;
      case 8:
        return NOTIFICATION;
      default:
        return null;
    }
  }
}
