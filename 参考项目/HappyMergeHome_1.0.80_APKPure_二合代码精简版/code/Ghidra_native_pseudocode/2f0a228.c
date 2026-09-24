
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_02f1a228(int *param_1)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  char *pcVar7;
  undefined4 uVar8;
  uint uVar9;
  float fVar10;
  undefined8 uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  pcVar7 = (char *)(_UNK_02f1a3b4 + 0x2f1a240);
  if (*pcVar7 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02f1a3b8 + 0x2f1a254));
    func_0x01438628(*(undefined4 *)(_UNK_02f1a3bc + 0x2f1a260));
    *pcVar7 = '\x01';
  }
  iVar3 = func_0x02953fd4(0x42c9,0);
  if (iVar3 == 0) {
    if (*(int *)(**(int **)(_UNK_02f1a3c0 + 0x2f1a2bc) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar3 = func_0x04e4a028(**(undefined4 **)(_UNK_02f1a3c4 + 0x2f1a2d8));
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    uVar11 = func_0x026ffbe0(iVar3,0);
    iVar3 = (**(code **)(*param_1 + 0x180))(param_1,*(undefined4 *)(*param_1 + 0x184));
    if ((iVar3 == 0) && (iVar3 = FUN_02f197f8(param_1), iVar3 != 0)) {
      uVar2 = param_1[6];
      iVar6 = param_1[7];
      iVar3 = FUN_02f197f8(param_1);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      fVar10 = *(float *)(iVar3 + 0xc);
      uVar12 = func_0x014e61a4(fVar10);
      uVar13 = func_0x014e6220(fVar10);
      if (fVar10 < 0.0) {
        uVar13 = uVar12;
      }
      lVar1 = (uVar13 & 0xffffffff) * 3600000;
      uVar4 = (int)(uVar13 >> 0x20) * 3600000 + (int)((ulonglong)lVar1 >> 0x20);
      uVar9 = (int)((ulonglong)uVar11 >> 0x20) - (iVar6 + (uint)((uint)uVar11 < uVar2));
      uVar2 = (uint)(uVar9 < uVar4 || uVar4 - uVar9 < (uint)((uint)uVar11 - uVar2 <= (uint)lVar1));
    }
    else {
      uVar2 = 0;
    }
    return uVar2;
  }
  iVar3 = func_0x029540a4(0x42c9,0);
  if (iVar3 == 0) {
    func_0x014388e4();
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = 0;
  func_0x024f56c0(&uStack_48,0,0);
  uStack_30 = uStack_48;
  uStack_2c = uStack_44;
  if (*(int *)(iVar3 + 0x10) != 0) {
    func_0x01523a6c(&uStack_30,*(int *)(iVar3 + 0x10),0);
  }
  func_0x01523a6c(&uStack_30,param_1,0);
  iVar6 = *(int *)(iVar3 + 8);
  uVar8 = *(undefined4 *)(iVar3 + 0xc);
  iVar3 = *(int *)(iVar3 + 0x10);
  if (iVar6 == 0) {
    func_0x014388e4();
  }
  uVar5 = 2;
  if (iVar3 == 0) {
    uVar5 = 1;
  }
  func_0x024f56d0(iVar6,uVar8,&uStack_30,uVar5,0,0);
  uVar2 = func_0x024f56e0(&uStack_30,0,0);
  return uVar2;
}

