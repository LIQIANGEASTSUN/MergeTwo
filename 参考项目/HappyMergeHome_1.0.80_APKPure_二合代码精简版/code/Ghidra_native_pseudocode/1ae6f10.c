
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01af6f10(int *param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  char *pcVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  float fVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 uVar12;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pcVar4 = (char *)(_UNK_01af70cc + 0x1af6f28);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01af70d0 + 0x1af6f3c));
    func_0x01438628(*(undefined4 *)(_UNK_01af70d4 + 0x1af6f48));
    *pcVar4 = '\x01';
  }
  uVar5 = 0;
  iVar1 = func_0x02953fd4(0xd32,0);
  if (iVar1 == 0) {
    iVar1 = FUN_01af6620(param_1);
    iVar6 = FUN_01ae4df4(param_1);
    if ((iVar6 != 0) && (iVar6 = FUN_01af3828(param_1), iVar1 != 0 && iVar6 != 0)) {
      iVar6 = (**(code **)(*param_1 + 0x180))(param_1,*(undefined4 *)(*param_1 + 0x184));
      uVar5 = 1;
      if (iVar6 == 0) {
        iVar6 = FUN_01ae46e8(param_1);
        if (iVar6 == 0) {
          func_0x014388e4();
        }
        fVar9 = *(float *)(iVar1 + 0xc) * _UNK_01af70c8;
        lVar10 = func_0x014e61a4(fVar9);
        lVar11 = func_0x014e6220(fVar9);
        if (fVar9 < 0.0) {
          lVar11 = lVar10;
        }
        lVar11 = lVar11 + *(longlong *)(iVar6 + 8);
        uVar8 = (uint)((ulonglong)lVar11 >> 0x20);
        if (*(int *)(**(int **)(_UNK_01af70d8 + 0x1af7050) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_01af70dc + 0x1af7084));
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        uVar5 = 0;
        uVar12 = func_0x026ffbe0(iVar1,0);
        uVar2 = (uint)((ulonglong)uVar12 >> 0x20);
        if (uVar8 < uVar2 || uVar2 - uVar8 < (uint)((uint)lVar11 <= (uint)uVar12)) {
          lVar11 = FUN_01af6824(param_1);
          uVar5 = (uint)(lVar11 != 0);
        }
      }
    }
    return uVar5;
  }
  iVar1 = func_0x029540a4(0xd32,0);
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
  iVar6 = *(int *)(iVar1 + 8);
  uVar7 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar6 == 0) {
    func_0x014388e4();
  }
  uVar3 = 2;
  if (iVar1 == 0) {
    uVar3 = 1;
  }
  func_0x024f56d0(iVar6,uVar7,&uStack_30,uVar3,0,0);
  uVar5 = func_0x024f56e0(&uStack_30,0,0);
  return uVar5;
}

