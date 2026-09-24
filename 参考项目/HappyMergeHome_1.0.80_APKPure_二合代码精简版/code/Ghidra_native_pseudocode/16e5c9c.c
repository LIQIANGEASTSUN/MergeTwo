
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_016f5c9c(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  char *pcVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  int iStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  
  pcVar4 = (char *)(_UNK_016f6028 + 0x16f5cb4);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_016f602c + 0x16f5cc8));
    func_0x01438628(*(undefined4 *)(_UNK_016f6030 + 0x16f5cd4));
    func_0x01438628(*(undefined4 *)(_UNK_016f6034 + 0x16f5ce0));
    func_0x01438628(*(undefined4 *)(_UNK_016f6038 + 0x16f5cec));
    func_0x01438628(*(undefined4 *)(_UNK_016f603c + 0x16f5cf8));
    func_0x01438628(*(undefined4 *)(_UNK_016f6040 + 0x16f5d04));
    func_0x01438628(*(undefined4 *)(_UNK_016f6044 + 0x16f5d10));
    func_0x01438628(*(undefined4 *)(_UNK_016f6048 + 0x16f5d1c));
    func_0x01438628(*(undefined4 *)(_UNK_016f604c + 0x16f5d28));
    func_0x01438628(*(undefined4 *)(_UNK_016f6050 + 0x16f5d34));
    func_0x01438628(*(undefined4 *)(_UNK_016f6054 + 0x16f5d40));
    *pcVar4 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_2c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  iVar1 = func_0x02953fd4(0x8a7a,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_016f6058 + 0x16f5da4) + 0x74) == 0) {
      func_0x014387a4();
    }
    puVar9 = *(undefined4 **)(_UNK_016f605c + 0x16f5dc0);
    iVar1 = func_0x014e9518(*puVar9);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x036c7bec(iVar1,**(undefined4 **)(_UNK_016f6060 + 0x16f5de0));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = *(int *)(iVar1 + 8);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x024f110c(iVar1,0x19,**(undefined4 **)(_UNK_016f6064 + 0x16f5e18));
    if (iVar1 != 0) {
      iVar5 = *(int *)(iVar1 + 0x10);
      if (iVar5 == 0) {
        func_0x014388e4();
      }
      func_0x0152da0c(&uStack_48,iVar5,**(undefined4 **)(_UNK_016f6068 + 0x16f5e50));
      uStack_38 = uStack_48;
      uStack_34 = uStack_44;
      uStack_30 = uStack_40;
      iStack_2c = iStack_3c;
      puVar7 = *(undefined4 **)(_UNK_016f606c + 0x16f5e6c);
      puVar8 = *(undefined4 **)(_UNK_016f6070 + 0x16f5e74);
      while (iVar2 = func_0x015109ec(&uStack_38,*puVar7), iVar5 = iStack_2c, iVar2 != 0) {
        if (iStack_2c == 0) {
          func_0x014388e4();
        }
        if (0 < *(int *)(iVar5 + 8)) {
          iVar2 = FUN_016ef2ac(param_1);
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          iVar2 = *(int *)(iVar2 + 0x18);
          uVar6 = *(undefined4 *)(iVar5 + 8);
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          func_0x024f05ac(iVar2,uVar6,*puVar8);
          *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 1;
        }
      }
      func_0x0152da2c(&uStack_38,**(undefined4 **)(_UNK_016f6074 + 0x16f5ef8));
      iVar1 = *(int *)(iVar1 + 0x10);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      func_0x024f0708(iVar1,**(undefined4 **)(_UNK_016f607c + 0x16f5f1c));
      piVar3 = *(int **)(_UNK_016f6084 + 0x16f5f44);
      if (*(int *)(**(int **)(_UNK_016f6080 + 0x16f5f30) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = FUN_016edd54();
      if (iVar1 != 0) {
        func_0x01705640(iVar1,0);
      }
      if (*(int *)(*piVar3 + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x014e9518(*puVar9);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      func_0x0268f6bc(iVar1,0);
    }
  }
  else {
    iVar1 = func_0x029540a4(0x8a7a,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x02868e1c(iVar1,param_1,0);
  }
  return;
}

