//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface MMResourceMgrUtility : NSObject
{
}

+ (id)appendRandomParamToUrlStr:(id)arg1;
+ (id)getVersionFromSyncUrl:(id)arg1;
+ (int)crc32WithData:(id)arg1;
+ (id)getConfigIdWithAppId:(id)arg1 domain:(id)arg2 packageId:(id)arg3;
+ (id)getWebCacheDomainListPath;
+ (id)getPrivateWebResDirFullPathForAppId:(id)arg1;
+ (id)getPrivateAsyncWebResFileSubPath:(id)arg1 domain:(id)arg2 packageId:(id)arg3;
+ (id)getPrivateAsynWebResFilePath:(id)arg1;
+ (id)getPrivateSyncWebResFilePath:(id)arg1;
+ (id)getPrivateSyncWebResFileSubPath:(id)arg1 domain:(id)arg2 packageId:(id)arg3;
+ (id)getPrivateShareWebResFileSubPath:(id)arg1;
+ (id)getPrivateShareWebResFilePath:(id)arg1;
+ (id)getPrivateWebResourceDir;
+ (id)getPublicWebResFilePath:(id)arg1;
+ (id)getPublicWebResFileSubPath;
+ (id)getWebCacheDBPath;
+ (void)createDirIfNotExist:(id)arg1;
+ (id)getFullDir:(id)arg1 pathComponents:(id)arg2;
+ (id)getPublicWebResourceDir;
+ (_Bool)isPublicWebRes:(id)arg1;
+ (unsigned long long)pageByteAlign:(unsigned long long)arg1 alignment:(unsigned long long)arg2;
+ (int)memoryPageSize;
+ (id)getMd5FromStr:(id)arg1 deleteUrlScheme:(_Bool)arg2;
+ (id)getFullUrlWithPrefix:(id)arg1 relativeUrl:(id)arg2;
+ (id)getFullUrlWithScheme:(id)arg1 domain:(id)arg2 baseDir:(id)arg3 relativePath:(id)arg4;
+ (id)getFullUrlWithDomain:(id)arg1 baseDir:(id)arg2 relativePath:(id)arg3;
+ (id)getParamStr:(id)arg1;
+ (id)getUrlWithoutParam:(id)arg1;
+ (id)getResTmpPath:(id)arg1 version:(id)arg2;
+ (id)getResTmpDir;
+ (id)getBatchResTmpPath:(unsigned int)arg1 resUrl:(id)arg2;
+ (id)getResourceInfoDBPath;
+ (id)getTestResourcePath:(long long)arg1 WithSubResType:(unsigned int)arg2 WithEID:(unsigned int)arg3;
+ (id)getResourcePathOfLocalUsr:(long long)arg1 WithSubResType:(unsigned int)arg2;
+ (id)getResourcePath:(long long)arg1 WithSubResType:(unsigned int)arg2;
+ (id)getResourcePathOfLocalUsr:(long long)arg1;
+ (id)getResourcePath:(long long)arg1;
+ (id)getResourceDirOfLocalUsr:(long long)arg1;
+ (id)getResourceDir:(long long)arg1;
+ (id)getResourceRootDirOfLocalUsr;
+ (id)getResourceRootDir;
+ (id)getWebCacheRootDir;

@end

