
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c32460(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  undefined4 uVar6;
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
  
  pcVar5 = (char *)(_UNK_02c32610 + 0x2c32478);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c32614 + 0x2c3248c));
    func_0x01438628(*(undefined4 *)(_UNK_02c32618 + 0x2c32498));
    func_0x01438628(*(undefined4 *)(_UNK_02c3261c + 0x2c324a4));
    func_0x01438628(*(undefined4 *)(_UNK_02c32620 + 0x2c324b0));
    func_0x01438628(*(undefined4 *)(_UNK_02c32624 + 0x2c324bc));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x4ff1,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x4ff1,0);
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
    return;
  }
  iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_02c32628 + 0x2c32518));
  func_0x02c47ce0(iVar1,0);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  *(int *)(iVar1 + 0xc) = param_1;
  func_0x014385cc((int *)(iVar1 + 0xc),param_1);
  iVar4 = *(int *)(param_1 + 0xdc);
  iVar2 = *(int *)(param_1 + 0x174) + 1;
  *(int *)(iVar1 + 8) = iVar2;
  *(int *)(param_1 + 0x174) = iVar2;
  if (iVar4 != 0) {
    iVar4 = func_0x014e94d8(iVar4,0);
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    func_0x014e94e8(iVar4,1,0);
    iVar4 = *(int *)(param_1 + 0xdc);
    if (iVar4 != 0) {
      uVar6 = func_0x014388d4(**(undefined4 **)(_UNK_02c3262c + 0x2c325a4));
      func_0x0152e3ec(uVar6,iVar1,**(undefined4 **)(_UNK_02c32630 + 0x2c325c4),0);
      if (*(int *)(**(int **)(_UNK_02c32634 + 0x2c325d8) + 0x74) == 0) {
        func_0x014387a4();
      }
      uStack_20 = 0;
      func_0x029aab7c(iVar4,**(undefined4 **)(_UNK_02c32638 + 0x2c325fc),uVar6,0x3f800000);
    }
  }
  return;
}

