
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01cc59d8(undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 extraout_r1;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined8 uVar8;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pcVar4 = (char *)(_UNK_01cc5be8 + 0x1cc59f0);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01cc5bec + 0x1cc5a04));
    func_0x01438628(*(undefined4 *)(_UNK_01cc5bf0 + 0x1cc5a10));
    func_0x01438628(*(undefined4 *)(_UNK_01cc5bf4 + 0x1cc5a1c));
    func_0x01438628(*(undefined4 *)(_UNK_01cc5bf8 + 0x1cc5a28));
    func_0x01438628(*(undefined4 *)(_UNK_01cc5bfc + 0x1cc5a34));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x1a92,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x1a92,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    func_0x024f56c0(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01523a6c(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01523a6c(&uStack_30,param_1,0);
    iVar5 = *(int *)(iVar1 + 8);
    uVar6 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    uVar3 = 2;
    if (iVar1 == 0) {
      uVar3 = 1;
    }
    func_0x024f56d0(iVar5,uVar6,&uStack_30,uVar3,0,0);
    return;
  }
  iVar1 = FUN_01cc28c8(param_1);
  if (*(int *)(**(int **)(_UNK_01cc5c00 + 0x1cc5a9c) + 0x74) == 0) {
    func_0x014387a4();
  }
  puVar7 = *(undefined4 **)(_UNK_01cc5c04 + 0x1cc5ab8);
  iVar5 = func_0x014e9518(*puVar7);
  if (iVar5 == 0) {
    func_0x014388e4();
  }
  uVar8 = func_0x026ffbe0(iVar5,0);
  uVar3 = (undefined4)((ulonglong)uVar8 >> 0x20);
  uVar6 = uVar3;
  if (iVar1 == 0) {
    func_0x014388e4();
    uVar6 = extraout_r1;
  }
  uStack_28 = 0;
  func_0x026a7ea0(iVar1,uVar6,(int)uVar8,uVar3);
  iVar1 = FUN_01cc28c8(param_1);
  iVar5 = func_0x014e9518(*puVar7);
  if (iVar5 == 0) {
    func_0x014388e4();
  }
  uVar8 = func_0x026ffbe0(iVar5,0);
  if (*(int *)(**(int **)(_UNK_01cc5c08 + 0x1cc5b48) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar5 = func_0x014e9518(**(undefined4 **)(_UNK_01cc5c0c + 0x1cc5b64));
  if (iVar5 == 0) {
    func_0x014388e4();
  }
  iVar5 = *(int *)(iVar5 + 0x14);
  if (iVar5 == 0) {
    func_0x014388e4();
  }
  iVar5 = func_0x0152983c(iVar5,0,**(undefined4 **)(_UNK_01cc5c10 + 0x1cc5b98));
  if (iVar5 == 0) {
    func_0x014388e4();
  }
  iVar5 = *(int *)(iVar5 + 0x10);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uVar2 = iVar5 * 60000;
  uStack_28 = 0;
  func_0x026a7f70(iVar1,0,(uint)uVar8 + uVar2,
                  (int)((ulonglong)uVar8 >> 0x20) + ((int)uVar2 >> 0x1f) +
                  (uint)CARRY4((uint)uVar8,uVar2));
  return;
}

