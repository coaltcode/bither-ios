//
//  DialogHDSendConfirm.h
//  bither-ios
//
//  Copyright 2014 http://Bither.net
//
//  Licensed under the Apache License, Version 2.0 (the "License");
//  you may not use this file except in compliance with the License.
//  You may obtain a copy of the License at
//
//    http://www.apache.org/licenses/LICENSE-2.0
//
//  Unless required by applicable law or agreed to in writing, software
//  distributed under the License is distributed on an "AS IS" BASIS,
//  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
//  See the License for the specific language governing permissions and
//  limitations under the License.
//
//  Created by songchenwen on 15/4/28.
//

#import <Foundation/Foundation.h>
#import "DialogSendTxConfirm.h"

@interface DialogHDSendTxConfirm : DialogCentered

- (instancetype)initWithTx:(BTTx *)tx to:(NSString *)toAddress delegate:(NSObject <DialogSendTxConfirmDelegate> *)delegate;

- (instancetype)initWithTx:(BTTx *)tx to:(NSString *)toAddress delegate:(NSObject <DialogSendTxConfirmDelegate> *)delegate unitName:(NSString *)unitName;

- (instancetype)initWithTxs:(NSArray *)txs to:(NSString *)toAddress delegate:(NSObject <DialogSendTxConfirmDelegate> *)delegate unitName:(NSString *)unitName;

@property(weak) NSObject <DialogSendTxConfirmDelegate> *delegate;

@end
