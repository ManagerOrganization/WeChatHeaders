//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CMMDB.h"

@interface CMMDB (DuplicateMessage)
- (unsigned int)GetCountOfDuplicateMessage:(const struct WCDBConditionBase *)arg1;
- (_Bool)DeleteDuplicateMessageWhere:(const struct WCDBConditionBase *)arg1;
- (_Bool)IsDuplicateMessageExistByServerId:(long long)arg1;
- (_Bool)InsertDuplicateMessage:(id)arg1 onProperty:(const vector_24c76cbd *)arg2;
@end
