//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

@class FTSBussinessResult, FTSDetailPageSearchTask;

@interface FTSDetailPageSearch : MMObject
{
    FTSDetailPageSearchTask *_searchTask;
    FTSBussinessResult *_bussinessResult;
    int _status;
}

@property(nonatomic) int status; // @synthesize status=_status;
@property(retain, nonatomic) FTSBussinessResult *bussinessResult; // @synthesize bussinessResult=_bussinessResult;
@property(retain, nonatomic) FTSDetailPageSearchTask *searchTask; // @synthesize searchTask=_searchTask;
- (void).cxx_destruct;
- (_Bool)isSearchDone;
- (id)init;

@end

