//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface WCCardPkgMsgAcceptItem : NSObject
{
    unsigned int endTime;
    NSString *title;
    NSString *subTitle;
    NSString *cardId;
    NSString *cardExt;
}

@property(nonatomic) unsigned int endTime; // @synthesize endTime;
@property(retain, nonatomic) NSString *cardExt; // @synthesize cardExt;
@property(retain, nonatomic) NSString *cardId; // @synthesize cardId;
@property(retain, nonatomic) NSString *subTitle; // @synthesize subTitle;
@property(retain, nonatomic) NSString *title; // @synthesize title;
- (void).cxx_destruct;
- (_Bool)IsAcceptItemValid;
- (void)dealloc;

@end

