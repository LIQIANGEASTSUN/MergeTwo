/* Ghidra 12.1.2 native pseudocode; RVA 0x67429E4; Merger.Game.Views.Board.BoardQueueView.Dequeue; status ok */


/* WARNING: Possible PIC construction at 0x06842a5c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06841814: Changing call to branch */
/* WARNING: Possible PIC construction at 0x068418bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x067b2e94: Changing call to branch */
/* WARNING: Possible PIC construction at 0x03e90250: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x067b2e98) */
/* WARNING: Removing unreachable block (ram,0x068418c0) */
/* WARNING: Removing unreachable block (ram,0x068418c8) */
/* WARNING: Removing unreachable block (ram,0x068418ec) */
/* WARNING: Removing unreachable block (ram,0x068418f0) */
/* WARNING: Removing unreachable block (ram,0x06841908) */
/* WARNING: Removing unreachable block (ram,0x06841818) */
/* WARNING: Removing unreachable block (ram,0x06841820) */
/* WARNING: Removing unreachable block (ram,0x06841840) */
/* WARNING: Removing unreachable block (ram,0x06841868) */
/* WARNING: Removing unreachable block (ram,0x0684186c) */
/* WARNING: Removing unreachable block (ram,0x06841918) */
/* WARNING: Removing unreachable block (ram,0x06841880) */
/* WARNING: Removing unreachable block (ram,0x06841888) */
/* WARNING: Removing unreachable block (ram,0x06841898) */
/* WARNING: Removing unreachable block (ram,0x068418ac) */
/* WARNING: Removing unreachable block (ram,0x068418b0) */
/* WARNING: Removing unreachable block (ram,0x06842a60) */
/* WARNING: Removing unreachable block (ram,0x06842a7c) */
/* WARNING: Removing unreachable block (ram,0x06842a90) */
/* WARNING: Removing unreachable block (ram,0x06842b04) */
/* WARNING: Removing unreachable block (ram,0x06841750) */
/* WARNING: Removing unreachable block (ram,0x0684176c) */
/* WARNING: Removing unreachable block (ram,0x06841798) */
/* WARNING: Removing unreachable block (ram,0x068417a8) */
/* WARNING: Removing unreachable block (ram,0x068417e0) */
/* WARNING: Removing unreachable block (ram,0x068417e4) */
/* WARNING: Removing unreachable block (ram,0x068417b8) */
/* WARNING: Removing unreachable block (ram,0x068417c0) */
/* WARNING: Removing unreachable block (ram,0x068417cc) */
/* WARNING: Removing unreachable block (ram,0x068417f0) */
/* WARNING: Removing unreachable block (ram,0x06841928) */
/* WARNING: Removing unreachable block (ram,0x06841958) */
/* WARNING: Removing unreachable block (ram,0x06841974) */
/* WARNING: Removing unreachable block (ram,0x067b2e28) */
/* WARNING: Removing unreachable block (ram,0x067b2e44) */
/* WARNING: Removing unreachable block (ram,0x067b2e70) */
/* WARNING: Removing unreachable block (ram,0x067b2ea4) */
/* WARNING: Removing unreachable block (ram,0x067b2e7c) */
/* WARNING: Removing unreachable block (ram,0x03e90108) */
/* WARNING: Removing unreachable block (ram,0x03e90120) */
/* WARNING: Removing unreachable block (ram,0x03e90134) */
/* WARNING: Removing unreachable block (ram,0x03e9013c) */
/* WARNING: Removing unreachable block (ram,0x03e901b4) */
/* WARNING: Removing unreachable block (ram,0x03e901d4) */
/* WARNING: Removing unreachable block (ram,0x03e901e8) */
/* WARNING: Removing unreachable block (ram,0x03e901f0) */
/* WARNING: Removing unreachable block (ram,0x03e901f4) */
/* WARNING: Removing unreachable block (ram,0x03e90208) */
/* WARNING: Removing unreachable block (ram,0x03e90218) */
/* WARNING: Removing unreachable block (ram,0x03e90140) */
/* WARNING: Removing unreachable block (ram,0x03e90168) */
/* WARNING: Removing unreachable block (ram,0x03e90170) */
/* WARNING: Removing unreachable block (ram,0x03e901a8) */
/* WARNING: Removing unreachable block (ram,0x03e90184) */
/* WARNING: Removing unreachable block (ram,0x03e90190) */
/* WARNING: Removing unreachable block (ram,0x03e90194) */
/* WARNING: Removing unreachable block (ram,0x06841964) */
/* WARNING: Removing unreachable block (ram,0x06841808) */
/* WARNING: Removing unreachable block (ram,0x03e90254) */
/* WARNING: Removing unreachable block (ram,0x03e9022c) */
/* WARNING: Removing unreachable block (ram,0x03e90274) */
/* WARNING: Removing unreachable block (ram,0x03e90278) */
/* WARNING: Removing unreachable block (ram,0x03e90294) */
/* WARNING: Removing unreachable block (ram,0x03e9029c) */
/* WARNING: Removing unreachable block (ram,0x03e90500) */
/* WARNING: Removing unreachable block (ram,0x03e902a0) */
/* WARNING: Removing unreachable block (ram,0x03e902b0) */
/* WARNING: Removing unreachable block (ram,0x03e902bc) */
/* WARNING: Removing unreachable block (ram,0x03e902c8) */
/* WARNING: Removing unreachable block (ram,0x03e902d0) */
/* WARNING: Removing unreachable block (ram,0x03e902f8) */
/* WARNING: Removing unreachable block (ram,0x03e902dc) */
/* WARNING: Removing unreachable block (ram,0x03e902e8) */
/* WARNING: Removing unreachable block (ram,0x03e90304) */
/* WARNING: Removing unreachable block (ram,0x03e90504) */
/* WARNING: Removing unreachable block (ram,0x03e90544) */
/* WARNING: Removing unreachable block (ram,0x03e9054c) */
/* WARNING: Removing unreachable block (ram,0x03e907b0) */
/* WARNING: Removing unreachable block (ram,0x03e90550) */
/* WARNING: Removing unreachable block (ram,0x03e90560) */
/* WARNING: Removing unreachable block (ram,0x03e9056c) */
/* WARNING: Removing unreachable block (ram,0x03e90578) */
/* WARNING: Removing unreachable block (ram,0x03e90580) */
/* WARNING: Removing unreachable block (ram,0x03e905a8) */
/* WARNING: Removing unreachable block (ram,0x03e9058c) */
/* WARNING: Removing unreachable block (ram,0x03e90598) */
/* WARNING: Removing unreachable block (ram,0x03e905b4) */
/* WARNING: Removing unreachable block (ram,0x03e907b4) */
/* WARNING: Removing unreachable block (ram,0x03e90818) */
/* WARNING: Removing unreachable block (ram,0x03e90824) */
/* WARNING: Removing unreachable block (ram,0x03e90adc) */
/* WARNING: Removing unreachable block (ram,0x03e90844) */
/* WARNING: Removing unreachable block (ram,0x03e90850) */
/* WARNING: Removing unreachable block (ram,0x03e9085c) */
/* WARNING: Removing unreachable block (ram,0x03e90868) */
/* WARNING: Removing unreachable block (ram,0x03e90870) */
/* WARNING: Removing unreachable block (ram,0x03e90898) */
/* WARNING: Removing unreachable block (ram,0x03e9087c) */
/* WARNING: Removing unreachable block (ram,0x03e90888) */
/* WARNING: Removing unreachable block (ram,0x03e908a4) */
/* WARNING: Removing unreachable block (ram,0x03e90ae0) */
/* WARNING: Removing unreachable block (ram,0x03e908b4) */
/* WARNING: Removing unreachable block (ram,0x03e908c4) */
/* WARNING: Removing unreachable block (ram,0x03e908d0) */
/* WARNING: Removing unreachable block (ram,0x03e908dc) */
/* WARNING: Removing unreachable block (ram,0x03e908e4) */
/* WARNING: Removing unreachable block (ram,0x03e9090c) */
/* WARNING: Removing unreachable block (ram,0x03e908f0) */
/* WARNING: Removing unreachable block (ram,0x03e908fc) */
/* WARNING: Removing unreachable block (ram,0x03e90918) */
/* WARNING: Removing unreachable block (ram,0x03e90938) */
/* WARNING: Removing unreachable block (ram,0x03e90944) */
/* WARNING: Removing unreachable block (ram,0x03e90958) */
/* WARNING: Removing unreachable block (ram,0x03e90960) */
/* WARNING: Removing unreachable block (ram,0x03e90988) */
/* WARNING: Removing unreachable block (ram,0x03e9096c) */
/* WARNING: Removing unreachable block (ram,0x03e90978) */
/* WARNING: Removing unreachable block (ram,0x03e90994) */
/* WARNING: Removing unreachable block (ram,0x03e909c4) */
/* WARNING: Removing unreachable block (ram,0x03e909d0) */
/* WARNING: Removing unreachable block (ram,0x03e909dc) */
/* WARNING: Removing unreachable block (ram,0x03e909e4) */
/* WARNING: Removing unreachable block (ram,0x03e90a0c) */
/* WARNING: Removing unreachable block (ram,0x03e909f0) */
/* WARNING: Removing unreachable block (ram,0x03e909fc) */
/* WARNING: Removing unreachable block (ram,0x03e90a18) */
/* WARNING: Removing unreachable block (ram,0x03e90a38) */
/* WARNING: Removing unreachable block (ram,0x03e90a44) */
/* WARNING: Removing unreachable block (ram,0x03e90a50) */
/* WARNING: Removing unreachable block (ram,0x03e90a58) */
/* WARNING: Removing unreachable block (ram,0x03e90a80) */
/* WARNING: Removing unreachable block (ram,0x03e90a64) */
/* WARNING: Removing unreachable block (ram,0x03e90a70) */
/* WARNING: Removing unreachable block (ram,0x03e90a90) */
/* WARNING: Removing unreachable block (ram,0x03e90b08) */
/* WARNING: Removing unreachable block (ram,0x03e90b24) */
/* WARNING: Removing unreachable block (ram,0x03e90b2c) */
/* WARNING: Removing unreachable block (ram,0x03e90d8c) */
/* WARNING: Removing unreachable block (ram,0x03e90b30) */
/* WARNING: Removing unreachable block (ram,0x03e90b40) */
/* WARNING: Removing unreachable block (ram,0x03e90b4c) */
/* WARNING: Removing unreachable block (ram,0x03e90b58) */
/* WARNING: Removing unreachable block (ram,0x03e90b60) */
/* WARNING: Removing unreachable block (ram,0x03e90b88) */
/* WARNING: Removing unreachable block (ram,0x03e90b6c) */
/* WARNING: Removing unreachable block (ram,0x03e90b78) */
/* WARNING: Removing unreachable block (ram,0x03e90b94) */
/* WARNING: Removing unreachable block (ram,0x03e90d90) */
/* WARNING: Removing unreachable block (ram,0x03e90e04) */
/* WARNING: Removing unreachable block (ram,0x03e90e10) */
/* WARNING: Removing unreachable block (ram,0x03e910a8) */
/* WARNING: Removing unreachable block (ram,0x03e90e30) */
/* WARNING: Removing unreachable block (ram,0x03e90e3c) */
/* WARNING: Removing unreachable block (ram,0x03e90e48) */
/* WARNING: Removing unreachable block (ram,0x03e90e54) */
/* WARNING: Removing unreachable block (ram,0x03e90e5c) */
/* WARNING: Removing unreachable block (ram,0x03e90e84) */
/* WARNING: Removing unreachable block (ram,0x03e90e68) */
/* WARNING: Removing unreachable block (ram,0x03e90e74) */
/* WARNING: Removing unreachable block (ram,0x03e90e90) */
/* WARNING: Removing unreachable block (ram,0x03e910ac) */
/* WARNING: Removing unreachable block (ram,0x03e90ea0) */
/* WARNING: Removing unreachable block (ram,0x03e90eb0) */
/* WARNING: Removing unreachable block (ram,0x03e90ebc) */
/* WARNING: Removing unreachable block (ram,0x03e90ec8) */
/* WARNING: Removing unreachable block (ram,0x03e90ed0) */
/* WARNING: Removing unreachable block (ram,0x03e90ef8) */
/* WARNING: Removing unreachable block (ram,0x03e90edc) */
/* WARNING: Removing unreachable block (ram,0x03e90ee8) */
/* WARNING: Removing unreachable block (ram,0x03e90f04) */
/* WARNING: Removing unreachable block (ram,0x03e90f68) */
/* WARNING: Removing unreachable block (ram,0x03e90f74) */
/* WARNING: Removing unreachable block (ram,0x03e90f80) */
/* WARNING: Removing unreachable block (ram,0x03e90f8c) */
/* WARNING: Removing unreachable block (ram,0x03e90f94) */
/* WARNING: Removing unreachable block (ram,0x03e90fbc) */
/* WARNING: Removing unreachable block (ram,0x03e90fa0) */
/* WARNING: Removing unreachable block (ram,0x03e90fac) */
/* WARNING: Removing unreachable block (ram,0x03e90fc8) */
/* WARNING: Removing unreachable block (ram,0x03e90ff8) */
/* WARNING: Removing unreachable block (ram,0x03e91004) */
/* WARNING: Removing unreachable block (ram,0x03e91014) */
/* WARNING: Removing unreachable block (ram,0x03e9101c) */
/* WARNING: Removing unreachable block (ram,0x03e91028) */
/* WARNING: Removing unreachable block (ram,0x03e90f1c) */
/* WARNING: Removing unreachable block (ram,0x03e90f28) */
/* WARNING: Removing unreachable block (ram,0x03e90f34) */
/* WARNING: Removing unreachable block (ram,0x03e90f44) */
/* WARNING: Removing unreachable block (ram,0x03e90f4c) */
/* WARNING: Removing unreachable block (ram,0x03e91044) */
/* WARNING: Removing unreachable block (ram,0x03e90f58) */
/* WARNING: Removing unreachable block (ram,0x03e90f64) */
/* WARNING: Removing unreachable block (ram,0x03e91034) */
/* WARNING: Removing unreachable block (ram,0x03e91050) */
/* WARNING: Removing unreachable block (ram,0x03e910e8) */
/* WARNING: Removing unreachable block (ram,0x03e91128) */
/* WARNING: Removing unreachable block (ram,0x03e91134) */
/* WARNING: Removing unreachable block (ram,0x03e91264) */
/* WARNING: Removing unreachable block (ram,0x03e91170) */
/* WARNING: Removing unreachable block (ram,0x03e9117c) */
/* WARNING: Removing unreachable block (ram,0x03e91188) */
/* WARNING: Removing unreachable block (ram,0x03e91194) */
/* WARNING: Removing unreachable block (ram,0x03e9119c) */
/* WARNING: Removing unreachable block (ram,0x03e911c4) */
/* WARNING: Removing unreachable block (ram,0x03e911a8) */
/* WARNING: Removing unreachable block (ram,0x03e911b4) */
/* WARNING: Removing unreachable block (ram,0x03e911d0) */
/* WARNING: Removing unreachable block (ram,0x03e91208) */
/* WARNING: Removing unreachable block (ram,0x03e911e0) */
/* WARNING: Removing unreachable block (ram,0x03e91228) */
/* WARNING: Removing unreachable block (ram,0x03e91268) */
/* WARNING: Removing unreachable block (ram,0x03e91284) */
/* WARNING: Removing unreachable block (ram,0x03e91298) */
/* WARNING: Removing unreachable block (ram,0x03e912a0) */
/* WARNING: Removing unreachable block (ram,0x03e912b4) */
/* WARNING: Removing unreachable block (ram,0x03e912b8) */
/* WARNING: Removing unreachable block (ram,0x03e3cb54) */
/* WARNING: Removing unreachable block (ram,0x03e3cb70) */
/* WARNING: Removing unreachable block (ram,0x03e3cb90) */
/* WARNING: Removing unreachable block (ram,0x03e3cb98) */
/* WARNING: Removing unreachable block (ram,0x03e3cbac) */
/* WARNING: Removing unreachable block (ram,0x03e3cbb0) */
/* WARNING: Removing unreachable block (ram,0x03e3cbe8) */
/* WARNING: Removing unreachable block (ram,0x03e3cbf4) */
/* WARNING: Removing unreachable block (ram,0x03e3cbf8) */
/* WARNING: Removing unreachable block (ram,0x03e3cc0c) */
/* WARNING: Removing unreachable block (ram,0x03e3cc18) */
/* WARNING: Removing unreachable block (ram,0x03e3cc1c) */
/* WARNING: Removing unreachable block (ram,0x03e3cc44) */
/* WARNING: Removing unreachable block (ram,0x03e3cca4) */
/* WARNING: Removing unreachable block (ram,0x03e3ccc4) */
/* WARNING: Removing unreachable block (ram,0x03e3cccc) */
/* WARNING: Removing unreachable block (ram,0x03e3cce0) */
/* WARNING: Removing unreachable block (ram,0x03e3cce4) */
/* WARNING: Removing unreachable block (ram,0x03e3cd24) */
/* WARNING: Removing unreachable block (ram,0x03e3cd30) */
/* WARNING: Removing unreachable block (ram,0x03e3cd34) */
/* WARNING: Removing unreachable block (ram,0x03e3cd48) */
/* WARNING: Removing unreachable block (ram,0x03e3cd54) */
/* WARNING: Removing unreachable block (ram,0x03e3cd58) */
/* WARNING: Removing unreachable block (ram,0x03e3cd80) */
/* WARNING: Removing unreachable block (ram,0x03e3cdd8) */
/* WARNING: Removing unreachable block (ram,0x03e3cdec) */
/* WARNING: Removing unreachable block (ram,0x03e3cdf4) */
/* WARNING: Removing unreachable block (ram,0x03e3ce08) */
/* WARNING: Removing unreachable block (ram,0x03e3ce0c) */
/* WARNING: Removing unreachable block (ram,0x03e3ce2c) */
/* WARNING: Removing unreachable block (ram,0x03e3ce50) */
/* WARNING: Removing unreachable block (ram,0x03e3ce64) */
/* WARNING: Removing unreachable block (ram,0x03e3ce6c) */
/* WARNING: Removing unreachable block (ram,0x03e3ce80) */
/* WARNING: Removing unreachable block (ram,0x03e3ce84) */
/* WARNING: Removing unreachable block (ram,0x03e3ceac) */
/* WARNING: Removing unreachable block (ram,0x03e3ceb8) */
/* WARNING: Removing unreachable block (ram,0x03e3cebc) */
/* WARNING: Removing unreachable block (ram,0x03e3cecc) */
/* WARNING: Removing unreachable block (ram,0x03e3ced8) */
/* WARNING: Removing unreachable block (ram,0x03e3cedc) */
/* WARNING: Removing unreachable block (ram,0x03e3cd6c) */
/* WARNING: Removing unreachable block (ram,0x03e3cc30) */
/* WARNING: Removing unreachable block (ram,0x03e91248) */
/* WARNING: Removing unreachable block (ram,0x03e91090) */
/* WARNING: Removing unreachable block (ram,0x03e90ba4) */
/* WARNING: Removing unreachable block (ram,0x03e90bb4) */
/* WARNING: Removing unreachable block (ram,0x03e90bc0) */
/* WARNING: Removing unreachable block (ram,0x03e90bcc) */
/* WARNING: Removing unreachable block (ram,0x03e90bd4) */
/* WARNING: Removing unreachable block (ram,0x03e90bfc) */
/* WARNING: Removing unreachable block (ram,0x03e90be0) */
/* WARNING: Removing unreachable block (ram,0x03e90bec) */
/* WARNING: Removing unreachable block (ram,0x03e90c08) */
/* WARNING: Removing unreachable block (ram,0x03e90c74) */
/* WARNING: Removing unreachable block (ram,0x03e90c80) */
/* WARNING: Removing unreachable block (ram,0x03e90c8c) */
/* WARNING: Removing unreachable block (ram,0x03e90c98) */
/* WARNING: Removing unreachable block (ram,0x03e90ca0) */
/* WARNING: Removing unreachable block (ram,0x03e90ce4) */
/* WARNING: Removing unreachable block (ram,0x03e90cac) */
/* WARNING: Removing unreachable block (ram,0x03e90cb8) */
/* WARNING: Removing unreachable block (ram,0x03e90cf0) */
/* WARNING: Removing unreachable block (ram,0x03e90d20) */
/* WARNING: Removing unreachable block (ram,0x03e90d2c) */
/* WARNING: Removing unreachable block (ram,0x03e90d38) */
/* WARNING: Removing unreachable block (ram,0x03e90d40) */
/* WARNING: Removing unreachable block (ram,0x03e90d68) */
/* WARNING: Removing unreachable block (ram,0x03e90d4c) */
/* WARNING: Removing unreachable block (ram,0x03e90d58) */
/* WARNING: Removing unreachable block (ram,0x03e90d74) */
/* WARNING: Removing unreachable block (ram,0x03e90c20) */
/* WARNING: Removing unreachable block (ram,0x03e90c2c) */
/* WARNING: Removing unreachable block (ram,0x03e90c38) */
/* WARNING: Removing unreachable block (ram,0x03e90c44) */
/* WARNING: Removing unreachable block (ram,0x03e90c4c) */
/* WARNING: Removing unreachable block (ram,0x03e90cc8) */
/* WARNING: Removing unreachable block (ram,0x03e90c58) */
/* WARNING: Removing unreachable block (ram,0x03e90c64) */
/* WARNING: Removing unreachable block (ram,0x03e90cd4) */
/* WARNING: Removing unreachable block (ram,0x03e90d80) */
/* WARNING: Removing unreachable block (ram,0x03e90ac0) */
/* WARNING: Removing unreachable block (ram,0x03e905c4) */
/* WARNING: Removing unreachable block (ram,0x03e905d4) */
/* WARNING: Removing unreachable block (ram,0x03e905e0) */
/* WARNING: Removing unreachable block (ram,0x03e905ec) */
/* WARNING: Removing unreachable block (ram,0x03e905f4) */
/* WARNING: Removing unreachable block (ram,0x03e9061c) */
/* WARNING: Removing unreachable block (ram,0x03e90600) */
/* WARNING: Removing unreachable block (ram,0x03e9060c) */
/* WARNING: Removing unreachable block (ram,0x03e90628) */
/* WARNING: Removing unreachable block (ram,0x03e90648) */
/* WARNING: Removing unreachable block (ram,0x03e90654) */
/* WARNING: Removing unreachable block (ram,0x03e90664) */
/* WARNING: Removing unreachable block (ram,0x03e9066c) */
/* WARNING: Removing unreachable block (ram,0x03e90694) */
/* WARNING: Removing unreachable block (ram,0x03e90678) */
/* WARNING: Removing unreachable block (ram,0x03e90684) */
/* WARNING: Removing unreachable block (ram,0x03e906a0) */
/* WARNING: Removing unreachable block (ram,0x03e906c4) */
/* WARNING: Removing unreachable block (ram,0x03e906d0) */
/* WARNING: Removing unreachable block (ram,0x03e906dc) */
/* WARNING: Removing unreachable block (ram,0x03e906e4) */
/* WARNING: Removing unreachable block (ram,0x03e9070c) */
/* WARNING: Removing unreachable block (ram,0x03e906f0) */
/* WARNING: Removing unreachable block (ram,0x03e906fc) */
/* WARNING: Removing unreachable block (ram,0x03e90718) */
/* WARNING: Removing unreachable block (ram,0x03e90738) */
/* WARNING: Removing unreachable block (ram,0x03e90744) */
/* WARNING: Removing unreachable block (ram,0x03e90750) */
/* WARNING: Removing unreachable block (ram,0x03e90758) */
/* WARNING: Removing unreachable block (ram,0x03e90780) */
/* WARNING: Removing unreachable block (ram,0x03e90764) */
/* WARNING: Removing unreachable block (ram,0x03e90770) */
/* WARNING: Removing unreachable block (ram,0x03e90790) */
/* WARNING: Removing unreachable block (ram,0x03e90314) */
/* WARNING: Removing unreachable block (ram,0x03e90324) */
/* WARNING: Removing unreachable block (ram,0x03e90330) */
/* WARNING: Removing unreachable block (ram,0x03e9033c) */
/* WARNING: Removing unreachable block (ram,0x03e90344) */
/* WARNING: Removing unreachable block (ram,0x03e9036c) */
/* WARNING: Removing unreachable block (ram,0x03e90350) */
/* WARNING: Removing unreachable block (ram,0x03e9035c) */
/* WARNING: Removing unreachable block (ram,0x03e90378) */
/* WARNING: Removing unreachable block (ram,0x03e90398) */
/* WARNING: Removing unreachable block (ram,0x03e903a4) */
/* WARNING: Removing unreachable block (ram,0x03e903b4) */
/* WARNING: Removing unreachable block (ram,0x03e903bc) */
/* WARNING: Removing unreachable block (ram,0x03e903e4) */
/* WARNING: Removing unreachable block (ram,0x03e903c8) */
/* WARNING: Removing unreachable block (ram,0x03e903d4) */
/* WARNING: Removing unreachable block (ram,0x03e903f0) */
/* WARNING: Removing unreachable block (ram,0x03e90414) */
/* WARNING: Removing unreachable block (ram,0x03e90420) */
/* WARNING: Removing unreachable block (ram,0x03e9042c) */
/* WARNING: Removing unreachable block (ram,0x03e90434) */
/* WARNING: Removing unreachable block (ram,0x03e9045c) */
/* WARNING: Removing unreachable block (ram,0x03e90440) */
/* WARNING: Removing unreachable block (ram,0x03e9044c) */
/* WARNING: Removing unreachable block (ram,0x03e90468) */
/* WARNING: Removing unreachable block (ram,0x03e90488) */
/* WARNING: Removing unreachable block (ram,0x03e90494) */
/* WARNING: Removing unreachable block (ram,0x03e904a0) */
/* WARNING: Removing unreachable block (ram,0x03e904a8) */
/* WARNING: Removing unreachable block (ram,0x03e904d0) */
/* WARNING: Removing unreachable block (ram,0x03e904b4) */
/* WARNING: Removing unreachable block (ram,0x03e904c0) */
/* WARNING: Removing unreachable block (ram,0x03e904e0) */
/* WARNING: Removing unreachable block (ram,0x03e90234) */
/* WARNING: Removing unreachable block (ram,0x03e90244) */
/* WARNING: Removing unreachable block (ram,0x03e90248) */
/* WARNING: Removing unreachable block (ram,0x06fe41c8) */
/* WARNING: Removing unreachable block (ram,0x06fe41e8) */
/* WARNING: Removing unreachable block (ram,0x06fe41fc) */
/* WARNING: Removing unreachable block (ram,0x06fe4208) */
/* WARNING: Removing unreachable block (ram,0x06fe420c) */
/* WARNING: Removing unreachable block (ram,0x06fe4218) */
/* WARNING: Removing unreachable block (ram,0x06fe422c) */
/* WARNING: Removing unreachable block (ram,0x03e90264) */

void Merger_Game_Views_Board_BoardQueueView__Dequeue(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  
  if ((bRam0000000007e28a68 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0780df70);
    func_0x03280a18(PTR_DAT_0780df78);
    func_0x03280a18(PTR_DAT_0780ded8);
    bRam0000000007e28a68 = 1;
  }
  *(undefined4 *)(param_1 + 0x80) = 0;
  if ((*(long *)(param_1 + 0x58) != 0) &&
     (lVar1 = func_0x06fdbed0(*(long *)(param_1 + 0x58),0), lVar1 != 0)) {
    if (pcRam0000000007e2fbf0 == (code *)0x0) {
      pcRam0000000007e2fbf0 = (code *)func_0x032809dc(&UNK_017b3eb2);
    }
                    /* WARNING: Could not recover jumptable at 0x06fdf2ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000007e2fbf0)(lVar1,0);
    return;
  }
  lVar1 = func_0x03280cac();
  if ((bRam0000000007e28a6a & 1) == 0) {
    func_0x03280a18(PTR_DAT_0780ded8);
    bRam0000000007e28a6a = 1;
  }
  if (*(long *)(lVar1 + 0x38) != 0) {
    plVar3 = *(long **)(lVar1 + 0x28);
    uVar2 = func_0x069b6578(*(long *)(lVar1 + 0x38),0);
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 0x578))(plVar3,*(undefined8 *)(*plVar3 + 0x580),0);
                    /* WARNING: Could not recover jumptable at 0x06212af8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x588))(plVar3,uVar2,*(undefined8 *)(*plVar3 + 0x590));
      return;
    }
  }
  lVar1 = func_0x03280cac();
  *(undefined1 *)(lVar1 + 0x84) = 1;
  return;
}

