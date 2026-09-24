
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02f1320c(int *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  char *pcVar6;
  undefined4 uVar7;
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
  
  pcVar6 = (char *)(_UNK_02f1335c + 0x2f13220);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02f13360 + 0x2f13234));
    func_0x01438628(*(undefined4 *)(_UNK_02f13364 + 0x2f13240));
    *pcVar6 = '\x01';
  }
  uVar7 = 0;
  iVar1 = func_0x02953fd4(0x5e32,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x5e32,0);
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
    iVar5 = *(int *)(iVar1 + 8);
    uVar7 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    uVar4 = 2;
    if (iVar1 == 0) {
      uVar4 = 1;
    }
    func_0x024f56d0(iVar5,uVar7,&uStack_30,uVar4,0,0);
    uVar7 = func_0x024f56e0(&uStack_30,0,0);
    return uVar7;
  }
  iVar1 = (**(code **)(*param_1 + 0x110))(param_1,0,*(undefined4 *)(*param_1 + 0x114));
  if (iVar1 != 0) {
    iVar1 = (**(code **)(*param_1 + 0x180))(param_1,*(undefined4 *)(*param_1 + 0x184));
    uVar7 = 1;
    if (iVar1 == 0) {
      if (*(int *)(**(int **)(_UNK_02f13368 + 0x2f132dc) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_02f1336c + 0x2f132f8));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uVar7 = 0;
      uVar8 = func_0x026ffbe0(iVar1,0);
      uVar2 = (uint)uVar8;
      iVar1 = FUN_02f0ab60(param_1);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uVar3 = *(uint *)(iVar1 + 0x20);
      iVar1 = (int)((ulonglong)uVar8 >> 0x20) - (*(int *)(iVar1 + 0x24) + (uint)(uVar2 < uVar3));
      if ((int)-(iVar1 + (uint)(uVar2 != uVar3)) < 0 !=
          (SBORROW4(0,iVar1) != SBORROW4(-iVar1,(uint)(uVar2 != uVar3)))) {
        uVar7 = 1;
      }
    }
  }
  return uVar7;
}

