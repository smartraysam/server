
//Define profile generic buffer row data for Load profile.
typedef struct
{
  //Date-time value of the clock.
  uint32_t time;
  //Active power L1 value.
  uint16_t totalactiveEnergy;
  uint16_t activeEnergyL1;
  uint16_t activeEnergyL2;
  uint16_t activeEnergyL3;

  uint16_t totalreactiveEnergy;
  uint16_t totalapparentEnergy;

  uint16_t totalactivePower;
  uint16_t activePowerL1;
  uint16_t activePowerL2;
  uint16_t activePowerL3;

  uint16_t instVoltage;
  uint16_t instVoltageL1;
  uint16_t instVoltageL2;
  uint16_t instVoltageL3;

  uint16_t instCurrent;
  uint16_t instCurrentL1;
  uint16_t instCurrentL2;
  uint16_t instCurrentL3;

  uint16_t powerFactor;
  uint16_t powerFactorL1;
  uint16_t powerFactorL2;
  uint16_t powerFactorL3;

  uint16_t frequency;

  uint16_t tamper;

  uint16_t energyConstant;

  uint16_t rUnit;
  uint16_t firmware;
} gxLoadProfileData;

//Define profile generic buffer row data for event log.
typedef struct
{
  //Date-time value of the clock.
  uint32_t time;
  //Occurred event.
  uint16_t event;
} gxEventLogData;

//Action schedule execution times.
typedef struct
{
  unsigned char count;
  gxtime values[10];
} GXExecutionTimes;

//Push communication window.
typedef struct
{
  unsigned char count;
  gxTimePair values[10];
} GXPushWindow;

//Push object list.
typedef struct
{
  uint16_t objectType;
  unsigned char logicalName[6];
  signed char attributeIndex;
  uint16_t dataIndex;
} GXTarget;

//Push object list.
typedef struct
{
  unsigned char count;
  GXTarget values[5];
} GXPushObjects;

//Profile Generic settings.
typedef struct
{
  //How often load profile is captured to the EEPROM.
  //Load profile period.
  unsigned long period;
  //Amount of rows in profile generic buffer.
  uint16_t entriesInUse;
  //Entry where profile generic row is added in ring buffer.
  uint16_t rowIndex;
} GXProfileGeneric;

//Push Setup.
typedef struct
{
  //Push communication window.
  GXPushWindow communicationWindow;
  //Push object list..
  GXPushObjects objects;
} GXPushSetup;

//SAP assignment list.
typedef struct
{
  unsigned char count;
  gxSapItem values[5];
} GXSapList;

//Association settings (passwords).
typedef struct
{
  //Define low level password.
  char llsPasswordSize;
  char llsPassword[20];
  //Define high level password.
  char hlsPasswordSize;
  char hlsPassword[20];
} GXAssociation;

//Save serialized meter data here.
typedef struct
{
  //Meter serial number.
  uint32_t SERIAL_NUMBER = 000001;
  //Define Logical Device Name.
  char LDN[17];
  //Association passwords.
  GXAssociation association;
  //Don't use clock as a name. Some compilers are using clock as reserved word.
  gxClock clock1;
  //Disconnect open execution times.
  GXExecutionTimes disconnectOpenExecutions;
  //Disconnect close execution times.
  GXExecutionTimes disconnectCloseExecutions;
  //IEC HDLC Setup.
  gxIecHdlcSetup hdlc;
  GXProfileGeneric loadProfile;
  GXProfileGeneric eventLog;
  GXPushSetup push;
  //Is meter in test mode.
  char testMode = 1;
  //SAP assigment lists.
  GXSapList sapAssignmentList;
} GXSerializedMeterData;

typedef enum
{
  //Meter is powered.
  GURUX_EVENT_CODES_POWER_UP = 0x1,
  //User has change the time.
  GURUX_EVENT_CODES_TIME_CHANGE = 0x2,
  //DST status is changed.
  GURUX_EVENT_CODES_DST = 0x4,
  //Push message is sent.
  GURUX_EVENT_CODES_PUSH = 0x8,
  //Meter makes auto connect.
  GURUX_EVENT_CODES_AUTO_CONNECT = 0x10,
  //User has change the password.
  GURUX_EVENT_CODES_PASSWORD_CHANGED = 0x20,
  //Wrong password tried 3 times.
  GURUX_EVENT_CODES_WRONG_PASSWORD = 0x40,
  //Disconnect control state is changed.
  GURUX_EVENT_CODES_OUTPUT_RELAY_STATE = 0x80,
  //User has reset the meter.
  GURUX_EVENT_CODES_GLOBAL_METER_RESET = 0x100
} GURUX_EVENT_CODES;
