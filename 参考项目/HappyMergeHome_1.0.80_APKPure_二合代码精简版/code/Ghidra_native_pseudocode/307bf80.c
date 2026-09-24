
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0308bf80(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  pcVar5 = (char *)(_UNK_0308c0e0 + 0x308bf94);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0308c0e4 + 0x308bfa8));
    func_0x01438628(*(undefined4 *)(_UNK_0308c0e8 + 0x308bfb4));
    func_0x01438628(*(undefined4 *)(_UNK_0308c0ec + 0x308bfc0));
    func_0x01438628(*(undefined4 *)(_UNK_0308c0f0 + 0x308bfcc));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x152a,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x152a,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x024f56c0(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = uStack_38;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01523a6c(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01523a6c(&uStack_30,param_1,0);
    iVar4 = *(int *)(iVar1 + 8);
    uVar6 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    uVar3 = 2;
    if (iVar1 == 0) {
      uVar3 = 1;
    }
    func_0x024f56d0(iVar4,uVar6,&uStack_30,uVar3,0,0);
    uVar6 = func_0x024f56f0(&uStack_30,0,0);
    return uVar6;
  }
  if (*(int *)(**(int **)(_UNK_0308c0f4 + 0x308c024) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_0308c0f8 + 0x308c040));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = *(int *)(iVar1 + 0x40);
  iVar4 = 0;
  puVar7 = *(undefined4 **)(_UNK_0308c0fc + 0x308c068);
  while( true ) {
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    if (*(int *)(iVar1 + 0xc) <= iVar4) break;
    iVar2 = func_0x04cfd760(iVar1,iVar4,*puVar7);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    if (*(int *)(iVar2 + 0x14) == 2) {
      iVar1 = func_0x04cfd760(iVar1,iVar4,*puVar7);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      return *(undefined4 *)(iVar1 + 0x18);
    }
    iVar4 = iVar4 + 1;
  }
  return 0;
}

