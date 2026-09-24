
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01c0deb0(int *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  char *pcVar5;
  undefined4 uVar6;
  int iVar7;
  undefined8 uVar8;
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
  
  pcVar5 = (char *)(_UNK_01c0e000 + 0x1c0dec4);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01c0e004 + 0x1c0ded8));
    func_0x01438628(*(undefined4 *)(_UNK_01c0e008 + 0x1c0dee4));
    *pcVar5 = '\x01';
  }
  uVar6 = 0;
  iVar1 = func_0x02953fd4(0x5e26,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x5e26,0);
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
    iVar7 = *(int *)(iVar1 + 8);
    uVar6 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar7 == 0) {
      func_0x014388e4();
    }
    uVar4 = 2;
    if (iVar1 == 0) {
      uVar4 = 1;
    }
    func_0x024f56d0(iVar7,uVar6,&uStack_30,uVar4,0,0);
    uVar6 = func_0x024f56e0(&uStack_30,0,0);
    return uVar6;
  }
  iVar1 = (**(code **)(*param_1 + 0x110))(param_1,0,*(undefined4 *)(*param_1 + 0x114));
  if (iVar1 != 0) {
    iVar1 = (**(code **)(*param_1 + 0x180))(param_1,*(undefined4 *)(*param_1 + 0x184));
    uVar6 = 1;
    if (iVar1 == 0) {
      if (*(int *)(**(int **)(_UNK_01c0e00c + 0x1c0df80) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_01c0e010 + 0x1c0df9c));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uVar6 = 0;
      uVar8 = func_0x026ffbe0(iVar1,0);
      uVar2 = (uint)uVar8;
      iVar1 = func_0x01c0e5e0(param_1);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uVar3 = *(uint *)(iVar1 + 0x20);
      iVar1 = (int)((ulonglong)uVar8 >> 0x20) - (*(int *)(iVar1 + 0x24) + (uint)(uVar2 < uVar3));
      if ((int)-(iVar1 + (uint)(uVar2 != uVar3)) < 0 !=
          (SBORROW4(0,iVar1) != SBORROW4(-iVar1,(uint)(uVar2 != uVar3)))) {
        uVar6 = 1;
      }
    }
  }
  return uVar6;
}

