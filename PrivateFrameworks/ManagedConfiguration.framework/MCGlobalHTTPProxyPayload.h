/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@class NSNumber, NSString;

@interface MCGlobalHTTPProxyPayload : MCPayload {
    NSString *_credentialUUID;
    BOOL _proxyCaptiveLoginAllowed;
    BOOL _proxyPACFallbackAllowed;
    NSString *_proxyPACURLString;
    NSString *_proxyPassword;
    NSString *_proxyServer;
    NSNumber *_proxyServerPort;
    int _proxyType;
    NSString *_proxyUsername;
}

@property(retain) NSString * credentialUUID;
@property BOOL proxyCaptiveLoginAllowed;
@property BOOL proxyPACFallbackAllowed;
@property(retain) NSString * proxyPACURLString;
@property(retain) NSString * proxyPassword;
@property(retain) NSString * proxyServer;
@property(retain) NSNumber * proxyServerPort;
@property int proxyType;
@property(retain) NSString * proxyUsername;

+ (id)localizedPluralForm;
+ (id)localizedSingularForm;
+ (id)typeStrings;

- (void).cxx_destruct;
- (id)credentialUUID;
- (id)description;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3;
- (id)installationWarnings;
- (id)payloadDescriptionKeyValueSections;
- (BOOL)proxyCaptiveLoginAllowed;
- (BOOL)proxyPACFallbackAllowed;
- (id)proxyPACURLString;
- (id)proxyPassword;
- (id)proxyServer;
- (id)proxyServerPort;
- (int)proxyType;
- (id)proxyUsername;
- (void)setCredentialUUID:(id)arg1;
- (void)setProxyCaptiveLoginAllowed:(BOOL)arg1;
- (void)setProxyPACFallbackAllowed:(BOOL)arg1;
- (void)setProxyPACURLString:(id)arg1;
- (void)setProxyPassword:(id)arg1;
- (void)setProxyServer:(id)arg1;
- (void)setProxyServerPort:(id)arg1;
- (void)setProxyType:(int)arg1;
- (void)setProxyUsername:(id)arg1;
- (id)stubDictionary;
- (id)subtitle1Description;
- (id)subtitle1Label;
- (id)subtitle2Description;
- (id)subtitle2Label;

@end
