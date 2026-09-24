
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_019ef878(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  char *pcVar7;
  undefined4 uVar8;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_20;
  int aiStack_1c [2];
  
  pcVar7 = (char *)(_UNK_019ef9fc + 0x19ef890);
  if (*pcVar7 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_019efa00 + 0x19ef8a4));
    func_0x01438628(*(undefined4 *)(_UNK_019efa04 + 0x19ef8b0));
    func_0x01438628(*(undefined4 *)(_UNK_019efa08 + 0x19ef8bc));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x2874,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x2874,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x024f56c0(&uStack_50,0,param_2,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01523a6c(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01523a6c(&uStack_38,param_1,0);
    func_0x01523a2c(&uStack_38,param_2,0);
    iVar6 = *(int *)(iVar1 + 8);
    uVar8 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    uVar5 = 3;
    if (iVar1 == 0) {
      uVar5 = 2;
    }
    func_0x024f56d0(iVar6,uVar8,&uStack_38,uVar5,0,0);
    return;
  }
  iVar1 = FUN_019edb58(param_1);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = *(int *)(iVar1 + 0x2c);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = func_0x024f0540(iVar1,param_2,**(undefined4 **)(_UNK_019efa0c + 0x19ef944));
  iVar6 = FUN_019edb58(param_1);
  if (iVar6 == 0) {
    func_0x014388e4();
  }
  iVar6 = *(int *)(iVar6 + 0x2c);
  if (iVar6 == 0) {
    func_0x014388e4();
    if (iVar1 == 0) goto LAB_019ef9dc;
    iVar1 = func_0x024f05d4(0,param_2,**(undefined4 **)(_UNK_019efa10 + 0x19ef9b8));
    func_0x014388e4();
  }
  else {
    if (iVar1 == 0) {
LAB_019ef9dc:
      iVar1 = 1;
      piVar2 = *(int **)(_UNK_019efa1c + 0x19ef9f0);
      goto LAB_019ef9ec;
    }
    iVar1 = func_0x024f05d4(iVar6,param_2,**(undefined4 **)(_UNK_019efa14 + 0x19ef98c));
  }
  iVar1 = iVar1 + 1;
  piVar2 = *(int **)(_UNK_019efa18 + 0x19ef9dc);
LAB_019ef9ec:
  iVar4 = *piVar2;
  aiStack_1c[0] = iVar1;
  if (iVar6 == 0) {
    func_0x024f83d4();
  }
  iVar3 = func_0x046c26fc(iVar6,param_2,
                          *(undefined4 *)(*(int *)(*(int *)(iVar4 + 0x10) + 0x60) + 0x38));
  if (iVar3 != 0) {
    if (iVar6 == 0) {
      func_0x024f83d4();
    }
    uStack_20 = func_0x046c23f8(iVar6,param_2,
                                *(undefined4 *)(*(int *)(*(int *)(iVar4 + 0x10) + 0x60) + 0x34));
    uVar8 = func_0x024f83c4(*(undefined4 *)(*(int *)(*(int *)(iVar4 + 0x10) + 0x60) + 0x20),
                            &uStack_20);
    iVar3 = func_0x0515c410(aiStack_1c,uVar8,
                            *(undefined4 *)(*(int *)(*(int *)(iVar4 + 0x10) + 0x60) + 0x3c));
    iVar1 = aiStack_1c[0];
    if (iVar3 != 0) {
      return;
    }
  }
  if (iVar6 == 0) {
    func_0x024f83d4();
  }
  func_0x046c2488(iVar6,param_2,iVar1,
                  *(undefined4 *)(*(int *)(*(int *)(iVar4 + 0x10) + 0x60) + 0x40));
  func_0x03b70bb0(iVar6,*(undefined4 *)(*(int *)(*(int *)(iVar4 + 0x10) + 0x60) + 0x28));
  return;
}

