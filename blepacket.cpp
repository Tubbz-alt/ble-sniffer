#include "blepacket.h"

BlePacket::BlePacket(uint8_t type,uint8_t length,uint8_t *adva,int16_t* rawdata,bool check)
{
    mClock=QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss");
    switch (type)
    {
    case 0:
        mPDUType = "ADV_IND";
        break;
    case 1:
        mPDUType = "ADV_DIRECT_IND";
        break;
    case 2:
        mPDUType = "ADV_NONCONN_IND";
        break;
    case 3:
        mPDUType = "SCAN_REQ";
        break;
    case 4:
        mPDUType = "SCAN_RSP";
        break;
    case 5:
        mPDUType = "CONNECT_REQ";
        break;
    case 6:
        mPDUType = "ADV_SCAN_IND";
        break;
    default:
        mPDUType = "RESERVED";
    }
    mPDULength=length;
    mAdva=QByteArray((char*)adva,6).toHex();
    mRawData=QByteArray((char*)rawdata,mPDULength+10).toBase64();
    mCRCCheck=check;
}
int BlePacket::printPacket()
{
    qDebug()<<mClock<<mPDUType<<mPDULength<<mAdva<<mRawData<<mCRCCheck;
    return 0;
}