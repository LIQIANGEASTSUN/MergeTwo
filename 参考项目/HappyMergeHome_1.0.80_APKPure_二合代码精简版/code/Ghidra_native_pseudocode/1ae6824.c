
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01af6824(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
  int iVar7;
  undefined4 uVar8;
  bool bVar9;
  float fVar10;
  longlong lVar11;
  longlong lVar12;
  undefined8 uVar13;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pcVar6 = (char *)(_UNK_01af6a1c + 0x1af6840);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01af6a20 + 0x1af6854));
    func_0x01438628(*(undefined4 *)(_UNK_01af6a24 + 0x1af6860));
    *pcVar6 = '\x01';
  }
  iVar7 = 0;
  iVar1 = func_0x02953fd4(0xd35,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0xd35,0);
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
    iVar7 = *(int *)(iVar1 + 8);
    uVar8 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar7 == 0) {
      func_0x014388e4();
    }
    uVar5 = 2;
    if (iVar1 == 0) {
      uVar5 = 1;
    }
    func_0x024f56d0(iVar7,uVar8,&uStack_30,uVar5,0,0);
    iVar1 = func_0x024f5770(&uStack_30,0,0);
    return iVar1;
  }
  iVar1 = FUN_01af6620(param_1);
  iVar2 = FUN_01ae4df4(param_1);
  if (iVar2 != 0) {
    iVar2 = FUN_01af3828(param_1,0);
    iVar7 = 0;
    if ((iVar1 != 0) && (iVar2 != 0)) {
      iVar7 = FUN_01ae46e8(param_1,0);
      if (iVar7 == 0) {
        func_0x014388e4();
      }
      fVar10 = *(float *)(iVar1 + 0x10) * _UNK_01af6a18;
      lVar11 = func_0x014e61a4(fVar10);
      lVar12 = func_0x014e6220(fVar10);
      if (fVar10 < 0.0) {
        lVar12 = lVar11;
      }
      lVar11 = lVar12 + *(longlong *)(iVar7 + 8);
      func_0x01af6a30(param_1,(int)((ulonglong)lVar12 >> 0x20),(int)lVar11,
                      (int)((ulonglong)lVar11 >> 0x20));
      if (*(int *)(**(int **)(_UNK_01af6a28 + 0x1af6968) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_01af6a2c + 0x1af6984));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar7 = 0;
      uVar13 = func_0x026ffbe0(iVar1,0);
      iVar2 = (int)((ulonglong)uVar13 >> 0x20);
      uVar3 = (uint)uVar13;
      iVar1 = FUN_01af3828(param_1);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar4 = *(int *)(iVar1 + 0x24);
      bVar9 = uVar3 < *(uint *)(iVar1 + 0x20);
      if ((int)(iVar2 - (iVar4 + (uint)bVar9)) < 0 !=
          (SBORROW4(iVar2,iVar4) != SBORROW4(iVar2 - iVar4,(uint)bVar9))) {
        iVar1 = FUN_01af3828(param_1,0);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar7 = *(int *)(iVar1 + 0x20) - uVar3;
      }
    }
  }
  return iVar7;
}

