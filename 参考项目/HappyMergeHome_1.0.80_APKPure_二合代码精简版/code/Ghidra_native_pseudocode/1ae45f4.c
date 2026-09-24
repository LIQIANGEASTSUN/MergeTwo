
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01af45f4(undefined4 param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  undefined4 *puVar8;
  undefined8 uVar9;
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
  
  pcVar4 = (char *)(_UNK_01af47c4 + 0x1af460c);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01af47c8 + 0x1af4620));
    func_0x01438628(*(undefined4 *)(_UNK_01af47cc + 0x1af462c));
    *pcVar4 = '\x01';
  }
  iVar5 = 0;
  iVar1 = func_0x02953fd4(0xa4f7,0);
  if (iVar1 == 0) {
    iVar1 = FUN_01ae4df4(param_1);
    if (iVar1 != 0) {
      iVar1 = FUN_01ae99ac(param_1,0);
      iVar5 = 0;
      if ((param_2 != 0) && (iVar1 != 0)) {
        piVar7 = *(int **)(_UNK_01af47d0 + 0x1af46c0);
        if (*(int *)(*piVar7 + 0x74) == 0) {
          func_0x014387a4();
        }
        puVar8 = *(undefined4 **)(_UNK_01af47d4 + 0x1af46dc);
        iVar1 = func_0x014e9518(*puVar8);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        uVar9 = func_0x026ffbe0(iVar1,0);
        uVar2 = (uint)((ulonglong)uVar9 >> 0x20);
        iVar1 = FUN_01ae46e8(param_1);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar1 = *(int *)(iVar1 + 0x18);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar5 = 0;
        if (uVar2 <= *(uint *)(iVar1 + 0x5c) &&
            (uint)(*(uint *)(iVar1 + 0x58) <= (uint)uVar9) <= uVar2 - *(uint *)(iVar1 + 0x5c)) {
          iVar1 = FUN_01ae46e8(param_1,0);
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          iVar1 = *(int *)(iVar1 + 0x18);
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          iVar5 = *(int *)(iVar1 + 0x58);
          if (*(int *)(*piVar7 + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar1 = func_0x014e9518(*puVar8);
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          iVar1 = func_0x026ffbe0(iVar1,0);
          iVar5 = iVar5 - iVar1;
        }
      }
    }
    return iVar5;
  }
  iVar1 = func_0x029540a4(0xa4f7,0);
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
  func_0x01523a6c(&uStack_38,param_2,0);
  iVar5 = *(int *)(iVar1 + 8);
  uVar6 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar5 == 0) {
    func_0x014388e4();
  }
  uVar3 = 3;
  if (iVar1 == 0) {
    uVar3 = 2;
  }
  func_0x024f56d0(iVar5,uVar6,&uStack_38,uVar3,0,0);
  iVar1 = func_0x024f5770(&uStack_38,0,0);
  return iVar1;
}

