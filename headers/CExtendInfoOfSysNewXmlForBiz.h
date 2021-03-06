//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IMessageWrapForBizExt.h"
#import "IMsgExtendOperation.h"
#import "ISysNewXmlMsgExtendOperation.h"
#import "NSCopying.h"

@class CMessageWrap, NSMutableArray, NSMutableString, NSString;

@interface CExtendInfoOfSysNewXmlForBiz : NSObject <IMessageWrapForBizExt, IMsgExtendOperation, ISysNewXmlMsgExtendOperation, NSCopying>
{
    NSMutableString *m_showContent;
    NSMutableString *m_sessionShowContent;
    NSString *m_scene;
    NSMutableArray *m_arrMembers;
    NSString *m_qrCode;
    NSString *m_url;
    _Bool m_hasParsedForDisplay;
    CMessageWrap *m_refMessageWrap;
}

+ (void)CreateExtendInfoWithTypeForBiz:(unsigned int)arg1 retExtendInfo:(id *)arg2;
@property(retain, nonatomic) NSString *m_sessionShowContent; // @synthesize m_sessionShowContent;
@property(retain, nonatomic) NSString *m_url; // @synthesize m_url;
@property(retain, nonatomic) NSString *m_qrCode; // @synthesize m_qrCode;
@property(retain, nonatomic) NSMutableArray *m_arrMembers; // @synthesize m_arrMembers;
@property(retain, nonatomic) NSString *m_scene; // @synthesize m_scene;
@property(retain, nonatomic) NSString *m_showContent; // @synthesize m_showContent;
@property(nonatomic) CMessageWrap *m_refMessageWrap; // @synthesize m_refMessageWrap;
- (void).cxx_destruct;
- (id)GetDisplaySessionContent;
- (id)GetDisplayContent;
- (void)ChangeForDisplay;
- (struct XmlReaderNode_t *)parseNextSibling:(struct XmlReaderNode_t *)arg1;
- (struct XmlReaderNode_t *)parseFirstChild:(struct XmlReaderNode_t *)arg1;
- (void)parseLinkNode:(struct XmlReaderNode_t *)arg1;
- (void)parseTextNode:(struct XmlReaderNode_t *)arg1;
- (_Bool)isWebviewScene;
- (_Bool)isInvitationScene;
- (_Bool)isQRCodeScene;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

