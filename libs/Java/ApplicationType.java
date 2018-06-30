/**
 * Compiled for SuperSonic Line API Lite
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

public enum ApplicationType implements org.apache.thrift.TEnum {
  DESKTOPWIN(96),
  DESKTOPWIN_RC(97),
  DESKTOPWIN_BETA(98),
  DESKTOPWIN_ALPHA(99),
  DESKTOPMAC(112),
  DESKTOPMAC_RC(113),
  DESKTOPMAC_BETA(114),
  DESKTOPMAC_ALPHA(115);

  private final int value;

  private ApplicationType(int value) {
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
  public static ApplicationType findByValue(int value) { 
    switch (value) {
      case 96:
        return DESKTOPWIN;
      case 97:
        return DESKTOPWIN_RC;
      case 98:
        return DESKTOPWIN_BETA;
      case 99:
        return DESKTOPWIN_ALPHA;
      case 112:
        return DESKTOPMAC;
      case 113:
        return DESKTOPMAC_RC;
      case 114:
        return DESKTOPMAC_BETA;
      case 115:
        return DESKTOPMAC_ALPHA;
      default:
        return null;
    }
  }
}
