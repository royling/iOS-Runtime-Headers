/* Generated by RuntimeBrowser
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDWRMLinkPrefChange1 : PBCodable <NSCopying> {
    struct { 
        unsigned int timestamp : 1; 
        unsigned int count : 1; 
        unsigned int nCallActive : 1; 
        unsigned int nCallIdle : 1; 
        unsigned int nData : 1; 
        unsigned int nNegativeStatusUpdate : 1; 
        unsigned int nPositiveStatusUpdate : 1; 
        unsigned int nRunning : 1; 
        unsigned int nStationary : 1; 
        unsigned int nStatusUpdateDelayBin1 : 1; 
        unsigned int nStatusUpdateDelayBin2 : 1; 
        unsigned int nStatusUpdateDelayBin3 : 1; 
        unsigned int nStatusUpdateDelayBin4 : 1; 
        unsigned int nStatusUpdateDelayBin5 : 1; 
        unsigned int nStatusUpdateDelayBin6 : 1; 
        unsigned int nUnknownStatusUpdat : 1; 
        unsigned int nVehicular : 1; 
        unsigned int nVoice : 1; 
        unsigned int nWalking : 1; 
        unsigned int nWifiBadBcn : 1; 
        unsigned int nWifiBadLoad : 1; 
        unsigned int nWifiBadPER : 1; 
        unsigned int nWifiBadRSSI : 1; 
        unsigned int nWifiBadSNR : 1; 
        unsigned int nWifiBadTransportRTP : 1; 
        unsigned int nWifiBadTransportSymptom : 1; 
        unsigned int nWifiNotInit : 1; 
        unsigned int nWifiNotReady : 1; 
    unsigned int _count;
    } _has;
    unsigned int _nCallActive;
    unsigned int _nCallIdle;
    unsigned int _nData;
    unsigned int _nNegativeStatusUpdate;
    unsigned int _nPositiveStatusUpdate;
    unsigned int _nRunning;
    unsigned int _nStationary;
    unsigned int _nStatusUpdateDelayBin1;
    unsigned int _nStatusUpdateDelayBin2;
    unsigned int _nStatusUpdateDelayBin3;
    unsigned int _nStatusUpdateDelayBin4;
    unsigned int _nStatusUpdateDelayBin5;
    unsigned int _nStatusUpdateDelayBin6;
    unsigned int _nUnknownStatusUpdat;
    unsigned int _nVehicular;
    unsigned int _nVoice;
    unsigned int _nWalking;
    unsigned int _nWifiBadBcn;
    unsigned int _nWifiBadLoad;
    unsigned int _nWifiBadPER;
    unsigned int _nWifiBadRSSI;
    unsigned int _nWifiBadSNR;
    unsigned int _nWifiBadTransportRTP;
    unsigned int _nWifiBadTransportSymptom;
    unsigned int _nWifiNotInit;
    unsigned int _nWifiNotReady;
    unsigned long long _timestamp;
}

@property unsigned int count;
@property BOOL hasCount;
@property BOOL hasNCallActive;
@property BOOL hasNCallIdle;
@property BOOL hasNData;
@property BOOL hasNNegativeStatusUpdate;
@property BOOL hasNPositiveStatusUpdate;
@property BOOL hasNRunning;
@property BOOL hasNStationary;
@property BOOL hasNStatusUpdateDelayBin1;
@property BOOL hasNStatusUpdateDelayBin2;
@property BOOL hasNStatusUpdateDelayBin3;
@property BOOL hasNStatusUpdateDelayBin4;
@property BOOL hasNStatusUpdateDelayBin5;
@property BOOL hasNStatusUpdateDelayBin6;
@property BOOL hasNUnknownStatusUpdat;
@property BOOL hasNVehicular;
@property BOOL hasNVoice;
@property BOOL hasNWalking;
@property BOOL hasNWifiBadBcn;
@property BOOL hasNWifiBadLoad;
@property BOOL hasNWifiBadPER;
@property BOOL hasNWifiBadRSSI;
@property BOOL hasNWifiBadSNR;
@property BOOL hasNWifiBadTransportRTP;
@property BOOL hasNWifiBadTransportSymptom;
@property BOOL hasNWifiNotInit;
@property BOOL hasNWifiNotReady;
@property BOOL hasTimestamp;
@property unsigned int nCallActive;
@property unsigned int nCallIdle;
@property unsigned int nData;
@property unsigned int nNegativeStatusUpdate;
@property unsigned int nPositiveStatusUpdate;
@property unsigned int nRunning;
@property unsigned int nStationary;
@property unsigned int nStatusUpdateDelayBin1;
@property unsigned int nStatusUpdateDelayBin2;
@property unsigned int nStatusUpdateDelayBin3;
@property unsigned int nStatusUpdateDelayBin4;
@property unsigned int nStatusUpdateDelayBin5;
@property unsigned int nStatusUpdateDelayBin6;
@property unsigned int nUnknownStatusUpdat;
@property unsigned int nVehicular;
@property unsigned int nVoice;
@property unsigned int nWalking;
@property unsigned int nWifiBadBcn;
@property unsigned int nWifiBadLoad;
@property unsigned int nWifiBadPER;
@property unsigned int nWifiBadRSSI;
@property unsigned int nWifiBadSNR;
@property unsigned int nWifiBadTransportRTP;
@property unsigned int nWifiBadTransportSymptom;
@property unsigned int nWifiNotInit;
@property unsigned int nWifiNotReady;
@property unsigned long long timestamp;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)count;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasCount;
- (BOOL)hasNCallActive;
- (BOOL)hasNCallIdle;
- (BOOL)hasNData;
- (BOOL)hasNNegativeStatusUpdate;
- (BOOL)hasNPositiveStatusUpdate;
- (BOOL)hasNRunning;
- (BOOL)hasNStationary;
- (BOOL)hasNStatusUpdateDelayBin1;
- (BOOL)hasNStatusUpdateDelayBin2;
- (BOOL)hasNStatusUpdateDelayBin3;
- (BOOL)hasNStatusUpdateDelayBin4;
- (BOOL)hasNStatusUpdateDelayBin5;
- (BOOL)hasNStatusUpdateDelayBin6;
- (BOOL)hasNUnknownStatusUpdat;
- (BOOL)hasNVehicular;
- (BOOL)hasNVoice;
- (BOOL)hasNWalking;
- (BOOL)hasNWifiBadBcn;
- (BOOL)hasNWifiBadLoad;
- (BOOL)hasNWifiBadPER;
- (BOOL)hasNWifiBadRSSI;
- (BOOL)hasNWifiBadSNR;
- (BOOL)hasNWifiBadTransportRTP;
- (BOOL)hasNWifiBadTransportSymptom;
- (BOOL)hasNWifiNotInit;
- (BOOL)hasNWifiNotReady;
- (BOOL)hasTimestamp;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned int)nCallActive;
- (unsigned int)nCallIdle;
- (unsigned int)nData;
- (unsigned int)nNegativeStatusUpdate;
- (unsigned int)nPositiveStatusUpdate;
- (unsigned int)nRunning;
- (unsigned int)nStationary;
- (unsigned int)nStatusUpdateDelayBin1;
- (unsigned int)nStatusUpdateDelayBin2;
- (unsigned int)nStatusUpdateDelayBin3;
- (unsigned int)nStatusUpdateDelayBin4;
- (unsigned int)nStatusUpdateDelayBin5;
- (unsigned int)nStatusUpdateDelayBin6;
- (unsigned int)nUnknownStatusUpdat;
- (unsigned int)nVehicular;
- (unsigned int)nVoice;
- (unsigned int)nWalking;
- (unsigned int)nWifiBadBcn;
- (unsigned int)nWifiBadLoad;
- (unsigned int)nWifiBadPER;
- (unsigned int)nWifiBadRSSI;
- (unsigned int)nWifiBadSNR;
- (unsigned int)nWifiBadTransportRTP;
- (unsigned int)nWifiBadTransportSymptom;
- (unsigned int)nWifiNotInit;
- (unsigned int)nWifiNotReady;
- (BOOL)readFrom:(id)arg1;
- (void)setCount:(unsigned int)arg1;
- (void)setHasCount:(BOOL)arg1;
- (void)setHasNCallActive:(BOOL)arg1;
- (void)setHasNCallIdle:(BOOL)arg1;
- (void)setHasNData:(BOOL)arg1;
- (void)setHasNNegativeStatusUpdate:(BOOL)arg1;
- (void)setHasNPositiveStatusUpdate:(BOOL)arg1;
- (void)setHasNRunning:(BOOL)arg1;
- (void)setHasNStationary:(BOOL)arg1;
- (void)setHasNStatusUpdateDelayBin1:(BOOL)arg1;
- (void)setHasNStatusUpdateDelayBin2:(BOOL)arg1;
- (void)setHasNStatusUpdateDelayBin3:(BOOL)arg1;
- (void)setHasNStatusUpdateDelayBin4:(BOOL)arg1;
- (void)setHasNStatusUpdateDelayBin5:(BOOL)arg1;
- (void)setHasNStatusUpdateDelayBin6:(BOOL)arg1;
- (void)setHasNUnknownStatusUpdat:(BOOL)arg1;
- (void)setHasNVehicular:(BOOL)arg1;
- (void)setHasNVoice:(BOOL)arg1;
- (void)setHasNWalking:(BOOL)arg1;
- (void)setHasNWifiBadBcn:(BOOL)arg1;
- (void)setHasNWifiBadLoad:(BOOL)arg1;
- (void)setHasNWifiBadPER:(BOOL)arg1;
- (void)setHasNWifiBadRSSI:(BOOL)arg1;
- (void)setHasNWifiBadSNR:(BOOL)arg1;
- (void)setHasNWifiBadTransportRTP:(BOOL)arg1;
- (void)setHasNWifiBadTransportSymptom:(BOOL)arg1;
- (void)setHasNWifiNotInit:(BOOL)arg1;
- (void)setHasNWifiNotReady:(BOOL)arg1;
- (void)setHasTimestamp:(BOOL)arg1;
- (void)setNCallActive:(unsigned int)arg1;
- (void)setNCallIdle:(unsigned int)arg1;
- (void)setNData:(unsigned int)arg1;
- (void)setNNegativeStatusUpdate:(unsigned int)arg1;
- (void)setNPositiveStatusUpdate:(unsigned int)arg1;
- (void)setNRunning:(unsigned int)arg1;
- (void)setNStationary:(unsigned int)arg1;
- (void)setNStatusUpdateDelayBin1:(unsigned int)arg1;
- (void)setNStatusUpdateDelayBin2:(unsigned int)arg1;
- (void)setNStatusUpdateDelayBin3:(unsigned int)arg1;
- (void)setNStatusUpdateDelayBin4:(unsigned int)arg1;
- (void)setNStatusUpdateDelayBin5:(unsigned int)arg1;
- (void)setNStatusUpdateDelayBin6:(unsigned int)arg1;
- (void)setNUnknownStatusUpdat:(unsigned int)arg1;
- (void)setNVehicular:(unsigned int)arg1;
- (void)setNVoice:(unsigned int)arg1;
- (void)setNWalking:(unsigned int)arg1;
- (void)setNWifiBadBcn:(unsigned int)arg1;
- (void)setNWifiBadLoad:(unsigned int)arg1;
- (void)setNWifiBadPER:(unsigned int)arg1;
- (void)setNWifiBadRSSI:(unsigned int)arg1;
- (void)setNWifiBadSNR:(unsigned int)arg1;
- (void)setNWifiBadTransportRTP:(unsigned int)arg1;
- (void)setNWifiBadTransportSymptom:(unsigned int)arg1;
- (void)setNWifiNotInit:(unsigned int)arg1;
- (void)setNWifiNotReady:(unsigned int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
