//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSTimer;

@interface LBSSystemCacheUpdater : NSObject
{
    unsigned long long m_locationTag;
    NSTimer *m_stopTimer;
    long long m_geoMode;
}

@property(nonatomic) long long m_geoMode; // @synthesize m_geoMode;
@property(retain, nonatomic) NSTimer *m_stopTimer; // @synthesize m_stopTimer;
@property(nonatomic) unsigned long long m_locationTag; // @synthesize m_locationTag;
- (void).cxx_destruct;
- (void)stop;
- (void)start;
- (void)dealloc;
- (id)init;

@end
