static gxRegister totalactiveEnergy;
static gxRegister totalreactiveEnergy;
static gxRegister totalapparentEnergy;

static gxRegister activeEnergyL1;
static gxRegister activeEnergyL2;
static gxRegister activeEnergyL3;

static gxRegister totalactivePower;
static gxRegister activePowerL1;
static gxRegister activePowerL2;
static gxRegister activePowerL3;

static gxRegister instVoltage;
static gxRegister instVoltageL1;
static gxRegister instVoltageL2;
static gxRegister instVoltageL3;

static gxRegister instCurrent;
static gxRegister instCurrentL1;
static gxRegister instCurrentL2;
static gxRegister instCurrentL3;

static gxRegister powerFactor;
static gxRegister powerFactorL1;
static gxRegister powerFactorL2;
static gxRegister powerFactorL3;

static gxRegister frequency;

static gxRegister energyConstant;

static gxRegister rUnit;
static gxRegister firmware;

//Active power L1 value.
static uint16_t totalactiveEnergyVal = 0;
static uint16_t totalreactiveEnergyVal = 0;
static uint16_t totalapparentEnergyVal = 0;

static uint16_t activeEnergyL1Val = 0;
static uint16_t activeEnergyL2Val = 0;
static uint16_t activeEnergyL3Val = 0;

static uint16_t t_activePowerVal = 0;
static uint16_t activePowerL1Val = 0;
static uint16_t activePowerL2Val = 0;
static uint16_t activePowerL3Val = 0;

static uint16_t instVoltageVal = 0;
static uint16_t instVoltageL1Val = 0;
static uint16_t instVoltageL2Val = 0;
static uint16_t instVoltageL3Val = 0;

static uint16_t instCurrentVal = 0;
static uint16_t instCurrentL1Val = 0;
static uint16_t instCurrentL2Val = 0;
static uint16_t instCurrentL3Val = 0;

static uint16_t powerFactorVal = 0;
static uint16_t powerFactorL1Val = 0;
static uint16_t powerFactorL2Val = 0;
static uint16_t powerFactorL3Val = 0;

static uint16_t frequencyVal = 0;

static uint16_t tamperVal = 0;

static uint16_t energyConstantVal = 0;

static uint16_t rUnitVal = 0;

static uint16_t firmwareVal = 0;



///////////////////////////////////////////////////////////////////////
//This method to add total active energy register object.
///////////////////////////////////////////////////////////////////////
int addTReactiveEnergyRegisterObject()
{
  int ret;
  const unsigned char ln[6] = {1, 1, 3, 8, 0, 255};
  if ((ret = INIT_OBJECT(totalreactiveEnergy, DLMS_OBJECT_TYPE_REGISTER, ln)) == 0)
  {
    GX_UINT16_BYREF(totalreactiveEnergy.value, totalreactiveEnergyVal);
    //10 ^ 3 =  1000
    totalreactiveEnergy.scaler = -4;
    totalreactiveEnergy.unit = 32;
  }
  return ret;
}

///////////////////////////////////////////////////////////////////////
//This method to add total active energy register object.
///////////////////////////////////////////////////////////////////////
int addTApparentEnergyRegisterObject()
{
  int ret;
  const unsigned char ln[6] = {1, 1, 9, 8, 0, 255};
  if ((ret = INIT_OBJECT(totalapparentEnergy, DLMS_OBJECT_TYPE_REGISTER, ln)) == 0)
  {
    GX_UINT16_BYREF(totalapparentEnergy.value, totalapparentEnergyVal);
    //10 ^ 3 =  1000
    totalapparentEnergy.scaler = -4;
    totalapparentEnergy.unit = 31;
  }
  return ret;
}
///////////////////////////////////////////////////////////////////////
//This method to add total active energy register object.
///////////////////////////////////////////////////////////////////////
int addTActiveEnergyRegisterObject()
{
  int ret;
  const unsigned char ln[6] = {1, 1, 1, 8, 0, 255};
  if ((ret = INIT_OBJECT(totalactiveEnergy, DLMS_OBJECT_TYPE_REGISTER, ln)) == 0)
  {
    GX_UINT16_BYREF(totalactiveEnergy.value, totalactiveEnergyVal);
    //10 ^ 3 =  1000
    totalactiveEnergy.scaler = -4;
    totalactiveEnergy.unit = 30;
  }
  return ret;
}
int addActiveEnergyL1RegisterObject()
{
  int ret;
  const unsigned char ln[6] = {1, 1, 21, 8, 0, 255};
  if ((ret = INIT_OBJECT(activeEnergyL1, DLMS_OBJECT_TYPE_REGISTER, ln)) == 0)
  {
    // activePowerL1Value = 0;
    GX_UINT16_BYREF(activeEnergyL1.value, activeEnergyL1Val);
    //10 ^ 3 =  1000
    activeEnergyL1.scaler = -4;
    activeEnergyL1.unit = 30;
  }
  return ret;
}

int addActiveEnergyL2RegisterObject()
{
  int ret;
  const unsigned char ln[6] = {1, 1, 41, 8, 0, 255};
  if ((ret = INIT_OBJECT(activeEnergyL2, DLMS_OBJECT_TYPE_REGISTER, ln)) == 0)
  {
    // activePowerL1Value = 0;
    GX_UINT16_BYREF(activeEnergyL2.value, activeEnergyL2Val);
    //10 ^ 3 =  1000
    activeEnergyL2.scaler = -4;
    activeEnergyL2.unit = 30;
  }
  return ret;
}

int addActiveEnergyL3RegisterObject()
{
  int ret;
  const unsigned char ln[6] = {1, 1, 61, 8, 0, 255};
  if ((ret = INIT_OBJECT(activeEnergyL3, DLMS_OBJECT_TYPE_REGISTER, ln)) == 0)
  {
    // activePowerL1Value = 0;
    GX_UINT16_BYREF(activeEnergyL3.value, activeEnergyL3Val);
    //10 ^ 3 =  1000
    activeEnergyL3.scaler = -4;
    activeEnergyL3.unit = 30;
  }
  return ret;
}

///////////////////////////////////////////////////////////////////////
//This method to add total active power register object.
///////////////////////////////////////////////////////////////////////
int addTActivePowerRegisterObject()
{
  int ret;
  const unsigned char ln[6] = {1, 1, 1, 7, 0, 255};
  if ((ret = INIT_OBJECT(totalactivePower, DLMS_OBJECT_TYPE_REGISTER, ln)) == 0)
  {
    GX_UINT16_BYREF(totalactivePower.value, t_activePowerVal);
    //10 ^ 3 =  1000
    totalactivePower.scaler = -4;
    totalactivePower.unit = 27;
  }
  return ret;
}

///////////////////////////////////////////////////////////////////////
//This method to add active powerL1 register object.
///////////////////////////////////////////////////////////////////////
int addActivePowerL1RegisterObject()
{
  int ret;
  const unsigned char ln[6] = {1, 1, 21, 7, 0, 255};
  if ((ret = INIT_OBJECT(activePowerL1, DLMS_OBJECT_TYPE_REGISTER, ln)) == 0)
  {
    // activePowerL1Value = 0;
    GX_UINT16_BYREF(activePowerL1.value, activePowerL1Val);
    //10 ^ 3 =  1000
    activePowerL1.scaler = -4;
    activePowerL1.unit = 27;
  }
  return ret;
}

int addActivePowerL2RegisterObject()
{
  int ret;
  const unsigned char ln[6] = {1, 1, 41, 7, 0, 255};
  if ((ret = INIT_OBJECT(activePowerL2, DLMS_OBJECT_TYPE_REGISTER, ln)) == 0)
  {
    // activePowerL1Value = 0;
    GX_UINT16_BYREF(activePowerL2.value, activePowerL2Val);
    //10 ^ 3 =  1000
    activePowerL2.scaler =-4;
    activePowerL2.unit = 27;
  }
  return ret;
}

int addActivePowerL3RegisterObject()
{
  int ret;
  const unsigned char ln[6] = {1, 1, 61, 7, 0, 255};
  if ((ret = INIT_OBJECT(activePowerL3, DLMS_OBJECT_TYPE_REGISTER, ln)) == 0)
  {
    // activePowerL1Value = 0;
    GX_UINT16_BYREF(activePowerL3.value, activePowerL3Val);
    //10 ^ 3 =  1000
    activePowerL3.scaler = -4;
    activePowerL3.unit = 27;
  }
  return ret;
}

///////////////////////////////////////////////////////////////////////
//This method to add voltage register objects.
///////////////////////////////////////////////////////////////////////

int addVoltageRegisterObject()
{
  int ret;
  const unsigned char ln[6] = {1, 1, 12, 7, 0, 255};
  if ((ret = INIT_OBJECT(instVoltage, DLMS_OBJECT_TYPE_REGISTER, ln)) == 0)
  {
    // voltageL1Value = 1;
    GX_UINT16_BYREF(instVoltage.value, instVoltageVal);
    //10 ^ 3 =  1000
    instVoltage.scaler = -2;
    instVoltage.unit = 35;
  }
  return ret;
}

int addVoltageL1RegisterObject()
{
  int ret;
  const unsigned char ln[6] = {1, 1,32, 7, 0, 255};
  if ((ret = INIT_OBJECT(instVoltageL1, DLMS_OBJECT_TYPE_REGISTER, ln)) == 0)
  {
    // voltageL1Value = 1;
    GX_UINT16_BYREF(instVoltageL1.value, instVoltageL1Val);
    //10 ^ 3 =  1000
    instVoltageL1.scaler = -2;
    instVoltageL1.unit = 35;
  }
  return ret;
}

int addVoltageL2RegisterObject()
{
  int ret;
  const unsigned char ln[6] = {1, 1, 52, 7, 0, 255};
  if ((ret = INIT_OBJECT(instVoltageL2, DLMS_OBJECT_TYPE_REGISTER, ln)) == 0)
  {
    // voltageL1Value = 1;
    GX_UINT16_BYREF(instVoltageL2.value, instVoltageL2Val);
    //10 ^ 3 =  1000
    instVoltageL2.scaler = -2;
    instVoltageL2.unit = 35;
  }
  return ret;
}

int addVoltageL3RegisterObject()
{
  int ret;
  const unsigned char ln[6] = {1, 1, 72, 7, 0, 255};
  if ((ret = INIT_OBJECT(instVoltageL3, DLMS_OBJECT_TYPE_REGISTER, ln)) == 0)
  {
    // voltageL1Value = 1;
    GX_UINT16_BYREF(instVoltageL3.value, instVoltageL3Val);
    //10 ^ 3 =  1000
    instVoltageL3.scaler = -2;
    instVoltageL3.unit = 35;
  }
  return ret;
}

///////////////////////////////////////////////////////////////////////
//This method to add current register objects.
///////////////////////////////////////////////////////////////////////

int addCurrentRegisterObject()
{
  int ret;
  const unsigned char ln[6] = {1, 1, 11, 7, 0, 255};
  if ((ret = INIT_OBJECT(instCurrent, DLMS_OBJECT_TYPE_REGISTER, ln)) == 0)
  {
    // voltageL1Value = 1;
    GX_UINT16_BYREF(instCurrent.value, instCurrentVal);
    //10 ^ 3 =  1000
    instCurrent.scaler = -3;
    instCurrent.unit = 33;
  }
  return ret;
}

int addCurrentL1RegisterObject()
{
  int ret;
  const unsigned char ln[6] = {1, 1, 31, 7, 0, 255};
  if ((ret = INIT_OBJECT(instCurrentL1, DLMS_OBJECT_TYPE_REGISTER, ln)) == 0)
  {
    GX_UINT16_BYREF(instCurrentL1.value, instCurrentL1Val);
    instCurrentL1.scaler = -3;
    instCurrentL1.unit = 33;
  }
  return ret;
}

int addCurrentL2RegisterObject()
{
  int ret;
  const unsigned char ln[6] = {1, 1, 51, 7, 0, 255};
  if ((ret = INIT_OBJECT(instCurrentL2, DLMS_OBJECT_TYPE_REGISTER, ln)) == 0)
  {
    GX_UINT16_BYREF(instCurrentL2.value, instCurrentL2Val);
    instCurrentL2.scaler = -3;
    instCurrentL2.unit = 33;
  }
  return ret;
}

int addCurrentL3RegisterObject()
{
  int ret;
  const unsigned char ln[6] = {1, 1, 71, 7, 0, 255};
  if ((ret = INIT_OBJECT(instCurrentL3, DLMS_OBJECT_TYPE_REGISTER, ln)) == 0)
  {
    // voltageL1Value = 1;
    GX_UINT16_BYREF(instCurrentL3.value, instCurrentL3Val);
    //10 ^ 3 =  1000
    instCurrentL3.scaler = -3;
    instCurrentL3.unit = 33;
  }
  return ret;
}

///////////////////////////////////////////////////////////////////////
//This method to add pawer factor register objects.
///////////////////////////////////////////////////////////////////////

int addPFRegisterObject()
{
  int ret;
  const unsigned char ln[6] = {1, 1, 13, 7, 0, 255};
  if ((ret = INIT_OBJECT(powerFactor, DLMS_OBJECT_TYPE_REGISTER, ln)) == 0)
  {
    // voltageL1Value = 1;
    GX_UINT16_BYREF(powerFactor.value, powerFactorVal);
    //10 ^ 3 =  1000
    powerFactor.scaler = -1;
    powerFactor.unit = 255;
  }
  return ret;
}

int addPFL1RegisterObject()
{
  int ret;
  const unsigned char ln[6] = {1, 1,33, 7, 0, 255};
  if ((ret = INIT_OBJECT(powerFactorL1, DLMS_OBJECT_TYPE_REGISTER, ln)) == 0)
  {
    // voltageL1Value = 1;
    GX_UINT16_BYREF(powerFactorL1.value, powerFactorL1Val);
    //10 ^ 3 =  1000
    powerFactorL1.scaler = -1;
    powerFactorL1.unit = 255;
  }
  return ret;
}

int addPFL2RegisterObject()
{
  int ret;
  const unsigned char ln[6] = {1, 1, 53, 7, 0, 255};
  if ((ret = INIT_OBJECT(powerFactorL2, DLMS_OBJECT_TYPE_REGISTER, ln)) == 0)
  {
    // voltageL1Value = 1;
    GX_UINT16_BYREF(powerFactorL2.value, powerFactorL2Val);
    //10 ^ 3 =  1000
    powerFactorL2.scaler =-1;
    powerFactorL2.unit = 255;
  }
  return ret;
}

int addPFL3RegisterObject()
{
  int ret;
  const unsigned char ln[6] = {1, 1, 73, 7, 0, 255};
  if ((ret = INIT_OBJECT(powerFactorL3, DLMS_OBJECT_TYPE_REGISTER, ln)) == 0)
  {
    // voltageL1Value = 1;
    GX_UINT16_BYREF(powerFactorL3.value, powerFactorL3Val);
    //10 ^ 3 =  1000
    powerFactorL3.scaler = -1;
    powerFactorL3.unit = 255;
  }
  return ret;
}

////////////////

///////////////////////////////////////////////////////////////////////
//This method to add frequency register objects.
///////////////////////////////////////////////////////////////////////

int addECRegisterObject()
{
  int ret;
  const unsigned char ln[6] = {1, 1, 0, 3, 0, 255};
  if ((ret = INIT_OBJECT(energyConstant, DLMS_OBJECT_TYPE_REGISTER, ln)) == 0)
  {
    // voltageL1Value = 1;
    GX_UINT16_BYREF(energyConstant.value, energyConstantVal);
    //10 ^ 3 =  1000
    energyConstant.scaler = 1;
    energyConstant.unit = 255;
  }
  return ret;
}

int addFregRegisterObject()
{
  int ret;
  const unsigned char ln[6] = {1, 1, 14, 7, 0, 255};
  if ((ret = INIT_OBJECT(frequency, DLMS_OBJECT_TYPE_REGISTER, ln)) == 0)
  {
    // voltageL1Value = 1;
    GX_UINT16_BYREF(frequency.value, frequencyVal);
    //10 ^ 3 =  1000
    frequency.scaler = -1;
    frequency.unit = 44;
  }
  return ret;
}

int addUNITRegisterObject()
{
  int ret;
  const unsigned char ln[6] = {1, 1, 12, 17, 0, 255};
  if ((ret = INIT_OBJECT(rUnit, DLMS_OBJECT_TYPE_REGISTER, ln)) == 0)
  {
    // voltageL1Value = 1;
    GX_UINT16_BYREF(rUnit.value, rUnitVal);
    //10 ^ 3 =  1000
    rUnit.scaler = 0;
    rUnit.unit = 35;
  }
  return ret;
}


int addFirmVerRegisterObject()
{
  int ret;
  const unsigned char ln[6] = {1, 0,0, 2, 0, 255};
  if ((ret = INIT_OBJECT(firmware, DLMS_OBJECT_TYPE_REGISTER, ln)) == 0)
  {
    // voltageL1Value = 1;
    GX_UINT16_BYREF(firmware.value, firmwareVal);
    //10 ^ 3 =  1000
    firmware.scaler = -1;
    firmware.unit = 255;
  }
  return ret;
}
