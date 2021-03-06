#ifndef COMMUNICATION_H_INCLUDED
#define COMMUNICATION_H_INCLUDED

int Communication_SwitchFSK();
int Communication_SwitchLORA();
int Communication_SwitchRTTY();

void Communication_RTTY_EndTransmission();
void Communication_RTTY_BeginTransmission();
void Communication_RTTY_Transmit(String inTransmissionPacket);
void Communication_RTTY_TransmitBit(char inChar);
void Communication_RTTY_TransmitSpace(); // 0
void Communication_RTTY_TransmitMark(); // 1

void Communication_SX1278Route(String inFunctionId, String inSignature, String inMessage);
void Communication_SX1278TransmitPacket(String inTransmissionPacket);
void Communication_SX1278Transmit(String inFuncId, String inMessage);
void Communication_SX1278TransmitPayloadMessage(String inPayloadMessage);

void Communication_DisableTransmitting();
void Communication_EnableTransmitting();
bool Communication_GetTransmittingState();

//////////////////////////////
// FOSSA_PROTOCOL FUNCTIONS //
//////////////////////////////

// 1    
void Communication_TransmitStartedSignal();
// 2
void Communication_TransmitStoppedSignal();
// 3
void Communication_TransmitSX1278InitializedSuccess();
// 4
void Communication_TransmitDeploymentSuccess();
// 6
void Communication_TransmitPong();
// 5
void Communication_RecievedPing();
// 7
void Communication_RecievedStopTransmitting();
// 8 
void Communication_RecievedStartTransmitting();
// 9
void Communication_TransmitPowerInfo();
// 10
void Communication_TransmitTune();
#endif
