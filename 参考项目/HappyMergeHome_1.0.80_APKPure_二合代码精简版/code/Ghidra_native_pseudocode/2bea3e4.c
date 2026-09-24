
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02bfa3e4(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  int *piVar8;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pcVar4 = (char *)(_UNK_02bfa5b0 + 0x2bfa3fc);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02bfa5b4 + 0x2bfa410));
    func_0x01438628(*(undefined4 *)(_UNK_02bfa5b8 + 0x2bfa41c));
    func_0x01438628(*(undefined4 *)(_UNK_02bfa5bc + 0x2bfa428));
    *pcVar4 = '\x01';
  }
  uVar7 = 0;
  iVar1 = func_0x02953fd4(0x5ee4,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x5ee4,0);
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
  func_0x02bfa5c8(param_1);
  iVar1 = *(int *)(param_1 + 0x44);
  piVar8 = *(int **)(_UNK_02bfa5c0 + 0x2bfa498);
  while( true ) {
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    if ((int)*(uint *)(iVar1 + 0xc) <= (int)uVar7) break;
    if (*(uint *)(iVar1 + 0xc) <= uVar7) {
      func_0x014388e8();
    }
    iVar5 = *(int *)(iVar1 + 0x10 + uVar7 * 4);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    uVar6 = *(undefined4 *)(iVar5 + 0xc);
    if (*(int *)(*piVar8 + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar2 = func_0x024ef144(uVar6,0,0);
    if (iVar2 != 0) {
      iVar2 = *(int *)(iVar5 + 0xc);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      func_0x02c23a10(iVar2,0);
      iVar5 = *(int *)(iVar5 + 0xc);
      if (iVar5 == 0) {
        func_0x014388e4();
      }
      func_0x02c1c2ec(iVar5,0);
    }
    uVar7 = uVar7 + 1;
  }
  iVar1 = *(int *)(param_1 + 0x50);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar5 = *(int *)(iVar1 + 0xc);
  *(undefined4 *)(iVar1 + 0xc) = 0;
  *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
  if (0 < iVar5) {
    func_0x01523bec(*(undefined4 *)(iVar1 + 8),0,iVar5,0);
  }
  FUN_02bef6b4(param_1,0);
  uStack_28 = 0;
  func_0x024ef2a8(param_1,**(undefined4 **)(_UNK_02bfa5c4 + 0x2bfa59c),0x40800000,0x3f800000);
  return;
}

