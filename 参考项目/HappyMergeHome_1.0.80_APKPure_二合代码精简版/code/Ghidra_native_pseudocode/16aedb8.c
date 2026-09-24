
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_016bedb8(int param_1)

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
  
  pcVar4 = (char *)(_UNK_016bf12c + 0x16bedd0);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_016bf130 + 0x16bede4));
    func_0x01438628(*(undefined4 *)(_UNK_016bf134 + 0x16bedf0));
    func_0x01438628(*(undefined4 *)(_UNK_016bf138 + 0x16bedfc));
    func_0x01438628(*(undefined4 *)(_UNK_016bf13c + 0x16bee08));
    func_0x01438628(*(undefined4 *)(_UNK_016bf140 + 0x16bee14));
    func_0x01438628(*(undefined4 *)(_UNK_016bf144 + 0x16bee20));
    func_0x01438628(*(undefined4 *)(_UNK_016bf148 + 0x16bee2c));
    func_0x01438628(*(undefined4 *)(_UNK_016bf14c + 0x16bee38));
    func_0x01438628(*(undefined4 *)(_UNK_016bf150 + 0x16bee44));
    func_0x01438628(*(undefined4 *)(_UNK_016bf154 + 0x16bee50));
    func_0x01438628(*(undefined4 *)(_UNK_016bf158 + 0x16bee5c));
    *pcVar4 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_24 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  iVar1 = func_0x02953fd4(0x88f4,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_016bf15c + 0x16beec0) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_016bf160 + 0x16beedc));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x024f04cc(iVar1,**(undefined4 **)(_UNK_016bf164 + 0x16beefc));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar6 = *(int *)(iVar1 + 8);
    iVar1 = FUN_016b6be8(param_1);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = FUN_016be8d0(param_1,*(undefined4 *)(iVar1 + 0x74));
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x024f110c(iVar6,uVar2,**(undefined4 **)(_UNK_016bf168 + 0x16bef5c));
    if (iVar1 != 0) {
      iVar6 = *(int *)(iVar1 + 0x10);
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      func_0x0152da0c(&uStack_40,iVar6,**(undefined4 **)(_UNK_016bf16c + 0x16bef94));
      uStack_30 = uStack_40;
      uStack_2c = uStack_3c;
      uStack_28 = uStack_38;
      iStack_24 = iStack_34;
      puVar5 = *(undefined4 **)(_UNK_016bf170 + 0x16befb0);
      puVar7 = *(undefined4 **)(_UNK_016bf174 + 0x16befb8);
      while (iVar3 = func_0x015109ec(&uStack_30,*puVar5), iVar6 = iStack_24, iVar3 != 0) {
        if (iStack_24 == 0) {
          func_0x014388e4();
        }
        if (0 < *(int *)(iVar6 + 8)) {
          iVar3 = FUN_016b6be8(param_1);
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
      func_0x0152da2c(&uStack_30,**(undefined4 **)(_UNK_016bf178 + 0x16bf03c));
      iVar1 = *(int *)(iVar1 + 0x10);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      func_0x024f0708(iVar1,**(undefined4 **)(_UNK_016bf180 + 0x16bf060));
      if (*(int *)(**(int **)(_UNK_016bf184 + 0x16bf074) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = FUN_016b4854();
      if (iVar1 != 0) {
        func_0x016de5f4(iVar1,0);
      }
    }
  }
  else {
    iVar1 = func_0x029540a4(0x88f4,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x02868e1c(iVar1,param_1,0);
  }
  return;
}

