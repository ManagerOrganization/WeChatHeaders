//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MMSessionSetting, NSCache, NSMutableDictionary, WCDataBase, WCDataBaseTable;

@interface MMSessionDB : NSObject
{
    WCDataBase *m_db;
    WCDataBaseTable *m_table;
    NSMutableDictionary *m_sessionCache;
    MMSessionSetting *m_sessionSetting;
    NSCache *m_preLoadSessionCache;
}

- (void).cxx_destruct;
- (void)UpdateSessionFilePath:(id)arg1;
- (void)DeleteSessions:(id)arg1;
- (void)DeleteSessionByUserName:(id)arg1;
- (void)AddOrModifySessions:(id)arg1;
- (void)ModifySession:(id)arg1;
- (void)AddSession:(id)arg1;
- (void)FulFillSession:(id)arg1;
- (void)ASyncFulFillSession:(id)arg1;
- (void)CleanupPreLoadSessionCache;
- (void)FulFillSessions:(id)arg1;
- (void)SetSessionFailCount:(unsigned int)arg1;
- (unsigned int)GetSessionFailCount;
- (void)SetSessionVersion:(unsigned int)arg1;
- (unsigned int)GetSessionVersion;
- (void)ImportSessions:(id)arg1;
- (long long)GetSessionImportTime;
- (void)SetSessionImported;
- (void)saveSessionSetting;
- (void)tryLoadSessionSetting;
- (void)dbImportSessions:(id)arg1;
- (void)dbUpdateSessionFilePath:(id)arg1;
- (_Bool)dbDeleteSessions:(id)arg1;
- (_Bool)dbDeleteSession:(id)arg1;
- (_Bool)dbAddOrModifySessions:(id)arg1;
- (_Bool)dbAddOrModifySession:(id)arg1;
- (id)GetAllSession;
- (void)initDB;
- (id)init;

@end

