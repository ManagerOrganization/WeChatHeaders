//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface BakChatUploadMessage : NSObject
{
    int m_bakChatUploadStatus;
    int m_bakChatUploadError;
    float m_progress;
    unsigned int m_totalCount;
    unsigned int m_currentCount;
}

@property(nonatomic) unsigned int m_totalCount; // @synthesize m_totalCount;
@property(nonatomic) float m_progress; // @synthesize m_progress;
@property(nonatomic) unsigned int m_currentCount; // @synthesize m_currentCount;
@property(nonatomic) int m_bakChatUploadStatus; // @synthesize m_bakChatUploadStatus;
@property(nonatomic) int m_bakChatUploadError; // @synthesize m_bakChatUploadError;

@end
