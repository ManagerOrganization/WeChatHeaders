//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "MMPackageDownloadMgrExt.h"

@class CountryCodeWrap, NSArray, NSDictionary, NSSet, NSString, Package;

@interface WCOutCountryCodeLogic : MMObject <MMPackageDownloadMgrExt>
{
    CountryCodeWrap *m_defaultCountryCodeWrap;
    unsigned int m_lastUpdateTime;
    NSString *m_countryCodeConfig;
    Package *m_downloadingPackage;
    NSString *m_curLanguage;
    NSSet *m_restrictionSet;
    NSArray *m_allCountryCodes;
    NSDictionary *m_countryCodesDic;
}

- (void).cxx_destruct;
- (void)onPackageDownloadFinish:(id)arg1 package:(id)arg2;
- (void)onPackageDownloadProcessUpdated:(id)arg1 downloadSize:(int)arg2 totalSize:(int)arg3;
- (void)onPackageListUpdated:(id)arg1;
- (void)onPackageNeedUpdate:(id)arg1 withPackIDs:(id)arg2;
- (void)configCountryCodeRestriction;
- (void)configData;
- (void)checkUpdate;
- (id)countryISOCodeForCountryCode:(id)arg1;
- (_Bool)isValidCountryCode:(id)arg1;
- (_Bool)isRestrictedCountryCode:(id)arg1;
- (id)getCountryCodeWrapsFromCountryCodeList:(id)arg1;
- (id)getAllCountryCodes;
@property(readonly, nonatomic) NSString *defaultCoutryCode;
- (id)getTopCountryCodeConfig;
- (id)init;
- (void)dealloc;

@end

