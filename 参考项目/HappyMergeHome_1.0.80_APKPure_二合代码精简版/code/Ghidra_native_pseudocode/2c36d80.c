
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02c46d80(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  int iVar10;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar5 = (char *)(_UNK_02c46f2c + 0x2c46d98);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c46f30 + 0x2c46dac));
    func_0x01438628(*(undefined4 *)(_UNK_02c46f34 + 0x2c46db8));
    func_0x01438628(*(undefined4 *)(_UNK_02c46f38 + 0x2c46dc4));
    *pcVar5 = '\x01';
  }
  uVar2 = 0;
  if (*(int *)(param_1 + 8) == 1) {
    uVar4 = 0xffffffff;
  }
  else {
    if (*(int *)(param_1 + 8) != 0) {
      return 0;
    }
    iVar10 = *(int *)(param_1 + 0x10);
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    iVar8 = 0;
    puVar9 = *(undefined4 **)(_UNK_02c46f3c + 0x2c46e04);
    while( true ) {
      iVar6 = *(int *)(param_1 + 0x14);
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      if (*(int *)(iVar6 + 0xc) <= iVar8) break;
      if (iVar10 == 0) {
        func_0x014388e4();
      }
      iVar6 = *(int *)(param_1 + 0x14);
      iVar7 = *(int *)(iVar10 + 0x44);
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      uVar3 = func_0x024f0530(iVar6,iVar8,*puVar9);
      if (iVar7 == 0) {
        func_0x014388e4();
      }
      if (*(uint *)(iVar7 + 0xc) <= uVar3) {
        func_0x014388e8();
      }
      iVar6 = *(int *)(iVar7 + uVar3 * 4 + 0x10);
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      iVar6 = *(int *)(iVar6 + 0xc);
      if (iVar6 != 0) {
        FUN_02bed670(&uStack_30,iVar10,*(undefined4 *)(param_1 + 0x18),0);
        uVar1 = uStack_28;
        uVar4 = uStack_2c;
        uVar2 = uStack_30;
        if (iVar6 == 0) {
          func_0x014388e4();
        }
        FUN_02c315f0(iVar6,uVar2,uVar4,uVar1,0);
      }
      iVar8 = iVar8 + 1;
    }
    uVar2 = func_0x014388d4(**(undefined4 **)(_UNK_02c46f40 + 0x2c46ef0));
    func_0x024ef218(uVar2,0x3d4ccccd,0);
    *(undefined4 *)(param_1 + 0xc) = uVar2;
    func_0x014385cc((undefined4 *)(param_1 + 0xc),uVar2);
    uVar4 = 1;
    uVar2 = 1;
  }
  *(undefined4 *)(param_1 + 8) = uVar4;
  return uVar2;
}

