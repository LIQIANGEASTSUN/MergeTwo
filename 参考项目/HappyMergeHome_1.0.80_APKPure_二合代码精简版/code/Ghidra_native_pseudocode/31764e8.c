
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_031864e8(int param_1)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  int iStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  int iStack_24;
  
  pcVar3 = (char *)(_UNK_03186834 + 0x3186500);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_03186838 + 0x3186514));
    func_0x01438628(*(undefined4 *)(_UNK_0318683c + 0x3186520));
    func_0x01438628(*(undefined4 *)(_UNK_03186840 + 0x318652c));
    func_0x01438628(*(undefined4 *)(_UNK_03186844 + 0x3186538));
    func_0x01438628(*(undefined4 *)(_UNK_03186848 + 0x3186544));
    func_0x01438628(*(undefined4 *)(_UNK_0318684c + 0x3186550));
    func_0x01438628(*(undefined4 *)(_UNK_03186850 + 0x318655c));
    func_0x01438628(*(undefined4 *)(_UNK_03186854 + 0x3186568));
    func_0x01438628(*(undefined4 *)(_UNK_03186858 + 0x3186574));
    func_0x01438628(*(undefined4 *)(_UNK_0318685c + 0x3186580));
    func_0x01438628(*(undefined4 *)(_UNK_03186860 + 0x318658c));
    *pcVar3 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_24 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  iVar1 = func_0x02953fd4(0x7b76,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_03186864 + 0x31865f0) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_03186868 + 0x318660c));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x036c7bec(iVar1,**(undefined4 **)(_UNK_0318686c + 0x318662c));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = *(int *)(iVar1 + 8);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x03b72148(iVar1,0x10,**(undefined4 **)(_UNK_03186870 + 0x3186664));
    if (iVar1 != 0) {
      iVar4 = *(int *)(iVar1 + 0x10);
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      func_0x04cfe6f4(&uStack_40,iVar4,**(undefined4 **)(_UNK_03186874 + 0x318669c));
      uStack_30 = uStack_40;
      uStack_2c = uStack_3c;
      uStack_28 = uStack_38;
      iStack_24 = iStack_34;
      puVar6 = *(undefined4 **)(_UNK_03186878 + 0x31866b8);
      puVar7 = *(undefined4 **)(_UNK_0318687c + 0x31866c0);
      while (iVar2 = func_0x04878f14(&uStack_30,*puVar6), iVar4 = iStack_24, iVar2 != 0) {
        if (iStack_24 == 0) {
          func_0x014388e4();
        }
        if (0 < *(int *)(iVar4 + 8)) {
          iVar2 = FUN_0317e7f4(param_1);
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          iVar2 = *(int *)(iVar2 + 0x18);
          uVar5 = *(undefined4 *)(iVar4 + 8);
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          func_0x03b75ba0(iVar2,uVar5,*puVar7);
          *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 1;
        }
      }
      func_0x04878f10(&uStack_30,**(undefined4 **)(_UNK_03186880 + 0x3186744));
      iVar1 = *(int *)(iVar1 + 0x10);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      func_0x03b776fc(iVar1,**(undefined4 **)(_UNK_03186888 + 0x3186768));
      if (*(int *)(**(int **)(_UNK_0318688c + 0x318677c) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = FUN_0317d564();
      if (iVar1 != 0) {
        func_0x031a4db4(iVar1,0);
      }
    }
  }
  else {
    iVar1 = func_0x029540a4(0x7b76,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x02868e1c(iVar1,param_1,0);
  }
  return;
}

