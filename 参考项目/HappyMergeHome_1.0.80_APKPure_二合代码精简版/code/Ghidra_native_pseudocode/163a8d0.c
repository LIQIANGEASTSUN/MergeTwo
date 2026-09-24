
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0164a8d0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  int iStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  int iStack_24;
  
  pcVar4 = (char *)(_UNK_0164ac44 + 0x164a8e8);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0164ac48 + 0x164a8fc));
    func_0x01438628(*(undefined4 *)(_UNK_0164ac4c + 0x164a908));
    func_0x01438628(*(undefined4 *)(_UNK_0164ac50 + 0x164a914));
    func_0x01438628(*(undefined4 *)(_UNK_0164ac54 + 0x164a920));
    func_0x01438628(*(undefined4 *)(_UNK_0164ac58 + 0x164a92c));
    func_0x01438628(*(undefined4 *)(_UNK_0164ac5c + 0x164a938));
    func_0x01438628(*(undefined4 *)(_UNK_0164ac60 + 0x164a944));
    func_0x01438628(*(undefined4 *)(_UNK_0164ac64 + 0x164a950));
    func_0x01438628(*(undefined4 *)(_UNK_0164ac68 + 0x164a95c));
    func_0x01438628(*(undefined4 *)(_UNK_0164ac6c + 0x164a968));
    func_0x01438628(*(undefined4 *)(_UNK_0164ac70 + 0x164a974));
    *pcVar4 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_24 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  iVar1 = func_0x02953fd4(0x85f0,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_0164ac74 + 0x164a9d8) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_0164ac78 + 0x164a9f4));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x024f04cc(iVar1,**(undefined4 **)(_UNK_0164ac7c + 0x164aa14));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar6 = *(int *)(iVar1 + 8);
    iVar1 = FUN_01642704(param_1);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = FUN_0164a3e8(param_1,*(undefined4 *)(iVar1 + 0x74));
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x024f110c(iVar6,uVar2,**(undefined4 **)(_UNK_0164ac80 + 0x164aa74));
    if (iVar1 != 0) {
      iVar6 = *(int *)(iVar1 + 0x10);
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      func_0x0152da0c(&uStack_40,iVar6,**(undefined4 **)(_UNK_0164ac84 + 0x164aaac));
      uStack_30 = uStack_40;
      uStack_2c = uStack_3c;
      uStack_28 = uStack_38;
      iStack_24 = iStack_34;
      puVar5 = *(undefined4 **)(_UNK_0164ac88 + 0x164aac8);
      puVar7 = *(undefined4 **)(_UNK_0164ac8c + 0x164aad0);
      while (iVar3 = func_0x015109ec(&uStack_30,*puVar5), iVar6 = iStack_24, iVar3 != 0) {
        if (iStack_24 == 0) {
          func_0x014388e4();
        }
        if (0 < *(int *)(iVar6 + 8)) {
          iVar3 = FUN_01642704(param_1);
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          iVar3 = *(int *)(iVar3 + 0x18);
          uVar2 = *(undefined4 *)(iVar6 + 8);
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          func_0x024f05ac(iVar3,uVar2,*puVar7);
          *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 1;
        }
      }
      func_0x0152da2c(&uStack_30,**(undefined4 **)(_UNK_0164ac90 + 0x164ab54));
      iVar1 = *(int *)(iVar1 + 0x10);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      func_0x024f0708(iVar1,**(undefined4 **)(_UNK_0164ac98 + 0x164ab78));
      if (*(int *)(**(int **)(_UNK_0164ac9c + 0x164ab8c) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = FUN_01640370();
      if (iVar1 != 0) {
        func_0x0166ac18(iVar1,0);
      }
    }
  }
  else {
    iVar1 = func_0x029540a4(0x85f0,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x02868e1c(iVar1,param_1,0);
  }
  return;
}

